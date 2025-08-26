#include <iostream>
#include <vector>
#include <cmath>

bool issame(const std::vector<float>& v1, const std::vector<float>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (size_t i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> rescale_to_unit(const std::vector<float>& numbers) {
    // Check if the input vector is valid
    if (numbers.empty()) {
        throw std::invalid_argument("Input vector cannot be empty");
    }

    // Find the minimum and maximum values in the input vector
    float min = numbers[0];
    float max = numbers[0];
    for (size_t i = 1; i < numbers.size(); ++i) {
        if (numbers[i] < min) {
            min = numbers[i];
        } else if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Calculate the range of values and the scale factor
    float range = max - min;
    float scale_factor = 1.0f / range;

    // Rescale the input vector to the unit interval
    std::vector<float> rescaled(numbers.size());
    for (size_t i = 0; i < numbers.size(); ++i) {
        rescaled[i] = (numbers[i] - min) * scale_factor;
    }

    return rescaled;
}