#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return equal(a.begin(), a.end(), b.begin());
}

vector<int> minPath(const vector<vector<int>>& grid, int k) {
    int m = grid.size();
    int n = grid[0].size();

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
                distances[row][col] = min(left, min(right, min(up, down)));
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

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
bool issame(vector<int> a,vector<int>b){
    if (a.size()!=b.size()) return false;
    for (int i=0;i<a.size();i++)
    {
    if (a[i]!=b[i]) return false;
    }
    return true;
}
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

    if((issame(minPath({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, 3) , {1, 2, 1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{5, 9, 3}, {4, 1, 6}, {7, 8, 2}}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}}, 4) , {1, 2, 1, 2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{6, 4, 13, 10}, {5, 7, 12, 1}, {3, 16, 11, 15}, {8, 14, 9, 2}}, 7) , {1, 10, 1, 10, 1, 10, 1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{8, 14, 9, 2}, {6, 4, 13, 15}, {5, 7, 1, 12}, {3, 10, 11, 16}}, 5) , {1, 7, 1, 7, 1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{11, 8, 7, 2}, {5, 16, 14, 4}, {9, 3, 15, 6}, {12, 13, 10, 1}}, 9) , {1, 6, 1, 6, 1, 6, 1, 6, 1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{12, 13, 10, 1}, {9, 3, 15, 6}, {5, 16, 14, 4}, {11, 8, 7, 2}}, 12) , {1, 6, 1, 6, 1, 6, 1, 6, 1, 6, 1, 6}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2, 7, 4}, {3, 1, 5}, {6, 8, 9}}, 8) , {1, 3, 1, 3, 1, 3, 1, 3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{6, 1, 5}, {3, 8, 9}, {2, 7, 4}}, 8) , {1, 5, 1, 5, 1, 5, 1, 5}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1, 2}, {3, 4}}, 10) , {1, 2, 1, 2, 1, 2, 1, 2, 1, 2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1, 3}, {3, 2}}, 10) , {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3},{4,5,6},{7,8,9}}, 3) , {1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{5,9,3},{4,1,6},{7,8,2}}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}}, 4) , {1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{6,4,13,10},{5,7,12,1},{3,16,11,15},{8,14,9,2}}, 7) , {1,10,1,10,1,10,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{8,14,9,2},{6,4,13,15},{5,7,1,12},{3,10,11,16}}, 5) , {1,7,1,7,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{11,8,7,2},{5,16,14,4},{9,3,15,6},{12,13,10,1}}, 9) , {1,6,1,6,1,6,1,6,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{12,13,10,1},{9,3,15,6},{5,16,14,4},{11,8,7,2}}, 12) , {1,6,1,6,1,6,1,6,1,6,1,6}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,7,4},{3,1,5},{6,8,9}}, 8) , {1,3,1,3,1,3,1,3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{6,1,5},{3,8,9},{2,7,4}}, 8) , {1,5,1,5,1,5,1,5}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 10) , {1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3},{4,5,6},{7,8,9}}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3},{4,5,6},{7,8,9}}, 9) , {1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{9,8,7},{6,5,4},{3,2,1}}, 3) , {1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,3,4},{5,6,7},{8,9,1}}, 5) , {1,7,1,7,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{5,4,7},{2,1,8},{3,6,9}}, 4) , {1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3},{4,5,6},{7,8,9}}, 5) , {1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,5,3},{4,2,6},{7,8,9}}, 4) , {1,4,1,4}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,4,7},{2,5,8},{3,6,9}}, 6) , {1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3},{4,5,6},{7,8,9}}, 15) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,5,3},{4,2,6},{7,8,9}}, 2) , {1,4}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,3,4},{5,6,7},{8,9,1}}, 13) , {1,7,1,7,1,7,1,7,1,7,1,7,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3},{4,5,6},{7,8,9}}, 6) , {1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,3,4},{5,6,7},{8,9,1}}, 4) , {1,7,1,7}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,4,7},{2,5,8},{3,6,9}}, 5) , {1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,4,7},{2,5,8},{3,6,9}}, 7) , {1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,3,4},{5,6,7},{8,9,1}}, 18) , {1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,4,7},{2,5,8},{3,6,9}}, 9) , {1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3},{4,5,6},{7,8,9}}, 10) , {1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,5,3},{4,2,6},{7,8,9}}, 3) , {1,4,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{5,4,7},{2,1,8},{3,6,9}}, 12) , {1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,3,4},{5,6,7},{8,9,1}}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,4,7},{2,5,8},{3,6,9}}, 20) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,4,7},{2,5,8},{3,6,9}}, 19) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3},{4,5,6},{7,8,9}}, 20) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,3,4},{5,6,7},{8,9,1}}, 17) , {1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,4,7},{2,5,8},{3,6,9}}, 17) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,3,4},{5,6,7},{8,9,1}}, 3) , {1,7,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,3,4},{5,6,7},{8,9,1}}, 6) , {1,7,1,7,1,7}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,4,7},{2,5,8},{3,6,9}}, 13) , {1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,4,7},{2,5,8},{3,6,9}}, 14) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,3,4},{5,6,7},{8,9,1}}, 2) , {1,7}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,4,7},{2,5,8},{3,6,9}}, 21) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,3,4},{5,6,7},{8,9,1}}, 12) , {1,7,1,7,1,7,1,7,1,7,1,7}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{5,4,7},{2,1,8},{3,6,9}}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,3,4},{5,6,7},{8,9,1}}, 15) , {1,7,1,7,1,7,1,7,1,7,1,7,1,7,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 16) , {1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,5,9,13},{2,6,10,14},{3,7,11,15},{4,8,12,16}}, 16) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,7,4},{3,1,5},{6,8,9}}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 5) , {1,3,1,3,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 10) , {1,4,1,4,1,4,1,4,1,4}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}, 20) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 10) , {1,5,1,5,1,5,1,5,1,5}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 2) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}, 9) , {1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 3) , {1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 8) , {1,3,1,3,1,3,1,3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 11) , {1,4,1,4,1,4,1,4,1,4,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 24) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 11) , {1,5,1,5,1,5,1,5,1,5,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 6) , {1,3,1,3,1,3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 4) , {1,5,1,5}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 10) , {1,3,1,3,1,3,1,3,1,3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 9) , {1,3,1,3,1,3,1,3,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 15) , {1,3,1,3,1,3,1,3,1,3,1,3,1,3,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 18) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 14) , {1,6,1,6,1,6,1,6,1,6,1,6,1,6}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 5) , {1,5,1,5,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 23) , {1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 6) , {1,4,1,4,1,4}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}, 8) , {1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 9) , {1,4,1,4,1,4,1,4,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 15) , {1,6,1,6,1,6,1,6,1,6,1,6,1,6,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 18) , {1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 9) , {1,6,1,6,1,6,1,6,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 4) , {1,4,1,4}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3},{4,5,6},{7,8,9}}, 21) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 17) , {1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 25) , {1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 16) , {1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}, 7) , {1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 19) , {1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 3) , {1,3,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 21) , {1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 5) , {1,4,1,4,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 9) , {1,5,1,5,1,5,1,5,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 14) , {1,3,1,3,1,3,1,3,1,3,1,3,1,3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 7) , {1,4,1,4,1,4,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 11) , {1,3,1,3,1,3,1,3,1,3,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}, 2) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}, 22) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 25) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 7) , {1,3,1,3,1,3,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 17) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 12) , {1,4,1,4,1,4,1,4,1,4,1,4}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,7,4},{3,1,5},{6,8,9}}, 20) , {1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 17) , {1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 2) , {1,5}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}, 13) , {1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 16) , {1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 24) , {1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 19) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 13) , {1,5,1,5,1,5,1,5,1,5,1,5,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 13) , {1,3,1,3,1,3,1,3,1,3,1,3,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 24) , {1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,7,4},{3,1,5},{6,8,9}}, 9) , {1,3,1,3,1,3,1,3,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,5,9,13},{2,6,10,14},{3,7,11,15},{4,8,12,16}}, 22) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 12) , {1,6,1,6,1,6,1,6,1,6,1,6}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 16) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,7,4},{3,1,5},{6,8,9}}, 19) , {1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 10) , {1,6,1,6,1,6,1,6,1,6}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3},{4,5,6},{7,8,9}}, 4) , {1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 3) , {1,5,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 22) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 22) , {1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 24) , {1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 23) , {1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 23) , {1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 22) , {1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3},{4,5,6},{7,8,9}}, 19) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 5) , {1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}, 10) , {1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3},{4,5,6},{7,8,9}}, 12) , {1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 8) , {1,4,1,4,1,4,1,4}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3},{4,5,6},{7,8,9}}, 25) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,7,4},{3,1,5},{6,8,9}}, 18) , {1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}, 23) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 11) , {1,6,1,6,1,6,1,6,1,6,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 2) , {1,6}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 12) , {1,5,1,5,1,5,1,5,1,5,1,5}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 7) , {1,6,1,6,1,6,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3},{4,5,6},{7,8,9}}, 11) , {1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 18) , {1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,5,9,13},{2,6,10,14},{3,7,11,15},{4,8,12,16}}, 8) , {1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3},{4,5,6},{7,8,9}}, 18) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 21) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 21) , {1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 24) , {1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,5,9,13},{2,6,10,14},{3,7,11,15},{4,8,12,16}}, 2) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 2) , {1,4}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 12) , {1,3,1,3,1,3,1,3,1,3,1,3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 8) , {1,6,1,6,1,6,1,6}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 21) , {1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3},{4,5,6},{7,8,9}}, 16) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 19) , {1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 4) , {1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}, 16) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 7) , {1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 4) , {1,3,1,3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 19) , {1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,5,9,13},{2,6,10,14},{3,7,11,15},{4,8,12,16}}, 17) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 6) , {1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 18) , {1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 6) , {1,5,1,5,1,5}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 23) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 14) , {1,5,1,5,1,5,1,5,1,5,1,5,1,5}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 18) , {1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,5,9,13},{2,6,10,14},{3,7,11,15},{4,8,12,16}}, 9) , {1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 7) , {1,5,1,5,1,5,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 23) , {1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 8) , {1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 17) , {1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 22) , {1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 20) , {1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,5,9,13},{2,6,10,14},{3,7,11,15},{4,8,12,16}}, 15) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}, 14) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,5,9,13},{2,6,10,14},{3,7,11,15},{4,8,12,16}}, 14) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 8) , {1,5,1,5,1,5,1,5}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 11) , {1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,5,9,13},{2,6,10,14},{3,7,11,15},{4,8,12,16}}, 3) , {1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 2) , {1,3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 6) , {1,6,1,6,1,6}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 15) , {1,5,1,5,1,5,1,5,1,5,1,5,1,5,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 22) , {1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 12) , {1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 14) , {1,4,1,4,1,4,1,4,1,4,1,4,1,4}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 9) , {1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}, 21) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2},{3,4}}, 20) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,7,14,1},{15,9,8,5},{12,6,2,16},{13,11,3,4}}, 20) , {1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,7,4},{3,1,5},{6,8,9}}, 11) , {1,3,1,3,1,3,1,3,1,3,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,5,9,13},{2,6,10,14},{3,7,11,15},{4,8,12,16}}, 4) , {1,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,5,9,13},{2,6,10,14},{3,7,11,15},{4,8,12,16}}, 11) , {1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,5,9,13},{2,6,10,14},{3,7,11,15},{4,8,12,16}}, 13) , {1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,7,4},{3,1,5},{6,8,9}}, 23) , {1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,7,4},{3,1,5},{6,8,9}}, 4) , {1,3,1,3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,6,13,14},{9,8,7,16},{12,10,2,11},{5,4,3,15}}, 25) , {1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,3,5,7},{9,11,13,15},{2,4,6,8},{10,12,14,16}}, 20) , {1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 20) , {1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{2,7,4},{3,1,5},{6,8,9}}, 14) , {1,3,1,3,1,3,1,3,1,3,1,3,1,3}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{10,5,20,14,16},{7,11,12,17,9},{13,19,1,15,8},{3,18,4,6,2},{22,21,23,24,25}}, 3) , {1,4,1}))){ tests_passed++; } total_tests++;

    if((issame(minPath({{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}}, 17) , {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


