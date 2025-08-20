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

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

    if((max_fill({{0,0,1,0}, {0,1,0,0}, {1,1,1,1}}, 1) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1}, {0,0,0,0}, {1,1,1,1}, {0,1,1,1}}, 2) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0}, {0,0,0}}, 5) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1}, {1,1,1,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{0,1,0,0},{1,1,1,1}}, 1) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,0,0},{1,1,1,1},{0,1,1,1}}, 2) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,0}}, 5) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1}}, 9) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,1},{0,1,1,1},{0,0,0,0},{1,0,1,1}}, 2) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1},{1,0,1},{1,1,1},{1,1,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,0},{0,0,0},{0,0,0}}, 1) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0,1},{1,0,0,0},{1,1,1,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,1,0},{0,0,1}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,1,0},{0,0,1}}, 1) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1},{1,1,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{0,0,1,0},{1,1,1,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0},{0,0,0,0}}, 1) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,1},{0,1,1,0},{1,0,0,1}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{0,0,1,0},{1,1,1,1},{0,0,1,0}}, 2) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0,1},{1,0,0,0},{1,1,1,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,1,0},{0,0,1},{1,0,0}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}}, 1) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0,1},{1,0,0,0}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,1,0},{0,0,1},{1,0,0}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1},{1,0,1},{1,1,1},{1,1,1}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0}}, 1) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0},{0,0,1},{1,0,0}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,0},{0,0,0},{0,0,0}}, 2) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0},{0,0,1},{1,0,0}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0},{0,0,1}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0},{0,0,1},{1,0,0}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0},{0,1,0},{0,0,1},{1,0,0}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{0,1,1,0},{0,1,1,0},{1,1,1,1},{0,1,1,0}}, 2) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1}}, 2) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1},{1,0,1},{1,1,1},{1,1,1},{1,1,1},{1,1,1}}, 4) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,1,0}}, 1) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{0,0,1,0},{1,1,1,1},{0,0,1,0}}, 1) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{0,0,1,0},{1,1,1,1}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1},{0,0,0},{0,0,0},{0,0,0}}, 1) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,0},{0,0,0},{0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,1,0},{0,0,1},{1,0,0}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1},{1,0,1},{1,1,1},{1,1,1},{1,1,1},{1,1,1}}, 1) == 17)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0,1},{1,0,0,0}}, 1) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0},{0,0,1},{1,0,0}}, 1) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,1,0},{0,0,1},{1,0,0}}, 1) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{0,0,1,0},{1,1,1,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1},{1,0,1},{1,1,1}}, 1) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1},{1,1,1}}, 1) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0}}, 2) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0},{1,0,0}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0},{1,0,0},{0,0,1},{1,0,0},{0,1,0}}, 2) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1}}, 4) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{0,0,1,0},{1,1,1,1},{0,0,1,0}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0}}, 5) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,1},{0,1,1,1},{0,0,0,0}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{1,1,1,1}}, 6) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,0},{0,0,0},{0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,1,0},{0,0,1},{1,0,0},{1,0,0}}, 1) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0,1},{1,0,0,0},{1,1,1,1}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1},{1,1,1}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{0,0,1,0},{1,1,1,1},{0,0,1,0},{0,0,1,0}}, 3) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{1,1,0},{0,0,1},{1,0,0}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1},{1,1,1},{1,1,1}}, 2) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0},{0,1,0},{0,0,1},{1,0,0}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1},{1,0,1},{1,1,1},{1,1,1}}, 1) == 11)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0},{0,0,0,0}}, 2) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0}}, 6) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0},{0,0,0,0}}, 6) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,1,0},{0,0,1},{1,0,0}}, 5) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0},{0,0,0,0}}, 5) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,1,0},{0,0,1},{1,0,0},{1,0,0},{1,0,0}}, 3) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0}}, 7) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,1},{0,1,1,1},{0,0,0,0},{1,0,0,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0},{1,0},{1,0}}, 6) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{1,0,0}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0},{0,0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,1},{0,0,0,0},{1,0,0,1}}, 2) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1}}, 7) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,1},{0,1,1,1},{0,0,0,0},{0,1,1,1}}, 2) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{1,0,0,0}}, 1) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1},{0,1,1},{1,0,1},{1,1,1},{1,1,1},{0,1,1},{1,1,1}}, 4) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,1},{0,0,0,0},{1,0,0,1}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0,1},{1,0,0,0}}, 2) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0}}, 1) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0}}, 6) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,1,0},{1,0,0}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0}}, 6) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,1},{0,0,0,0},{1,0,0,1}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,0},{0,1,1,0},{0,1,1,0},{1,0,1,0},{1,1,1,1},{0,1,1,0}}, 2) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0},{0,0,0,0},{0,0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0},{0,1,0},{0,1,0},{0,0,1},{0,1,0}}, 7) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1}}, 7) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0},{0},{0}}, 6) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,1},{0,1,1,1},{0,0,0,0},{1,0,1,1},{1,0,1,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1}}, 6) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0},{0},{0},{0}}, 6) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1}}, 1) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{0,1,1,0},{0,1,1,0},{1,1,1,1},{0,1,1,0},{0,1,1,0}}, 2) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{1,1,1,1}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,0},{0,1,1,0},{0,1,1,0},{1,0,1,0},{1,1,1,1},{0,1,1,0}}, 1) == 14)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0},{0,0,0,0},{0,0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,1,1,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{1,1,0,0}}, 1) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,1},{1,1,1}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1},{0,0,0,0}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,1,0},{0,0,1},{1,1,1}}, 2) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{1,1,1,1,1}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}}, 1) == 16)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,1,0,1}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1}}, 2) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{1,1,1,1,1},{0,0,0,0,0}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 2) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1},{0,0,0,0}}, 1) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}}, 1) == 20)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,1,1,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{0,0,1,1},{0,0,0,0}}, 1) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1}}, 1) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{1,1,1,1,1}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{1,1,1,1,1},{1,1,1,1,1},{0,0,0,0,0}}, 2) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1}}, 1) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1},{0,0,0,0}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1},{0,0,1,1},{0,0,0,0}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,0},{0,0,0,1}}, 1) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 4) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1}}, 4) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 4) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{0,0,1,1}}, 1) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{1,1,1,1,1},{0,0,0,0,0},{0,0,0,0,0}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1},{0,0,1,1},{0,0,0,0}}, 2) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1}}, 1) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,1},{0,0,0,0,1},{1,1,1,1,1},{1,1,1,1,1},{0,0,0,0,1}}, 2) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,0},{0,0,0,1},{0,0,0,1}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1},{1,1,1,1,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,0,0}}, 1) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{1,1,1,1,1},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 1) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 2) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{1,1,1,1}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,0},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 4) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{1,1,1,1,1},{0,0,0,0,0},{0,0,0,0,0}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,1,1},{0,0,0,0}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,1,1,1},{1,1,1,1}}, 3) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{1,1,1,1,1},{0,0,0,0,0}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,0,0}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1}}, 3) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,1},{0,0,0,0,1},{1,1,1,1,1},{1,1,1,1,1},{0,0,0,0,1}}, 4) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,1,1,1},{1,1,1,1},{0,1,1,0}}, 3) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1}}, 4) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,1},{1,1,1}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{1,1,0,0}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,0},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{1,1,0,0}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,0},{1,1,1,1},{1,1,1,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 1) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1}}, 1) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,1,1,1},{1,1,1,1},{0,1,1,0}}, 4) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1},{1,1,1,1}}, 3) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1}}, 1) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 1) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1}}, 1) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1}}, 2) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,1,1}}, 1) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 2) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,1,1}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 5) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,1,1},{0,0,1,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{1,1,0,0},{0,0,1,1}}, 1) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{1,1,1,1}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,0},{1,1,1,1}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1},{0,0,1,1}}, 1) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1}}, 2) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,0,0,1}}, 3) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1},{0,0,0,0},{0,0,1,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,0,0,1}}, 4) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1}}, 5) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,1,1,1},{1,0,0,0},{1,1,1,1}}, 2) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{1,1,1,1,1},{1,1,1,1,1}}, 2) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}}, 1) == 24)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,1,1}}, 3) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1}}, 4) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1}}, 2) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{1,1,1,1},{1,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 3) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,1},{1,1,1,1,1},{1,1,1,1,1}}, 4) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 1) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,0,0,1}}, 4) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1},{0,0,0,0}}, 5) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1},{0,0,1,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,1},{1,1,1},{0,0,0}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1}}, 2) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 1) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,1,0,1}}, 2) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1},{1,1,1},{1,1,1}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1},{0,0,0,0},{1,1,1,1}}, 1) == 12)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1}}, 6) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,1},{0,0,0,0,1},{1,1,1,1,1},{1,1,1,1,1},{0,0,0,0,1}}, 3) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,0,0},{0,0,1,1}}, 1) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{1,1,1,1,1}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1}}, 2) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{1,1,1,1,1}}, 6) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,1,0},{0,0,1},{1,1,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1},{0,0,0,0,0},{0,0,0,0,0}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1}}, 5) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}}, 3) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1},{0,1,1,1}}, 4) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,0,0,1}}, 4) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,0,0,1}}, 1) == 11)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,1,1,1},{1,1,1,1},{0,1,1,0}}, 1) == 13)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,1},{1,1,1},{1,1,1}}, 2) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,0,0}}, 2) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1}}, 1) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1}}, 5) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,1,0,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1}}, 2) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}}, 2) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1},{0,0,0,0,0},{0,0,0,0,0}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1},{1,1,1,1}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1}}, 6) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,1,1,1},{0,1,1,0}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,1},{0,0,0,0,1},{1,1,1,1,1},{1,1,1,1,1},{0,0,0,0,1}}, 7) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1}}, 7) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0}}, 2) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,1,1,1}}, 7) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 5) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1,0},{1,1,1,1,1},{0,0,0,1,0},{1,1,1,1,1},{0,0,0,1,0}}, 2) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,1,0,1}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{1,1,1,1,1},{0,0,0,0,0},{0,0,0,0,0}}, 7) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,1,1},{0,0,0,1},{0,1,1,1},{0,0,1,1}}, 3) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,1,1},{0,0,1,1},{0,0,1,1}}, 2) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1}}, 5) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{0,0,1,1},{0,0,0,0}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,0,0}}, 5) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,1,1,1},{0,1,1,1},{0,1,1,1}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1}}, 4) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,0,0,1}}, 1) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{1,0,0,0}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1,1},{0,0,1,1,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,0,0}}, 1) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1}}, 7) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1}}, 3) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1}}, 5) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0,1,1},{0,1,0,1,1},{0,1,0,1,1},{0,1,0,1,1}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,1,1},{0,0,0,1},{0,1,1,1},{0,0,1,1}}, 6) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,0}}, 1) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1}}, 1) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}}, 3) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 1) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1}}, 3) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1}}, 5) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{1,1,1,1}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,1,1},{0,0,0,0}}, 7) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}}, 5) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0,1},{1,0,0,0,1}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,0,0},{1,1,1,1}}, 1) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,0,0,1}}, 2) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,1,1},{0,0,1,1},{0,0,1,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1},{1,1,1,1,1}}, 6) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1},{1,1,1,1}}, 2) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,0,0,1}}, 1) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,1,1,1},{1,1,1,1},{0,1,1,0}}, 5) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,0,0}}, 2) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,0,1},{0,0,0,1}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{0,0,1,0},{0,0,1,1},{0,0,0,0}}, 7) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0,1,0,1},{0,1,0,1,0,1},{0,1,0,1,0,1},{0,1,0,1,0,1},{0,1,0,1,0,1}}, 5) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{1,1,1,1}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,1,1}}, 5) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 6) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,1,1},{0,0,0,1},{0,1,1,1},{0,0,1,1},{0,0,0,1}}, 3) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,0,0},{1,1,1,1},{0,0,1,1},{0,0,0,0}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{1,0,0,0}}, 5) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{0,0,0,0},{1,0,1,1},{0,0,0,0}}, 6) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,0,0,1}}, 5) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1}}, 5) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,0,1},{1,1,0,1},{1,1,0,1},{1,1,0,1},{1,1,0,1},{1,1,0,1}}, 3) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,1,1},{0,0,1,1},{0,0,1,1}}, 6) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,0},{0,1,1,0},{1,0,1,1}}, 5) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1,1}}, 2) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,1,1,1},{1,1,1,1},{0,1,1,0}}, 2) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,1,1}}, 3) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1},{1,0,1},{1,0,1},{1,0,1},{1,0,1},{1,0,1}}, 3) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,0,0,1}}, 4) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0},{0,0,0,0,0,0}}, 2) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,0},{0,0,0,1},{0,1,1,1}}, 1) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1}}, 6) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1}}, 6) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}}, 2) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{1,1,0,0}}, 6) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0}}, 2) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1}}, 5) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,1,1},{0,0,0,1},{0,1,1,1},{0,0,1,1},{0,0,0,1},{0,0,0,1}}, 3) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}}, 3) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,1,1}}, 2) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}}, 3) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1}}, 6) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{1,1,1,1,1},{0,0,0,0,0},{0,0,0,0,0}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1},{0,1},{0,1},{0,1},{0,1},{0,1},{0,1}}, 3) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1},{1,0,1},{1,0,1},{1,0,1},{1,0,1},{1,0,1},{1,0,1}}, 3) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1},{0,1,1,1}}, 5) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,0,1},{0,0,0,1},{0,0,0,1}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{1,1,1,1},{1,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 6) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1}}, 6) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,1,1},{0,0,1,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,1},{0,0,0}}, 3) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,1,0,1}}, 1) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1},{1,1,1,1}}, 1) == 12)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,0}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,0},{0,1,1,0},{1,0,1,1}}, 7) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,1,1,1}}, 4) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,0},{0,0,0,1},{0,0,0,1},{0,1,1,0}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1},{1,0,1},{1,0,1},{1,0,1},{1,0,1},{1,0,1}}, 4) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1,1},{0,0,1,1,1}}, 6) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1},{1,0,1},{1,0,1},{1,0,1},{1,0,1},{1,0,1},{1,0,1}}, 4) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,1,1},{0,0,1,1},{0,1,1,1},{0,0,1,1}}, 3) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}}, 2) == 12)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,0},{0,0,0,0}}, 1) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,0},{0,0,0,0},{0,0,0,0}}, 1) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,1,1},{0,0,1,1}}, 5) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,0},{1,1,1,1}}, 7) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,0},{0,0,0,0}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,0,0},{1,1,1,1},{0,0,1,1}}, 1) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1},{0,0,1,1}}, 6) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1},{1,1,1,1,1},{0,0,0,0,0}}, 2) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1},{1,1,1},{1,1,1},{1,1,1}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,1},{0,0,0,0,1},{1,1,1,1,1},{1,1,1,1,1},{0,0,0,0,1}}, 1) == 13)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 2) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,0},{0,0,0,1},{0,0,0,1},{0,1,1,0}}, 3) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{1,1,0,0},{0,0,1,1},{0,0,1,1}}, 1) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,1,1},{0,0,1,1},{0,0,0,0}}, 7) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{1,1,1,1,1},{1,1,1,1,1},{0,0,0,0,0}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,0,0,1}}, 2) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{1,1,1,1},{1,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 6) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1}}, 2) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1}}, 3) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,0},{0,0,0,0},{0,0,0,0}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,0,0},{1,1,1,1},{0,0,1,1},{0,0,0,0}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,1},{0,0,0,0,1}}, 2) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1},{0,0,0,0,0},{0,0,0,0,0}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,0,0},{0,0,1,1}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1}}, 5) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,1,0,1}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 4) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,1},{1,1,1},{0,0,0}}, 7) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{1,0,0,0}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{1,1,0,0},{0,0,1,1},{0,0,1,1}}, 2) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{1,1,1,1,1},{0,0,0,0,0},{0,0,0,0,0},{1,1,1,1,1}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1}}, 6) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{1,1,1,1},{0,0,0,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 7) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{0,0,1,1},{0,0,0,0},{1,1,1,1}}, 1) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{0,0,1,1}}, 6) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1}}, 1) == 12)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1}}, 6) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,1},{1,1,1},{0,0,0},{0,0,0}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1}}, 3) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{1,0,0,0}}, 7) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{1,1,0,0}}, 7) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1,1}}, 3) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,0},{0,0,0,0},{0,0,0,0}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1},{0,0,0,0,0},{0,0,0,0,0}}, 1) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,0},{0,0,0,1}}, 5) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1},{0,1,1,1}}, 6) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1}}, 6) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,0,0},{0,0,1,1}}, 7) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1},{0,0,0,1}}, 4) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,0}}, 4) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,1,1,1}}, 1) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1},{1,0,1},{1,0,1},{1,0,1},{1,0,1},{1,0,1},{1,0,1},{1,0,1}}, 4) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1,0}}, 2) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{0,0,1,1},{0,0,0,0},{1,1,1,1}}, 6) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1}}, 5) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{1,1,0,0}}, 5) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,1,1,1},{0,0,0,1}}, 1) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1}}, 7) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1,0},{0,0,1,1,0}}, 5) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,1,1,1},{1,0,0,0}}, 2) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1}}, 7) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1}}, 6) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,0},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 4) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,1,1},{0,0,0,1},{0,1,1,1},{0,0,1,1},{0,0,0,1}}, 6) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,1,1},{0,0,1,1},{0,0,1,1},{0,0,1,1}}, 3) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{0,0,1,1},{1,1,1,1},{0,0,1,1},{1,0,1,1},{0,0,0,0}}, 2) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{1,1,1,1},{1,0,0,0},{1,1,1,1}}, 3) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0,1,0,1,0},{0,1,0,1,0,1,0},{0,1,0,1,0,1,0},{0,1,0,1,0,1,0},{0,1,0,1,0,1,0},{0,1,0,1,0,1,0}}, 4) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1}}, 5) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1},{0,1,1},{0,1,1},{0,1,1},{0,1,1},{0,1,1},{0,1,1},{0,1,1},{0,1,1}}, 3) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1,1}}, 3) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{0,0,0,1}}, 2) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,1,1},{0,0,1,1}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,0},{0,0,0,1},{0,0,0,1},{0,1,1,0}}, 7) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,1,1},{0,1,1,1},{0,0,1,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}}, 6) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1},{1,1,1},{1,1,1}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0}}, 7) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1}}, 1) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1},{1,0,1},{1,0,1},{1,0,1},{1,0,1},{1,0,1}}, 1) == 12)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,0,0},{0,0,1,1}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1},{0,1,1,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,0,0}}, 7) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1}}, 3) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{1,1,1,1}}, 5) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{1,1,1,1,1},{0,0,0,0,0}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,1,0,0},{0,1,1,1},{0,1,1,1},{1,1,0,0}}, 7) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1}}, 2) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,0,0,1},{1,0,0,1},{1,0,0,1},{0,0,1,1}}, 1) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1}}, 7) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1},{0,0,0,1}}, 2) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1}}, 6) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 7) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,0,0},{0,0,1,1}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1}}, 2) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,1,1,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,1},{1,1,1},{1,1,1}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1}}, 3) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1}}, 6) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1,1},{0,0,1,1,1}}, 7) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,0},{0,0,0,1},{0,1,1,1}}, 5) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1}}, 7) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1},{0,0,0,0,0},{0,0,0,0,0},{1,1,1,1,1}}, 1) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,0},{0,0,0,1}}, 6) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,0},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1,1},{1,1,1,1,1,1},{1,1,1,1,1,1},{1,1,1,1,1,1}}, 3) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{1,1,1,1},{1,1,1,1},{0,1,1,0}}, 1) == 11)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1}}, 1) == 18)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1},{0,1,1}}, 1) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1},{0,0,0,0}}, 6) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 5) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,1},{1,1,1,1,1},{1,1,1,1,1},{0,0,0,0,1}}, 1) == 12)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1}}, 5) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,0,1},{0,0,1,1},{0,0,0,0},{0,0,0,1}}, 6) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1}}, 2) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1}}, 5) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,1,0,1}}, 5) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,1,1,1},{1,1,1,1},{0,1,1,0},{0,1,1,0}}, 5) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{1,0,0,0}}, 6) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0}}, 2) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,0,0},{0,0,1,1},{0,0,1,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1}}, 1) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{1}}, 5) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,0},{0,0,0}}, 1) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,0},{0,1,0,1},{1,0,1,0},{0,1,0,1}}, 1) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{1}}, 10) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1},{1,1,1},{1,1,1}}, 1) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{1,1,1}}, 1) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0}}, 1) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,1,0,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,1,0,1}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,1,1,1}}, 1) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,1,0,1}}, 2) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0}}, 2) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0}}, 1) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,1,0,1}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0},{0,0,0,0,0,0}}, 1) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,0,1,1},{1,1,0,1}}, 2) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,0,0,1},{0,1,0,1}}, 1) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1}}, 1) == 12)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0}}, 1) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 1) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,1,0,1}}, 1) == 12)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 1) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1}}, 4) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{0,0,0,1}}, 1) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,0,1,1},{1,1,0,1}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,0,1,1},{1,1,0,1}}, 1) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1}}, 1) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,0,1,1},{1,1,0,1},{1,0,1,1}}, 2) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{1,1,1,1}}, 1) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{1,1,1,1},{1,0,0,0}}, 1) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1}}, 1) == 14)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 2) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1}}, 2) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,0,1},{0,0,0,1},{0,0,1,0},{0,0,1,0},{0,0,0,1},{0,0,0,1}}, 1) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,1},{1,1,1},{0,0,0}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{0,0,0,1},{1,0,0,0}}, 1) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,0,0}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,1,0},{0,0,1},{1,1,1},{1,1,1}}, 2) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1}}, 4) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1,1},{1,1,1,1,1,1}}, 2) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{0,0,0,1}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,1,0,1},{1,1,0,1}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,1},{1,1,1}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,0,0}}, 2) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,1,0,1},{1,0,1,1}}, 2) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1}}, 2) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,1},{1,1,1},{0,0,1},{0,0,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0,0,0,0},{1,0,0,0,0,0,0}}, 1) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1}}, 1) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{0,0,0,1},{0,0,0,1}}, 4) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0},{0,0,0,0},{0,0,0,0}}, 2) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,1,0},{0,0,1},{1,1,1},{1,0,0}}, 2) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{1,1,1},{0,0,0}}, 3) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,1,0,1}}, 1) == 13)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,0,1},{0,0,0,1},{0,0,1,0},{0,0,1,0},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 3) == 11)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,0,1}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,1,1,1}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1,1,1,1},{0,1,1,1,1,1,1}}, 2) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{0,0,0,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,0,0}}, 4) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1}}, 2) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{1,1,1,1}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{1,0,0},{1,0,0}}, 1) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,1,0},{0,0,1},{1,1,1},{1,1,1}}, 1) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1}}, 3) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1},{0,0,0,1}}, 4) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1}}, 1) == 15)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0}}, 1) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 2) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 3) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,0},{1,1,1,0}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{0,0,1,0},{1,1,1,1},{0,0,1,1},{0,0,0,0}}, 4) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,1,0,1}}, 4) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,1,0,1},{1,0,1,1}}, 2) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,0,1,1},{1,0,1,1},{1,1,0,1},{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,0,1,1}}, 1) == 28)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,1,0,1},{1,1,0,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{0,0,0,1},{0,0,0,1}}, 2) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,0},{1,1,0}}, 2) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1}}, 2) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,0,0}}, 1) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{0,0,0,1},{1,0,0,0}}, 4) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0}}, 2) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,0,0,0}}, 1) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,0,1},{0,0,0,1},{0,0,1,0},{0,0,1,0},{0,0,0,1}}, 1) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1},{0,0,0,1}}, 2) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}}, 5) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1},{0,0,0,1}}, 1) == 13)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0}}, 1) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,1,0,1},{1,1,0,1},{1,0,1,1},{0,1,1,1}}, 4) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1},{0,1,1,1},{0,1,1,1}}, 3) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1},{0,0,1}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1}}, 5) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,1,0},{0,0,1},{1,1,1}}, 1) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1}}, 4) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 4) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1}}, 1) == 11)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1}}, 3) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{0,0,0,1},{1,0,0,0},{0,0,0,1}}, 1) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1},{1,0,1,1}}, 1) == 18)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 3) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{0,0,0,1},{0,0,0,1},{1,0,0,0},{0,0,0,1}}, 2) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,0}}, 2) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,1,0},{0,0,1},{1,1,1},{1,1,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}}, 1) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0},{0,0,0,0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,1},{1,1,1},{0,0,1}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{0,1,1,0}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1},{0,0,0,1}}, 3) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,1,0,1},{1,0,1,1}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0,0,0,0}}, 1) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1}}, 4) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1}}, 2) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{1,1,1,1},{1,0,0,0},{1,1,1,1}}, 1) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,0,1,1},{1,1,0,1},{1,0,1,1},{1,0,1,1}}, 2) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,0,0,0}}, 4) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1},{0,0,0,0}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}}, 2) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 5) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,0,1,1},{1,1,0,1}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1}}, 5) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{1,1,0,0},{0,0,1,1},{1,1,0,0}}, 1) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1}}, 4) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1}}, 5) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0}}, 1) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,0,0}}, 5) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 2) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,1},{1,1,1},{0,0,0},{0,0,1}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0}}, 2) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}}, 5) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{0,0,1},{1,1,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{0,0,1,1}}, 3) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{1,1,0,0},{0,0,1,1},{1,1,0,0}}, 2) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0},{0,0,0,0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1,1},{1,1,1,1,1,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0}}, 5) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,1,0,1}}, 3) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{1,1,0,0},{0,0,1,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,0,1,1},{1,1,0,1},{1,0,1,1},{1,0,1,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1},{0,0,1}}, 5) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{1,0,0,0},{1,0,0,0},{1,0,0,0}}, 1) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}}, 2) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 2) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,1},{0,0,0},{0,0,1}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,0,1},{0,0,0,1},{0,0,1,0},{0,0,0,1}}, 1) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1}}, 6) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,0,1},{0,0,0,1},{0,0,1,0},{0,0,1,0},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 3) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,1,0,1},{1,0,1,1},{0,1,1,1}}, 4) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{0,0,1,0}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1}}, 6) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1}}, 1) == 12)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 6) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,0,0},{1,1,0,0}}, 1) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{1,1,0,0},{0,0,1,1},{0,0,1,1},{0,0,1,1}}, 2) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,0,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,1,0,1}}, 3) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 5) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,0},{1,1,1,1},{0,1,1,0}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{0,0,0,1},{0,0,0,1}}, 3) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0,0,0,0,0}}, 1) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}}, 2) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,1},{1,1,1},{1,1,1}}, 4) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 3) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{1,1,1}}, 4) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,0},{1,1,1,0},{1,1,1,0}}, 1) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0,1,0,0,0,0,0},{0,1,0,1,0,0,0,0,0},{0,1,0,1,0,0,0,0,0},{0,1,0,1,0,0,0,0,0},{0,1,0,1,0,0,0,0,0},{0,1,0,1,0,0,0,0,0}}, 4) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{1,1,1,1}}, 2) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1},{1,1,1,1,1}}, 2) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1}}, 1) == 15)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,0,1,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{1,1,1,1}}, 6) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0}}, 5) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{1,1,1}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,1,0,1}}, 6) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,0,0,1}}, 3) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1},{0,0,1,1},{1,1,0,0},{0,0,0,1}}, 2) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{1,1,1}}, 3) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1}}, 5) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{1,1,1},{0,0,0},{0,0,0}}, 3) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1}}, 2) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0}}, 5) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{0,0,0,1},{1,0,0,0}}, 3) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1,1,1,1},{0,1,1,1,1,1,1},{0,1,1,1,1,1,1}}, 2) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0}}, 2) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,0},{1,1,0},{1,1,0},{1,1,0}}, 1) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,0,1},{0,0,0,1},{0,0,1,0},{0,0,1,0},{0,0,0,1},{0,0,0,1}}, 1) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1},{0,0,0,1}}, 6) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 3) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,0,1},{0,0,0,1},{0,0,1,1},{0,0,1,1}}, 5) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 5) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}}, 6) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1},{0,0,1,1},{0,0,0,1}}, 2) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{1,1,1},{1,1,1},{1,0,0}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0},{0,0,0,0,0,0}}, 6) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,0,1,0,0,0,0,0},{0,1,0,1,0,0,0,0,0},{0,1,0,1,0,0,0,0,0},{0,1,0,1,0,0,0,0,0},{0,1,0,1,0,0,0,0,0},{0,1,0,1,0,0,0,0,0}}, 5) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,1,1,1},{0,0,0,1},{0,0,0,1},{1,0,0,0}}, 3) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,0,0,0},{1,1,0,0,0}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,0,0}}, 6) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{0,0,0,1},{1,0,0,0}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1}}, 2) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,1,1,0},{0,1,1,0}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 6) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1,1,1,1},{0,1,1,1,1,1,1},{0,1,1,1,1,1,1},{0,1,1,1,1,1,1}}, 2) == 12)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,0,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,1,0,1},{0,1,0,1}}, 3) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 6) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,0,0,1}}, 4) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1,1,1,1},{0,1,1,1,1,1,1},{0,1,1,1,1,1,1}}, 6) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1}}, 3) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,0},{1,1,0},{1,1,0},{1,1,0},{1,1,0}}, 1) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0}}, 5) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,0,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,1,0,1}}, 2) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1},{0,0,1},{0,0,1},{0,0,1}}, 5) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,0,1,1},{1,1,0,1},{1,0,1,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,0,0,0},{0,0,0,1}}, 1) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 1) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,1,1},{1,1,0,0},{0,1,1,1},{1,1,0,0}}, 2) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0},{0,0},{0,0},{0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,1},{0,0,1}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1,1,1,1},{0,1,1,1,1,1,1},{0,1,1,1,1,1,1}}, 1) == 18)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,1},{0,0,1}}, 1) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0}}, 6) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1,1,1,1},{0,1,1,1,1,1,1},{0,1,1,1,1,1,1},{0,1,1,1,1,1,1}}, 6) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,0,1,1},{1,1,0,1},{1,0,1,1},{1,0,1,1},{1,0,1,1}}, 3) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,0,1,1},{1,0,1,1}}, 2) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{0,0,0,1},{1,0,0,0}}, 5) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0},{1,0,0,0,0,0,0,0,0,0}}, 1) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0}}, 5) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0,0,0,0},{1,0,0,0,0,0,0},{1,0,0,0,0,0,0}}, 1) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1},{1,0,1,1},{1,1,0,1},{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,0,1,1}}, 1) == 25)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}}, 5) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1},{0,0,0,1},{0,1,1,1}}, 1) == 16)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,0,1},{0,0,0,1},{0,0,1,0},{0,0,1,0},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 1) == 11)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1,1,1,1},{0,1,1,1,1,1,1},{0,1,1,1,1,1,1}}, 8) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1,1,1,1},{0,1,1,1,1,1,1}}, 1) == 12)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,0},{1,1,0},{1,1,0}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1}}, 2) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,1,1,1}}, 3) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{1,1,1,1},{1,0,0,0},{1,1,1,1},{1,0,0,0}}, 1) == 11)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0}}, 5) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0,0}}, 3) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1}}, 8) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 6) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,1,0,1},{1,0,1,1},{0,1,1,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1,1,1,1,1},{0,1,1,1,1,1,1,1},{0,1,1,1,1,1,1,1},{0,1,1,1,1,1,1,1},{0,1,1,1,1,1,1,1}}, 6) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1},{1,0,1,1}}, 3) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,0,1,1},{1,1,0,1}}, 6) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}}, 1) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{0,0,0,1},{1,0,0,0},{0,0,0,1}}, 5) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1}}, 8) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,1,1,1},{0,0,0,1}}, 4) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1}}, 3) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 5) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1},{1,1,1},{0,0,0}}, 3) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,0,0},{1,1,0,0}}, 4) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,0},{1,1,1,1}}, 5) == 2)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,0,1,1}}, 3) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1}}, 5) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0}}, 6) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,0,0,0},{0,0,0,1},{1,0,0,0}}, 1) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1},{1,1},{1,1},{1,1},{1,1}}, 4) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,1,1},{0,0,0,1}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,0,1,1},{1,1,0,1},{1,0,1,1},{1,0,1,1}}, 1) == 15)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,1,0,1},{1,0,1,1}}, 8) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0}}, 8) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}}, 4) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{1,1,1,1}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{1,1,1,1},{0,0,1,1},{0,0,0,0},{1,1,1,1}}, 6) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0},{1,0,0},{1,0,0}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,0,1},{0,0,0,1},{0,0,1,0},{0,0,1,0},{0,0,0,1},{0,0,0,1}}, 2) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,1,0,1},{1,1,0,1},{1,0,1,1},{0,1,1,1}}, 5) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1},{0,1,1,1},{0,0,0,1}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 4) == 10)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0},{0,0,1},{1,1,1},{0,0,0}}, 1) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}}, 6) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0},{1,0},{1,0},{1,0},{1,0},{1,0}}, 1) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1}}, 1) == 4)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1}}, 1) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 6) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,0,1},{0,0,0,1},{0,1,0,1},{0,1,0,1},{0,1,0,1},{0,1,0,1}}, 3) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1},{0,0,0,1}}, 8) == 6)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,0},{1,1,1,1},{0,1,1,0},{0,1,1,0}}, 3) == 5)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{0,0,0,1},{0,0,0,1},{0,1,1,1},{0,1,1,1},{0,1,1,1},{0,1,1,1}}, 8) == 7)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,1},{0,0,1,1},{1,1,0,0}}, 2) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,0,0},{0,0,0,1},{1,0,0,0}}, 1) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0},{0,0,1,0},{0,0,1,0},{0,0,0,1},{0,0,0,1},{0,0,1,0},{0,0,1,0},{0,0,0,1},{0,0,0,1}}, 2) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,1,0,0}}, 2) == 1)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,1,1,1},{0,0,0,1}}, 5) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0}}, 9) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1}}, 6) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{1,1,1,1,1,1},{1,1,1,1,1,1},{1,1,1,1,1,1}}, 2) == 9)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}}, 1) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,1,1,1},{1,0,1,1},{1,0,1,1},{1,1,0,1},{0,1,1,1},{1,0,1,1},{1,0,1,1}}, 1) == 21)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1},{0,0,0,1}}, 4) == 8)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0},{0,0,0,0}}, 9) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{1,0,1,1},{1,1,0,1},{1,0,1,1}}, 6) == 3)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0},{0,0,0,0,0,0}}, 3) == 0)){ tests_passed++; } total_tests++;

    if((max_fill({{0,0,0,0,1},{0,0,0,0,1},{0,0,0,0,1}}, 2) == 3)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


