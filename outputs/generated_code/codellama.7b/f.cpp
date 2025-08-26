#include <iostream>
#include <vector>
using namespace std;

vector<int> f(int n) {
    vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            result[i] = factorial(i);
        } else {
            int sum = 0;
            for (int j = 1; j <= i; ++j) {
                sum += j;
            }
            result[i] = sum;
        }
    }
    return result;
}

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}
