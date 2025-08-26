#include <iostream>
#include <vector>

int specialFilter(const std::vector<int>& nums) {
    int count = 0;
    for (auto& num : nums) { // Use reference to avoid unnecessary copies
        if (num > 10 && ((num % 10 == 1 || num % 10 == 3 || num % 10 == 5 || num % 10 == 7 || num % 10 == 9) && (num % 100 != 10))) {
            count++;
        }
    }
    return count;
}
