#include <iostream>
#include <vector>
using namespace std;

bool below_zero(vector<int> operations) {
    int balance = 0;
    for (auto op : operations) {
        balance += op;
        if (balance < 0) return true;  // Balance fell below zero at some point.
    }
    return false;   // No time when the balance was less than zero.
}
