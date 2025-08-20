#include <cmath>
#include <iostream>
#include <vector>

double mean_absolute_deviation(const std::vector<double>& numbers) {
    if (numbers.empty()) {
        return 0;
    }

    double sum = 0;
    for (auto num : numbers) {
        sum += fabs(num - numbers[0]); // use the mean as the centerpoint
    }

    return sum / numbers.size();
}
