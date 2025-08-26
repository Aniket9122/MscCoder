#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(const string& text) {
    return equal(text.begin(), text.begin() + text.size() / 2, text.rbegin());
}

