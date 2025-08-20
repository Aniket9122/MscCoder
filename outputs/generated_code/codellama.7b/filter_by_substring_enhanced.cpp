#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> filter_by_substring(const vector<string>& strings, const string& substring) {
    vector<string> filtered_strings; // Move the declaration of 'filtered_strings' out of the loop to avoid redeclaration
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            filtered_strings.push_back(str);
        }
    }
    return filtered_strings; // Use 'std::move' to avoid unnecessary copying of the vector
}