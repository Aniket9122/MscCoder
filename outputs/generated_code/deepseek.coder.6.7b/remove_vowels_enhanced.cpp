#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

// Function to remove vowels from a string 
string remove_vowels(const string& text) {
    const string vowels = "aeiouAEIOU";
    
    string result = ""; // Initialize the resultant string
    for (char c : text) {
        if (vowels.find(c) == std::string::npos && vowels.find(tolower(c)) == std::string::npos){
            result += c; 
         }
     }

    return result;
}