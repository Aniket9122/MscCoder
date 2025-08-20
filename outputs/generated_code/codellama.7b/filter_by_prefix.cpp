#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to filter an array of strings based on a given prefix
vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

