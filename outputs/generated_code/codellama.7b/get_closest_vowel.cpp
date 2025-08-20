#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string get_closest_vowel(const string& word) {
    // Find the first vowel from the right side of the word
    auto first_vowel = find_if(word.rbegin(), word.rend(), [](char c) { return isupper(c) || islower(c); });

    // If no vowel was found, return an empty string
    if (first_vowel == word.end()) {
        return "";
    }

    // Find the first consonant from the right side of the word
    auto first_consonant = find_if(word.rbegin(), word.rend(), [](char c) { return !isupper(c) && !islower(c); });

    // If no consonant was found, return an empty string
    if (first_consonant == word.end()) {
        return "";
    }

    // Return the vowel that is between the first consonant and the end of the word
    auto result = find_if(first_vowel + 1, first_consonant, [](char c) { return isupper(c) || islower(c); });
    if (result != first_consonant) {
        return string(1, *result);
    } else {
        return "";
    }
}

