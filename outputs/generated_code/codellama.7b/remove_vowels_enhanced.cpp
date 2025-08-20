#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to remove vowels from a given string
string remove_vowels(string text) {
    // Create a new string without any vowels
    string newText = "";

    for (auto c : text) {
        if (!islower(c)) {
            newText += c;
        }
    }

    return newText;
}

// Function to check if a character is a vowel
bool isVowel(char c) {
    // Check if the character is a lowercase or uppercase vowel
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

