#include <iostream>
#include <vector>
#include <sstream>
using std::vector;
using std::string;
using std::istringstream;

// Function to split string into words
vector<string> words_string(const string& s) {
    vector<string> result;  // Vector to store the output
    istringstream ss(s);   // Used for breaking up the strings
    string word;            // To store individual words
    
    while (ss >> word) { 
        if (!word.empty()) { 
             // Remove any trailing comma or space from each word
             while(word.back() == ',' || word.back() == ' '){
                 word = word.substr(0, word.size()-1);
             }
             
            result.push_back(word);  // Add the word to vector
         }
     }
     
    return result;
}