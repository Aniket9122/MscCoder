# clients/unit_test_client.py
from __future__ import annotations

import pathlib
import re
import shutil
import subprocess
import sys
from typing import Dict, Optional, Tuple

__all__ = ["test"]


def _find_clangxx() -> Optional[str]:
    clangxx = shutil.which("clang++")
    if clangxx:
        return clangxx
    fallback = r"C:\Program Files\LLVM\bin\clang++.exe"
    return fallback if pathlib.Path(fallback).exists() else None


def _replace_asserts(unit_tests: str) -> Tuple[str, int]:
    """
    Convert each `assert(EXPR);` into:
        if ((EXPR)) { tests_passed++; } total_tests++;
    Returns (transformed_text, num_asserts_found).
    Uses a small parser to balance parentheses after 'assert('.
    """
    s = unit_tests
    out = []
    i = 0
    n = 0
    while True:
        idx = s.find("assert", i)
        if idx == -1:
            out.append(s[i:])
            break

        # Emit text before 'assert'
        out.append(s[i:idx])
        j = idx + len("assert")

        # Require '(' after optional whitespace
        while j < len(s) and s[j].isspace():
            j += 1
        if j >= len(s) or s[j] != "(":
            # Not a real assert call → keep literal
            out.append("assert")
            i = idx + len("assert")
            continue

        # Parse the balanced (...) after assert(
        k = j + 1
        depth = 1
        while k < len(s) and depth > 0:
            c = s[k]
            if c == "(":
                depth += 1
            elif c == ")":
                depth -= 1
            k += 1
        expr = s[j + 1 : k - 1].strip()

        # Skip whitespace + optional trailing ';'
        while k < len(s) and s[k].isspace():
            k += 1
        if k < len(s) and s[k] == ";":
            k += 1

        # Replacement (keep formatting simple)
        repl = f"if(({expr})){{ tests_passed++; }} total_tests++;"
        out.append(repl + "\n")
        n += 1
        i = k

    return ("".join(out), n)


def _instrument_unit_tests(unit_tests: str) -> Tuple[str, int]:
    """
    Inject timer + counters into main(), and convert all asserts.
    Returns (transformed_unit_tests, num_asserts_found).
    """
    # Ensure we have timing / io headers (safe to duplicate)
    inj_includes = "#include <chrono>\n#include <iostream>\n"
    s = inj_includes + unit_tests

    # Find the start of main and its opening brace
    main_idx = s.find("int main")
    if main_idx == -1:
        # Give up on instrumentation; still convert asserts so the file compiles
        s2, n = _replace_asserts(s)
        return s2, n

    brace_idx = s.find("{", main_idx)
    if brace_idx == -1:
        s2, n = _replace_asserts(s)
        return s2, n

    # Header snippet inside main
    header = (
        "\n    using clock = std::chrono::steady_clock;"
        "\n    auto __start = clock::now();"
        "\n    long long time_taken_ms = 0;"
        "\n    int tests_passed = 0;"
        "\n    int total_tests = 0;"
        "\n"
    )
    s = s[: brace_idx + 1] + header + s[brace_idx + 1 :]

    # Footer snippet before the closing brace of main().
    # Heuristic: last '}' in the file belongs to main in your dataset.
    last_brace = s.rfind("}")
    footer = (
        "\n    auto __end = clock::now();"
        "\n    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();"
        '\n    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms'
        ' << " tests_passed=" << tests_passed'
        ' << " total_tests=" << total_tests << std::endl;'
        "\n"
    )
    if last_brace != -1:
        s = s[:last_brace] + footer + s[last_brace:]

    # Now convert asserts to if/++ form
    s2, n = _replace_asserts(s)
    return s2, n


_SUMMARY_RE = re.compile(
    r"\[TEST_SUMMARY\]\s*time_ms=(\d+)\s+tests_passed=(\d+)\s+total_tests=(\d+)"
)


def test(
    folder_name:str,
    filename_cpp: str | pathlib.Path,
    unit_tests: str,
    *,
    std: str = "c++14",
    timeout_sec: int = 10,
    extra_flags: Optional[list[str]] = None,
    out_dir: Optional[pathlib.Path] = None,
) -> Dict[str, object]:
    """
    Compile and run dataset-provided unit tests against the given C++ file,
    with runtime instrumentation (time + pass counters).

    Returns dict with keys:
      compiled (bool),
      time_ms (int|None),
      tests_passed (int|None),
      total_tests (int|None),
      ran (bool), run_rc (int|None),
      stdout, stderr, exe_path, src_path, compile_rc, compile_out, compile_err
    """
    src_path = pathlib.Path(filename_cpp).resolve()
    if not src_path.exists():
        return {
            "compiled": False,
            "compile_rc": -1,
            "compile_out": "",
            "compile_err": f"Source not found: {src_path}",
            "ran": False,
            "run_rc": None,
            "stdout": "",
            "stderr": "",
            "time_ms": None,
            "tests_passed": None,
            "total_tests": None,
            "exe_path": "",
            "src_path": str(src_path),
        }

    compiler = _find_clangxx()
    if not compiler:
        return {
            "compiled": False,
            "compile_rc": -1,
            "compile_out": "",
            "compile_err": "clang++ not found",
            "ran": False,
            "run_rc": None,
            "stdout": "",
            "stderr": "",
            "time_ms": None,
            "tests_passed": None,
            "total_tests": None,
            "exe_path": "",
            "src_path": str(src_path),
        }

    if out_dir is None:
        out_dir = src_path.parent.parent.parent / "unit_tests"/ folder_name
    out_dir.mkdir(parents=True, exist_ok=True)

    # Transform unit tests (inject timer and counters, rewrite asserts)
    transformed_tests, _ = _instrument_unit_tests(unit_tests or "")

    # Prepare combined TU: [code under test] + [instrumented tests]
    combined_src = out_dir / f"{src_path.stem}_combined.cpp"
    code_text = src_path.read_text(encoding="utf-8", errors="ignore").rstrip()
    combined_src.write_text(code_text + "\n\n" + transformed_tests + "\n", encoding="utf-8")

    exe_name = f"{src_path.stem}_tests.exe" if sys.platform.startswith("win") else f"{src_path.stem}_tests"
    exe_path = out_dir / exe_name

    flags = [f"-std={std}", "-O2"]
    if extra_flags:
        flags.extend(extra_flags)

    # Compile
    cproc = subprocess.run([compiler, *flags, str(combined_src), "-o", str(exe_path)],
                           capture_output=True, text=True)
    if cproc.returncode != 0:
        return {
            "compiled": False,
            "compile_rc": cproc.returncode,
            "compile_out": cproc.stdout,
            "compile_err": cproc.stderr,
            "ran": False,
            "run_rc": None,
            "stdout": "",
            "stderr": "",
            "time_ms": None,
            "tests_passed": None,
            "total_tests": None,
            "exe_path": str(exe_path),
            "src_path": str(combined_src),
        }

    # Run
    try:
        rproc = subprocess.run([str(exe_path)], capture_output=True, text=True,
                               timeout=timeout_sec)
        stdout, stderr = rproc.stdout, rproc.stderr
        time_ms = tests_passed = total_tests = None

        m = _SUMMARY_RE.search(stdout)
        if m:
            time_ms = int(m.group(1))
            tests_passed = int(m.group(2))
            total_tests = int(m.group(3))

        return {
            "compiled": True,
            "compile_rc": cproc.returncode,
            "compile_out": cproc.stdout,
            "compile_err": cproc.stderr,
            "ran": True,
            "run_rc": rproc.returncode,
            "stdout": stdout,
            "stderr": stderr,
            "time_ms": time_ms,
            "tests_passed": tests_passed,
            "total_tests": total_tests,
            "exe_path": str(exe_path),
            "src_path": str(combined_src),
        }
    except subprocess.TimeoutExpired:
        return {
            "compiled": True,
            "compile_rc": cproc.returncode,
            "compile_out": cproc.stdout,
            "compile_err": cproc.stderr,
            "ran": True,
            "run_rc": None,
            "stdout": "",
            "stderr": f"Timed out after {timeout_sec}s",
            "time_ms": None,
            "tests_passed": None,
            "total_tests": None,
            "exe_path": str(exe_path),
            "src_path": str(combined_src),
        }
