#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int prod_signs(const vector<int>& arr) {
    int product = 1;
    for (int i = 0; i < arr.size(); ++i) {
        product *= abs(arr[i]);
    }
    return product * sign_multiplier(arr);
}

int sign_multiplier(const vector<int>& arr) {
    int multiplier = 1;
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == -1) {
            multiplier *= -1;
        } else if (arr[i] != 0) {
            return 0;
        }
    }
    return multiplier;
}