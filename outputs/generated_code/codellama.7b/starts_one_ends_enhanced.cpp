#include <iostream>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; ++i) {
        if ((n == 1 && i == 1) || (n > 1 && i == 1)) {
            count++;
        } else if ((n >= 2 && i >= 10 && i <= 99) || (n > 2 && i >= 1000 && i <= 9999)) {
            count++;
        } else if ((n == 3 && i >= 100 && i <= 999) || (n > 3 && i >= 10000 && i <= 99999)) {
            count++;
        }
    }
    return count;
}

