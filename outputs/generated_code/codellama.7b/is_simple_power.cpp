#include <iostream>
using namespace std;

bool is_simple_power(int x, int n) {
    if (n == 1) {
        return true;
    } else if (x == 1) {
        return false;
    }

    // Find the power of n that is closest to x
    int power = ceil(log(x) / log(n));

    // Check if the number is a simple power of n
    return pow(n, power) == x;
}