from fastapi import FastAPI
from pydantic import BaseModel
from coder_service.model_and_lsp_service import ModelAndLSPService

app = FastAPI()
class Prompt(BaseModel):
    filename: str = "temp"

modelAndLSPService = ModelAndLSPService()

@app.post("/get_query_response")
def get_code(prompt: Prompt):
    return modelAndLSPService.get_query_response(prompt.filename)

@app.post("/get_code")
def get_code(prompt: Prompt):
    return modelAndLSPService.get_code(prompt.filename)

@app.post("/analyze_code")
def get_code(prompt: Prompt):
    return modelAndLSPService.analyze_code(prompt.filename)

@app.post("/coder")
def coder(prompt: Prompt):
    return modelAndLSPService.coder(prompt.filename)

if __name__ == "__main__":
    import uvicorn
    uvicorn.run("coder:app", host="0.0.0.0", port=8000, reload=True)
