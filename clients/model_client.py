import requests
from openai import OpenAI
from huggingface_hub import InferenceClient
import os
import json

# This function sends a prompt to the DeepSeek model and returns the generated response.
# It uses the DeepSeek API to generate text based on the provided prompt.
def generate(prompt: str) -> str:
    response = requests.post(
        "http://localhost:11434/api/generate",
        json={"model": "codellama:7b", "prompt": prompt, "stream": False}
    )
    return response.json()["response"].strip()

# def generate(prompt: str) -> str:
#     client = OpenAI(api_key="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")   # reads your key
#     completion = client.chat.completions.create(
#         model="gpt-3.5-turbo",
#         messages=[{"role": "user", "content": prompt}],
#     )
#     return completion.choices[0].message.content.strip()

# def generate(prompt: str, model: str = "distilgpt2") -> str:
#     api_url = f"https://api-inference.huggingface.co/models/{model}"
#     headers = {"Authorization": f"Bearer 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"}
#     payload = {"inputs": prompt}
#     resp = requests.post(api_url, headers=headers, json=payload, timeout=60)

# key = "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"

# client = InferenceClient(
#     provider="featherless-ai",
#     api_key=key,
#     model="meta-llama/Meta-Llama-3-8B",
#     timeout=120,
# )

# def generate(prompt: str) -> str:
#    messages = [{"role": "system", "content": "You are a helpful assistant."},]
#    for token in client.chat.completion(messages,max_tokens=10,stream = True):
#       print(token)

# def generate(prompt: str) -> str:
#     client = InferenceClient(
#         base_url="https://api-inference.huggingface.co",
#         api_key="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",
#     )
#     output = client.chat.completions.create(
#         model="meta-llama/Meta-Llama-3-8B",
#         messages=[
#             {"role": "system", "content": "You are a helpful assistant."},
#             {"role": "user", "content": "Count to 10"},
#         ],
#         stream=True,
#         max_tokens=1024,
#     )

#     for chunk in output:
#         print(chunk.choices[0].delta.content)