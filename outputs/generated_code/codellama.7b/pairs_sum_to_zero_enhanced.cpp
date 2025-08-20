#include <iostream>
#include <vector>
#include <set>

bool pairs_sum_to_zero(const std::vector<int>& nums) {
    std::set<int> seen;
    for (auto num : nums) {
        if (seen.count(-num)) return true;
        seen.insert(num);
    }
    return false;
}
