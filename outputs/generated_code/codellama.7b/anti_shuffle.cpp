#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string anti_shuffle(string s) {
    string result = "";
    stringstream ss(s);
    string word;
    while (ss >> word) {
        // sort the word in ascending order based on ASCII value
        sort(word.begin(), word.end(), [](char c1, char c2){ return c1 < c2; });
        result += word + " ";
    }
    return result.substr(0, result.length() - 1);
}

