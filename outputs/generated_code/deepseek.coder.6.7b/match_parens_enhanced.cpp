#include <bits/stdc++.h>
using namespace std;

string match_parens(vector<string> lst) {
    // First we concatenate both strings
    string s = lst[0] + lst[1];
    
    stack<char> stk;
    
    for (auto &c : s)  {
        if (c == '(') 
            stk.push(c);          // Push the open bracket to stack
        else {                    // Closed bracket
            if (!stk.empty())       // If there is an unclosed open bracket left in the stack then pop it, else return "No"
                stk.pop();
            else 
                return "No";    
        }
    }
    
    // Return Yes only if all parentheses are properly closed i.e., the stack is empty
    return (stk.empty() ? "Yes" : "No");
}