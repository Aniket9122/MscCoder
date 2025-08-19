#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// function to filter strings by prefix
vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix) {
    vector<string> filteredStrings;
    
    copy_if(strings.begin(), strings.end(), back_inserter(filteredStrings), 
            [&](const string& str){ return str.rfind(prefix, 0) == 0; });
            
    return filteredStrings;
}

// function to check if two vectors are the same
template <typename T>
bool issame(vector<T> a, vector<T> b) {
   return a == b;
}
