#include <iostream>
#include <cctype>   // Required to use isupper function
using namespace std;

// Function to compute the sum of ASCII codes of uppercase characters in a string
int digitSum(string s) {
    int total_sum = 0;    // Total Sum for all Upper case letters in the string
    for (char& c : s) {
        if (isupper(c)) {
            total_sum += int(c); 
        }
    }
    return total_sum;
}

// Main function to test digitSum Function
