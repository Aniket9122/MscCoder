import subprocess, uuid, queue, threading
import json, struct, io

# This is an LSP client that communicates with a language server using JSON-RPC over a pipe.
# It provides a simple interface to send requests and receive responses asynchronously.

class LspWriter:
    def __init__(self, pipe: io.TextIOBase):
        self.pipe = pipe

    def write(self, obj):
        body = json.dumps(obj, separators=(",", ":")).encode("utf-8")
        header = f"Content-Length: {len(body)}\r\n\r\n".encode("ascii")
        self.pipe.buffer.write(header)
        self.pipe.buffer.write(body)
        self.pipe.flush()

class LspReader:
    def __init__(self, pipe: io.TextIOBase):
        self.pipe = pipe.buffer  # binary

    def _read_exact(self, n):
        buf = b''
        while len(buf) < n:
            chunk = self.pipe.read(n - len(buf))
            if not chunk:
                raise EOFError("clangd closed")
            buf += chunk
        return buf

    def iter_messages(self):
        while True:
            # 1) read header
            header = b''
            while b'\r\n\r\n' not in header:
                header += self._read_exact(1)
            header, rest = header.split(b'\r\n\r\n', 1)
            length = None
            for line in header.decode().split("\r\n"):
                if line.lower().startswith("content-length"):
                    length = int(line.split(":")[1])
            if length is None:
                raise ValueError("No Content-Length")
            # 2) read body
            body = rest + self._read_exact(length - len(rest))
            yield json.loads(body.decode())


# This class represents a client for the clangd language server.
# It initializes the server, listens for responses, and provides methods to send requests.
class ClangdClient:
    def __init__(self, path=r"C:\Program Files\LLVM\bin\clangd.exe"):
        # Create a subprocess which can communicate with the clangd server.
        # The server will be started with the --pretty option to format the output.
        self.proc = subprocess.Popen([path, "--pretty"],
                                     stdin=subprocess.PIPE,
                                     stdout=subprocess.PIPE,
                                     text=True)
        # Create a reader and writer for the server's stdin and stdout.
        self.reader = LspReader(self.proc.stdout)
        self.writer = LspWriter(self.proc.stdin)
        # Response queue to hold messages received from the server.
        # This queue will be used to process responses asynchronously.
        self.responsesQueue = queue.Queue()
        # Start a thread to listen for messages from the server.
        # This thread will run the _listen method which will continuously read messages from the server.
        threading.Thread(target=self._listen, daemon=True).start()
        self.initialize()
    
    # It will keep on listening for messages from the server and put them in the response queue.
    def _listen(self):
        for msg in self.reader.iter_messages():
            self.responsesQueue.put(msg)
    
    # This method sends an initialization request to the server.
    def send_request(self, method, params):
        # Create a unique ID for the request.
        request_id = str(uuid.uuid4())
        # Create the request object.
        request = {
            "jsonrpc": "2.0",
            "id": request_id,
            "method": method,
            "params": params or {}
        }
        # Write the request to the server.
        self.writer.write(request)
        while True:
            # Wait for a response from the server.
            response = self.responsesQueue.get()
            # If the response ID matches the request ID, return the result.
            if response.get("id") == request_id:
                return response.get("result")
    
    def initialize(self):
        # Send an initialize request to the server.
        params = {
            "processId": None,
            "rootUri": None,
            "capabilities": {},
            "initializationOptions": {}
        }
        response = self.send_request("initialize", params)
        if response.get("capabilities"):
            print("Server initialized with capabilities:", response["capabilities"])
        else:
            print("Server initialization failed.")
    
    def send_notification(self, method: str, params: dict):
        msg = {
            "jsonrpc": "2.0",
            "method": method,
            "params": params or {}
        }
        self.writer.write(msg)
    
    # Here we pass the URI and content of the file to the server.
    # The URI is typically a file path, and the content is the text of the file(C++ code).
    def open_file(self, uri: str, content: str):
        params = {
            "textDocument": {
                "uri": uri,
                "languageId": "cpp",
                "version": 1,
                "text": content
            }
        }
        self.send_notification("textDocument/didOpen", params)

    def get_diagnostics(self, uri: str, timeout: float = 3.0):
        """
        Wait until clangd pushes a publishDiagnostics notification
        for the given URI, or until `timeout` seconds elapse.
        """
        import time
        deadline = time.time() + timeout
        while time.time() < deadline:
            try:
                msg = self.responsesQueue.get(timeout=deadline - time.time())
            except queue.Empty:
                break
            # notifications have no "id"
            if msg.get("method") == "textDocument/publishDiagnostics":
                diag_uri = msg["params"]["uri"]
                if diag_uri == uri:
                    return msg["params"]["diagnostics"]
        return []
    
    def get_completion(self, uri, line, character):
        # textDocument/completion is the method used to request code completion at a specific position.
        params = {
            "textDocument": {
                "uri": uri
            },
            "position": {
                "line": line,
                "character": character
            }
        }
        return self.send_request("textDocument/completion", params)
    
    def get_defination(self, uri, line, character):
        # textDocument/definition is the method used to request definitions at a specific position.
        params = {
            "textDocument": {
                "uri": uri
            },
            "position": {
                "line": line,
                "character": character
            }
        }
        return self.send_request("textDocument/definition", params)
    
    def get_references(self,uri: str,line: int,character: int,include_declaration: bool = False,):
        params = {
            "textDocument": {"uri": uri},
            "position": {"line": line, "character": character},
            "context": {"includeDeclaration": include_declaration},
        }
        return self.send_request("textDocument/references", params)

    def format_document(self,uri: str,tab_size: int = 4,insert_spaces: bool = True):
        params = {
            "textDocument": {"uri": uri},
            "options": {
                "tabSize": tab_size,
                "insertSpaces": insert_spaces,
                # clangd also honours .clang-format files in the workspace
            },
        }
        return self.send_request("textDocument/formatting", params)

    def get_hover(self, uri: str, line: int, character: int):
        """
        clangd returns rich hover info, including the *full* function signature.
        """
        params = {
            "textDocument": {"uri": uri},
            "position": {"line": line, "character": character},
        }
        return self.send_request("textDocument/hover", params)

    def get_signature_help(self, uri: str, line: int, character: int):
        """
        signatureHelp is typically used while typing an argument list,
        but clangd will still return the primary signature at the name.
        """
        params = {
            "textDocument": {"uri": uri},
            "position": {"line": line, "character": character},
            "context": {"triggerKind": 1}
        }
        return self.send_request("textDocument/signatureHelp", params)

