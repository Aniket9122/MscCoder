#include <iostream>
#include <string>
using namespace std;

bool is_happy(const string& s) {
    // Check if the string length is at least 3
    if (s.length() < 3) return false;

    // Iterate through the string and check for repeated characters
    for (int i = 0; i < s.length() - 2; ++i) {
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2]) return false;
    }

    // If no repeated characters found, the string is happy
    return true;
}

