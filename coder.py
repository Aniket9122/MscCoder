from fastapi import FastAPI
from pydantic import BaseModel
from coder_service.model_and_lsp_service import ModelAndLSPService

app = FastAPI()
class Prompt(BaseModel):
    query: str
    filename: str = "temp"

modelAndLSPService = ModelAndLSPService()

@app.post("/get_query_response")
def get_code(prompt: Prompt):
    return modelAndLSPService.get_query_response(prompt.query)

@app.post("/get_code")
def get_code(prompt: Prompt):
    return modelAndLSPService.get_code(prompt.query)

@app.post("/analyze_code")
def get_code(prompt: Prompt):
    return modelAndLSPService.analyze_code(prompt.filename)

@app.post("/generate_and_analyze")
def generate_and_analyze(prompt: Prompt):
    return modelAndLSPService.generate_and_analyze(prompt.query,prompt.filename)

if __name__ == "__main__":
    import uvicorn
    uvicorn.run("coder:app", host="0.0.0.0", port=8000, reload=True)
