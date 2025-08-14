import requests
import os
import json

def generate(prompt: str) -> str:
    response = requests.post(
        "http://localhost:11434/api/generate",
        json={"model": "codellama:13b", "prompt": prompt, "stream": False}
    )
    return response.json()["response"].strip()
