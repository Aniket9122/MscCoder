#include <iostream>
#include <string>

using namespace std;

bool is_palindrome(const string& text) {
    if (text.size() % 2 == 1) { // Check if length is odd
        return equal(text.begin(), text.begin() + text.size() / 2, text.rbegin());
    } else { // If length is even, adjust indexing
        return equal(text.begin(), text.end() - 1, text.rbegin());
    }
}

