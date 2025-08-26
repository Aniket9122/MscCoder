#include <iostream>
#include <string>
using namespace std;

bool correct_bracketing(string brackets) {
    // Initialize a stack to store opening brackets
    stack<char> s;

    // Iterate through the string
    for (char c : brackets) {
        // If the current character is an opening bracket, push it to the stack
        if (c == '(') {
            s.push(c);
        }
        // If the current character is a closing bracket, pop from the stack and check if it matches
        else if (c == ')') {
            if (!s.empty() && s.top() == '(') {
                s.pop();
            } else {
                return false;
            }
        }
    }

    // If the stack is not empty, it means there are still opening brackets left, so return false
    if (!s.empty()) {
        return false;
    }

    // If we reach this point, it means that every opening bracket has a corresponding closing bracket, so return true
    return true;
}