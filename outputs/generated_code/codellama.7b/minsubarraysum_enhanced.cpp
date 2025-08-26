#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<int> arr) {
    int n = arr.size();
    if (n == 0) return 0;

    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
        if (sum < 0) break;
    }

    if (sum < 0) {
        std::cout << "The array contains all negative numbers" << std::endl;
        return sum;
    }

    return sum;
}
