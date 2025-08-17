#include <iostream>
#include <algorithm> 
#include<string>
using namespace std;

bool is_palindrome(const string &text) {
    // Check if the given text and its reversed are equal
    return equal(text.begin(), text.end(), text.rbegin());
}

