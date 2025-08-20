#include <vector>

std::vector<int> rolling_max(const std::vector<int>& numbers) {
    std::vector<int> max_values;
    int current_max = 0;

    for (const auto& number : numbers) {
        if (number > current_max) {
            current_max = number;
        }
        max_values.push_back(current_max);
    }

    return max_values;
}