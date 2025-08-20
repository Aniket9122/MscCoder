#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool same_chars(const string& s0, const string& s1) {
    if (s0.size() != s1.size()) {
        return false;
    }
    for (int i = 0; i < s0.size(); ++i) {
        if (s0[i] != s1[i]) {
            return false;
        }
    }
    return true;
}