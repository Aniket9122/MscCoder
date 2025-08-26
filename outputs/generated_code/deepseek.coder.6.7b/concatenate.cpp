#include<iostream>
#include<vector>
#include<string>
#include<cassert>
using namespace std;

// Function to concatenate vector of strings into a single string
string concatenate(const vector<string>& strings) {
    string result = "";  // Initialize the resultant string as empty.
  
    for (size_t i = 0; i < strings.size(); ++i) {
        result += strings[i];
    }
    
    return result;
}
