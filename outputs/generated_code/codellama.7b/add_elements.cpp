#include <iostream>
#include <vector>
#include <cmath>

int add_elements(const std::vector<int>& arr, int k) {
    int sum = 0;
    for (int i = 0; i < k && i < arr.size(); ++i) {
        int num = abs(arr[i]);
        sum += num / pow(10, std::floor(log10(num)) - 2);
    }
    return sum;
}