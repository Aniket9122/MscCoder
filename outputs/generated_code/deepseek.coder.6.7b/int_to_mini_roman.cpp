#include <iostream>
#include <string>
using namespace std;

// Function to find value
string int_to_mini_roman(int num) {
    // Create a table to hold the roman numerals and their corresponding values
    string symbols[] = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    string roman_num;
    
    // Check for subtraction cases first before checking for normal cases.
    for(int i = 0; num != 0; ++i){
        while(num - values[i] >= 0){
            roman_num += symbols[i]; 
            num -= values[i];
        }
    }
    
    return roman_num;
}

