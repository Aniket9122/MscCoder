#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

bool compare(int a, int b) {
    return (abs(a) + abs(b)) == (abs(b) + abs(a));
}

void order_by_points(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end(), compare);
}
