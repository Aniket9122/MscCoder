#include <cmath>

bool is_simple_power(int x, int n) {
    if (n == 1) {
        return true;
    } else if (x == 1) {
        return false;
    }

    // Find the power of n that is closest to x
    int power = ceil(log2(x)) - floor(log2(n));

    // Check if the number is a simple power of n
    return pow(n, power) == x;
}