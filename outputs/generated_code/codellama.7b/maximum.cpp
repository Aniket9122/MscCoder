#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;

    // sort the array in descending order
    sort(arr.begin(), arr.end(), greater<int>());

    // extract the top k elements from the sorted array
    for (int i = 0; i < k; i++) {
        result.push_back(arr[i]);
    }

    return result;
}
