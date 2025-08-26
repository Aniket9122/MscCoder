#include <iostream>
#include <vector>
#include <cmath>

bool issame(const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (std::abs(v1[i] - v2[i]) > 1e-6) return false;
    }
    return true;
}

std::vector<float> find_closest_elements(const std::vector<float>& numbers) {
    // Check if the input vector is valid
    if (numbers.size() < 2) {
        throw std::invalid_argument("Input vector must have at least two elements");
    }

    // Initialize the smallest difference to a large value
    float smallest_diff = std::numeric_limits<float>::max();
    int i1, i2;

    // Iterate over each pair of numbers in the input vector
    for (int i = 0; i < numbers.size() - 1; ++i) {
        for (int j = i + 1; j < numbers.size(); ++j) {
            float diff = std::abs(numbers[i] - numbers[j]);
            if (diff < smallest_diff) {
                smallest_diff = diff;
                i1 = i;
                i2 = j;
            }
        }
    }

    // Return the two closest elements in order
    return {numbers[i1], numbers[i2]};
}
