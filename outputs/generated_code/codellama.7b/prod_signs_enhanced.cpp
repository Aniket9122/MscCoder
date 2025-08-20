#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int sign_multiplier(const vector<int>& arr);

int prod_signs(const vector<int>& arr) {
    int product = 1;
    for (int i = 0; i < arr.size(); ++i) {
        product *= abs(arr[i]);
    }
    return product * sign_multiplier(arr);
}
