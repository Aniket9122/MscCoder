from fastapi import FastAPI
from pydantic import BaseModel
from coder_service.model_and_lsp_service import ModelAndLSPService

app = FastAPI()
class Prompt(BaseModel):
    filename: str = "temp"

modelAndLSPService = ModelAndLSPService()

@app.post("/get_code")
def get_code(prompt: Prompt):
    return modelAndLSPService.get_code(prompt.filename)

@app.post("/generate")
def generate():
    return modelAndLSPService.generate()

@app.post("/benchmark")
def benchmark():
    return modelAndLSPService.benchmark()


if __name__ == "__main__":
    import uvicorn
    uvicorn.run("coder:app", host="0.0.0.0", port=8000, reload=True)
