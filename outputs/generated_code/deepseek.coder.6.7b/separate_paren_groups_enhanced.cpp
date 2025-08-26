#include <iostream>
#include <stack>
#include <string>
#include <vector>

std::vector<std::string> separate_paren(const std::string& sentence) {
    std::vector<std::string> result;
    std::stack<char> stk;
    std::string cur = "";
    
    for (auto c : sentence) {
        if (c == '(') {
            stk.push(c);
            cur += c;
        } else if (c == ')') {
            while (!stk.empty() && stk.top() != '(') {
                cur += stk.top();
                stk.pop();
            }
            
            if (!stk.empty()) { // remove the opening bracket from stack and update current string
                stk.pop(); 
                if(!cur.empty() && cur[0] == '('){
                    cur = cur.substr(1);
                }
                
                if(!cur.empty()){
                    result.push_back(cur);
                    cur = ""; // reset current string for next set of brackets
                }
            } 
        } else {
            cur += c;
        }
    }
    
    while (!stk.empty()) {
        stk.pop();
    }

    return result;
}