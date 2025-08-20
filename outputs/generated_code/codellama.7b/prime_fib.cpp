#include <cmath>
#include <iostream>

int prime_fib(int n) {
    // Check if n is valid
    if (n < 1) {
        return -1;
    }

    // Initialize variables
    int a = 0, b = 1, c = 1;

    // Calculate the n-th Fibonacci number and check if it's prime
    for (int i = 0; i < n - 1; i++) {
        c = a + b;
        if (c % 2 == 0) {
            return -1;
        }
        a = b;
        b = c;
    }

    // Return the prime Fibonacci number
    return c;
}

