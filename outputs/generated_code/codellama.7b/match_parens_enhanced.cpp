#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

string match_parens(const vector<string>& lst) {
    // Check if the input vector is empty
    if (lst.empty()) return "No";

    // Initialize a stack to keep track of opening parentheses
    stack<char> openParens;

    // Loop through each string in the vector
    for (const string& str : lst) {
        // Loop through each character in the string
        for (char c : str) {
            // If the character is an opening parenthesis, push it to the stack
            if (c == '(') openParens.push(c);
            // If the character is a closing parenthesis, pop from the stack
            else if (!openParens.empty() && openParens.top() == '(') {
                openParens.pop();
            }
        }
    }

    // Check if there are any opening parentheses left in the stack
    return (openParens.empty()) ? "Yes" : "No";
}