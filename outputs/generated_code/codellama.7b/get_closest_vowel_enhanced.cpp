#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

string get_closest_vowel(const string& word) {
    // Use the std::find_if function to find the first occurrence of a vowel in the word.
    auto it = find_if(word.begin(), word.end(), [](char c) { return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; });
    
    // If the iterator points to a valid character in the word, create a new string from it and return it. Otherwise, return an empty string.
    if (it != word.end()) {
        return string(1, *it);
    } else {
        return "";
    }
}

