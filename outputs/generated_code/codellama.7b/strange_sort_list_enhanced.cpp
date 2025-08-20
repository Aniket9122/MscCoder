#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if two vectors are equal
bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

// Function to sort a vector in a strange order
vector<int> strange_sort_list(const vector<int>& lst) {
    // Create an empty result vector
    vector<int> result;

    // Find the minimum and maximum values in the list
    int min_val = *min_element(lst.begin(), lst.end());
    int max_val = *max_element(lst.begin(), lst.end());

    // Add the minimum value to the result vector
    result.push_back(min_val);

    // If the maximum value is not the same as the minimum value, add it to the result vector
    if (max_val != min_val) {
        result.push_back(max_val);
    }

    // Iterate through the list and add each element that is not the maximum or minimum value to the result vector
    for (int i = 0; i < lst.size(); ++i) {
        if (lst[i] != max_val && lst[i] != min_val) {
            result.push_back(lst[i]);
        }
    }

    // Return the sorted vector
    return result;
}
