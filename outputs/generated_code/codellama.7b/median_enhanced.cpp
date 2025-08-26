#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm> // <-- added include

using namespace std;

float median(const vector<float>& l) {
    sort(l.begin(), l.end()); // <-- use sorted() instead of sort()

    float median = 0;
    if (l.size() % 2 == 0) {
        median = (l[l.size() / 2 - 1] + l[l.size() / 2]) / 2;
    } else {
        median = l[l.size() / 2];
    }

    return median;
}
