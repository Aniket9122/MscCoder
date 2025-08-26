#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& l1, const std::vector<float>& l2) {
    return l1 == l2;
}

std::vector<float> sort_even(const std::vector<float>& l) {
    // Sort the even elements of l in descending order
    std::sort(l.begin() + 1, l.end() - 1, std::greater<float>());
    return l;
}