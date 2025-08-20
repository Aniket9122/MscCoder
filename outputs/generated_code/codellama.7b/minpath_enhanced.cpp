#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if two vectors are equal
bool issame(const vector<int>& a, const vector<int>& b) {
    return equal(a.begin(), a.end(), b.begin());
}

// Function to find the minimum path in a grid
vector<int> minPath(const vector<vector<int>>& grid, int k) {
    // Get the size of the grid
    const int m = grid.size();
    const int n = grid[0].size();

    // Initialize the distances array with infinite values
    vector<vector<int>> distances(m, vector<int>(n, INT_MAX));

    // Set the distance to 0 for the starting cell
    distances[0][0] = 0;

    // Loop until we have reached the kth step
    for (int i = 0; i < k; ++i) {
        // Loop through all cells in the grid
        for (int row = 0; row < m; ++row) {
            for (int col = 0; col < n; ++col) {
                // If the current cell is not the starting cell and the distance to it is infinite, skip it
                if (row != 0 || col != 0) {
                    if (distances[row][col] == INT_MAX) {
                        continue;
                    }
                }

                // Calculate the distances to the neighboring cells
                int left = (col - 1 >= 0) ? distances[row][col - 1] + 1 : INT_MAX;
                int right = (col + 1 < n) ? distances[row][col + 1] + 1 : INT_MAX;
                int up = (row - 1 >= 0) ? distances[row - 1][col] + 1 : INT_MAX;
                int down = (row + 1 < m) ? distances[row + 1][col] + 1 : INT_MAX;

                // Update the distance to the current cell with the minimum distance to any of its neighboring cells
                distances[row][col] = min({left, right, up, down});
            }
        }
    }

    // Return the vector of values that form the shortest path
    vector<int> result;
    for (int row = 0; row < m; ++row) {
        for (int col = 0; col < n; ++col) {
            if (distances[row][col] == k - 1) {
                result.push_back(grid[row][col]);
            }
        }
    }
    return result;
}
