#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(const string& str) {
    // Test if given string is a palindrome
    return equal(str.begin(), str.end(), str.rbegin());
}

string make_palindrome(const string& str) {
    // Find the longest palindromic suffix of supplied string
    int suffix = str.size();
    while (!is_palindrome(str.substr(0, suffix))) {
        --suffix;
    }
    if (suffix == 0) {
        // No palindromic suffix found, so the given string is already a palindrome
        return str;
    }
    // Find the string prefix that comes before the palindromic suffix
    int prefix = str.size() - suffix;
    // Append to the end of the string reverse of the string prefix
    return str + string(str.begin() + prefix, str.end());
}

