#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(const string& str) {
    // Test if given string is a palindrome
    return equal(str.begin(), str.end(), str.rbegin());
}

string make_palindrome(const string& str) {
    /*
    Find the shortest palindrome that begins with a supplied string.
    Algorithm idea is simple: - Find the longest postfix of supplied string that is a palindrome.
                             - Append to the end of the string reverse of a string prefix that comes before the palindromic suffix.
    */

    // If given string is already a palindrome, return it as is
    if (is_palindrome(str)) {
        return str;
    }

    // Find the longest postfix of supplied string that is a palindrome
    auto palindromic_suffix = str.substr(0, find_if(str.rbegin(), str.rend(), [](char c) { return !is_palindrome(c); }) - str.begin());
    if (palindromic_suffix.empty()) {
        // No palindromic suffix found, so the given string is already a palindrome
        return str;
    }

    // Find the string prefix that comes before the palindromic suffix
    auto prefix = str.substr(0, str.size() - palindromic_suffix.size());

    // Append to the end of the string reverse of the string prefix
    return prefix + string(prefix.rbegin(), prefix.rend());
}

