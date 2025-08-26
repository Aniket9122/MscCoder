#include <iostream>
#include <string>
using namespace std;

// A function that converts a decimal number to its binary representation
string decimal_to_binary(int decimal) {
    // Initialize an empty string to store the binary representation
    string binary = "";

    // Loop until the decimal value is zero
    while (decimal > 0) {
        // Get the remainder of dividing by 2 and convert it to a character
        char rem = '0' + (decimal % 2);

        // Append the character to the binary string
        binary += rem;

        // Divide the decimal value by 2
        decimal /= 2;
    }

    // Return the binary string with the "db" prefix and suffix
    return "db" + binary + "db";
}

