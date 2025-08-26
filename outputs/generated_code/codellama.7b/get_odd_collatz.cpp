#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to get the odd numbers in the Collatz sequence for a given positive integer n
vector<int> get_odd_collatz(int n) {
    vector<int> odd_numbers;  // Vector to store the odd numbers in the Collatz sequence

    // Base case: if n is 1, return {1}
    if (n == 1) {
        odd_numbers.push_back(1);
        return odd_numbers;
    }

    // Initialize the first number in the sequence to n
    int current = n;

    // Loop until we reach 1
    while (current != 1) {
        // If the current number is even, divide it by 2
        if (current % 2 == 0) {
            current /= 2;
        } else {  // Otherwise, multiply it by 3 and add 1
            current = 3 * current + 1;
        }

        // Add the current number to the vector of odd numbers
        odd_numbers.push_back(current);
    }

    return odd_numbers;
}
