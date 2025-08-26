#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to return all prefixes of the given string
vector<string> all_prefixes(const string& str) {
    vector<string> result;
    for (size_t i = 1; i <= str.length(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}