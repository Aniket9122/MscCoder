#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Returns true if the intersection of two intervals is a prime number
bool isPrimeIntersection(const vector<int>& interval1, const vector<int>& interval2) {
    // Calculate the intersection of the two intervals
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);

    if (start > end) { // If the intersection is empty, return false
        return false;
    }

    // Check if the length of the intersection is a prime number
    int len = end - start + 1;
    for (int i = 2; i <= sqrt(len); i++) {
        if (len % i == 0) {
            return false;
        }
    }
    return true;
}
