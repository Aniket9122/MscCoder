#include<string>
using namespace std;

// Main function that replaces spaces with underscores or hyphen based on conditions 
string fix_spaces(const string& text) {
    string result = ""; // Initialize the output as an empty string.
    bool spaceFlag = false; // Flag to track if we have seen a space before.
    
    for (char c : text){ // Iterate over each character in the input string. 
        if (c == ' '){
            if (!spaceFlag) {// If it's the first occurrence of a space, replace with underscore.
                result += '_';
            } else{      // Else if there are multiple consecutive spaces, replace them with -.
                result += '-';
            }
            spaceFlag = true;    // Set the flag to true indicating a space has been seen.
        }else{
            result += c;   // If it's not a space character, append directly to the output string.
            spaceFlag = false;     // Reset the flag as we have found a non-space character.
        }
    }

    return result;    // Return the final string after processing all characters.
}