from clients.model_client import generate
from clients.lsp_client import ClangdClient
import pathlib
from urllib.parse import urlparse, unquote
import os
import re
from typing import List,Iterator, Tuple,Optional
import textwrap


class ModelAndLSPService:
    def __init__(self):
        self.clangd = ClangdClient()

    
    # def extract_cpp_code(self, text: str) -> Optional[str]:
    #     cpp_pattern = r"```cpp\s*(.*?)```"
    #     non_cpp_pattern = r"```\s*(.*?)```"
    #     match = re.search(pattern, text, flags=re.DOTALL | re.IGNORECASE)
    #     code = match.group(1).strip() if match else None
    #     return code if code else None

    def extract_cpp_code(self,text: str) -> str | None:
        CPP_RE = re.compile(r"```(?:cpp|c\+\+)\s*(.*?)```", re.IGNORECASE | re.DOTALL)
        GEN_RE = re.compile(r"```\s*(.*?)```", re.IGNORECASE | re.DOTALL)   
        m = CPP_RE.search(text)
        if m:
            return m.group(1).strip()
        m = GEN_RE.search(text)
        return m.group(1).strip() if m else None
    
    def clean_cpp_code(self, raw: str) -> str:
        raw = raw.strip()
        # If it’s wrapped in triple-backticks, remove them first
        if raw.startswith("```"):
            raw = re.sub(r"^```[a-zA-Z]*\s*|\s*```$", "", raw, flags=re.MULTILINE)
        # Remove leading/trailing quotes if present
        if (raw.startswith('"') and raw.endswith('"')) or (raw.startswith("'") and raw.endswith("'")):
            raw = raw[1:-1]
        # Convert the literal “\n” into real newlines, same for tabs, quotes, …
        code = bytes(raw, "utf-8").decode("unicode_escape")
        # dedent in case everything is indented once
        return textwrap.dedent(code).lstrip()
    
    # # 1.  Very small lexical grammar for C / C++               (#, ids, 123, etc.)
    # # ------------------------------------------------------------------
    # TOKEN_RE = re.compile(
    #     r"""
    #     # string / char literals  .......................................
    #     "(?:\\.|[^"\\])*"            |    # "hello\n"
    #     '(?:\\.|[^'\\])*'            |    # 'a'

    #     # pre-processor directives .....................................
    #     \#include                    |    # #include
    #     \#[A-Za-z_]\w*               |    # #define, #if, …

    #     # numeric literals .............................................
    #     0[xX][A-Fa-f0-9]+            |    # 0xFF
    #     \d+\.\d*|\.\d+|\d+           |    # 3.14, .99, 42

    #     # identifiers / keywords .......................................
    #     [A-Za-z_]\w*                 |    # int, factorial_iterative

    #     # operators & punctuation ......................................
    #     ::|>>=|<<=|->\*|->|==|!=|<=|>=|\+\+|--|&&|\|\||<<|>>|
    #     [-+*/%&|^~!=<>]=?            |    # +=, !=, <=, >>, ^
    #     [{}()[\];,.:?~]                  # single-char punct
    #     """,
    #     re.VERBOSE,
    # )

    # # def tokens_of_line(self,line: str):
    # #     """Return list of tokens for one source line."""
    # #     return self.TOKEN_RE.findall(line)

    # # def iter_line_tokens(self,source: str) -> Iterator[Tuple[int, int, str]]:
    # #     """
    # #     Yield (line_no, word_no, token) with both indices 1-based.
    # #     """
    # #     for line_no, line in enumerate(source.splitlines(), start=1):
    # #         for word_no, tok in enumerate(self.tokens_of_line(line), start=1):
    # #             yield line_no, word_no, tok

    def get_query_response(self, query: str) -> str:
        return generate(query)
    
    def get_code(self, query: str):  
        response = generate(query)
        code = self.extract_cpp_code(response)
        cpp_path = pathlib.Path("generated_code/extractedCode.cpp").resolve()
        cpp_path.write_text(code, encoding="utf-8")
        return response
    
    # # def get_defination(self, uri, ln: int, wn: int) -> str:
    # #     defination = self.clangd.get_defination(uri, line=ln, character=wn)
    # #     return defination

    # def uri_to_path(self,uri: str) -> pathlib.Path:
    #     path = unquote(urlparse(uri).path)      # '/C:/dir/file.cpp' (Windows)
    #     if os.name == "nt" and path.startswith("/") and len(path) > 2 and path[2] == ":":
    #         path = path[1:]                     # drop the leading slash
    #     return pathlib.Path(path)

    # def get_string_from_loc(self,locs):
    #     if not locs:
    #         return ""

    #     loc = locs[0]
    #     rng = loc["range"]
    #     start_line, start_char = rng["start"]["line"], rng["start"]["character"]
    #     end_line,   end_char   = rng["end"]["line"],   rng["end"]["character"]

    #     try:
    #         file_path = self.uri_to_path(loc["uri"])
    #         with file_path.open(encoding="utf-8") as f:
    #             lines = f.readlines()
    #     except (FileNotFoundError, OSError):
    #         # e.g. <vector> from the MSVC/LLVM headers that aren't on disk for us
    #         return ""

    #     # slice out the exact span ─ single- or multi-line
    #     if start_line == end_line:
    #         snippet = lines[start_line][start_char:end_char]
    #     else:
    #         first  = lines[start_line][start_char:]
    #         middle = "".join(lines[start_line + 1:end_line])
    #         last   = lines[end_line][:end_char]
    #         snippet = first + middle + last

    #     return snippet.strip()

    # def get_defination(self, uri: str, ln: int, wn: int) -> str:
    #     locs = self.clangd.get_defination(uri, line=ln, character=wn)
    #     return self.get_string_from_loc(locs)
    
    # def get_references(self, uri: str, ln: int, wn: int) -> str:
    #     locs = self.clangd.get_references(uri, line=ln, character=wn)
    #     return self.get_string_from_loc(locs)   
    
    # To extract function names from C++ code, we can use a regex pattern that matches typical function definitions.
    # This pattern will look for lines that start with a return type, followed by a function name and its parameters.
    FUNC_PATTERN = re.compile(
    r"^\s*(?:[\w:\*&<>\[\]\s]+?)\s+([A-Za-z_]\w*)\s*\([^;{]*\)\s*(?:\{|$)",
    re.MULTILINE,)

    def extract_functions(self,cpp_file: pathlib.Path) -> List[str]:
        code = cpp_file.read_text(encoding="utf-8", errors="ignore")
        return self.FUNC_PATTERN.findall(code) 
    
    def find_function_positions(self,cpp_file: pathlib.Path, names: list[str]):
        positions = {}                 # name -> (line, col)
        pattern = re.compile(r'\b(' + '|'.join(map(re.escape, names)) + r')\b')
        for ln, text in enumerate(cpp_file.read_text(encoding="utf-8",
                                                    errors="ignore").splitlines()):
            m = pattern.search(text)
            if m:
                positions[m.group(1)] = (ln, m.start())   # 0-based for clangd
        return positions

    def get_hover(self,uri,positions):
        results = {}
        for name, (ln, col) in positions.items():
            hover = self.clangd.get_hover(uri, ln, col)
            if hover:
                results[name] = hover.get("contents", {})
        return results
    
    def get_fuction_signatures(self,cpp_path: pathlib.Path, uri:str):
        # Get all the functions in the code
        functions = self.extract_functions(cpp_path)

        # Get the positions of the functions in the code
        positions = self.find_function_positions(cpp_path, functions)

        # Get hover information for each function
        results = {}
        for name, (ln, col) in positions.items():
            hover = self.clangd.get_hover(uri, ln, col)
            if hover:
                results[name] = hover.get("contents", {}).get("value", "")
        return results
        
    def analyze_code(self,filename:str) -> List[str]:
        cpp_path = pathlib.Path(f"generated_code/{filename}.cpp").resolve()
        code = cpp_path.read_text(encoding="utf-8")
        uri = cpp_path.as_uri()
  
        '''1. Get diagnostics from clangd'''
        self.clangd.open_file(uri, code)
        diagnostics = self.clangd.get_diagnostics(uri)
        
        '''2. Get function signartures from clangd'''
        function_signatures = self.get_fuction_signatures(cpp_path, uri)
        

        analysis = {
            "diagnostics": diagnostics,
            "function_signatures": function_signatures,
        }

        analysis_path = pathlib.Path(f"generated_code/{filename}_analysis.json").resolve()
        analysis_path.write_text(str(analysis), encoding="utf-8")
        return analysis

    def generate_and_analyze(self, query: str, filename:str):
        code = self.extract_cpp_code(generate(query))
        cpp_path = pathlib.Path(f"generated_code/{filename}.cpp").resolve()
        cpp_path.write_text(code, encoding="utf-8")
        print("--------------------------------------------------------------------Code generation completed--------------------------------------------------------------------")
        
        code_analysis = self.analyze_code(filename)
        original_analysis = code_analysis
        filename_enhanced = f"{filename}_enhanced"
        enhanced_response = "No changes made to the code."
        for i in range(3):
            if code_analysis["diagnostics"] == []:
                print("--------------------------------------------------------------------Code analysis completed--------------------------------------------------------------------")
                break
            else:
                new_query = f"This is the original query given to the llm {query}, This is the llm generated code : {code} along with the original output : {original_analysis} and last iteration output : {code_analysis} generated by the clangd language server. please change the generated code acording to the output of the clangd language server. also provide entire code in the format ```cpp <code>``` where entire code is present in <code>."
                print(new_query)
                enhanced_response = generate(new_query)
                enhanced_code = self.extract_cpp_code(enhanced_response)
                if enhanced_code:
                    enhanced_path = pathlib.Path(f"generated_code/{filename_enhanced}.cpp").resolve()
                    enhanced_path.write_text(enhanced_code, encoding="utf-8")
                code_analysis = self.analyze_code(filename_enhanced)
        return enhanced_response
