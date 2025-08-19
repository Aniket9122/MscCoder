#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

string flip_case(const string& str) { 
    string result = str; // Create a copy to avoid modifying the original string.
    
    transform(result.begin(), result.end(), result.begin(),
        [](unsigned char c){ return isupper(c)? tolower(c): toupper(c); });

    return result; 
}