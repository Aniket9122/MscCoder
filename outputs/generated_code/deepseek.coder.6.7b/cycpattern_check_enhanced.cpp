#include <iostream>
#include <algorithm>
using namespace std;

bool cycpattern_check(string a, string b){
    if (a.length() < b.length())  // If the length of b is more than a, we can't find any rotation in a
        return false;
    
    for (int i = 0; i < b.length(); ++i) {
        rotate(b.begin(), b.begin() + 1, b.end()); // Rotate string b
        
        if (a.find(b)!=string::npos)  // Check if the rotated substring is a substring of 'a'
            return true;
    }
    
    return false;
}

