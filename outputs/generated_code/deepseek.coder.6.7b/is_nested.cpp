#include<iostream>
#include<stack>
using namespace std;

bool is_nested(string str) {
    stack<char> stk; 
    for (int i=0; i<str.length(); i++) {
        if (str[i] == '[') {
            stk.push('[');
        } else { // this means it's a closing bracket, ']'
           if(stk.empty())  return false;  
           while(!stk.empty() && stk.top()==']'){
                stk.pop();
            }
            if (!stk.empty()) { // there is at least one unpaired opening bracket left in the stack
               stk.pop(); 
            } else { // no opening bracket left to pair with current closing bracket
              return false;  
            }
        }
    }
    
    if (!stk.empty()) return true; // there are unpaired opening brackets left in the stack
    return false; 
}