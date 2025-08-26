#include <iostream>
#include <string>
#include <algorithm>

int countUpperVowels(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (std::isupper(c) && (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            ++count;
        }
    }
    return count;
}

