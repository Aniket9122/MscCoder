#include <iostream>
using namespace std;

int get_largest_prime_divisor(int n) {
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return i;
        } else {
            i++;
        }
    }
    return n;
}

