#include <iostream>
#include <vector>

bool monotonic(const std::vector<float>& l) {
    if (l.size() <= 1) return true; // base case, vector has only one element or is empty

    float diff = l[1] - l[0]; // calculate the difference between adjacent elements
    for (int i = 2; i < l.size(); ++i) {
        if ((l[i] - l[i-1]) * diff > 0) return false; // if the sign of the difference is different, return false
    }
    return true; // if all differences have the same sign, return true
}
