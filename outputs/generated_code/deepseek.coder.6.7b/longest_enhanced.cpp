#include <iostream>
#include<vector>
#include<string>
using namespace std;

const string& longest(const vector<string>& strings){
    if (strings.empty()) { 
        // Returning an empty string in case of empty vector.
        throw invalid_argument("Empty input vector");
    }
    
    auto it = strings.begin();
    const string* longestString = &(*it);
  
    for(;it != strings.end(); ++it) {
        if (longestString->length() < it->length()) 
            // If length of current string is longer, update the pointer to this string.
            longestString = &(*it);
     }
    
    return *longestString;
}