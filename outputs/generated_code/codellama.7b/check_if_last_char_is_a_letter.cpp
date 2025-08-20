#include <iostream>
#include <string>
using namespace std;

bool checkIfLastCharIsALetter(const string& txt) {
    if (txt.empty()) return false;
    const char lastChar = txt[txt.length() - 1];
    if (!isalpha(lastChar)) return false;
    for (int i = 0; i < txt.length() - 1; ++i) {
        if (isspace(txt[i])) return false;
    }
    return true;
}

