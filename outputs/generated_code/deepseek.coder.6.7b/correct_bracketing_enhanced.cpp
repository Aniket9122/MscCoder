#include<bits/stdc++.h>
using namespace std;

bool correct_bracketing(string brackets){
    stack<char> stk;
    
    for(auto& c  : brackets) {
        if (c == '(')
            stk.push(c);  
        else if (c == ')'){             
            if(!stk.empty()) 
                stk.pop();     
            else  
                return false;   
           }  
       }
    
    return stk.empty();
}