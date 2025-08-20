#include <iostream>
#include <vector>

int sum_squares(const std::vector<int>& lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); ++i) {
        // Check if the current index is a multiple of 3 or 4, and update the sum accordingly
        if ((i % 3 == 0 || i % 4 == 0) && !(i % 3 == 0 && i % 4 == 0)) {
            sum += lst[i] * lst[i] * lst[i];
        } else {
            sum += lst[i];
        }
    }
    return sum;
}
