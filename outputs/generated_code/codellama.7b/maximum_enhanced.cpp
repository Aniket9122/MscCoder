#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> maximum(const vector<int>& arr, int k) {
    // sort the array in descending order
    vector<int> result(arr.begin(), arr.end());
    sort(result.begin(), result.end(), greater<int>());

    // extract the top k elements from the sorted array
    return vector<int>(result.begin(), result.begin() + k);
}
