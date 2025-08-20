#include <iostream>
#include <vector>

int max_fill(const std::vector<std::vector<int>>& grid, int capacity) {
    // Check if the capacity is greater than the amount of water in the well
    if (capacity > grid[0][0]) {
        // If the capacity is greater, then the well can be filled completely with water from its bucket
        return 0;
    } else {
        // Otherwise, reduce the amount of water that can be filled in the well by the capacity of the bucket
        return grid[0][0] - capacity;
    }
}