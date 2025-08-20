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

;
    std::cout << below_threshold(l1, 100) << std::endl; // true
    std::vector<int> l2 = {1, 20, 4, 10};
    std::cout << below_threshold(l2, 5) << std::endl; // false
    std::vector<int> l3 = {1, 20, 4, 10};
    std::cout << below_threshold(l3, 21) << std::endl; // true
    return 0;
}