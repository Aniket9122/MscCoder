#include <iostream>
#include <string>
#include <cctype>
#include <set>
using namespace std;

int count_distinct_characters(const string& str) { 
    set<char> distinct_chars;
    
    for (auto c : str) {
        // Convert to lowercase using the standard library function tolower.
        distinct_chars.insert(tolower(c));
    }
    
    return distinct_chars.size();
}