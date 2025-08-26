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
    # def query_extractor(self, filename: str) -> str:
    #     name = filename.strip()
    #     if not name.lower().endswith(".txt"):
    #         name += ".txt"

    #     queries_dir = pathlib.Path(__file__).resolve().parent.parent / "queries"
    #     txt_path = queries_dir / name

    #     query_text = txt_path.read_text(encoding="utf-8", errors="ignore")
    #     query_text = "Generate C++ code for the following query: \n" + query_text + " \nAlso provide the entire improved code in the format: ```cpp<code>```"

    #     return query_text

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

    def generate_logs(self, folder_name,filename: str, query: str, analysis, iteration: int = -1):
        """
        Upsert a single JSONL record in outputs/logs/metadata.jsonl:

        {"task_id": "<filename>", "iteration": <int>, "query": "<...>", "clangd_analysis": <dict|list|str>}

        If a record with the same task_id exists, overwrite it; else append.
        """
        import json, os
        from pathlib import Path

        log_dir = Path(f"outputs/logs")
        log_dir.mkdir(parents=True, exist_ok=True)
        log_path = (log_dir / f"{folder_name}.jsonl").resolve()
        tmp_path = log_path.with_suffix(".jsonl.tmp")

        # Normalize iteration
        iter_val = iteration if isinstance(iteration, int) and iteration >= 0 else 0

        # Make analysis JSON-serializable
        if isinstance(analysis, (dict, list)):
            payload_analysis = analysis
        else:
            try:
                payload_analysis = json.loads(analysis)
            except Exception:
                payload_analysis = str(analysis)

        record = {
            "task_id": filename,
            "iteration": iter_val,
            "query": query,
            "clangd_analysis": payload_analysis,
        }

        # Read existing records (if any)
        records = []
        if log_path.exists():
            with open(log_path, "r", encoding="utf-8") as f:
                for line in f:
                    line = line.strip()
                    if not line:
                        continue
                    try:
                        records.append(json.loads(line))
                    except Exception:
                        # Skip malformed lines
                        continue

        # Upsert by task_id
        idx = next((i for i, r in enumerate(records) if r.get("task_id") == filename), None)
        if idx is None:
            records.append(record)
        else:
            records[idx] = record

        # Atomic write: write temp then replace
        with open(tmp_path, "w", encoding="utf-8") as f:
            for rec in records:
                f.write(json.dumps(rec, ensure_ascii=False) + "\n")
        os.replace(tmp_path, log_path)



    # def build_repair_prompt(self, spec: str, current_code: str,
    #                         diags_now, diags_orig=None) -> str:
    #     """Structured, compact query for the model to *repair* code."""
    #     # diag_now  = json.dumps(self._summarize_diags(diags_now), ensure_ascii=False)
    #     # diag_orig = json.dumps(self._summarize_diags(diags_orig or []), ensure_ascii=False)

    #     return f"""You are a careful C++ repair assistant.
    #     SPEC (natural language):
    #     {spec}
    #     CURRENT CODE (fix this):
    #     ```cpp
    #     {current_code}
    #     COMPILER DIAGNOSTICS (current iteration, JSON):
    #     {diags_now}
    #     REFERENCE DIAGNOSTICS (first iteration, JSON):
    #     {diags_orig}
    #     CONSTRAINTS:
    #     Target standard: -std=c++14 (or compatible with this project).
    #     Prefer minimal edits; keep public function signatures and I/O contract unless necessary.
    #     No extra files; produce one self-contained translation unit.
    #     If you add headers, ensure they exist in standard C++ or are already used elsewhere.
    #     Do not include explanations.
    #     REPLY FORMAT (strict):
    #     Return only the full code, in a single fenced block:
    #     <fixed code here>
    #     ```"""

    def extract_asserts(self,code_str: str):
        # Find everything between assert( ... );
        matches = re.findall(r"assert\s*\((.*?)\);", code_str, re.DOTALL)
        return [m.strip() for m in matches]
    
    def remove_main_function(self,cpp_path: pathlib.Path):
        code = cpp_path.read_text(encoding="utf-8")
        # Remove the main function and its contents
        code = re.sub(r'\bint\s+main\s*\([^)]*\)\s*{[^}]*}', '', code, flags=re.DOTALL)
        # Write the modified code back to the file
        cpp_path.write_text(code, encoding="utf-8")

    def create_folder_name(self, model: str):
        """
        Create a folder name based on the model name.
        This is used to store generated code for different models.
        """
        # Replace special characters with underscores and convert to lowercase
        folder_name = re.sub(r'[^\w\s]', '.', model).lower()
        # Remove any leading or trailing whitespace
        folder_name = folder_name.strip()
        # Ensure the folder name is not empty
        if not folder_name:
            folder_name = "default_model"
        return folder_name
    
    def get_task_ids(self,folder_name: str) -> List[str]:
        """
        List all non-enhanced C++ files (without the .cpp extension) in:
            outputs/generated_code/<folder_name>

        Returns: e.g. ["foo", "bar"] for foo.cpp, bar.cpp (ignores foo_enhanced.cpp).
        """
        base = pathlib.Path("outputs/generated_code") / folder_name
        if not base.is_dir():
            return []

        stems = [
            p.stem
            for p in base.iterdir()
            if p.is_file()
            and p.suffix.lower() == ".cpp"
            and not p.stem.endswith("_enhanced")
        ]
        # dedupe and sort case-insensitively
        return sorted(set(stems), key=str.lower)
    
    def save_unit_tests(self, task_id: str, folder_name: str, test_results: dict | None = None) -> str:
        """
        Upsert one JSONL record into unit_tests/<folder_name>.jsonl with:
        { "task_id": ..., "compiled": ..., "time_ms": ..., "total_tests": ..., "tests_passed": ... }

        If a record with the same task_id exists, overwrite it; else append.
        Returns the path to the JSONL file.
        """
        import json, os
        from pathlib import Path

        # Ensure output dir + safe filename
        out_dir = Path("outputs/unit_tests")
        out_dir.mkdir(parents=True, exist_ok=True)
        # safe_name = "".join(c if c.isalnum() or c in "-._" else "_" for c in folder_name.strip())
        log_path = (out_dir / f"{folder_name}.jsonl").resolve()
        tmp_path = log_path.with_suffix(".jsonl.tmp")

        # Build the minimal record
        tr = test_results or {}
        record = {
            "task_id": task_id,
            "compiled": bool(tr.get("compiled")),
            "time_ms": tr.get("time_ms"),
            "total_tests": tr.get("total_tests"),
            # accept either "tests_passed" (our runner) or "passed" (alt key)
            "tests_passed": tr.get("tests_passed"),
        }

        # Read existing records (if file already exists)
        records = []
        if log_path.exists():
            with open(log_path, "r", encoding="utf-8") as f:
                for line in f:
                    line = line.strip()
                    if not line:
                        continue
                    try:
                        records.append(json.loads(line))
                    except Exception:
                        # skip malformed lines
                        continue

        # Upsert by task_id
        updated = False
        for i, rec in enumerate(records):
            if rec.get("task_id") == task_id:
                records[i] = record
                updated = True
                break
        if not updated:
            records.append(record)

        # Atomic write
        with open(tmp_path, "w", encoding="utf-8") as f:
            for rec in records:
                f.write(json.dumps(rec, ensure_ascii=False) + "\n")
        os.replace(tmp_path, log_path)

        return str(log_path)
    
    def check_task_id_exists(self, task_id: str, path: pathlib.Path) -> bool:
        """
        Check if a task_id exists in the logs.
        This is used to avoid reprocessing tasks that have already been completed.
        """
        if not path.exists():
            return False
        with open(path, "r", encoding="utf-8") as f:
            logs = [json.loads(line) for line in f]
        
        for log in logs:
            if log["task_id"] == task_id:
                return True
        return False
    
    def analyze_code(self,cpp_path: pathlib.Path) -> List[str]:
        clangd = ClangdClient()
        # cpp_path = pathlib.Path(f"outputs/generated_code/{filename}.cpp").resolve()
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
            
    '''-----------------------------------------------Service Methods--------------------------------------------------'''

    def generate_code(self, task,model):
        query = task["prompt"]
        filename = task["task_id"]
        unit_tests = self.extract_asserts(task["unit_tests"])[:3]
        folder_name = self.create_folder_name(model)
        query = "Generate C++ code for the following query: \n" + query + "\nThese are few unit test that the code should be able to pass"+str(unit_tests)+"\nAlso provide the entire improved code in the format: ```cpp<code>```"
        response = generate(model,query)
        code = self.extract_cpp_code(response)
        if not code:
            return f"No code generated: {response}"
        cpp_path = pathlib.Path(f"outputs/generated_code/{folder_name}/{filename}.cpp").resolve()
        cpp_path.parent.mkdir(parents=True, exist_ok=True)
        cpp_path.write_text(code, encoding="utf-8")
        print("--------------------------------------------------------------------Code generation completed--------------------------------------------------------------------")
        code_analysis = self.analyze_code(cpp_path)
        self.generate_logs(folder_name,filename, query, code_analysis)
        new_query = f"""This is the initial query given to the llm to generate a cpp code: \n{query}
                    \nThis is the code generated by the llm{code}.
                    \n these are the diagnostics generated by clangd for above code: {code_analysis}   
                    \nNow, please enhance the code by fixing any issues and improving its quality based on the diagnostic provided.
                    \nAlso provide the entire improved code in the format: ```cpp<code>```"
                    """
        enhanced_response = generate(model,new_query)
        enhanced_code = self.extract_cpp_code(enhanced_response)
        if not enhanced_code:
            return f"No code generated:-\n{enhanced_response}"
        enhanced_path = pathlib.Path(f"outputs/generated_code/{folder_name}/{filename}_enhanced.cpp").resolve()
        enhanced_path.parent.mkdir(parents=True, exist_ok=True)
        enhanced_path.write_text(enhanced_code, encoding="utf-8")
        self.generate_logs(folder_name,f"{filename}_enhanced", new_query, analysis=self.analyze_code(enhanced_path))
        self.remove_main_function(cpp_path)
        self.remove_main_function(enhanced_path)
        return enhanced_response

    def iterative_generate_code(self, task,model):
        query = task["prompt"]
        filename = task["task_id"]
        unit_tests = self.extract_asserts(task["unit_tests"])[:3]
        folder_name = self.create_folder_name(model)
        query = "Generate C++ code for the following query: \n" + query + "\nThese are few unit test that the code should be able to pass"+str(unit_tests)+"\nAlso provide the entire improved code in the format: ```cpp<code>```"
        response = generate(model,query)
        code = self.extract_cpp_code(response)
        if not code:
            return f"No code generated: {response}"
        cpp_path = pathlib.Path(f"outputs/generated_code/{folder_name}/{filename}.cpp").resolve()
        cpp_path.parent.mkdir(parents=True, exist_ok=True)
        cpp_path.write_text(code, encoding="utf-8")
        print("--------------------------------------------------------------------Code generation completed--------------------------------------------------------------------")
        code_analysis = self.analyze_code(cpp_path)
        self.generate_logs(folder_name,filename, query, code_analysis)
        iteration = 0
        original_analysis = copy.deepcopy(code_analysis)
        original_code = code + "" # Store the original code for reference
        enhanced_code = code + "" # Deep copy of the original code
        filename_enhanced = f"{filename}_enhanced"
        while True:
            iteration += 1
            print("******\n******\n******\n Task_id: ",filename," Iteration number: ", iteration, "\n******\n******\n******")
            new_query = f"""This is the initial query given to the llm to generate a cpp code: \n{query}
                        \nThis is the code generated by the llm{original_code}.
                        \n these are the diagnostics generated by clangd for above code: {original_analysis}.
                        \nThis is the code generated by the llm in the previous iteration: {enhanced_code}.
                        \n these are the diagnostics generated by clangd for above code: {code_analysis}   
                        \nNow, please enhance the code by fixing any issues and improving its quality based on the diagnostic provided.
                        \nAlso provide the entire improved code in the format: ```cpp<code>```"
                        """
            enhanced_response = generate(model,new_query)
            enhanced_code = self.extract_cpp_code(enhanced_response)
            if not enhanced_code:
                return f"No code generated:-\n{enhanced_response}"
            enhanced_path = pathlib.Path(f"outputs/generated_code/{folder_name}/{filename_enhanced}.cpp").resolve()
            enhanced_path.parent.mkdir(parents=True, exist_ok=True)
            enhanced_path.write_text(enhanced_code, encoding="utf-8")
            code_analysis = self.analyze_code(enhanced_path)
            self.generate_logs(folder_name,filename_enhanced, new_query, analysis=code_analysis, iteration=iteration)
            if (code_analysis["diagnostics"] == []) or (code_analysis["diagnostics"][0]["code"] == "unused-includes") or (iteration >= 5):
                print("--------------------------------------------------------------------Code analysis completed--------------------------------------------------------------------")
                break
        self.remove_main_function(cpp_path)
        self.remove_main_function(enhanced_path)
        return enhanced_response

    def generate(self,model: str):
        file_path = "test_dataset.jsonl"
        with open(file_path, "r", encoding="utf-8") as f:
            data = [json.loads(line) for line in f]
                
        for task in data:
            task_id = task["task_id"]
            enhanced_task_id = f"{task_id}_enhanced"
            if self.check_task_id_exists(task_id,pathlib.Path(f"outputs/logs/{self.create_folder_name(model)}.jsonl")) and self.check_task_id_exists(enhanced_task_id, pathlib.Path(f"outputs/logs/{self.create_folder_name(model)}.jsonl")):
                print(f"Task {task_id} already exists in logs. Skipping...")
            else:
                self.iterative_generate_code(task,model)
        return "Code generation Completed."

    def benchmark(self,model: str):
        file_path = "test_dataset.jsonl"
        with open(file_path, "r", encoding="utf-8") as f:
            data = [json.loads(line) for line in f]        
        folder_name = self.create_folder_name(model) 
        codes = self.get_task_ids(folder_name)
        for code in codes:
            task = next((item for item in data if item["task_id"] == code), None)
            task_id = task["task_id"]
            enhanced_task_id = f"{task_id}_enhanced"
            unit_test = task["unit_tests"]

            if self.check_task_id_exists(task_id, pathlib.Path(f"outputs/unit_tests/{self.create_folder_name(model)}.jsonl")) and self.check_task_id_exists(enhanced_task_id, pathlib.Path(f"outputs/unit_tests/{self.create_folder_name(model)}.jsonl")):
                print(f"Task {task_id} already exists in unit tests. Skipping...")
            else:
                llm = run_cpp_tests(
                folder_name=folder_name,
                filename_cpp=f"outputs/generated_code/{folder_name}/{task_id}.cpp",
                unit_tests=unit_test,
                std="c++14",
                timeout_sec=60
                )
                print(f"Unit tests for {task_id} completed: {llm}")
                self.save_unit_tests(task_id,folder_name,llm)
                llm_and_clangd = run_cpp_tests(
                folder_name=folder_name,
                filename_cpp=f"outputs/generated_code/{folder_name}/{enhanced_task_id}.cpp",
                unit_tests=unit_test,
                std="c++14",
                timeout_sec=60
                )
                print(f"Unit tests for {enhanced_task_id} completed: {llm_and_clangd}")
                self.save_unit_tests(enhanced_task_id,folder_name,llm_and_clangd)
        return "Benchmarking completed for all tasks."