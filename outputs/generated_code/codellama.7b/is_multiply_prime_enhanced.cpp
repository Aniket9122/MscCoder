#include <iostream>
using namespace std;

bool is_multiply_prime(int a) {
    if (a >= 100) return false;

    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            int n = 0;
            while (a % i == 0) {
                a /= i;
                n++;
            }
            if (n > 1 && a != 1) return false;
        }
    }
    return true;
}

