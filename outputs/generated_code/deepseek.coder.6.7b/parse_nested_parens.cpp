#include <stdio.h>
#include <vector>
#include <string>
#include <stack>
using namespace std;

// Function to split string by space
vector<string> split(const string &s, char delim) {
    vector<string> result;
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        result.push_back(item);
    }
    return result;
}

// Main function to parse nested parentheses in groups
vector<int> parse_nested_parens(string paren_string) {
    vector<string> groups = split(paren_string, ' ');
    vector<int> maxDepths;
    
    for (const auto &group : groups) {
        stack<char> parenStack;
        int currentDepth = 0;
        int maxDepth = 0;
        
        for (char c : group) {
            if (c == '(') {
                parenStack.push(c);
                currentDepth++;
                if (currentDepth > maxDepth) {
                    maxDepth = currentDepth;
                }
            } else if (!parenStack.empty() && c == ')') {
                parenStack.pop();
                currentDepth--;
            }
        }
        
        maxDepths.push_back(maxDepth);
    }
    
    return maxDepths;
}