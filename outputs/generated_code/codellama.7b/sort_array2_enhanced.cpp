#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sort_array(vector<int>& arr) {
    // Sort the array in descending order
    sort(arr.begin(), arr.end(), greater<int>());
}
