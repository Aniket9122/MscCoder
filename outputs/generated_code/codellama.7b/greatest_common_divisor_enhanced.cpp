#include <iostream>
using namespace std;

int greatest_common_divisor(int a, int b) {
    if (a == 0 || b == 0) return 0;
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

