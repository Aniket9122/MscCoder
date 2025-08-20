#include <iostream>
using namespace std;

// Define the isPrime function before using it
bool isPrime(int n) {
    if (n == 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Update the x_or_y function to take in three parameters and handle the case where n is not prime correctly
int x_or_y(int n, int x, int y) {
    if (isPrime(n)) {
        return x;
    } else {
        return y;
    }
}

