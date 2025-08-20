#include <iostream>
#include <cmath>

int modp(int n, int p) {
    return (std::abs(n) % p + p) % p;
}

