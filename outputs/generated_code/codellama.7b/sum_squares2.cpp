#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int sum_squares(const vector<float>& lst) {
    int result = 0;
    for (const auto& element : lst) {
        float rounded = ceil(element);
        result += pow(rounded, 2);
    }
    return result;
}