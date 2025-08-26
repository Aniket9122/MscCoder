#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool has_close_elements(const vector<float>& numbers, float threshold) {
    if (numbers.size() < 2) return false;   // If there are less than two elements, return false.
    
    sort(numbers.begin(), numbers.end());    // Sort the array in ascending order

    for (size_t i = 0; i < numbers.size()-1; ++i) {
        if ((numbers[i+1] - numbers[i]) <= threshold) return true;   // If any two adjacent elements difference is less than or equal to the given threshold, return true.
    }
    
    return false;   // Else return false
}
