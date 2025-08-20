#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result{0, 0}; // Initialize the result vector with 0 for both even and odd palindromes

    // Loop through all possible palindromes from 1 to n
    for (int i = 1; i <= n; ++i) {
        string s = to_string(i); // Convert the current palindrome to a string
        bool isEven = true; // Initialize whether the palindrome is even or not

        // Check if the palindrome is even by reversing it and comparing with the original string
        for (int j = 0; j < s.length() / 2; ++j) {
            if (s[j] != s[s.length() - 1 - j]) {
                isEven = false;
                break;
            }
        }

        // If the palindrome is even, increment the even counter
        if (isEven) {
            result[0]++;
        } else { // Otherwise, increment the odd counter
            result[1]++;
        }
    }

    return result;
}