#include <iostream>
using namespace std;

int choose_num(int x, int y) {
    // Check if both x and y are even numbers before proceeding
    if (x % 2 != 0 || y % 2 != 0) {
        return -1;
    }

    // Start with the smallest even number greater than or equal to x, and then
    // iterate through all even numbers between x and y until we find one that's
    // in the range. If no such number is found, return -1.
    int num = x % 2 == 0 ? x : (x + 1) % 2;

    while (num <= y) {
        if (num >= x && num <= y) {
            return num;
        }
        num += 2;
    }

    return -1;
}

