#include <iostream>
#include <vector>
#include <algorithm>

// Function to check if a number is prime or not
bool isPrime(int n) {
    if (n < 2) return false; // Base case: 0 and 1 are not prime

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; // If n is divisible by any number between 2 and sqrt(n), it's not prime
    }

    return true; // If we reach this point, n is prime
}

// Function to find the largest prime number in a vector of integers
int getLargestPrimeNumberSum(const std::vector<int>& lst) {
    int largestPrimeNumber = 0; // Initialize with 0 as default value
    auto it = std::max_element(lst.begin(), lst.end(), [](int a, int b) { return isPrime(a) && !isPrime(b); });

    while (*it > 0) {
        largestPrimeNumber = *it % 10;
        *it /= 10;
    }

    return largestPrimeNumber; // Return the sum of its digits
}