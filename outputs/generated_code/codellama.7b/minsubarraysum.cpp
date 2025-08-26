#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long minSubArraySum(const vector<long long>& nums) {
    long long min_sum = LLONG_MAX;
    int left = 0, right = 0;
    long long sum = 0;

    while (right < nums.size()) {
        sum += nums[right++];
        if (sum < min_sum) {
            min_sum = sum;
        }

        while (left < right && sum - nums[left] >= 0) {
            sum -= nums[left];
            ++left;
        }
    }

    return min_sum == LLONG_MAX ? 0 : min_sum;
}
