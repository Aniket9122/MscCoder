#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

// Function to check whether a character is a vowel or not 
bool isVowel(char ch){
    string vowels = "aeiouAEIOU";
    return (vowels.find(ch) != string::npos); // if char is in the string of vowels it's true otherwise false
}

// Function to check whether a character is a consonant or not 
bool isConsonant(char ch){
    string alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return (alpha.find(ch) != string::npos); // if char is in the alphabet string it's false otherwise true
}

string get_closest_vowel(string word){
    auto it = find_if(word.rbegin(), word.rend()-1, [](char ch) { return !isVowel(ch) && isConsonant(*(word.rbegin()+distance(word.rbegin(), &ch)-1)) && isConsonant(*prev(word.rbegin()+distance(word.rbegin(),&ch))); });
    if (it == word.rend()-1){ // If there's no such vowel in the string return empty string 
        return "";
    } else { 
        char closest_vowel = toupper(*it); // convert to upper case because words are case sensitive and then return as string
        return string(1,closest_vowel);  
    }    
}