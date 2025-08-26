#include <iostream>
#include <vector>

bool pairs_sum_to_zero(const std::vector<int>& nums) {
    std::unordered_set<int> seen;
    for (auto num : nums) {
        if (seen.count(-num)) return true;
        seen.insert(num);
    }
    return false;
}
