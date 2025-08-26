#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// Function to remove vowels from a string 
string remove_vowels(string text) {
    const string vowels = "aeiouAEIOU";
    for (char c : vowels) {
        text.erase(remove(text.begin(), text.end(), c), text.end());
    }
    return text;
}