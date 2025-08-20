#include <iostream>
#include <vector>

bool below_threshold(const std::vector<int>& l, int t) {
    // Return true if vector is empty
    if (l.empty()) {
        return true;
    }

    for (auto num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}