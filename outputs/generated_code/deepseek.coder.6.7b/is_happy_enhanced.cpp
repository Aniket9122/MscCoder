#include<iostream>
#include<string>
using namespace std;

bool is_happy(const string &s){
    int len = s.length(); 
  
    // Check if length is at least 3
    if (len < 3) {
        return false; 
     }
      
    for (int i = 0; i < len - 2; ++i) {
        // check if three consecutive characters are distinct
        if(s[i] == s[i+1] || s[i] == s[i+2] || s[i+1] == s[i+2])  
            return false; 
     }
      
    return true; 
}

