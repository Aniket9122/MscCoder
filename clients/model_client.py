import requests
import os
import json

def generate(prompt: str) -> str:
    response = requests.post(
        "http://localhost:11434/api/generate",
        json={"model": "deepseek-coder:6.7b", "prompt": prompt, "stream": False}
    )
    return response.json()["response"].strip()
