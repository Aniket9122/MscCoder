#include <bits/stdc++.h>  // This library includes every standard library so you don't need to include each one separately.
using namespace std;       // It helps in writing ‘cin’, ‘cout’ instead of ‘std::cin’, ‘std::cout’.

string change_base(int x, int base) {    // Function to convert a number to any base less than 10.
    string result = "";                  // Initialize the resultant string as empty.
    
    while (x > 0) {                      // Continue until the number is greater than zero.
        char digit = '0' + (x % base);   // Find remainder when x is divided by base and add it to character ‘0’.
        if(digit > '9'){                // If resulting character is a letter, adjust it for base > 10.
            digit += ('A' - ':');       // ASCII value of A (65) minus : (58), gives 7 which we add to get the required alphabet after 9.
        }
        result = digit + result;         // Prepend this character to the resultant string.
        x /= base;                       // Divide the number by the base and repeat for remaining value of x.
    }
    
    return (result == "") ? "0" : result;  // If number is zero, return “0”, else return the calculated result.
}