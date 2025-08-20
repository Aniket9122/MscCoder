#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return std::equal(v1.begin(), v1.end(), v2.begin());
}

std::vector<int> common(const std::vector<int>& l1, const std::vector<int>& l2) {
    std::vector<int> result;
    std::set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), std::back_inserter(result));
    return result;
}
