#include <iostream>
using namespace std;

int sum_to_n(int n) {
    if (n < 0) {
        throw invalid_argument("Input value must be non-negative");
    }
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

