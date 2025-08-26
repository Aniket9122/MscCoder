#include <iostream>
#include <string>

using namespace std;

string encrypt(string s) {
    string encrypted = "";
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {
            c -= 2 * ('a' - 'A'); // Rotate by 2 places
            encrypted += c;
        } else {
            encrypted += c;
        }
    }
    return encrypted;
}

