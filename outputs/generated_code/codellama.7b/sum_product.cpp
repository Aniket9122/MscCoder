#include <iostream>
#include <vector>

std::pair<int, int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int product = 1;

    for (const auto& number : numbers) {
        sum += number;
        product *= number;
    }

    return {sum, product};
}