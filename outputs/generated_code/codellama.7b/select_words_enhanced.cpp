#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Function to count the number of vowels in a string
int countVowels(const string& s) {
    int num_vowels = 0;
    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            num_vowels++;
        }
    }
    return num_vowels;
}

// Function to filter words based on the number of vowels
vector<string> selectWords(const vector<string>& words, int n) {
    vector<string> filtered_words;
    for (string word : words) {
        if (countVowels(word) >= n) {
            filtered_words.push_back(word);
        }
    }
    return filtered_words;
}
