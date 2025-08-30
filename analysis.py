from __future__ import annotations
import json
from pathlib import Path
from typing import Dict, Any, Tuple

import numpy as np
import pandas as pd


BASELINE = "Baseline (LLM-only)"
ENHANCED = "Enhanced (LLM+clangd)"


def prepare(df: pd.DataFrame, model_name: str) -> pd.DataFrame:
    df = df.copy()
    df["model"] = model_name
    df["task_id"] = df["task_id"].astype(str)
    df["compiled"] = df["compiled"].astype(bool)

    # Numeric conversions
    df["total_tests"] = pd.to_numeric(df.get("total_tests"), errors="coerce")
    df["tests_passed"] = pd.to_numeric(df.get("tests_passed"), errors="coerce")

    # Variant + base task id
    df["variant"] = np.where(df["task_id"].str.endswith("_enhanced"), ENHANCED, BASELINE)
    df["base_task"] = df["task_id"].str.replace("_enhanced$", "", regex=True)

    # Per-row pass rate (only for rows with test results)
    with np.errstate(divide="ignore", invalid="ignore"):
        df["pass_rate"] = df["tests_passed"] / df["total_tests"]
    return df


def compile_stats(df_all: pd.DataFrame) -> pd.DataFrame:
    g = (
        df_all.groupby(["model", "variant"], as_index=False)
        .agg(total_tasks=("task_id", "count"), compiles=("compiled", "sum"))
    )
    g["compile_rate"] = g["compiles"] / g["total_tasks"]
    return g


def overall_accuracy(df_all: pd.DataFrame) -> pd.DataFrame:
    valid = df_all.dropna(subset=["total_tests", "tests_passed"])
    g = (
        valid.groupby(["model", "variant"], as_index=False)
        .agg(total_tests=("total_tests", "sum"), tests_passed=("tests_passed", "sum"))
    )
    g["overall_pass_rate"] = g["tests_passed"] / g["total_tests"]
    return g


def delta_summary(df_all: pd.DataFrame) -> pd.DataFrame:
    valid = df_all.dropna(subset=["total_tests", "tests_passed"])
    rows = []
    for model, dfm in valid.groupby("model"):
        base = (
            dfm[dfm["variant"] == BASELINE][["base_task", "pass_rate"]]
            .dropna()
            .set_index("base_task")
            .rename(columns={"pass_rate": "base"})
        )
        enh = (
            dfm[dfm["variant"] == ENHANCED][["base_task", "pass_rate"]]
            .dropna()
            .set_index("base_task")
            .rename(columns={"pass_rate": "enh"})
        )
        common = base.join(enh, how="inner")
        common["delta"] = common["enh"] - common["base"]

        improved = int((common["delta"] > 0).sum())
        regressed = int((common["delta"] < 0).sum())
        no_change = int((common["delta"] == 0).sum())
        rows.append(
            {
                "model": model,
                "n": int(len(common)),
                "improved": improved,
                "no_change": no_change,
                "regressed": regressed,
            }
        )
    return pd.DataFrame(rows)


def bucket_counts(df_all: pd.DataFrame) -> pd.DataFrame:
    valid = df_all.dropna(subset=["total_tests", "tests_passed"]).copy()

    def bucket(p: float) -> str:
        if p == 1.0:
            return "all_tests_passed"
        if p == 0.0:
            return "all_tests_failed"
        return "partially_passed"

    valid["bucket"] = valid["pass_rate"].map(bucket)

    pivot = (
        valid.groupby(["model", "variant", "bucket"], as_index=False)
        .size()
        .pivot(index=["model", "variant"], columns="bucket", values="size")
        .fillna(0)
        .astype(int)
        .reset_index()
    )
    # Ensure all expected columns exist
    for col in ["all_tests_passed", "partially_passed", "all_tests_failed"]:
        if col not in pivot.columns:
            pivot[col] = 0
    return pivot[["model", "variant", "all_tests_passed", "partially_passed", "all_tests_failed"]]


def head_to_head(
    df_a: pd.DataFrame, df_b: pd.DataFrame, variant: str
) -> Tuple[int, int, int, int]:
    a = (
        df_a[df_a["variant"] == variant][["base_task", "pass_rate"]]
        .dropna()
        .set_index("base_task")
        .rename(columns={"pass_rate": "a"})
    )
    b = (
        df_b[df_b["variant"] == variant][["base_task", "pass_rate"]]
        .dropna()
        .set_index("base_task")
        .rename(columns={"pass_rate": "b"})
    )
    common = a.join(b, how="inner")
    if len(common) == 0:
        return 0, 0, 0, 0
    delta = common["b"] - common["a"]
    a_wins = int((delta < 0).sum())
    b_wins = int((delta > 0).sum())
    ties = int((delta == 0).sum())
    return int(len(common)), a_wins, b_wins, ties


def pythonize(obj: Any) -> Any:
    if isinstance(obj, dict):
        return {k: pythonize(v) for k, v in obj.items()}
    if isinstance(obj, list):
        return [pythonize(v) for v in obj]
    if isinstance(obj, (np.generic,)):
        return obj.item()
    return obj


def compute_metrics(codellama_path: str | Path, deepseek_path: str | Path) -> Dict[str, Any]:
    df_cl = pd.read_json(codellama_path, lines=True)
    df_ds = pd.read_json(deepseek_path, lines=True)

    df_cl = prepare(df_cl, "CodeLlama-7B")
    df_ds = prepare(df_ds, "DeepSeek-Coder-6.7B")
    df_all = pd.concat([df_cl, df_ds], ignore_index=True)

    compile_stats_tbl = compile_stats(df_all)
    overall_acc_tbl = overall_accuracy(df_all)
    delta_summary_tbl = delta_summary(df_all)
    bucket_counts_tbl = bucket_counts(df_all)

    h2h = {
        BASELINE: {},
        ENHANCED: {},
    }
    for variant in (BASELINE, ENHANCED):
        tasks, cl_wins, ds_wins, ties = head_to_head(df_cl, df_ds, variant)
        h2h[variant] = {
            "tasks": tasks,
            "codellama_wins": cl_wins,
            "deepseek_wins": ds_wins,
            "ties": ties,
        }

    result = {
        "compile_stats": compile_stats_tbl.to_dict(orient="records"),
        "overall_accuracy": overall_acc_tbl.to_dict(orient="records"),
        "delta_summary": delta_summary_tbl.to_dict(orient="records"),
        "bucket_counts": bucket_counts_tbl.to_dict(orient="records"),
        "head_to_head": h2h,
    }
    return pythonize(result)


if __name__ == "__main__":
    cl_path = "outputs/unit_tests/codellama.7b.jsonl"
    ds_path = "outputs/unit_tests/deepseek.coder.6.7b.jsonl"
    metrics = compute_metrics(cl_path, ds_path)
    print(json.dumps(metrics, indent=2))
