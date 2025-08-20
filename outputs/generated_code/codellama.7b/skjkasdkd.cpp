#include <iostream>
#include <vector>
#include <algorithm>

int largestPrimeSumOfDigits(const std::vector<int>& lst) {
    // find the largest prime number in the vector
    auto it = std::max_element(lst.begin(), lst.end(), [](int a, int b) { return isPrime(a) && !isPrime(b); });

    // calculate the sum of its digits
    int sum = 0;
    while (*it > 0) {
        sum += *it % 10;
        *it /= 10;
    }

    return sum;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}