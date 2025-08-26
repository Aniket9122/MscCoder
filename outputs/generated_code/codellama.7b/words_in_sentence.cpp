#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

string words_in_sentence(const string& sentence) {
    istringstream ss(sentence);
    vector<string> words;
    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    string new_sentence = "";
    for (const auto& word : words) {
        if (is_prime(word.length())) {
            new_sentence += word + " ";
        }
    }

    return new_sentence.substr(0, new_sentence.size() - 1);
}

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    } else if (n == 2) {
        return true;
    } else {
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}