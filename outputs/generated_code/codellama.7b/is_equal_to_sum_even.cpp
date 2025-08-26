#include <iostream>
using namespace std;

bool is_equal_to_sum_even(int n) {
    // check if n is even
    if (n % 2 != 0) {
        return false;
    }

    // try to find four even numbers that add up to n
    for (int i = 0; i <= n / 2; i++) {
        for (int j = 0; j <= n / 2; j++) {
            if (i + j == n) {
                return true;
            }
        }
    }

    // if we reach this point, no four even numbers were found that add up to n
    return false;
}