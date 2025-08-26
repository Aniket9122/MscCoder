#include <iostream>
using namespace std;

int fib4(int n) {
    int a = 0, b = 0, c = 2, d = 0;
    for (int i = 3; i <= n; ++i) {
        int temp = a + b + c + d;
        d = c;
        c = b;
        b = a;
        a = temp;
    }
    return a;
}

