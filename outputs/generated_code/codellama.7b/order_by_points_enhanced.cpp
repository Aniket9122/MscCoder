#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath> // added include directive for abs() function

int compare(int a, int b) { // changed return type from bool to int
    return (std::abs(a) + std::abs(b)) > (std::abs(b) + std::abs(a));
}

void order_by_points(std::vector<int> &numbers) {
    std::sort(numbers.begin(), numbers.end(), std::greater<int>()); // changed to use std::greater<int> template parameter for descending sort based on absolute value
}
