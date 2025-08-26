#include <iostream>
#include <string>
using namespace std;

int digitSum(const string& s) {
    int sum = 0;
    for (char c : s) {
        if (isupper(c)) {
            sum += c - 'A' + 1;
        } else {
            sum += c - 'a' + 1;
        }
    }
    return sum;
}