#include <iostream>
#include <vector>
#include <sstream>  // for istringstream
#include <string>   // for string
using namespace std;

// Function to split a string of words by comma or space into a vector of strings
vector<string> words_string(const string& s) {
    vector<string> words;   // Create an empty vector to store the words
    istringstream iss(s);   // Create an input stream from the input string
    string word;            // Temporary variable for storing each word
    
    while (getline(iss, word, ',')) { 
        size_t pos = 0;
        while ((pos = word.find(" ")) != std::string::npos) { 
            if (!word.substr(0, pos).empty()) // Check for any leading spaces in the substring
                words.push_back(word.substr(0, pos));
            word = word.substr(pos + 1);   // remove this space and continue to next part of string
        }
        
        if (!word.empty())   // If there are no trailing spaces in the last word
             words.push_back(word);
    }
    
    return words;
}

// Test function
