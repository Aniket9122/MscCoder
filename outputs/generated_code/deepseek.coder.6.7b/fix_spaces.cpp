#include <iostream>
#include <string>
using namespace std;

string fix_spaces(string text) {
    string result = ""; // Initialize the output as an empty string.
    bool spaceFlag = false; // Flag to track if we have seen a space before.
    
    for (char c : text) {  // Iterate over each character in the input string.
        if (c == ' '){
            if (!spaceFlag){   // If it's the first occurrence of a space, replace with underscore.
                result.push_back('_');
            } else{     // Else if there are multiple consecutive spaces, replace them with -.
                result.push_back('-');
            }
            spaceFlag = true;   // Set the flag to true indicating a space has been seen.
        }else{
            result.push_back(c);  // If it's not a space character, append directly to the output string.
            spaceFlag = false;    // Reset the flag as we have found a non-space character.
        }
    }
    
    return result;   // Return the final string after processing all characters.
}