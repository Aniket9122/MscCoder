#include<bits/stdc++.h>
using namespace std;

bool correct_bracketing(string s){
    stack<char> stk;
    for(auto& c : s) {
        if (c == '(') 
            stk.push(c); // push to stack if opening bracket is found
        else{  
          if(!stk.empty())
             stk.pop(); // pop from the stack if closing bracket and stack not empty
          else 
              return false; // return false if no matching opening bracket for this closing one
         }   
     }
    return stk.empty(); // if all opening brackets have corresponding closing ones then stack should be empty after processing all characters of the string, hence return true otherwise return false
}