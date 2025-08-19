#include <iostream>
#include <stack>
using namespace std;

bool is_nested(string str) {
    stack<char> stk; // Stack to keep track of opening brackets '['
    
    for (int i = 0; i < str.length(); i++){ 
        if (str[i] == '['){ // If it's an opening bracket, push into the stack
            stk.push('[');
         } else {  // It means it's a closing bracket
             if(stk.empty()) return false;  
             
             while(!stk.empty() && stk.top()==']'){ // While the top of stack is ']', pop it out
                stk.pop();
             } 
            if (!stk.empty()){ // If there are still some opening brackets left, pop them out to find a pair with current closing bracket
               stk.pop(); 
            } else {   // There is no unpaired opening bracket left for this closing one
              return false;   
            }
         }
     }
     
     if (!stk.empty()) return true;  // If there are some unpaired opening brackets, it means invalid subsequence of brackets

     return false;  
}