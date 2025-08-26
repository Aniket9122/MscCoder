#include <iostream>
using namespace std;

int modp(int n, int p) {
    return (n % p + p) % p;
}

