#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

// Node structure for the Huffman tree
struct Node {
  int symbol; // The symbol represented by this node
  int frequency; // The frequency of the symbol in the input data
  Node* left; // Left child node
  Node* right; // Right child node
};

// Function to create a new node with the given symbol and frequency
Node* newNode(int symbol, int frequency) {
  Node* node = new Node();
  node->symbol = symbol;
  node->frequency = frequency;
  return node;
}

// Function to print the Huffman tree in a pre-order traversal format
void printTree(Node* root) {
  if (root == NULL) {
    return;
  }
  cout << root->symbol << "(" << root->frequency << ") ";
  printTree(root->left);
  printTree(root->right);
}

// Function to create a Huffman tree from the input data
Node* createHuffmanTree(vector<int>& symbols, vector<int>& frequencies) {
  // Create a queue to store the nodes of the Huffman tree
  priority_queue<Node*, vector<Node*>, greater<Node*>> queue;
  
  // Add the root node with the highest frequency symbol
  Node* root = newNode(symbols[0], frequencies[0]);
  queue.push(root);
  
  // Add the remaining symbols and their corresponding frequencies to the queue
  for (int i = 1; i < symbols.size(); i++) {
    Node* node = newNode(symbols[i], frequencies[i]);
    queue.push(node);
  }
  
  // Create a Huffman tree by repeatedly combining the two nodes with the lowest frequencies
  while (queue.size() > 1) {
    Node* left = queue.top();
    queue.pop();
    Node* right = queue.top();
    queue.pop();
    Node* node = newNode(left->symbol, left->frequency + right->frequency);
    node->left = left;
    node->right = right;
    queue.push(node);
  }
  
  return root;
}

// Function to encode a symbol using the Huffman code
void encodeSymbol(Node* root, int symbol) {
  if (root == NULL || root->symbol == symbol) {
    cout << "Encoded symbol: " << symbol << endl;
    return;
  }
  
  // Recursively search for the symbol in the left and right subtrees of the current node
  encodeSymbol(root->left, symbol);
  encodeSymbol(root->right, symbol);
}

// Function to decode a Huffman code using the Huffman tree
void decodeCode(Node* root, int code) {
  if (root == NULL || root->symbol != code) {
    cout << "Decoded symbol: " << code << endl;
    return;
  }
  
  // Recursively search for the code in the left and right subtrees of the current node
  decodeCode(root->left, code);
  decodeCode(root->right, code);
}

int main() {
  vector<int> symbols = {1, 2, 3, 4, 5};
  vector<int> frequencies = {2, 4, 6, 8, 10};
  
  // Create a Huffman tree from the input data
  Node* root = createHuffmanTree(symbols, frequencies);
  
  // Print the Huffman tree in a pre-order traversal format
  printTree(root);
  
  // Encode and decode symbols using the Huffman code
  encodeSymbol(root, 3);
  decodeCode(root, 7);
  
  return 0;
}