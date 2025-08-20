#include <iostream>
#include <string>
using namespace std;

// Encode a string using a shift cipher
string encode_shift(const string& s) {
    string out;
    for (int i = 0; i < s.length(); ++i) {
        int w = ((int)s[i] + 5 - (int)'a') % 26 + (int)'a';
        if (w > 'z') w -= 26; // adjust for letters shifted beyond 'z'
        out += (char)w;
    }
    return out;
}

// Decode a string encoded using the shift cipher
string decode_shift(const string& s) {
    string out;
    for (int i = 0; i < s.length(); ++i) {
        int w = ((int)s[i] - 5 + (int)'a') % 26 + (int)'a';
        if (w > 'z') w -= 26; // adjust for letters shifted beyond 'z'
        out += (char)w;
    }
    return out;
}

// Main function to test the encode and decode functions
