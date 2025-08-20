#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(const string& s, const string& c) {
    // Create a new vector to store the result
    vector<string> result;

    // Create a new string with the characters in s that are not in c
    string new_s = s;
    for (char c_char : c) {
        new_s.erase(remove(new_s.begin(), new_s.end(), c_char), new_s.end());
    }

    // Check if the new string is a palindrome
    bool is_palindrome = true;
    for (int i = 0; i < new_s.length() / 2; ++i) {
        if (new_s[i] != new_s[new_s.length() - i - 1]) {
            is_palindrome = false;
            break;
        }
    }

    // Return the result vector with the new string and "True"/"False"
    result.push_back(new_s);
    result.push_back(is_palindrome ? "True" : "False");
    return result;
}