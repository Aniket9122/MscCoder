from fastapi import FastAPI
from pydantic import BaseModel
from coder_service.model_and_lsp_service import ModelAndLSPService

app = FastAPI()
class Prompt(BaseModel):
    model: str = "deepseek-coder:6.7b"

modelAndLSPService = ModelAndLSPService()

# @app.post("/get_code")
# def get_code(prompt: Prompt):
#     return modelAndLSPService.get_code(prompt.filename)

@app.post("/generate")
def generate(prompt: Prompt):
    return modelAndLSPService.generate(prompt.model)

@app.post("/benchmark")
def benchmark(prompt: Prompt):
    return modelAndLSPService.benchmark(prompt.model)


if __name__ == "__main__":
    import uvicorn
    uvicorn.run("coder:app", host="0.0.0.0", port=8000, reload=True)
