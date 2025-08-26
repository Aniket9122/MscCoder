#include <iostream>
using namespace std;

long long special_factorial(int n) {
    if (n <= 0) return 1; // base case
    return n * special_factorial(n-1); // recursive case
}

