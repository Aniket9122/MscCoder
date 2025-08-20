#include <iostream>
#include <vector>

int max_fill(const std::vector<std::vector<int>>& grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();

    // create a vector to store the maximum amount of water that can be filled in each well
    std::vector<int> max_water(rows);

    // initialize the vector with the capacity of the buckets
    for (int i = 0; i < rows; ++i) {
        max_water[i] = capacity;
    }

    // iterate through each row and column, starting from the bottom right corner
    for (int i = rows - 1; i >= 0; --i) {
        for (int j = cols - 1; j >= 0; --j) {
            // if the current well is empty, skip it
            if (!grid[i][j]) continue;

            // check if the current well can be filled completely with water from its bucket
            if (max_water[i] - grid[i][j] >= 0) {
                max_water[i] -= grid[i][j];
            } else {
                // otherwise, reduce the amount of water that can be filled in the well by the capacity of the bucket
                max_water[i] = 0;
            }
        }
    }

    // return the number of times the buckets need to be lowered
    int count = 0;
    for (int i = 0; i < rows; ++i) {
        if (max_water[i] > 0) {
            ++count;
        }
    }
    return count;
}