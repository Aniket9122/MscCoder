#include <iostream>
#include <vector>

using namespace std;

// Function to get the odd numbers in the Collatz sequence for a given positive integer n
vector<int> get_odd_collatz(int n) {
    vector<int> odd_numbers{};  // Initialize an empty vector of integers

    if (n == 1) return odd_numbers;  // Base case: If n is 1, return an empty vector

    int current = n;

    while (current != 1) {
        if (current % 2 == 0) {
            current /= 2;
        } else {
            current = 3 * current + 1;
        }

        odd_numbers.push_back(current);
    }

    return odd_numbers;
}
