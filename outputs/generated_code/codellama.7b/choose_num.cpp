#include <iostream>
using namespace std;

int choose_num(int x, int y) {
    if (x % 2 == 0 && y % 2 == 0) {
        for (int i = x; i <= y; i += 2) {
            return i;
        }
    } else {
        return -1;
    }
}

