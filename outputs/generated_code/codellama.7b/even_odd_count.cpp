#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> even_odd_count(int num) {
    vector<int> count(2, 0);
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            count[0]++;
        } else {
            count[1]++;
        }
        num /= 10;
    }
    return count;
}

bool issame(const vector<int>& v1, const vector<int>& v2) {
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}