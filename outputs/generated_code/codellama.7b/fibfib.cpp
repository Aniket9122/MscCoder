#include <iostream>
using namespace std;

int fibfib(int n) {
    if (n <= 1) return 0; // base case
    if (n == 2) return 1; // base case
    return fibfib(n-1) + fibfib(n-2) + fibfib(n-3); // recursive case
}

