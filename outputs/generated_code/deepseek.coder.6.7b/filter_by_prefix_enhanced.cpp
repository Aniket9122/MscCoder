#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

// Function to filter strings by prefix
vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix) {
    vector<string> filteredStrings;
    
    copy_if(strings.begin(), strings.end(), back_inserter(filteredStrings), 
            [&](const string& str){ return str.rfind(prefix, 0) == 0; });
            
    return filteredStrings;
}

// Function to check if two containers are the same (generic function)
template <typename T>
bool issame(vector<T> a, vector<T> b){
   return a == b;
}
