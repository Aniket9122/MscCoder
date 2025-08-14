from __future__ import annotations

import pathlib
import shutil
import subprocess
import sys
from typing import Dict, Optional

__all__ = ["test"]


def _find_clangxx() -> Optional[str]:
    """
    Locate clang++ on PATH (cross-platform).
    Falls back to the typical Windows LLVM install path.
    """
    clangxx = shutil.which("clang++")
    if clangxx:
        return clangxx
    fallback = r"C:\Program Files\LLVM\bin\clang++.exe"
    if pathlib.Path(fallback).exists():
        return fallback
    return None


def test(
    filename_cpp: str | pathlib.Path,
    unit_tests: str,
    *,
    std: str = "c++14",
    timeout_sec: int = 10,
    extra_flags: Optional[list[str]] = None,
    out_dir: Optional[pathlib.Path] = None,
    ) -> Dict[str, object]:
    """
    Compile and run dataset-provided unit tests against the given C++ file.

    Parameters
    ----------
    filename_cpp : str | Path
        Path to the C++ source produced by your LLM (e.g., generated_code/<task_id>_enhanced.cpp).
    unit_tests : str
        The unit test code (as text) from the dataset for that task.
        Assumes the combined file will have exactly one `main()`.
    std : str
        C++ standard flag for clang++ (default: 'c++17').
    timeout_sec : int
        Max wall-clock seconds to allow the test binary to run.
    extra_flags : list[str] | None
        Extra compiler flags (e.g., ["-O2", "-Wall"]). Default adds "-O2".
    out_dir : Path | None
        Where to place combined source & executable. Defaults to <source_dir>/tests.

    Returns
    -------
    dict with keys:
      compiled (bool), compile_rc (int), compile_out (str), compile_err (str),
      ran (bool), run_rc (int|None), run_out (str|None), run_err (str|None),
      exe_path (str), src_path (str)
    """
    src_path = pathlib.Path(filename_cpp).resolve()
    if not src_path.exists():
        print(f"Error: Source file {src_path} does not exist.")
        return {
            "compiled": False, "compile_rc": -1,
            "compile_out": "", "compile_err": f"Source not found: {src_path}",
            "ran": False, "run_rc": None, "run_out": None, "run_err": None,
            "exe_path": "", "src_path": str(src_path),
        }

    compiler = _find_clangxx()
    if not compiler:
        print("Warning: clang++ not found on PATH. "
              "Please install LLVM or ensure it's on your PATH.")
        # Return a special error dict
        return {
            "compiled": False, "compile_rc": -1,
            "compile_out": "", "compile_err": "clang++ not found on PATH (and not in default LLVM dir).",
            "ran": False, "run_rc": None, "run_out": None, "run_err": None,
            "exe_path": "", "src_path": str(src_path),
        }

    # Output locations
    if out_dir is None:
        out_dir = src_path.parent / "tests"
    out_dir.mkdir(parents=True, exist_ok=True)

    combined_src = out_dir / f"{src_path.stem}_combined.cpp"
    exe_name = f"{src_path.stem}_tests.exe" if sys.platform.startswith("win") else f"{src_path.stem}_tests"
    exe_path = out_dir / exe_name

    # Build one translation unit: [code under test] + [dataset tests]
    code_text = src_path.read_text(encoding="utf-8", errors="ignore").rstrip()
    tests_text = (unit_tests or "").strip()

    combined_src.write_text(code_text + "\n\n" + tests_text + "\n", encoding="utf-8")

    # Compile
    flags = [f"-std={std}"]
    if extra_flags:
        flags += extra_flags
    else:
        flags += ["-O2"]

    compile_cmd = [compiler, *flags, str(combined_src), "-o", str(exe_path)]
    try:
        cproc = subprocess.run(
            compile_cmd, capture_output=True, text=True, check=False
        )
    except Exception as e:
        return {
            "compiled": False, "compile_rc": -1,
            "compile_out": "", "compile_err": f"Exception invoking compiler: {e}",
            "ran": False, "run_rc": None, "run_out": None, "run_err": None,
            "exe_path": str(exe_path), "src_path": str(combined_src),
        }

    if cproc.returncode != 0:
        return {
            "compiled": False, "compile_rc": cproc.returncode,
            "compile_out": cproc.stdout, "compile_err": cproc.stderr,
            "ran": False, "run_rc": None, "run_out": None, "run_err": None,
            "exe_path": str(exe_path), "src_path": str(combined_src),
        }

    # Run
    try:
        rproc = subprocess.run(
            [str(exe_path)], capture_output=True, text=True,
            timeout=timeout_sec, check=False
        )
        return {
            "compiled": True, "compile_rc": cproc.returncode,
            "compile_out": cproc.stdout, "compile_err": cproc.stderr,
            "ran": True, "run_rc": rproc.returncode,
            "run_out": rproc.stdout, "run_err": rproc.stderr,
            "exe_path": str(exe_path), "src_path": str(combined_src),
        }
    except subprocess.TimeoutExpired:
        return {
            "compiled": True, "compile_rc": cproc.returncode,
            "compile_out": cproc.stdout, "compile_err": cproc.stderr,
            "ran": True, "run_rc": None,
            "run_out": None, "run_err": f"Timed out after {timeout_sec}s",
            "exe_path": str(exe_path), "src_path": str(combined_src),
        }
