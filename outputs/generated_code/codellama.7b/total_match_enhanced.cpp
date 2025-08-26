#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool issame(const vector<string>& v1, const vector<string>& v2) {
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

vector<string> total_match(const vector<string>& lst1, const vector<string>& lst2) {
    vector<string> matches;
    for (int i = 0; i < lst1.size(); ++i) {
        for (int j = 0; j < lst2.size(); ++j) {
            if (issame(lst1[i], lst2[j])) {
                matches.push_back(lst1[i]);
            }
        }
    }
    return matches;
}
