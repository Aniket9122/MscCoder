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

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
bool issame(vector<vector<int>> a,vector<vector<int>> b){
    if (a.size()!=b.size()) return false;

    for (int i=0;i<a.size();i++)
    {
        if (a[i].size()!=b[i].size()) return false;
        for (int j=0;j<a[i].size();j++)
            if (a[i][j]!=b[i][j]) return false;
    }
    return true;
}
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

    if((issame(get_row({
        {1,2,3,4,5,6},
        {1,2,3,4,1,6},
        {1,2,3,4,5,1}}, 1) , {{0, 0}, {1, 4}, {1, 0}, {2, 5}, {2, 0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({
        {1,2,3,4,5,6},
        {1,2,3,4,5,6},
        {1,2,3,4,5,6},
        {1,2,3,4,5,6},
        {1,2,3,4,5,6},
        {1,2,3,4,5,6}}, 2) , {{0, 1}, {1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({
        {1,2,3,4,5,6},
        {1,2,3,4,5,6},
        {1,1,3,4,5,6},
        {1,2,1,4,5,6},
        {1,2,3,1,5,6},
        {1,2,3,4,1,6},
        {1,2,3,4,5,1}
    }, 1) , {{0, 0}, {1, 0}, {2, 1}, {2, 0}, {3, 2}, {3, 0}, {4, 3}, {4, 0}, {5, 4}, {5, 0}, {6, 5}, {6, 0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({}, 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1}}, 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{}, {1}, {1, 2, 3}}, 3) , {{2, 2}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3,4,5,6},{1,2,3,4,1,6},{1,2,3,4,5,1}}, 1) , {{0,0},{1,4},{1,0},{2,5},{2,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6},{1,2,3,4,5,6}}, 2) , {{0,1},{1,1},{2,1},{3,1},{4,1},{5,1}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3,4,5,6},{1,2,3,4,5,6},{1,1,3,4,5,6},{1,2,1,4,5,6},{1,2,3,1,5,6},{1,2,3,4,1,6},{1,2,3,4,5,1}}, 1) , {{0,0},{1,0},{2,1},{2,0},{3,2},{3,0},{4,3},{4,0},{5,4},{5,0},{6,5},{6,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({}, 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1}}, 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{1},{1,2,3}}, 3) , {{2,2}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{},{}}, 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{4,5,6}}, 5) , {{1,1}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,1},{1,2,3},{4,5,6,7}}, 1) , {{0,1},{0,0},{1,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,0,4},{4,8,-1,1},{0},{5,5,5,-3}}, 0) , {{0,1},{2,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{0,0,0,0,0},{0,1,2},{0,1,2,3,4,5,6,7,8},{},{0,0,0}}, 0) , {{0,4},{0,3},{0,2},{0,1},{0,0},{1,0},{2,0},{4,2},{4,1},{4,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{4,5,6},{7,8}}, 3) , {{0,2}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({}, 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{}}, 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,3,4},{4,5,6,7},{7,8,9,10,11}}, 4) , {{1,2},{2,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,1,1,1},{2,2,2,2,2},{3,3,3},{4,4},{5,5,5,5,5,5,5,5}}, 5) , {{4,7},{4,6},{4,5},{4,4},{4,3},{4,2},{4,1},{4,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,3,4},{4,5,6,6,7},{4,5,6,6,7},{7,8,9,10,11},{2,3,4}}, 4) , {{1,2},{2,0},{3,0},{5,2}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{}}, 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{0,0,0,0,0},{0,1,2},{0,1,2,3,4,5,6,7,8},{},{0,0,0}}, -1) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{3,1,2,3},{4,5,6}}, 5) , {{1,1}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,1,1,1},{2,2,2,2,2},{3,3,3},{4,4},{5,5,5,5,5,5,5,5},{2,2,2,2,2}}, 5) , {{4,7},{4,6},{4,5},{4,4},{4,3},{4,2},{4,1},{4,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{},{}}, 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,3,4},{4,5,6,7},{7,8,9,10,11},{7,8,9,10,11}}, 4) , {{1,2},{2,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,3,4},{4,5,6,7},{7,8,9,10,11}}, 9) , {{3,2}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{0,0,0,0,0},{0,1,2},{0,1,2,3,4,5,6,7,8},{},{-1,0,0,0,0}}, 3) , {{2,3}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{7,8,7}}, 3) , {{0,2}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{0,0,0,0,0},{0,1,2},{0,1,2,3,4,5,6,7,8},{0,0,0}}, -1) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{0,0,0,0,0},{0,1,2},{0,1,2,3,4,5,6,7,8},{0,0,0},{0,1,2,3,4,5,6,7,8}}, 0) , {{0,4},{0,3},{0,2},{0,1},{0,0},{1,0},{2,0},{3,2},{3,1},{3,0},{4,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{3,1,2,3},{4,5,6},{3,1,2,3}}, 5) , {{1,1}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{0,0,0,0,0},{0,1,2},{0,1,2,3,4,5,6,7,8},{0,0,0},{0,0,0,0,0},{0,0,0}}, -1) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{-3,35,54,0,-3,-92,68,7},{},{}}, 0) , {{2,3}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,3,4},{4,5,6,7}}, 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{3,1,2,3},{4,5,6}}, 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,1},{1,11,3},{1,11,3},{4,5,6,7}}, 1) , {{0,1},{0,0},{1,0},{2,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{3,1,2,3},{4,5,6},{3,1,2,3},{4,5,6}}, 5) , {{1,1},{3,1}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{0}}, 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1}}, 1) , {{0,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,1,3},{1,3,2,1},{2,1,1}}, 1) , {{0,0},{1,1},{2,3},{2,0},{3,2},{3,1}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,1,3},{4,3,2,5},{2,1,6}}, 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,5,3,5,7,5,9,5,11,5,13,5}}, 5) , {{0,11},{0,9},{0,7},{0,5},{0,3},{0,1}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{},{},{}}, 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{},{},{}}, 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{1},{1}}, 1) , {{0,0},{1,0},{2,0},{3,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{1},{1}}, 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{3,2,1},{1,2,3},{3,2,1},{1,2,3}}, 2) , {{0,1},{1,1},{2,1},{3,1},{4,1}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{2,0}}, 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{3,2,1},{1,2,3},{3,2,1},{1,2,3}}, 3) , {{0,2},{1,0},{2,2},{3,0},{4,2}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{}}, 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{3,2,1},{1,2,3},{3,2,1},{1,2,3}}, 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{}}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,1,3},{4,3,2,5},{2,1,6}}, 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{}}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{3,2,1},{1,2,9,3},{1,2,9,3},{3,2,1},{1,2,3}}, 3) , {{0,2},{1,0},{2,3},{3,3},{4,0},{5,2}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{}}, -98) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{3,2,1},{1,2,3},{3,2,1},{1,2,3}}, 62) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{0}}, 0) , {{0,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{},{}}, 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{3,2,1},{1,2,3},{3,2,1},{1,2,3}}, -27) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,1,3},{4,3,2,5},{2,1,6}}, -27) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{},{},{}}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{1},{1},{1}}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{3,2,1},{1,2,9,3},{1,2,9,3},{3,2,1},{1,2,3}}, 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,3,3},{3,2,1},{1,2,3},{3,2,1},{1,2,3}}, 62) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{4,3,2,5},{2,1,6}}, -27) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{3,2,1},{1,2,3},{3,2,1},{1,2,3}}, 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,7},{3,2,1},{1,2,7},{1,2,3},{3,2,1},{1,2}}, 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{3,2,1},{1,2,9,3},{3,2,1},{1,2,3}}, 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{1}}, 1) , {{0,0},{1,0},{2,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,1,3},{4,3,2,5},{2,1,6}}, 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,5},{2,1,3},{4,3,2,5},{2,1,6}}, 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,1,3},{4,3,2,5},{2,1,6}}, 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{}}, 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,1,3},{4,3,2,5},{2,1,6}}, 49) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,1,3},{4,3,2,5},{2,1,6},{2,1,6}}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{3,2,1},{1,2,3},{3,2,1},{1,2,3}}, 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,1,3},{4,3,2,5},{2,1,6},{2,1,6}}, 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{0}}, 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{3,2,1},{1,2,1,3},{1,2,1,3},{3,2,1},{1,2,3},{3,2,1},{1,2,3}}, 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,1,3},{4,3,2,5},{2,1,6}}, 34) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({}, -89) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{},{},{}}, 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{1,2,3},{3,2,1},{1,2,3}}, 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({}, 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,1,3},{2,1,1}}, 1) , {{0,0},{1,1},{2,2},{2,1}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{3,2,1},{3,2,2},{1,2,9,3},{3,2,2},{1,2,3}}, 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{3,2,1},{1,2,3},{3,2,1}}, -27) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{},{},{}}, 62) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{},{},{},{}}, -98) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{3,2,1},{1,2,3},{3,2,1},{1,2,3}}, 34) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{}}, 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({}, 6) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,5,3,5,-66,5,9,5,11,5,13,5}}, 5) , {{0,11},{0,9},{0,7},{0,5},{0,3},{0,1}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{3,2,1},{1,2,3},{3,2,1},{1,2,3},{3,2,1}}, 3) , {{0,2},{1,0},{2,2},{3,0},{4,2},{5,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{4,3,2,5}}, -27) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{3,2,1},{1,2,1,3},{1,2,1,3},{3,2,1},{1,2,3},{1,2,3}}, 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{3,2,1},{1,2,3},{3,2,1},{1,2,3}}, 74) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{3,2,1},{1,2,3},{3,2,1},{1,2,3},{1,2,3}}, 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{3,2,1},{1,2,3},{3,2,1},{1,2,3}}, 45) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{3,2,1},{1,2,3},{3,2,1}}, -26) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{1,1},{2,1,3},{1,1}}, 1) , {{0,0},{1,1},{1,0},{2,1},{3,1},{3,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,1,3},{4,3,2,4,5},{4,3,2,4,5},{2,1,6},{2,1,6}}, 62) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{-6,-38,25,3,45}}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{}}, -98) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{}}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{3,2,1},{1,2,3},{3,2,1},{1,2,3},{1,2,3}}, 2) , {{0,1},{1,1},{2,1},{3,1},{4,1},{5,1}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({}, -1) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{}}, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,1,3},{4,3,2,5},{2,1,6}}, -73) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{}}, 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,5},{2,1,3},{4,3,2,5},{2,1,6}}, 44) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{},{}}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{}}, -1) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{},{}}, 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{5}}, 5) , {{0,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3},{4,5,6},{7,8,9}}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,1,1},{1,1,1},{1,1,1}}, 1) , {{0,2},{0,1},{0,0},{1,2},{1,1},{1,0},{2,2},{2,1},{2,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3,4},{1,2,3},{1,2},{1}}, 1) , {{0,0},{1,0},{2,0},{3,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{}}, 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2,3,4,5}}, 3) , {{0,2}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{2},{3}}, 2) , {{1,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,1,3},{4,3,2,5},{2,1,6}}, 6) , {{3,2}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{5,3,5,7,5,9,5,11,5,13,5}}, 5) , {{0,10},{0,8},{0,6},{0,4},{0,2},{0,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{-59,0}}, 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{-59,0}}, 80) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{2,1},{1,2},{2,1},{4,3,2,5},{2,1,6},{2,1}}, 6) , {{4,2}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,0},{1,0}}, 80) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{1},{1},{1}}, 1) , {{0,0},{1,0},{2,0},{3,0},{4,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,5,3,5,7,5,9,5,11,5,13,5,3}}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{5,3,5,7,5,9,5,11,5,13,5},{5,3,5,7,5,9,5,11,5,13,5}}, 4) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,1,3},{1,3,2,1},{2,1,1},{1,2}}, -95) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{1},{1}}, 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,5,3,5,7,5,9,5,11,5,13,6,5,3}}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{1,1},{1}}, 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{2,1},{1,2},{2,1},{4,3,2,5},{2,1,6},{2,1}}, 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{1},{1},{1}}, 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{1},{1}}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{2,1},{1,4,2},{2,1},{4,3,2,5},{2,1,6},{2,1}}, 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{},{1}}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1}}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{1,1},{1,2},{1,1}}, 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1}}, 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{2,1},{1,2,2},{2,1},{4,3,2,5},{2,1,6},{2,1}}, 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{2,1},{1,2},{2,1},{4,3,2,5},{2,1,6},{2,1}}, 5) , {{3,3}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{80,2,1},{80,2,1},{1,2},{80,2,1},{4,3,2,5},{2,1,6},{80,2,1}}, 5) , {{4,3}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{2,1},{1,2,2},{2,1},{4,3,2,5},{2,1,6},{2,1},{2,1}}, 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({}, 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{11,1},{1},{1}}, 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{2,1},{1,2,2},{2,1},{4,3,2,5},{2,1}}, 8) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{1,1},{1}}, 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{2,1},{2,1},{1},{2,1}}, 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{2,0,1},{1,2},{2,0,1},{4,3,2,5},{2,1,6},{2,0,1}}, 6) , {{4,2}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,1,3},{1,3,2,1},{2,1,1},{1,2}}, -96) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{-59,0},{-59,0}}, 80) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{1},{1},{1},{}}, 1) , {{1,0},{2,0},{3,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{2,2},{1,2},{2,2},{4,3,2,5},{2,1,6},{2,2},{2,2}}, 5) , {{3,3}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{11,1},{1}}, 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,2},{2,1,3},{1,3,2,1},{2,1,1},{1,2},{1,2}}, 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({}, -96) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{11,1}}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{-59,11,1}}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({}, -59) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,0},{1,0},{1,0}}, 81) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{-59,11,1}}, 1) , {{0,0},{1,0},{2,2}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1,1},{11,1},{1,1},{1}}, 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{2},{1,2},{2},{4,3,2,5},{2,1,6},{2},{2}}, 5) , {{3,3}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{2,1},{1,2,2},{1,2,2},{2,1},{4,3,2,5},{2,1,6},{2,1}}, 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,5,3,5,7,5,9,5,11,5,13,5},{1,5,3,5,7,5,9,5,11,5,13,5}}, 5) , {{0,11},{0,9},{0,7},{0,5},{0,3},{0,1},{1,11},{1,9},{1,7},{1,5},{1,3},{1,1}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{-59,11,1}}, 81) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{1},{1},{1}}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1}}, 0) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{},{1}}, -28) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,0},{1,0}}, -32) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{5,3,5,7,5,9,5,11,5,13,5},{5,3,5,7,5,9,5,11,5,13,5}}, 5) , {{0,10},{0,8},{0,6},{0,4},{0,2},{0,0},{1,10},{1,8},{1,6},{1,4},{1,2},{1,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,1},{1},{1},{1},{1,1},{1}}, 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{1},{1},{1},{},{1}}, 1) , {{1,0},{2,0},{3,0},{5,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{},{},{},{},{}}, -32) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{2,1,1},{1,2},{2,1,1},{4,3,2,5},{2,1,6},{2,1,1}}, 6) , {{4,2}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{1}}, 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({}, 79) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{2,1,3},{1,3,2,1},{2,1,1},{1}}, -96) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{-59}}, 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({}, -58) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{},{1}}, -1) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{-59,0},{-59,0},{-59,0}}, 80) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{2},{1},{11,1},{1},{2}}, 2) , {{0,0},{4,0}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{2,1},{4,3,3,2,5},{1,2,2},{2,1},{4,3,3,2,5},{2,1,6},{2,1},{2,1}}, 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{1,1},{1,2},{1,1}}, 2) , {{3,1}}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{2,1},{1,2,2},{2,1},{4,3,3,2,5},{2,1,6},{4,3,3,2,5},{2,1},{2,1}}, 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{2,1},{1,2,2,2},{2,1},{4,3,2,5},{2,1,6},{2,1},{1,2,2,2},{2,1}}, 7) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{0},{1},{0},{1}}, 2) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{1,1},{79,2},{1,1}}, 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1},{1},{1},{1}}, 81) , {}))){ tests_passed++; } total_tests++;

    if((issame(get_row({{1,0},{1,0},{1,0},{1,0}}, 81) , {}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


