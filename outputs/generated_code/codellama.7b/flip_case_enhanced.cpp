#include <iostream>
#include <string>

std::string flip_case(const std::string& str) {
    // Initialize a new string to store the flipped characters
    std::string result;

    for (char c : str) {
        // Check if the character is lowercase and convert it to uppercase
        if (std::islower(c)) {
            result += std::toupper(c);
        } else if (std::isupper(c)) {
            // Check if the character is uppercase and convert it to lowercase
            result += std::tolower(c);
        } else {
            // If the character is neither lowercase nor uppercase, add it as-is
            result += c;
        }
    }
    return result;
}

