#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string anti_shuffle(const string& s) {
    stringstream ss(s);
    string result = "";
    string word;
    while (ss >> word) {
        sort(word.begin(), word.end(), [](char c1, char c2){ return c1 < c2; });
        result += word + " ";
    }
    return result.substr(0, result.length() - 1);
}

