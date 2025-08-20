#include <iostream>
#include <vector>

int count_nums(const std::vector<int>& nums) {
    int sum = 0;
    for (auto num : nums) {
        if (num > 0) {
            sum++;
        } else if (num < 0) {
            sum += abs(num);
        }
    }
    return sum;
}
