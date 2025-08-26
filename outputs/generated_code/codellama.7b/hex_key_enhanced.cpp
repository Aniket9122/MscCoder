#include <iostream>
#include <string>
#include <algorithm>
#include <cctype> // for tolower() function

// Function to count the number of prime hexadecimal digits in a given string
int hex_key(const std::string& num) {
    int count = 0;

    // Iterate over each character in the input string
    for (auto c : num) {
        if (std::isxdigit(c)) {
            switch (tolower(c)) {
                case '2':
                case '3':
                case '5':
                case '7':
                case 'b': // decimal 11
                case 'd': // decimal 13
                    count++;
                    break;
            }
        }
    }

    return count;
}