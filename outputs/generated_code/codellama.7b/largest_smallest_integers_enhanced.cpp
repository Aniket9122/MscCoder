#include <vector>

std::vector<int> largest_smallest_integers(const std::vector<int>& lst) {
    int largest_negative = -1e9, smallest_positive = 1e9; // updated initial values to avoid potential issues with uninitialized variables

    for (const auto& num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        } else if (num > 0 && num < smallest_positive) {
            smallest_positive = num;
        }
    }

    return {largest_negative, smallest_positive}; // updated return statement to use the new variables
}