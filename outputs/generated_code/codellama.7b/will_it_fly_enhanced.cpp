#include <vector>
#include <numeric>
#include <algorithm>

bool will_it_fly(const std::vector<int>& q, int w) {
    // Check if the vector is balanced
    if (!std::is_sorted(q.begin(), q.end())) {
        return false;
    }

    // Calculate the sum of the elements in the vector
    int sum = std::accumulate(q.begin(), q.end(), 0);

    // Check if the sum is less than or equal to the maximum possible weight
    return sum <= w;
}