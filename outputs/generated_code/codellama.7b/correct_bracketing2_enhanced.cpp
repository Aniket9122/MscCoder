#include <iostream>
#include <string>
#include <stack> // include the stack header file
using namespace std;

bool correct_bracketing(string brackets) {
    stack<char> bracketStack; // create a stack of characters

    for (char bracket : brackets) {
        if (bracket == '<') {
            bracketStack.push(bracket);
        } else if (bracket == '>') {
            if (bracketStack.empty()) {
                return false;
            }
            bracketStack.pop();
        }
    }

    return bracketStack.empty();
}

