#include <iostream>
#include <string>

using namespace std;

bool isPrime(const string& str) {
    // Check if the input string is empty
    if (str.empty()) {
        return false;
    }

    int length = str.size();
    bool is_prime = true;
    for (int i = 2; i * i <= length; ++i) {
        // If the length is not divisible by i, it is not a prime number
        if (length % i != 0) {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}