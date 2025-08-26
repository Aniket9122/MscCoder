#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    for (int i = 0; i <= str.length(); i++) {
        string substring = str.substr(0, i);
        if (!substring.empty()) {
            prefixes.push_back(substring);
        }
    }
    return prefixes;
}
