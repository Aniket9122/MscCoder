#include <iostream>
#include <vector>

int sum_squares(const std::vector<int>& lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); ++i) {
        if (i % 3 == 0 && i % 4 != 0) { // square the entry if its index is a multiple of 3 and not a multiple of 4
            sum += lst[i] * lst[i];
        } else if (i % 4 == 0 && !(i % 3 == 0)) { // cube the entry if its index is a multiple of 4 and not a multiple of 3
            sum += lst[i] * lst[i] * lst[i];
        } else { // do nothing for other entries
            sum += lst[i];
        }
    }
    return sum;
}
