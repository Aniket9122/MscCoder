#include <iostream>
#include <vector>
using namespace std;

bool below_zero(const vector<int>& operations) {
    int balance = 0;
    for (int op : operations) {
        if (balance < 0) return true;
        if (op > 0) balance += op;
        else balance -= op;
    }
    return false;
}
