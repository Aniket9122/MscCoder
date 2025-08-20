#include <iostream>
#include <vector>
using namespace std;

bool below_zero(const vector<int>& operations) {
    int balance = 0; // Initialize the variable `balance` before the loop starts
    for (int op : operations) {
        if (balance < 0) return true;
        if (op > 0) balance += op;
        else balance -= op;
    }
    return false; // The line is now reachable and returns `false` if the balance is never negative
}
