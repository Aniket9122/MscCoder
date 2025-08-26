#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(const std::vector<int>& lst) {
    // Check if the vector has more than one duplicate of the same number
    auto num_dups = [](const std::vector<int>& vec) {
        std::unordered_set<int> seen;
        for (auto x : vec) {
            if (seen.count(x)) return true;
            seen.insert(x);
        }
        return false;
    };

    // Check if the vector is sorted in ascending order
    auto is_sorted = [](const std::vector<int>& vec) {
        for (int i = 1; i < vec.size(); ++i) {
            if (vec[i] < vec[i-1]) return false;
        }
        return true;
    };

    return !num_dups(lst) && is_sorted(lst);
}