#include <iostream>
#include <string>

using namespace std;

bool cycpattern_check(const string& a, const string& b) {
    // Check if 'b' is a substring of 'a'
    if (a.find(b) != string::npos) {
        return true;
    }

    // Check if any rotation of 'b' is a substring of 'a'
    for (int i = 0; i < b.length(); ++i) {
        string rotated_b = b;
        for (int j = 0; j < i; ++j) {
            rotated_b = rotated_b.substr(1) + rotated_b[0];
        }
        if (a.find(rotated_b) != string::npos) {
            return true;
        }
    }

    // If none of the above conditions are met, return false
    return false;
}