#include <iostream>
#include <vector>
using namespace std;

bool move_one_ball(vector<int> arr) {
    // Check if the vector is empty
    if (arr.empty()) return true;

    // Sort the vector in non-decreasing order
    sort(arr.begin(), arr.end());

    // Check if the vector is already sorted
    if (arr == vector<int>({1, 2, 3, 4, 5})) return true;

    // Initialize variables to keep track of the right shift operations
    int numRightShifts = 0;
    bool foundDuplicate = false;

    // Iterate through the vector and check for duplicates or non-decreasing order
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[i - 1]) {
            foundDuplicate = true;
            break;
        } else if (arr[i] < arr[i - 1]) {
            numRightShifts++;
        }
    }

    // If there are no duplicates and the vector is sorted, return true
    if (!foundDuplicate && numRightShifts > 0) {
        return true;
    }

    // Otherwise, return false
    return false;
}
