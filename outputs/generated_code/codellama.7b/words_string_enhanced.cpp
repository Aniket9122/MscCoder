#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

vector<string> words_string(const string& s) {
    vector<string> words;

    // Tokenize the input string into individual words
    istringstream iss(s);
    string word;
    while (iss >> word) {
        words.push_back(word);
    }

    return words;
}
