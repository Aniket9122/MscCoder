#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string remove_vowels(string text) {
    string vowels = "aeiouAEIOU";
    for (auto& c : text) {
        if (vowels.find(c) != string::npos) {
            c = ' ';
        }
    }
    return text;
}

