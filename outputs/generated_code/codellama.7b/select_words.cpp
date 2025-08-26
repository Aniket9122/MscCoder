#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> select_words(const string& s, int n) {
    vector<string> words;

    // split the input string into individual words
    stringstream ss(s);
    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    // filter out words that have the desired number of consonants
    vector<string> filtered_words;
    for (const auto& word : words) {
        int num_consonants = 0;
        for (char c : word) {
            if (!isupper(c)) {
                num_consonants++;
            }
        }
        if (num_consonants == n) {
            filtered_words.push_back(word);
        }
    }

    return filtered_words;
}
