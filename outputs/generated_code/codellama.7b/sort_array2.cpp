#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// A utility function to check if the two vectors are equal
bool issame(const vector<int>& v1, const vector<int>& v2) {
    return equal(v1.begin(), v1.end(), v2.begin());
}

// The main function that sorts the array and returns a copy of it
vector<int> sort_array(const vector<int>& arr) {
    // Create a copy of the given array
    vector<int> sortedArr = arr;

    // Sort the copy based on the sum of first and last element
    sort(sortedArr.begin(), sortedArr.end(), [](int a, int b) {
        return (a + sortedArr[sortedArr.size() - 1]) % 2 == 0 ? a < b : a > b;
    });

    return sortedArr;
}
