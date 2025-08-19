#include<iostream>
#include<stack>
using namespace std;

bool correct_bracketing(string brackets)  {
    stack<char> stk;
    for (auto b : brackets){
        if (b == '<'){   // opening bracket
            stk.push('<');
        } else {   // closing bracket
            if (stk.empty()) return false;  // no matching opening bracket
            stk.pop();
        }
    }
    return stk.empty();   // stack should be empty at the end for correct bracketing
}