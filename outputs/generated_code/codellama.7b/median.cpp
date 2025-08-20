#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

float median(const vector<float>& l) {
    // Sort the vector in ascending order
    sort(l.begin(), l.end());

    // Calculate the median
    float median = 0;
    if (l.size() % 2 == 0) {
        // Even number of elements
        median = (l[l.size() / 2 - 1] + l[l.size() / 2]) / 2;
    } else {
        // Odd number of elements
        median = l[l.size() / 2];
    }

    return median;
}
