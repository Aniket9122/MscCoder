#include <iostream>
#include <vector>

void intersperse(std::vector<int>& numbers, int delimeter) {
    for (int i = 0; i < numbers.size() - 1; i++) {
        numbers.insert(numbers.begin() + i + 1, delimeter);
    }
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

    if((issame(intersperse({}, 7), {}))){ tests_passed++; } total_tests++;

    
    if((issame(intersperse({5, 6, 3, 2}, 8),{5, 8, 6, 8, 3, 8, 2}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({2, 2, 2}, 2),{2, 2, 2, 2, 2}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({}, 7),{}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({5,6,3,2}, 8),{5,8,6,8,3,8,2}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({2,2,2}, 2),{2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,2,3}, 0),{1,0,2,0,3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({2,4,6,8}, 1),{2,1,4,1,6,1,8}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({9,9,9,9,9,9}, 7),{9,7,9,7,9,7,9,7,9,7,9}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({10}, 5),{10}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({5,7}, 2),{5,2,7}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,3,5,7}, 4),{1,4,3,4,5,4,7}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({2,3}, 1),{2,1,3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({5,10,15}, 0),{5,0,10,0,15}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({0,0,0}, 7),{0,7,0,7,0}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,9,5,6}, 3),{1,3,9,3,5,3,6}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({2,3}, 0),{2,0,3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({0,0,0}, 8),{0,8,0,8,0}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,2,3,2}, 0),{1,0,2,0,3,0,2}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({7}, 2),{7}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3}, 1),{3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({5,7}, 3),{5,3,7}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({5,7}, 5),{5,5,7}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({}, 2),{}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({9,9,9,9,9,9,9}, 7),{9,7,9,7,9,7,9,7,9,7,9,7,9}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({5,7}, 15),{5,15,7}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3}, 0),{3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,9,5,6,5}, 3),{1,3,9,3,5,3,6,3,5}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({2,2}, 1),{2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({0,0,0,-1}, 7),{0,7,0,7,0,7,-1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({7,9}, 15),{7,15,9}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({2,3,2,-46}, 0),{2,0,3,0,2,0,-46}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({}, 1),{}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3}, 7),{3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,1,1,1,1,1}, 0),{1,0,1,0,1,0,1,0,1,0,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-2,5,10,-5,2}, -8),{-2,-8,5,-8,10,-8,-5,-8,2}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,6,2,5,1,9}, 0),{3,0,6,0,2,0,5,0,1,0,9}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({7,3,6,8,4,2,1}, -1),{7,-1,3,-1,6,-1,8,-1,4,-1,2,-1,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({4,1,2,3}, 4),{4,4,1,4,2,4,3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,2,3,4}, 4),{1,4,2,4,3,4,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({4}, 4),{4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-1,-2,-3}, -4),{-1,-4,-2,-4,-3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,2,3,4}, 10000),{1,10000,2,10000,3,10000,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({}, 8),{}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,4}, 10000),{3,10000,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,4}, -8),{3,-8,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,6,2,5,1,9}, 1),{3,1,6,1,2,1,5,1,1,1,9}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-2,5,10,-5,2}, -7),{-2,-7,5,-7,10,-7,-5,-7,2}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,6,2,3,5,1}, -1),{3,-1,6,-1,2,-1,3,-1,5,-1,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,1,1,1,1,1}, -5),{1,-5,1,-5,1,-5,1,-5,1,-5,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({4}, -5),{4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,3,4}, 10000),{1,10000,3,10000,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({2,3,4}, 10000),{2,10000,3,10000,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-2,3,4}, -8),{-2,-8,3,-8,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-2,5,10,-5,2,5}, 5),{-2,5,5,5,10,5,-5,5,2,5,5}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({4,4}, -5),{4,-5,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,3,4,1}, 6),{1,6,3,6,4,6,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,2,3,4}, 6),{1,6,2,6,3,6,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,6,5,1,9}, 0),{3,0,6,0,5,0,1,0,9}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-2,2,5,10,-5,2}, -7),{-2,-7,2,-7,5,-7,10,-7,-5,-7,2}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({7,1,1,1,1,1,1}, -5),{7,-5,1,-5,1,-5,1,-5,1,-5,1,-5,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,7,5,1,9}, 9),{3,9,7,9,5,9,1,9,9}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,2,3,4}, 9),{1,9,2,9,3,9,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,2,4}, -8),{3,-8,2,-8,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({2,3,4}, 5),{2,5,3,5,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({7,1,1,1,1,1}, -5),{7,-5,1,-5,1,-5,1,-5,1,-5,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,7,5,6,1,9}, 9),{3,9,7,9,5,9,6,9,1,9,9}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({2,3,4}, 10001),{2,10001,3,10001,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-2,2,4,4}, -8),{-2,-8,2,-8,4,-8,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({4,4}, -4),{4,-4,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({7,1,1,1,1,1,1}, -3),{7,-3,1,-3,1,-3,1,-3,1,-3,1,-3,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,3,4}, 5),{3,5,3,5,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,7,2,1,9}, 1),{3,1,7,1,2,1,1,1,9}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({6,3,7,5,1,9,3}, 7),{6,7,3,7,7,7,5,7,1,7,9,7,3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,2,3,4}, 9999),{1,9999,2,9999,3,9999,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,7,5,7,9}, 9),{3,9,7,9,5,9,7,9,9}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({6,3,7,7,1,9,3}, 7),{6,7,3,7,7,7,7,7,1,7,9,7,3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({}, -5),{}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,1,1,1,1,1,1}, 10000),{1,10000,1,10000,1,10000,1,10000,1,10000,1,10000,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,-4,6,5,1,9}, 1),{3,1,-4,1,6,1,5,1,1,1,9}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({7,3,6,8,4,2,1}, 10),{7,10,3,10,6,10,8,10,4,10,2,10,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-2,7,2,1,9}, 2),{-2,2,7,2,2,2,1,2,9}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({5,15,63,2,-2,5,9,100,5,-9}, 8),{5,8,15,8,63,8,2,8,-2,8,5,8,9,8,100,8,5,8,-9}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,2,4,4}, 6),{1,6,2,6,4,6,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,4}, -5),{3,-5,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,6,5,1,9,6,1}, 0),{3,0,6,0,5,0,1,0,9,0,6,0,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({7,1,1,1,1,1,7}, -5),{7,-5,1,-5,1,-5,1,-5,1,-5,1,-5,7}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,1,1,1,1,1}, -6),{1,-6,1,-6,1,-6,1,-6,1,-6,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({7,1,1,1,1,1,1}, -4),{7,-4,1,-4,1,-4,1,-4,1,-4,1,-4,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-2,7,2,1,-1}, 2),{-2,2,7,2,2,2,1,2,-1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,6,5,1,9,6,1}, 10001),{3,10001,6,10001,5,10001,1,10001,9,10001,6,10001,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-4,-4,6,5,1,9}, 1),{-4,1,-4,1,6,1,5,1,1,1,9}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-6,4}, 4),{-6,4,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-4,-4,6,5,1,9}, 2),{-4,2,-4,2,6,2,5,2,1,2,9}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,63,3}, 10000),{3,10000,63,10000,3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,63,3,3}, 10000),{3,10000,63,10000,3,10000,3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({4}, 63),{4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,6,5,1,9,1}, 0),{3,0,6,0,5,0,1,0,9,0,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({4,1,2,3,2}, 2),{4,2,1,2,2,2,3,2,2}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-2,2,4,4}, -7),{-2,-7,2,-7,4,-7,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({7,3,6,8,4,2,2}, 10),{7,10,3,10,6,10,8,10,4,10,2,10,2}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({5,15,63,2,-2,5,9,100,5,-9,100}, 8),{5,8,15,8,63,8,2,8,-2,8,5,8,9,8,100,8,5,8,-9,8,100}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({15,63,2,-2,5,-93,100,5,-9}, 9),{15,9,63,9,2,9,-2,9,5,9,-93,9,100,9,5,9,-9}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({7,1,1,1,1,2}, -4),{7,-4,1,-4,1,-4,1,-4,1,-4,2}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({4,4,4}, -5),{4,-5,4,-5,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({}, 4),{}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({4}, 8),{4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({9,3}, 6),{9,6,3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({5,5}, 5),{5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,1,2,2,3,3}, 4),{1,4,1,4,2,4,2,4,3,4,3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({2,3,3,2}, 3),{2,3,3,3,3,3,2}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({}, 0),{}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({5}, 2),{5}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({2,3,4}, 1),{2,1,3,1,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({5,6,7,8}, 5),{5,5,6,5,7,5,8}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,2,4,4}, 3),{1,3,2,3,4,3,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,2,3,4,1}, 0),{1,0,2,0,3,0,4,0,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,2,4,4}, 2),{1,2,2,2,4,2,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({7,3,6,8,4,2,1,3}, -1),{7,-1,3,-1,6,-1,8,-1,4,-1,2,-1,1,-1,3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({4,1,1,2,3}, 4),{4,4,1,4,1,4,2,4,3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,6,2,5,1}, 0),{3,0,6,0,2,0,5,0,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-1,1,-2,-3}, -3),{-1,-3,1,-3,-2,-3,-3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,2,3}, 4),{1,4,2,4,3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({4,1,2,3,3}, 7),{4,7,1,7,2,7,3,7,3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({10,-2,5,10,-5,2,10}, -8),{10,-8,-2,-8,5,-8,10,-8,-5,-8,2,-8,10}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,1,1,1,1}, 0),{1,0,1,0,1,0,1,0,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({4,4}, 4),{4,4,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({4,1,2,3}, 6),{4,6,1,6,2,6,3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,1,4,4}, -2),{1,-2,1,-2,4,-2,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({4,1,2,3,3,4}, 3),{4,3,1,3,2,3,3,3,3,3,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-1,-2,-3}, 2),{-1,2,-2,2,-3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({4,1,2,3,3,4}, 10000),{4,10000,1,10000,2,10000,3,10000,3,10000,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,1,2,3,4}, 10000),{3,10000,1,10000,2,10000,3,10000,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,4,4,4}, 3),{3,3,4,3,4,3,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-1,-2,-3,-3}, 2),{-1,2,-2,2,-3,2,-3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,2,3,4}, 10000),{3,10000,2,10000,3,10000,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-48,4,1,2,3}, 3),{-48,3,4,3,1,3,2,3,3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,-8,3,4}, -48),{3,-48,-8,-48,3,-48,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({4,1,2,3,3,-5}, 10000),{4,10000,1,10000,2,10000,3,10000,3,10000,-5}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-22,1,2,18}, 5),{-22,5,1,5,2,5,18}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({7,3,6,8,4,2,1,3,4}, -1),{7,-1,3,-1,6,-1,8,-1,4,-1,2,-1,1,-1,3,-1,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,2,4}, -1),{1,-1,2,-1,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({4}, 9),{4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,2,4,4,1}, 2),{1,2,2,2,4,2,4,2,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,2,4}, 0),{1,0,2,0,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({4,4,4}, 4),{4,4,4,4,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,2}, 0),{1,0,2}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,1,2,3}, 0),{1,0,1,0,2,0,3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,-8,4,4}, -48),{3,-48,-8,-48,4,-48,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({2,3,4}, 4),{2,4,3,4,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,2,3,4,3}, 19),{3,19,2,19,3,19,4,19,3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({10,-2,5,10,-5,2,10}, -9),{10,-9,-2,-9,5,-9,10,-9,-5,-9,2,-9,10}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-1,1,-2,-2,-3}, 10000),{-1,10000,1,10000,-2,10000,-2,10000,-3}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-22,1,2,18,1}, 5),{-22,5,1,5,2,5,18,5,1}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({3,-8,3,4,-8}, -48),{3,-48,-8,-48,3,-48,4,-48,-8}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({-22,1,2,-52}, 5),{-22,5,1,5,2,5,-52}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,2,4,4}, 0),{1,0,2,0,4,0,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,2,-9,4,4}, 0),{1,0,2,0,-9,0,4,0,4}))){ tests_passed++; } total_tests++;

    if((issame(intersperse({1,1,1,2,1}, 0),{1,0,1,0,1,0,2,0,1}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


