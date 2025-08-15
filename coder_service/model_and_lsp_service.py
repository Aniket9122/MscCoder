from clients.model_client import generate
from clients.lsp_client import ClangdClient
import pathlib
from urllib.parse import urlparse, unquote
import re
from typing import List
import textwrap
import copy
import json
from clients.unit_test_client import test as run_cpp_tests

class ModelAndLSPService:
    def __init__(self):
        self.clangd = ClangdClient()

    '''-----------------------------------------------helper functions--------------------------------------------------'''
    def query_extractor(self, filename: str) -> str:
        name = filename.strip()
        if not name.lower().endswith(".txt"):
            name += ".txt"

        queries_dir = pathlib.Path(__file__).resolve().parent.parent / "queries"
        txt_path = queries_dir / name

        query_text = txt_path.read_text(encoding="utf-8", errors="ignore")
        query_text = "Generate C++ code for the following query: \n" + query_text + " \nAlso provide the entire improved code in the format: ```cpp<code>```"

        return query_text

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

    def get_fuction_signatures(self, clangd : ClangdClient, cpp_path: pathlib.Path, uri:str):
        """
        Get function signatures from the code using clangd.
        args:
            cpp_path (pathlib.Path): Path to the C++ file.
            uri (str): URI of the C++ file.
        returns:
            dict: A dictionary where keys are function names and values are their signatures.
        """

        # Get all the functions in the code
        functions = self.extract_functions(cpp_path)

        # Get the positions of the functions in the code
        positions = self.find_function_positions(cpp_path, functions)

        # Get hover information for each function
        results = {}
        for name, (ln, col) in positions.items():
            hover = clangd.get_hover(uri, ln, col)
            if hover:
                results[name] = hover.get("contents", {}).get("value", "")
        return results
    
    # To extract variables from the code
    VAR_PATTERN = re.compile(
        r"""
        ^\s*                                   # ← allow leading spaces
        (?P<type>[\w:\*&<>\[\]\s]+?)\s+        # type  (e.g. "int", "Node *")
        (?P<vars>                              # whole declarator list
            (?:[A-Za-z_]\w*                    #   first identifier
                (?:\s*\[[^\]]*\])?             #   optional [] (arrays)
                (?:\s*=\s*[^,;]+)?             #   optional initialiser
                \s*                            #   whitespace
                (?:,|;)                        #   , or ; terminator
            )+                                 #   …repeat
        )
        """,
        re.VERBOSE | re.MULTILINE)

    def extract_variables(self,cpp_path: pathlib.Path) -> list[str]:
        """Return *all* variable/field names declared in the translation unit."""
        code = cpp_path.read_text(encoding="utf-8", errors="ignore")
        names: set[str] = set()

        for m in self.VAR_PATTERN.finditer(code):
            # Skip lines that contain '(' => likely function prototypes/macros.
            if '(' in m.group(0):
                continue
            # Split declarator list on ',' or ';', strip whitespace/initialisers.
            declarators = re.split(r'[;,]', m.group('vars'))
            for decl in declarators:
                ident = re.match(r'\s*([A-Za-z_]\w*)', decl)
                if ident:
                    names.add(ident.group(1))
        return sorted(names)


    def find_variable_positions(
        self,
        cpp_path: pathlib.Path,
        names: list[str]
    ) -> dict[str, tuple[int, int]]:
        """
        Locate the first occurrence of each variable name in `names`.
        Returns {'varName': (line, column), …}   (0-based, suitable for LSP)
        """
        positions: dict[str, tuple[int, int]] = {}
        if not names:
            return positions

        name_re = re.compile(r'\b(' + '|'.join(map(re.escape, names)) + r')\b')

        for ln, text in enumerate(cpp_path.read_text(encoding="utf-8",
                                                    errors="ignore").splitlines()):
            for m in name_re.finditer(text):
                ident = m.group(1)
                # keep the *first* sighting only
                positions.setdefault(ident, (ln, m.start()))
            if len(positions) == len(names):     # all found → stop early
                break
        return positions

    def get_variable_info(self, clangd : ClangdClient,cpp_path: pathlib.Path, uri: str) -> dict[str, str]:
        """
        Get variable information from the code using clangd.
        args:
            cpp_path (pathlib.Path): Path to the C++ file.
            uri (str): URI of the C++ file.
        returns:
            dict: A dictionary where keys are variable names and values are their types.
        """
        # Get all the variables in the code
        variables = self.extract_variables(cpp_path)

        # Get the positions of the variables in the code
        positions = self.find_variable_positions(cpp_path, variables)

        # Get hover information for each variable
        results = {}
        for name, (ln, col) in positions.items():
            hover = clangd.get_hover(uri, ln, col)
            if hover:
                results[name] = hover.get("contents", {}).get("value", "")
        return results

    def generate_logs(self, filename: str, code: str, analysis: str, iteration: int = -1):
        # Prepare paths
        log_dir = pathlib.Path("generated_code")
        log_dir.mkdir(parents=True, exist_ok=True)
        log_path = (log_dir / f"{filename}_log.txt").resolve()

        # Prepare iteration label
        iter_label = iteration if iteration >= 0 else "initial"

        # Build the entry
        entry = (
            "----------------------\n"
            f"--- iteration number {iter_label} ---\n"  
            "--- Code generated ---\n"
            f"{code}\n\n"
            "--- code analysis ---\n"
            f"{analysis}\n\n\n"
        )

        # Append to log file (create if missing)
        try:
            with open(log_path, "a", encoding="utf-8") as f:
                f.write(entry)
        except Exception as e:
            raise RuntimeError(f"Failed to write log to {log_path}: {e}") from e


    def build_repair_prompt(self, spec: str, current_code: str,
                            diags_now, diags_orig=None) -> str:
        """Structured, compact query for the model to *repair* code."""
        # diag_now  = json.dumps(self._summarize_diags(diags_now), ensure_ascii=False)
        # diag_orig = json.dumps(self._summarize_diags(diags_orig or []), ensure_ascii=False)

        return f"""You are a careful C++ repair assistant.
        SPEC (natural language):
        {spec}
        CURRENT CODE (fix this):
        ```cpp
        {current_code}
        COMPILER DIAGNOSTICS (current iteration, JSON):
        {diags_now}
        REFERENCE DIAGNOSTICS (first iteration, JSON):
        {diags_orig}
        CONSTRAINTS:
        Target standard: -std=c++14 (or compatible with this project).
        Prefer minimal edits; keep public function signatures and I/O contract unless necessary.
        No extra files; produce one self-contained translation unit.
        If you add headers, ensure they exist in standard C++ or are already used elsewhere.
        Do not include explanations.
        REPLY FORMAT (strict):
        Return only the full code, in a single fenced block:
        <fixed code here>
        ```"""

    '''-----------------------------------------------Service Methods--------------------------------------------------'''
    def get_code(self,query):
        query = "Generate C++ code for the following query: \n" + query + " \nAlso provide the entire improved code in the format: ```cpp<code>```"
        response = generate(query)
        code = self.extract_cpp_code(response)
        if not code:
            return f"No code generated: {response}"
        cpp_path = pathlib.Path(f"generated_code/car_race_collision_enhanced.cpp").resolve()
        cpp_path.write_text(code, encoding="utf-8")
        return code

    def analyze_code(self,filename:str) -> List[str]:
        clangd = ClangdClient()
        cpp_path = pathlib.Path(f"generated_code/{filename}.cpp").resolve()
        code = cpp_path.read_text(encoding="utf-8")
        uri = cpp_path.as_uri()
  
        '''1. Get diagnostics from clangd'''
        clangd.open_file(uri, code)
        diagnostics = clangd.get_diagnostics(uri)
        
        '''2. Get function signartures from clangd'''
        function_signatures = self.get_fuction_signatures(clangd,cpp_path, uri)
        
        '''3. Get variables from clangd'''
        variables = self.get_variable_info(clangd,cpp_path, uri)

        analysis = {
            "diagnostics": diagnostics,
            "function_signatures": function_signatures,
            "variables": variables
        }

        return analysis


    def generate_enhanced_code(self, task):
        query = task["prompt"]
        filename = task["task_id"]
        code = task["buggy_code"]

        cpp_path = pathlib.Path(f"generated_code/{filename}.cpp").resolve()
        cpp_path.write_text(code, encoding="utf-8")
        print("--------------------------------------------------------------------Code generation completed--------------------------------------------------------------------")
        
        iteration = 0
        code_analysis = self.analyze_code(filename)
        self.generate_logs(filename, code, code_analysis, iteration)
        original_analysis = copy.deepcopy(code_analysis)
        original_code = code + "" # Store the original code for reference
        enhanced_code = code + "" # Deep copy of the original code
        filename_enhanced = f"{filename}_enhanced"
        while True:
            iteration += 1
            print("******\n******\n******\n Iteration number: ", iteration, "\n******\n******\n******")
            new_query = self.build_repair_prompt(
                spec=query,                                 # the original natural-language task
                current_code=enhanced_code,                 # current file contents
                diags_now=code_analysis,                    # diagnostics from this iteration
                diags_orig=original_analysis                # first-iteration reference
            )
            print(f"New query for iteration {iteration}: {new_query}")
            enhanced_response = generate(new_query)
            code = self.extract_cpp_code(enhanced_response)
            if not code:
                enhanced_code = enhanced_code
            else:
                enhanced_code = self.clean_cpp_code(code)
            enhanced_path = pathlib.Path(f"generated_code/{filename_enhanced}.cpp").resolve()
            enhanced_path.write_text(enhanced_code, encoding="utf-8")
            code_analysis = self.analyze_code(filename_enhanced)
            self.generate_logs(filename, enhanced_code, code_analysis, iteration)
            if (code_analysis["diagnostics"] == []) or (iteration >= 5):
                print("--------------------------------------------------------------------Code analysis completed--------------------------------------------------------------------")
                break
        return iteration

    def generateOnce(self, task):
        query = task["prompt"]
        filename = task["task_id"]
        # code = task["buggy_code"]
        # cpp_path = pathlib.Path(f"generated_code/{filename}.cpp").resolve()
        # cpp_path.write_text(code, encoding="utf-8")
        query = "Generate C++ code for the following query: \n" + query + " \nKeep the function name same as given in the query.\nAlso provide the entire improved code in the format: ```cpp<code>```"
        response = generate(query)
        code = self.extract_cpp_code(response)
        if not code:
            return f"No code generated: {response}"
        cpp_path = pathlib.Path(f"generated_code/{filename}.cpp").resolve()
        cpp_path.write_text(code, encoding="utf-8")
        print("--------------------------------------------------------------------Code generation completed--------------------------------------------------------------------")
        code_analysis = self.analyze_code(filename)
        self.generate_logs(filename, code, code_analysis)
        new_query = f"""This is the initial query given to the llm to generate a cpp code: \n{query}
                    \nThis is the code generated by the llm{code}.
                    \n these are the diagnostics generated by clangd for above code: {code_analysis}   
                    \nNow, please enhance the code by fixing any issues and improving its quality based on the diagnostic provided.
                    \nAlso provide the entire improved code in the format: ```cpp<code>```"
                    """
        enhanced_response = generate(new_query)
        enhanced_code = self.extract_cpp_code(enhanced_response)
        if not enhanced_code:
            return f"No code generated:-\n{enhanced_response}"
        enhanced_path = pathlib.Path(f"generated_code/{filename}_enhanced.cpp").resolve()
        enhanced_path.write_text(enhanced_code, encoding="utf-8")
        return enhanced_response

    def generate(self):
        file_path = "test_dataset.jsonl"
        with open(file_path, "r", encoding="utf-8") as f:
            data = [json.loads(line) for line in f]
        
        task = data[1]
        return self.generateOnce(task)
        # return self.generate_enhanced_code(task)

    def benchmark(self):
        file_path = "test_dataset.jsonl"
        with open(file_path, "r", encoding="utf-8") as f:
            data = [json.loads(line) for line in f]
        
        task = data[1]
        task_id = task["task_id"]
        unit_test = task["unit_tests"]

        result = run_cpp_tests(
        filename_cpp=f"generated_code/{task_id}_enhanced.cpp",
        unit_tests=unit_test,
        std="c++17",
        timeout_sec=10
        )
        return result