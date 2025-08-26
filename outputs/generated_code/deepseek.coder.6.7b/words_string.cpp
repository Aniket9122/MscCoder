#include<iostream>
#include<vector>
#include<sstream>
#include<string>
using namespace std;

// Function to split string into words
vector<string> words_string(string s) {
    vector<string> result; // Vector to store the output
    stringstream ss(s); // Used for breaking up the strings
    string word; // To store individual words
    
    while (ss >> word) { 
        if (!word.empty()) { 
            // Remove any trailing comma or space from each word
            if (word[word.size()-1] == ',' || word[word.size()-1] == ' '){
                word = word.substr(0, word.size() - 1);
            }
            
            result.push_back(word); // Add the word to vector
        }
    }
    
    return result;
}