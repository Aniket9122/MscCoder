#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool correct_bracketing(const string& brackets) {
    stack<char> s;

    for (auto c : brackets) {
        if (c == '(') {
            s.push(c);
        } else if (c == ')') {
            if (!s.empty() && s.top() == '(') {
                s.pop();
            } else {
                return false;
            }
        }
    }

    return s.empty();
}