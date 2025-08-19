#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to rotate string
string rotate(string s) {
    char temp = s[0];
    for (int i = 1; i < s.length(); ++i)
        s[i - 1] = s[i];
    s[s.length() - 1] = temp;
    return s;
}

bool cycpattern_check(string a, string b){
    // If the length of b is more than a, we can't find any rotation in a
    if (a.length() < b.length())
        return false;
    
    for (int i = 0; i < b.length(); ++i) {
        string rotated_b = rotate(b);
        
        // Check if the rotated substring is a substring of 'a'
        if (a.find(rotated_b)!=std::string::npos) 
            return true;
            
        b = rotated_b;
    }
    
    return false;
}

