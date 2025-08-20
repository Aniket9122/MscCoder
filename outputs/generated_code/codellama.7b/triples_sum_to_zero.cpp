#include <iostream>
#include <vector>
#include <algorithm>

bool triples_sum_to_zero(const std::vector<int>& v) {
    // check if the vector has at least three elements
    if (v.size() < 3) return false;

    // sort the vector in ascending order
    std::sort(v.begin(), v.end());

    // find the first duplicate element
    auto it = std::unique(v.begin(), v.end());

    // if there is no duplicate element, return false
    if (it == v.end()) return false;

    // get the index of the duplicate element
    int dup_index = std::distance(v.begin(), it);

    // check if the three elements sum to zero
    if (v[dup_index - 1] + v[dup_index] + v[dup_index + 1] == 0) {
        return true;
    } else {
        return false;
    }
}