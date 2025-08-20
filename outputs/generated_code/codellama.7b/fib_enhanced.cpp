#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        // Handle the case where n is less than or equal to 1
        if (n == 1 || n == 2) {
            return 1;
        }
        return fib(n-1) + fib(n-2);
    }
}

