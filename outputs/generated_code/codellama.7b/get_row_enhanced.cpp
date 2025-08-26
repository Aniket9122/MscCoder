#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    // Initialize the result vector
    vector<vector<int>> result;

    // Iterate through the rows of the input list
    for (int i = 0; i < lst.size(); i++) {
        // Check if the current row contains the target value
        if (find(lst[i].begin(), lst[i].end(), x) != lst[i].end()) {
            // If it does, add it to the result vector
            result.push_back({static_cast<int>(i), static_cast<int>(distance(lst[i].begin(), find(lst[i].begin(), lst[i].end(), x)))});
        }
    }

    // Sort the result vector by row first and then by column in descending order
    sort(result.begin(), result.end(), [](const vector<int> &a, const vector<int> &b) {
        return a[0] < b[0] || (a[0] == b[0] && a[1] > b[1]);
    });

    return result;
}