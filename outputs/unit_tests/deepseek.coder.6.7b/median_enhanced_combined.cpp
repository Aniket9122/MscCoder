#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double median(vector<int> l) {
    if (l.empty()) 
        return 0; // or throw an exception, depending on your use case
    
    sort(l.begin(), l.end());

    int size = l.size();
    if (size % 2 == 0){
        return static_cast<double>((l[size / 2 - 1] + l[size / 2])) / 2;
    } else {
        return static_cast<double>(l[size / 2]);
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

    if((abs(median({3, 1, 2, 4, 5}) - 3)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({-10, 4, 6, 1000, 10, 20}) -8.0)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({5}) - 5)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({6, 5}) - 5.5)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({8, 1, 3, 9, 9, 2, 7}) - 7)<1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,1,2,4,5}) - 3) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({-10,4,6,1000,10,20}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({5}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({6,5}) - 5.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({8,1,3,9,9,2,7}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,20,30,40,50}) - 30) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({-5,-3,0,3,5}) - 0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,7,8,10,10}) - 7.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,2,2,2,2,2}) - 2.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,8,11,14}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,1,2,3,4}) - 1.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({-1,0,1}) - 0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({100}) - 100) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({7,9,3,5}) - 6.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,0,1}) - 0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,11,3,7,8,10,10}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,1,3,4}) - 1) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,1}) - 0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,2,2,3,4,1}) - 2) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({100,100}) - 100.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,-1,7,8,8,10,10,8,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,1,2,2,3,4,1,1}) - 1) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,8,10,10}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,2,2,3,4,1,4}) - 2.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,-1,7,8,8,10,10,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,0,1,0}) - 0.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,11,1,3,7,8,10,10,7}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,-1,7,8,0,10,10,8}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,1,2,2,3,4,1,1,1}) - 1.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,1}) - 0.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,11,0,-1,0,1,0}) - 0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,10,9,0}) - 0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({14,100}) - 57.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({13,15,100}) - 15) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,20,4,30,40,50}) - 25.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,11,4,7,8,10,7,10}) - 7.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({7,5,9,3,5}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,20,-1,30,40,50}) - 25.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({13,0,0,1,1,0}) - 0.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,100,1}) - 0.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({-5,-3,0,3,5,0}) - 0.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,1,3,4,1}) - 1.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({14,1,3,7,8,10,10}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,20,4,30,13,2,40,50}) - 16.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,1,4,9,1}) - 1.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,20,4,30,13,2,40,50,30}) - 20) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({14,15,100}) - 15) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,11,4,7,8,10,7,10,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({100,99,100}) - 100) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,1,2,3,4,4}) - 2) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,4,30,40,51}) - 30) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,1,3,1,1,4}) - 1) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,2,0,0,0,0,1,0}) - 0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,2,2,2,2,2,2}) - 2) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({7,9,3,3,5,3}) - 4.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({-5,-3,0,3,6}) - 0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,2,2,3,4,1,4,4}) - 2) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({7,10,3,3,5,3,3}) - 3) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({7,5}) - 6.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({7,10,3,3,3,5,3,3,3}) - 3) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,1,2,3,4,1,4,4}) - 2) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,1,0,9,1}) - 1.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,8,2,8,3,5,1}) - 2.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,2,2,3,4,1,3,4}) - 2) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,1,2,3,6,99,4,4}) - 3) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,4,8,8,3,5,1}) - 3.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,30,2,3,4,1,3,4,4}) - 3) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,7,8,8,10,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({6,1,3,-1,7,8,8,10,10,8,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,40,2}) - 1.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,40,8,11,14}) - 9.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({-5,-3,0,3,5,-5}) - -1.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({-5,-3,0,4,5}) - 0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,11,0,-1,0,1,6,0}) - 0.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,14,-1,0,1}) - 0.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({-5,-3,0,4,5,0}) - 0.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,1,1,1,3,4}) - 2.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({-5,50,0,3,6}) - 3) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,-1,9,7,8,0,10,10,8}) - 7.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,4,1,8,2,8,3,5,1}) - 3) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,20,2,3,6,99,4,4,1,2}) - 3) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,1,3,1,4}) - 1.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,7,8,3,10}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,1,2,2,3,4,1,1,3}) - 1.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({-1,-3,0,3,5,-6,0,0}) - 0.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,2,3,4,4}) - 2.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,51,1,1,4,9,1}) - 1) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,20,30,40,50,50}) - 35.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,4,30,8,2,8,3,5,1}) - 4) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({-5,-3,0,3,-5}) - -3) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({7,8,5}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,1,14,2,2,3,4,1,4}) - 2.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,9,0,0,0}) - 0.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,7,9,3,5}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,1,2,5,2,3,4,1,3,4}) - 2.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({7,5,9,3,5,5}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,-1,7,8,8,10,10,-3}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,20,-1,40,50,-1}) - 15.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,3,5}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,2,2,1,2,2,2,2}) - 2.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({7,5,9,3,5,4}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({-5,51,50,0,3,6}) - 4.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,8,11,14,14}) - 9.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({-5,51,50,0,6}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,6,8,3,15,15}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,6,5,4,3}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,12,14,20,22}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) - 1) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99}) - 50.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,12,14,20,22,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,6,5,4,3,4}) - 5.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,4,3,2,1}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,12,14,20,22,8,2}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,14,20,22,8,2,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,2,9,8,7,6,4,3,2,1}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,8,6,5,4,3}) - 5.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,4,5,6,8,9,10,77,12,13,14,15,16,17,18,19,20,2}) - 11.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,5,6,8,10,12,14,20,22}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,14,19,22,8,2}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,8,6,5,4,3,4}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,99,8,10,12,14,20,22,8,6}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,4,5,8,12,14,20,22,8,2,4}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,65,5,6,8,12,14,20,22,8,2}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,8,5,6,8,10,12,14,19,23,8,2}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,4,6,5,4,3}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,8,10,12,14,20,22}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,6,5,4,11,3,4,8}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,55,20}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({49,2,6,5,6,8,10,12,14,20,22,8,2,14,14}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({49,2,6,5,6,10,12,14,20,22,8,2,14,14}) - 11.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,14,19,22,8,2,12}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,8,5,6,8,10,12,14,19,23,8,2,5}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,17,18,19,20}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,14,20,22,8,2,8,6}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,10,12,47,20,22}) - 11.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,4,6,6,4,3}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,8,4,6,5,4,3}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,12,14,20,22,10}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({6,5,4,3}) - 4.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,75,77,79,81,83,85,87,89,91,93,95,97,99,81}) - 50.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,59,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,75,77,79,81,83,85,87,89,91,93,95,97,99,81}) - 52.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,65,5,6,8,12,14,20,22,8,66,2}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,6,5,63,4,3,4}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,25,12,14,20,22}) - 10.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,13,10,2,9,8,7,6,4,3,2,1}) - 11.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({6,5,4,2,77,77}) - 5.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,12,14,21,21,22,8,2,21,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,4,3,0,2,1}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,3,8,17,6,5,63,4,3,4}) - 5.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,14,20,22,8,2,8,6,10}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,14,19,23,8,2,5}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,14,20,22,8,2,8,6,4}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,4,5,6,8,9,10,11,12,13,14,15,16,17,18,19,20}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,14,19,22,8,12}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,6,5,4,3}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,11,8,10,12,14,20,22,8,2}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({6,5,4,2,77,7,77,7}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,6,5,4,3,5}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,74,8,6,5,63,4,3,4}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,8,10,14,11,20,22,8,2,6,4}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({11,10,9,8,6,4,3,6}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,13,19,22,8,2,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,33,18,17,16,15,14,13,12,11,10,9,8,7,6,4,3,0,2,1}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,3,8,17,6,5,63,4,4}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,5,6,8,10,12,14,20,22,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,17}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,2,74,8,6,5,63,4,3,4}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,95,6,5,4,3,2,17}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({49,2,6,5,69,6,10,12,14,20,22,8,2,14,14,6}) - 11.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,25,12,14,20,22}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,2,35,74,8,6,5,63,3,3,4}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({4,5,6,8,10,14,21,20,22,8,2}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,7,8,7,4,6,5,4,3}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,14,19,53,8,2,5}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,8,12,14,20,22,10}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,8,10,14,11,20,22,8,2,6,4}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({49,2,6,5,6,10,12,14,20,22,8,33,2,14,14}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,65,5,6,12,14,20,22,8,66,2,14}) - 10.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,65,8,5,6,8,12,14,20,22,8,2}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,74,6,5,63,4,3,4}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,6,5,83,4,3}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,65,5,6,8,12,14,20,22,8,2,14}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,13,19,22,8,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,8,10,13,14,20,22,8}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,7,6,5,45,83,4,3}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,5,79,6,6,6,6,6,7,7,7,7,7,8,8,8,8,9,9,9,9,9,9,10,10,10,10,10}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,31,5,65,5,6,12,14,73,22,8,66,2,14}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,6,5,4,3,6}) - 6.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({7,2,5,6,8,10,12,13,19,22,8,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,8,8,4,6,5,4,3}) - 5.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({7,8,7,55,4,6,5,4,3}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,13,4,65,8,5,6,8,12,14,20,4,22,8,2}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,8,12,14,91,20,22,10}) - 11.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,14,19,53,8,2,5,14}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,33,18,17,16,15,14,13,12,11,10,9,8,7,6,4,3,0,2,1,0,10}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,11,8,10,12,14,20,8,12,2}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,7,7,7,4,6,5,4,3}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,8,10,13,14,20,22,8,10}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,74,6,5,63,5,3,4,3}) - 5.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,0,6,5,4,3,9}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,16,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,75,77,79,81,83,85,87,89,91,93,95,97,99,81}) - 49) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1}) - 9.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,8,12,14,20,22,10,2}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,12,14,20,22,6}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,8,10,14,20,22,8,10,2}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({4,5,6,8,10,14,21,20,8,2}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,3,8,17,6,5,4,4}) - 5.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,14,20,8,2,6}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({14,5,6,8,10,14,20,22,8,5,8,6}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({6,5,4,2,77,7,53,7}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,3,8,17,6,5,4,4,3,4}) - 4.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,3,8,17,6,5,18,4,4}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,14,20,22,8,2,8,6,10,14}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,5,83,4,3}) - 7.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,4,6,6,4,3,9}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,3,12,14,20,22,8,5,3}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,13,10,2,9,8,7,6,4,3,2,1}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,8,6,8,10,14,20,22,8,2,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,14,20,22,8,2,8,5}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}) - 1.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,11,8,10,12,14,20,22,8,2}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,31,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99}) - 49) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,8,6,8,10,14,20,8,2,15,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,8,87,13,14,20,22,8,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,2,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,8,8,4,6,5,4,67,3}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,14,19,22,67,2,12,2}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({63,9,8,7,6,5,4,3,5}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,11,8,10,12,14,22,8,2}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,4,5,6,8,9,11,12,13,14,15,16,17,18,19,20}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,5,79,6,6,6,6,6,7,7,7,7,7,8,8,8,8,9,9,9,9,9,9,10,10,10,10,10,4}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,14,19,53,8,2,5,10,14}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) - 1) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,8,5,6,8,10,12,14,19,23,8,2,14}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,8,4,6,5,4,3,6}) - 6.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,8,10,13,14,20,22,8,20}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,8,5,6,8,10,12,14,19,23,8,2,14,12}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,2,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,7}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,6,5,4,3,9}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({4,6,8,10,12,14,20,22,22}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,11,8,10,12,14,20,8,12,2}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,31,5,65,5,6,12,14,73,22,8,66,2}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,4,6,8,10,12,14,19,53,8,2,5}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,6,5,83,9,4,3}) - 7.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,11,8,10,12,20,8,12,2}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,12,14,15,22}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({6,4,2,77,77}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({8,4,5,7,8,57,12,14,15,22}) - 10.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,6,1}) - 9.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,4,5,6,8,9,10,11,13,14,15,16,17,18,19,20}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,13,10,2,9,8,7,6,4,3,2}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,8,7,6,5,4,3,5,5}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,8,17,6,5,4,4,3,4}) - 4) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,77,3,5,6,8,10,12,14,20,22,8}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,31,5,65,5,6,12,14,73,22,8,66,2,12}) - 12.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,25,12,14,20,22,5}) - 10.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,14,20,22,8,2,8,83,4}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({7,5,4,2,77,7,53,7}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({4,5,6,9,8,10,14,21,20,22,8,2}) - 8.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,9,4,5,8,10,14,20,22,8,2,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,14,19,53,8,2,5,10}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,8,5,6,8,10,12,14,19,23,2,5,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,4,6,6,4,3,9,6,6}) - 6.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,41,87,89,91,93,95,97,99}) - 48.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,8,5,6,8,10,12,14,19,59,8,2,14}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,11,8,10,12,20,5,12,2}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({39,2,3,5,6,7,8,9,10,11,12,49,13,14,15,17,18,19,20}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,20,18,17,16,15,14,13,12,11,10,9,8,7,95,6,5,4,3,2,17,18}) - 12.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,7,7,7,4,5,4,3}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,3,8,6,5,4,5,3,4}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,6,5,4,3,17,5}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,5,6,8,10,12,14,19,53,8,2,5}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,71,5,6,8,10,12,13,19,8,2,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,8,10,14,11,20,22,8,2,6,4,5}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({5,6,5,4,2,77,7,53,7,5}) - 5.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,65,6,8,12,14,20,22,8,2,14}) - 10.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,63,8,7,4,6,35,6,4,3}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,2,8,10,12,14,19,23,8,2,5}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,8,5,6,8,10,12,14,19,59,8,99,14}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,12,1,79,12,6,8,3,15,15}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,65,11,8,10,12,14,20,8,12,2}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,2,35,74,8,6,51,63,3,3,4}) - 8.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({63,19,18,17,16,15,14,13,12,11,9,8,7,6,5,4,3,2,1,18}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,8,6,8,10,12,14,19,23,8,2}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,4,6,8,13,12,14,19,53,8,2,5}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,59,43,45,47,49,51,53,55,57,59,61,63,65,67,69,51,75,77,81,83,85,87,89,91,93,95,97,99,81,19}) - 50.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({7,2,5,6,8,10,12,13,19,8,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({4,6,10,79,12,14,55,20,22,22}) - 17.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,2,74,8,6,5,63,4,3,5}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,47,49,51,53,55,57,59,61,63,65,67,69,71,75,77,79,81,83,85,87,89,91,93,95,97,99,81,71}) - 52.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,12,13,19,22,8,2,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,7,7,7,4,5,4}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,6,8,10,14,20,22,8,2,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,8,6,5,4,5,3,4,5}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,6,5,3,3,17,5,8}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,4,5,8,12,14,20,22,8,2}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,4,21,5,11,8,10,12,14,22,8,2}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,8,10,13,6,14,20,22,8,20}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,99,8,10,12,14,20,22,8,6,2}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,12,14,20,22,20}) - 10.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({39,3,8,17,6,5,4,4,17}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,19,2,74,8,6,63,4,3,4}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,12,1,79,29,12,6,8,15,15,6}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,65,5,6,8,12,6,14,20,22,8,2,4,6}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,99,6,8,10,14,20,22,8,2,8,6,4}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,9,4,8,10,3,14,20,22,8,2,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({21,2,4,5,6,8,10,12,14,20,22,8}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,5,6,8,10,53,12,14,19,53,2,21}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({49,2,6,5,6,51,12,14,20,22,8,2,14,14}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,14,19,53,8,2,5,12}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,5,11,6,8,10,12,14,20,22}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({7,8,7,55,4,6,5,7,4,3}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,8,8,4,12,6,5,4,3}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,8,10,13,14,20,22,2,8,20}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,7,10,12,47,20,22}) - 11.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({6,53,5,4,3}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({49,2,6,5,6,10,12,14,20,22,8,33,2,14,13,49}) - 12.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({52,1,2,5,6,8,10,53,14,19,53,2,21}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,18,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,6,1}) - 9) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,18,16,15,14,13,12,11,10,9,8,7,6,5,4,95,2,6,1,15}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,10,10,10,10}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,6,5,63,4,3,20,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,14,19,81,22,8,12}) - 11.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,6,8,10,12,14,19,53,8,2,5,10,5}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,14,20,22,8,2,8,83,4,22}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,1,10,12,14,19,22,8,2,12}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,17,17}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,6,8,5,10,14,20,22,8,2,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,8,10,13,14,20,81,8,20}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,4,5,6,8,9,10,11,13,14,15,16,17,18,9,19,20}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,8,6,8,10,14,20,22,8,2,8,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,6,11,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) - 1.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,13,19,8,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,14,20,22,8,75,8,6,10}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,10,9,8,7,6,4,3,2,1}) - 11.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({5,6,4,2,77,7,53,7,5}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({5,6,8,10,13,14,19,53,2,5,14}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,2,35,74,8,6,37,51,63,3,3,4}) - 9) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,99,8,10,12,14,95,20,22,8,6,1,4}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,10}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({4,5,6,11,8,10,12,20,5,12,2}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({49,2,6,5,6,8,10,12,20,8,2,14,14,14}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,6,8,63,4,3,20,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,6,8,5,10,14,20,22,22,8,2,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({45,5,4,2,77,77}) - 25.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({6,5,4,69,77}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,6,11,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) - 1) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,6,8,3,15,15,11}) - 8.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,5,6,10,12,14,20,22,8,5}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,16,3}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,11,4,6,8,10,12,14,20,22,14}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,8,87,13,14,19,22,8,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,3,8,17,6,5,4,4,3,4,10}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,4,6,6,4,3,9,4}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,14,20,22,8,2,8,5,6,20}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,7,6,4,45,83,4,3}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,63,11,8,10,12,14,20,8,12,2}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,14,20,22,8,2,8,4,2}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,8,6,5,4,3,35}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,4,6,5,79,3}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({49,6,5,6,8,10,12,20,8,2,14,14,14}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,8,4,6,5,4,3,4,4}) - 4) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,4,6,6,3}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({45,5,4,2,77,77,45}) - 45) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,2,5,6,7,8,9,11,12,13,14,15,16,17,18,19,20,7,1}) - 9) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,19,2,74,8,6,9,63,4,3,4}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,8,5,6,8,10,12,14,19,23,14,5,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,8,17,6,5,63,4,3,4}) - 4.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,7,6,5,45,83,4}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,2,5,57,6,7,91,9,10,11,12,13,14,15,16,17,18,19,20,7}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({39,2,3,5,6,7,8,9,11,12,49,13,14,15,17,18,19,20}) - 12.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,11,8,10,12,13,20,8,12,2,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,7,8,7,4,6,5,4,4}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,9,8,10,12,14,19,22,8,2,6}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,6,8,63,4,4,3,20,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,6,5,3,17,5}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,11,7,7,7,4,5}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,51,8,4,6,5,4,3,6,8}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,12,14,20,22,6,4}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,18,16,15,14,13,12,11,10,9,8,7,6,5,4,95,2,6,3,1,15}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,95,6,5,17,4,3,2,17}) - 12.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,18,16,15,14,13,12,11,10,9,8,7,6,5,4,95,2,7,6,1,15}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,5,6,8,10,12,14,19,53,8,2}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,87,8,6,8,10,14,20,8,2,15,8,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,83,2,74,8,6,5,63,3,3,5}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,13,10,2,9,8,7,6,4,3,2,1,1}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({4,10,9,8,7,6,5,4,3}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,91,5,6,8,10,12,14,19,53,8,2,5,12}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,13,10,2,9,7,6,69,4,3,2,1,1}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,10,14,11,20,22,8,2,6,4}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,8,5,6,8,10,12,14,19,23,8,2,14,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,0,1,2,6,8,3,15,15,11}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,8,6,8,63,4,3,20,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,4,4,3,2,1,10}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,4,7,8,13,12,14,19,53,8,2,5}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,41,4,6,3}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,8,8,4,5,5,4,67,3,8}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,8,6,8,10,14,20,22,8,8,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,25,43,12,14,20,22,5}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,23,5,79,6,6,6,6,6,7,7,7,7,7,8,8,8,8,9,9,9,9,9,9,10,10,10,10,10,4}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,77,51,3,5,6,6,8,10,12,14,20,22,8,20}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,3,8,7,17,6,5,63,4,4,8,5}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,8,6,4,5,4,3,3}) - 4.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,59,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,75,77,79,81,83,85,87,89,91,93,95,97,99,81,53}) - 53) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,5,6,8,9,11,12,49,13,15,17,18,19,20}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,10,10,10,10,6}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({4,6,8,12,14,20,22}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,7}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,23,10,14,20,22,8,2,8,6,4}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,8,5,6,8,10,14,19,23,8,2,14}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,3,8,17,6,37,18,4,4}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10,6}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({53,5,4,3}) - 4.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({66,9,74,8,6,5,63,4,3,4}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,6,4,4,3,2,1,10,4,17}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,3,12,14,20,22,9,5,3,3}) - 5.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,8,5,6,8,10,14,20,22,8,75,8,6,10}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,33,18,17,16,15,14,13,12,11,10,9,8,6,4,3,0,2,1}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({6,6,5,4,69,77}) - 6.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,65,5,6,12,14,20,22,8,66,77,14}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({27,6,5,4,2,77,7,53,7}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,4,5,6,7,8,9,9,11,12,13,14,15,16,17,18,55,20}) - 10.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,8,6,8,10,14,22,8,8,8,2}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({54,7,5,4,2,77,7,53,7}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,11,8,12,13,20,8,12,2,8,11}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,6,6,5,4,3,2,1,17,15}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,3,8,6,18,4,4}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,8,9,9,9,9,10,10,10,10,6}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({6,75,5,4,2,77,7,54,7}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) - 1) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,12,14,20,20,22,6,4}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,6,5,4,3,5,7}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,11,8,10,12,8,99,12,2}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({7,8,7,55,5,6,5,7,4}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({11,10,9,6,4,3,6}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,13,10,2,9,7,6,69,3,2,1,1}) - 13) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({5,6,8,10,13,14,19,53,2,5,14,5}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,14,20,8,2,8,6,10,14,4}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({6,5,21,4,2,77,77}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,5,10,12,14,15,22}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,4,6,5,71,4,3,6}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({5,5,21,85,4,2,77,77,4}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,8,6,8,10,14,20,29,8,2,8,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,74,6,5,63,5,29,3,4,74,3}) - 7.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,18,15,14,13,12,11,9,8,7,6,5,4,95,2,7,6,1,15,10}) - 9.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,18,16,15,14,13,12,11,39,10,9,8,7,6,4,10,2,6,1,15,11}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,19,3,4,5,6,8,23,10,11,13,14,15,16,17,18,19,20}) - 13) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,2,3,3,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10,6}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,20,18,17,16,15,14,13,12,11,10,9,8,7,95,6,5,4,3,2,17,18,12}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,8,6,0,8,63,4,3,20,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,3,8,17,1,5,4,4,5}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,20,20,18,17,16,15,14,13,12,11,10,9,8,7,95,6,5,4,3,2,17,18,12}) - 12.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,6,7,7,7,4,5,4,7}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,11,8,12,13,20,8,12,2,8,11,2}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,3,8,17,6,5,63,4,25}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({83,2,5,6,8,10,12,14,19,23,8,2,5}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({6,5,4}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,65,6,12,14,20,22,8,66,77,14}) - 14) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,17,18,19,20,13}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,8,87,8,6,8,10,14,20,8,2,15,8,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,8,6,8,10,14,20,8,2,15,8,4}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,99,8,10,5,12,14,20,22,64,6}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,7,9,6,4,45,83,4,3}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({29,10,9,8,6,5,4,3,6,4}) - 6.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({6,4,2,8,77}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,7,11,8,12,13,20,8,12,2,8,11,2}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,83,3,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,11,8,10,12,14,20,22,8,2,8,22}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,8,7,4,6,5,71,4,3,6,6}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,99,8,10,12,14,20,22,8,6,2,20,10}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,57,5,8,6,8,10,14,20,29,8,2,8,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,21,10,11,20,13,19,22,8,2,8}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,2,10,12,14,19,23,8,2,5}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({65,4,5,6,8,10,12,14,20,22,6}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,7,6,4,45,83,4,3,3}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,6,8,5,10,14,20,22,8,2,8,4}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({4,5,18,11,8,10,12,20,5,2}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,3,8,6,5,4,5,3,4,5}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,3,8,17,6,37,18,4,4,6}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,65,6,2,8,10,12,20,14,19,23,8,2,5}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,0,1,2,6,8,3,15,15,11,0}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({7,8,7,55,6,5,7,4}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,53,5,4,6,8,10,12,14,19,53,8,2,5}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,13,19,22,8,8,8}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,65,8,6,5,3,6}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,95,6,5,4,3,2,17,12}) - 12.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,18,17,16,15,14,13,12,11,9,8,7,6,5,4,3,2,1,18}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,15,14,13,12,13,10,2,9,8,7,6,4,3,2,1,1}) - 9.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,7,7,7,4,6,5,4,3,8,7}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({12,1,79,12,6,8,3,15,15}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,53,5,4,6,8,10,12,19,53,8,2}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({39,2,3,5,6,7,8,9,11,12,49,13,14,15,17,18,19,20,3}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,17,20}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,18,15,14,13,12,11,9,8,7,6,5,4,95,2,6,17,6,1,15,10}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,4,5,8,14,20,22,8,2}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,8,7,4,6,5,71,4,3,6,6,71}) - 6.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({6,5,2,77,7,53,49,49}) - 28.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({65,4,5,6,8,10,14,20,22,6}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,20,20,18,17,16,15,14,13,12,11,10,9,8,7,95,6,5,4,3,17,18,12}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,3,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,10,10,10,10}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,8,6,8,10,14,20,2,15,8,4}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,8,10,12,14,5,20,22}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,16,10,12,14,19,53,8,2,5,10}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,65,6,8,12,14,22,8,2,14,14}) - 10.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,6,5,63,5,4,3,20,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,3,8,69,18,4,69}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,8,12,13,14,91,20,22,10}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,4,5,6,8,9,10,11,63,13,14,15,16,17,18,19,20}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,7,7,7,5,4,3}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,2,5,6,7,8,9,10,11,12,13,14,15,17,18,19,20}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,3,8,17,6,47,4,4,3,4,10}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,8,6,5,4,11,4,8,5}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,99,6,8,10,14,20,22,8,2,8,63,4}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,8,5,6,8,10,12,14,19,23,2,14}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({15,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,5,6,59,9,11,12,49,13,15,17,18,19,20,11}) - 12.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,4,10,10,6}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1,17,20}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,2,35,74,8,5,5,63,3,3,4}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({4,5,6,9,20,8,10,14,21,20,22,8,2}) - 9) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,11,8,10,12,14,20,22,8,2,2,8,22}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,13,19,79,8,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,53,5,4,6,73,8,10,12,14,19,53,8,2,5}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,8,5,6,8,10,12,14,19,22,14,5,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,20,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,47,49,51,53,55,57,59,61,63,65,67,69,71,75,77,79,81,83,85,87,89,91,93,95,97,99,81,71}) - 51) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,4,5,6,7,8,9,10,11,12,13,15,17,18,19,20,13}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({52,1,2,5,6,8,10,53,14,19,53,2}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,14,19,81,22,8,12,12}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,9,14,31,19,22,8,12,6}) - 9.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,21,6,8,10,12,14,19,81,22,8,12}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,65,5,6,8,12,6,14,20,22,8,2,4,6,6}) - 6.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,8,5,59,6,8,10,12,13,19,22,8,8,8,13}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,20,20,18,17,16,15,14,13,12,11,10,9,7,95,6,5,4,3,17,18,12}) - 12.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,33,25,12,14,20,22,5}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,9,11,12,13,14,15,16,17,20}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,14,19,53,8,2,5,10,53,19}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,8,4,6,5,4,3,4,4,8}) - 4.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,8,6,8,10,14,20,29,8,2,8,8,2,4}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,12,6,9,8,10,12,14,19,22,8,2,6}) - 9) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,10,14,20,22,8,8,83,4}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,8,5,6,8,10,12,14,23,2,14,12}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,10,9,8,7,4,6,2,6,4,3}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,3,8,7,17,6,5,62,4,4,8,5,5}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,33,25,12,14,20,22,5,25}) - 14) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,7,6,4,0,45,83,3}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,77,3,5,6,8,10,12,54,14,20,22,8,3}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,25,43,12,14,22,5}) - 10.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,65,35,12,14,20,22,15,8,66,77,14}) - 15) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,10,12,14,19,23,8,2,5,8,10}) - 8.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,8,4,6,5,4,3,4}) - 5.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,9,11,12,13,12,14,15,16,17,20}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({4,6,12,14,20,20,22}) - 14) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,2,5,6,7,8,9,11,12,13,14,15,16,17,18,19,20,1,2}) - 9) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({6,4,2,17,77}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,11,10,9,8,7,95,6,5,4,3,2,17}) - 12.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,5,6,8,25,12,14,20,22,5,6}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,2,74,8,6,5,63,4,33,4}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,3,3,3,3,3}) - 3.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,20,30,40}) - 25.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({-10,-5,0,5,10}) - 0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,10}) - 10.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,10,10,10,10,10}) - 10.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,2,3,4,5,6,7,8,9,10,11}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99,27}) - 49) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,16,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99,27}) - 48.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,6,8,3,15,15,2,15}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,6,8,3,15,2,25}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,2,1,7}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,6,8,3,15,15,3}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,5,6,8,3,15,15,2,15}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,16,4,3,2,1}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,51,12,11,10,9,8,7,6,16,4,3,2,1}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,5,6,8,3,15,15}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,5,17,8,3,15,15}) - 8.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,51,12,11,10,9,8,7,6,16,4,3,2,1,4}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,6,73,8,3,15,2,25}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,51,18,17,74,16,15,14,51,12,11,10,9,8,7,6,16,4,3,2,1}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,27,12,11,10,9,8,7,6,4,3,2,1}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,16,4,3,2,1,7}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,7,9,11,13,15,17,19,21,23,25,27,16,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99,27}) - 49) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,6,4,4,3}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,6,8,3,15,15,1,15}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,6,8,3,4,15,15}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,1,6,5,4,3,2,1,7}) - 9.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,55,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,5,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,7,9,11,13,15,17,19,21,45,25,27,16,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,65,93,95,97,99,27}) - 49) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,61,16,15,14,13,12,11,10,9,8,23,6,16,4,3,2,1,7}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,0,27,12,11,10,9,8,7,6,4,3,2,1}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({11,1,2,6,8,3,4,15,15}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,67,18,17,16,15,14,0,27,12,11,10,9,8,7,6,4,3,2,1,16}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,4,5,6,7,65,9,10,11,12,13,14,15,16,17,18,19,20}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,4,5,6,65,9,10,11,12,13,14,15,16,17,18,4,19,20}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,85,87,89,91,93,95,97,99}) - 49) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,5,6,8,83,12,14,20,22}) - 10.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,7,9,11,13,13,15,17,19,21,45,25,27,16,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,49,65,67,69,71,73,75,77,79,81,83,85,87,89,65,93,95,97,99,27}) - 49) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,55,0,0,1,1,1,1,2,2,2,2,2,3,3,3,3,3,5,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,4,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,6,6,8,83,12,20,22}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,81,9,9,9,9,9,10,10,10,10,9}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,6,8,3,15,15,1,15,15}) - 8.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,51,12,11,10,9,8,7,6,16,4,3,2,1,4,8}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,95,18,17,16,15,14,51,12,11,10,9,8,7,6,16,4,3,2,1,4,17}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,27,12,11,10,9,7,6,4,3,2,1}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,55,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,75,3,3,5,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,0,27,12,11,10,9,8,7,6,4,3,2,23,18,14}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({11,1,2,6,8,4,73,15}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,0,27,12,11,10,9,8,7,7,4,3,2,1}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,4,5,6,7,65,9,10,12,13,14,15,16,17,18,19,20,16}) - 13) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,13,11,10,9,8,7,6,5,4,3,2,1}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,2,37,7}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,9,11,13,15,17,19,21,23,25,27,16,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99,27,57}) - 51) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,6,5,4,3,3}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,2,7,6,4,4,3}) - 4) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,89,13,12,11,10,9,7,6,16,4,3,2,1,89}) - 12.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,13,11,11,10,9,8,7,6,5,4,3,2,1}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({11,5,1,2,7,8,3,4,15,15}) - 6.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,85,87,89,91,93,95,97,99,55}) - 50.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10,0}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,0,27,12,11,10,9,8,7,7,4,3,2,0,7}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,8,3,15,15,1,15}) - 8.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,27,12,11,10,9,7,6,4,3,2,89}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,4,5,6,7,65,9,10,11,12,13,14,16,17,18,19,20,4}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,12,11,10,9,8,7,6,16,4,3,2,1,4,14}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,17,8,3,83,16}) - 9) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,4,5,6,8,65,9,10,11,12,13,14,16,17,18,19,20,4}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,67,18,17,16,15,14,0,27,12,11,10,9,8,7,6,4,3,2,1,16,67,4}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,67,18,74,17,16,15,14,0,27,12,11,10,9,8,7,6,4,3,2,1,16}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,5,4,3,3,9}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,7,9,11,13,15,17,19,21,45,25,27,16,29,31,33,35,37,39,91,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,65,93,95,97,99,27}) - 50.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,85,87,89,91,93,95,97,99,55,51}) - 51.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({11,5,1,2,7,8,3,4,15,6,15}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,2,6,8,3,15,15,1,15,15,8}) - 8.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,18,17,16,15,14,51,12,11,10,9,8,7,6,16,4,3,2,1,4}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,75,6,6,8,83,12,20,22}) - 10.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,0,27,12,11,10,9,8,7,6,4,3,2,1,17}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,67,18,17,16,15,14,0,27,12,11,10,77,8,7,6,4,3,2,1,16}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99}) - 51) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,2,37,7,37}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,55,0,23,1,1,1,1,1,2,2,2,2,2,3,3,3,75,3,3,5,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,10,10,10,10,10}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,14,7,6,5,4,3,7}) - 7) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,95,18,17,16,15,14,51,12,11,10,9,8,6,16,4,3,2,1,4,17}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,75,6,61,6,8,83,12,20,22}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,4,5,6,7,65,9,10,12,13,14,15,16,17,18,19,20,16,35,10}) - 13) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,75,6,61,6,8,83,20,22}) - 14.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,13,15,17,20,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,85,87,89,91,93,95,97,99,55,51,3}) - 51) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,18,17,16,15,14,51,12,11,73,10,9,8,7,6,16,4,3,2,1,4,3}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,67,18,17,16,15,14,0,27,13,11,10,9,8,7,6,17,3,2,1,16,67,4}) - 13.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({95,20,19,18,17,16,15,14,51,12,11,10,9,8,7,6,16,4,3,2,1,4,8}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99,25,97}) - 51) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,91,6,8,3,15,2,15}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,11,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,75,3,3,5,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,10,10,10,10,10}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,5,17,3,15}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,51,18,17,74,16,16,14,51,12,11,10,9,8,7,6,16,4,3,2,1}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,8,27,83,11,10,9,6,4,3,2,1}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,0,27,12,11,10,9,8,8,7,7,4,3,2,0,7}) - 9.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,39,6,8,3,15,15,1,15,15}) - 10.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99,27}) - 48.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,47,49,51,53,55,57,59,61,63,97,65,67,69,71,73,75,77,79,81,83,85,67,87,89,91,93,95,97,99,25,97}) - 53) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,19,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,85,87,89,91,93,95,97,99}) - 48.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,9,18,17,16,15,14,0,27,11,10,9,8,7,7,4,3,0,7}) - 9.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,3,15,16,1,15}) - 9) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,4,5,6,7,65,9,10,12,13,14,15,17,18,19,20,16,3,17}) - 12.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,27,12,11,10,8,7,6,4,3,2,1,18}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,1,2,6,8,3,4,15,15}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,8,8,8,8,8,9,9,9,9,10,10,10,10,10}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,0,27,12,11,89,10,9,8,6,6,4,3,2,1}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,81,9,9,9,9,51,10,10,10,10,9}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,17,8,3,15}) - 8.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,7,9,11,13,15,17,19,21,45,25,27,16,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,65,93,97,99,27}) - 48.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,5,6,8,3,15,15,2,15,9}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,85,87,89,91,93,95,97,99,55,51,47}) - 51) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,25,13,12,11,10,9,8,10,7,6,5,4,3,2,1}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,51,12,11,10,9,8,97,7,6,16,4,3,2,1,4}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,7,9,11,13,15,17,19,21,23,25,27,16,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,80,83,85,87,89,91,93,95,97,99,27}) - 49) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,9,11,13,15,17,19,21,25,27,16,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99,27,57}) - 52.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,55,17,16,15,14,51,12,11,10,9,8,7,6,16,4,3,2,1,4,8}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,7,6,4,4,0}) - 4.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,7,9,11,15,17,19,21,45,25,27,16,29,31,33,35,37,39,41,74,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,65,93,95,97,99,27}) - 51) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,7,9,11,13,15,17,19,21,23,25,27,16,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99}) - 50.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({11,1,2,17,8,3,15,15}) - 9.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,0,12,11,10,9,8,7,7,4,3,2,0,7}) - 9.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,16,4,3,2,1,7,14}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,95,25,13,12,11,10,9,8,7,6,5,4,3,2,1}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,6,8,3,15,15,2,15,15}) - 8.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,11,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,10,10,10,10,10,2,8}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,0,12,11,11,9,8,7,7,4,13,3,2,0,7,18}) - 11.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,21,3,4,5,6,65,9,10,11,12,13,14,15,16,17,18,4,19,20}) - 12.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,75,6,6,8,83,12,20,22,20}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,7,11,13,15,17,19,21,23,25,27,16,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,80,83,85,87,89,91,93,95,97,27,27}) - 48.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,18,16,15,14,51,12,11,10,9,8,97,7,6,16,4,3,1,4}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,55,0,0,1,1,1,1,2,2,2,2,2,3,3,3,3,3,5,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,4,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10,8}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,4,5,6,7,65,9,10,12,13,14,15,16,17,18,19,20,16,35,10,18}) - 13.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,7,11,13,15,17,19,21,23,25,27,16,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,73,75,77,79,80,83,85,87,89,91,93,95,97,27,27,73}) - 48.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,4,5,6,7,65,9,10,12,13,14,15,16,17,18,19,20,16,35,10,16}) - 13.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,25,13,12,11,9,8,10,7,6,5,4,3,2,1}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,5,6,8,3,15,15,3}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,27,12,11,10,8,6,4,3,2,1,19}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({11,29,5,1,2,7,8,3,4,15,6,15}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,13,12,11,10,9,8,6,5,4,3,2,1,7}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,27,12,11,10,8,8,6,4,3,2,1,18}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,4,5,6,7,65,9,10,12,13,14,15,16,17,18,19,20,16,35,79,18}) - 14.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,55,0,0,1,1,5,1,1,2,2,2,2,2,3,3,3,3,3,5,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,4,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,18,17,16,15,14,51,12,11,10,9,8,2,7,6,16,4,3,2,1,4,18,12}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,18,17,16,15,14,13,12,11,10,9,8,7,6,16,4,3,2,1}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,10,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97}) - 50.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,91,6,8,4,15,2,15}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,8,27,83,11,10,9,6,4,3,2,1,16}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,18,17,16,15,14,0,27,12,11,10,9,8,7,7,4,3,2,0,7}) - 9.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,13,12,11,9,19,8,7,6,5,4,2,1,7}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,67,18,17,16,15,14,0,27,12,11,10,9,8,7,4,3,2,1,16}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,4,5,6,7,65,9,10,13,14,15,16,17,18,19,20,16,35,10,16}) - 14) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,91,6,8,4,15,2,14}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,16,15,14,27,12,11,10,9,8,7,6,4,3,2,1}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,5,6,3,15,15}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,43,45,47,49,51,53,55,57,59,61,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99,27}) - 49) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,55,0,0,1,1,1,1,2,2,2,2,2,3,3,3,3,3,5,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,4,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,9,10,10,10,8}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,4,5,6,7,65,9,10,12,14,15,16,17,18,19,20,16}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,5,17,8,3,15,99}) - 8.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,0,27,12,11,10,77,7,6,10,4,3,2,1,16}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,16,18,17,16,15,14,27,12,11,10,9,7,6,4,3,2,89,11}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,13,11,11,10,9,8,7,5,4,3,2,1}) - 11.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,1,6,5,4,3,2,1,7,9}) - 9) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,33,1,2,6,73,9,3,15,2,25}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,8,7,9,6,5,4,3}) - 7.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,7,9,11,13,13,15,17,19,21,45,25,27,16,29,73,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,49,65,67,69,71,73,75,77,79,81,83,85,87,89,65,93,95,97,99,27}) - 49.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,9,11,1,2,6,73,8,3,15,2,25}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,11,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,75,3,3,5,4,4,4,4,4,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,6,4,4,3,7,4}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,6,37,71,8,3,4,15,15}) - 8.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({11,1,2,6,8,3,4,15}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,2,6,8,3,15,15,1,15,15,17,5,8,8}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99,25,97,91}) - 52.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,18,17,16,15,14,13,12,11,9,8,7,6,16,4,3,2,1}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,87,4,5,6,8,65,9,10,11,12,13,14,16,17,18,19,20,4,20}) - 12.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,75,6,61,6,8,83,12,20,22,2}) - 10.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,14,0,12,11,10,9,8,7,4,3,2,0,7}) - 9.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,16,18,17,16,15,14,27,12,11,10,9,7,6,4,3,2,89,11,17}) - 14) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,75,6,61,6,8,83,12,20,22,2,12}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,9,11,13,15,17,19,21,23,25,27,16,29,31,33,35,37,31,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99,27,57}) - 51) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,14,7,6,5,4,47,3,7}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,18,17,16,15,14,13,12,11,10,9,8,7,6,16,4,3,2,1}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,61,16,15,13,13,12,12,9,9,8,23,6,16,4,3,2,1,7,4}) - 12.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,67,18,17,16,15,14,0,27,13,11,10,9,8,7,6,17,3,2,1,16,4}) - 13) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,91,6,8,4,15,2,14,1,1,2,9}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10,0}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,18,17,16,15,14,27,12,11,10,9,7,6,4,3,2,89}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,16,15,14,27,11,10,8,7,6,4,3,2,1}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,7,9,11,13,15,17,19,21,23,25,27,16,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,55,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99}) - 50.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,13,14,13,13,11,10,9,8,7,6,5,4,3,2,1}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,4,5,6,7,65,9,10,12,13,89,15,16,17,18,19,20,16,35,79,18}) - 15.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,0,12,11,10,9,8,7,7,4,3,2,0,7,11}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,18,18,17,16,15,14,51,12,11,10,9,8,7,6,16,4,3,2,1,4,8}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,4,5,6,8,65,9,10,11,12,13,14,16,17,18,19,20,3,4}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,51,12,11,10,9,8,97,57,7,6,16,4,3,2,1,4}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,85,87,89,91,93,95,97,99,55,51,47,35}) - 50.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,18,39,41,43,45,47,48,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99,27,63}) - 49.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({19,18,17,16,15,14,13,12,11,9,8,7,6,16,4,3,2,1,12}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,11,0,0,1,1,1,1,1,2,2,37,2,2,3,3,3,75,3,3,5,4,4,4,4,4,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10}) - 5.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,25,13,12,11,10,9,8,10,7,6,5,4,3,25,2,1,7}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,16,15,14,27,12,11,10,9,8,7,4,3,2,1,12}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,6,4,4,3,7,4,4}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,6,16,4,3,2,1,7,14}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,13,14,13,13,11,10,9,8,6,5,4,3,2,1}) - 12.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,6,8,3,4,15,15,6}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,0,17,27,12,11,10,9,8,7,6,4,3,2,1}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,13,11,11,10,9,8,7,5,4,3,2,1,18}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,8,3,27,83,11,10,9,6,4,3,2,1}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,35,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,85,87,89,91,93,95,97,99,55}) - 49) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,14,7,8,5,47,3,7}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,33,1,2,6,73,9,3,15,35,2,25}) - 9) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,4,5,6,7,65,9,13,14,15,16,17,18,19,20,16,35,10,16}) - 14.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,51,18,17,74,16,15,14,16,51,12,11,10,9,8,7,6,4,3,2,1}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({11,1,2,6,8,73,15}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,6,8,3,15,15,2,15,15,2}) - 8) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({11,7,20,1,1,6,8,3,4,15}) - 6.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,47,49,51,53,55,57,59,61,63,66,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99,25,97,91}) - 52.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,77,5,7,65,9,65,10,12,13,14,15,16,17,18,19,20,16,35,10}) - 15) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,4,5,6,7,65,9,10,12,13,15,16,17,18,19,20,16,35,10,16}) - 13) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,67,18,17,15,14,0,27,12,11,10,77,8,12,6,4,3,2,1,16}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,2,5,10,6,3,15,15}) - 9) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,9,11,13,15,17,19,21,23,25,27,16,29,31,33,35,37,31,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,97,99,27,57}) - 50.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,0,27,12,11,10,9,7,4,3,2,1,17}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({11,1,2,6,73,15}) - 8.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,67,18,17,16,15,14,0,27,12,11,10,77,8,7,6,4,3,2,1,-1,16,27}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,11,0,0,1,1,1,1,1,2,2,37,2,2,3,3,3,75,3,3,5,4,4,4,4,4,37,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10}) - 6.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,11,9,8,7,6,6,16,4,3,2,1,7,14}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,11,9,8,7,6,6,16,4,3,2,1,7,14,7,12}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,91,6,8,4,15,2,14,1,1,9,2,9,2}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,7,9,11,13,15,17,19,21,45,25,27,16,29,31,33,35,37,39,91,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,65,93,95,97,99,27,45}) - 49) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,97,27,12,11,10,8,7,6,4,3,2,1,18}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,55,0,0,1,2,5,1,1,2,2,2,2,2,3,3,3,3,3,5,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,4,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({11,7,20,1,1,53,8,3,4,15}) - 7.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,51,12,11,10,9,8,7,6,16,4,3,2,1,4,15}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,8,51,18,17,74,16,16,14,51,12,11,10,9,8,7,6,16,4,3,2,1}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,67,18,17,16,8,15,14,0,27,12,11,10,9,8,7,6,4,3,2,1,16,67,4}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,3,15,16,1,15,1}) - 6.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,11,0,0,1,1,1,1,2,2,2,2,2,3,3,3,75,3,3,5,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,7,9,9,9,9,9,74,10,10,10,10}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,1,2,6,37,-1,71,8,3,4,15,15}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,91,6,8,4,15,2,14,1,1,2,9,1}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,11,27,12,11,10,9,8,7,7,4,3,2,0,7}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,67,18,17,16,15,14,0,7,27,12,11,10,77,8,7,6,1,4,3,2,1,66,16,27}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,14,27,12,11,10,8,7,6,4,3,2,1,18}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,2,6,37,71,8,3,4,15,15}) - 9) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,8,14,51,12,11,10,9,8,7,6,17,4,3,2,1,4}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({3,5,9,11,13,15,17,19,21,23,25,27,16,29,31,33,35,37,31,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,16,93,97,99,27,57}) - 48.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,51,12,11,10,9,8,7,6,16,4,3,2,1,4,8,16}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,81,23,25,27,29,31,33,35,37,39,41,43,47,49,51,53,55,57,59,61,63,66,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99,25,97,91}) - 54.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,89,91,93,95,97,99,25,97,91,49}) - 51) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,14,16,15,14,27,12,11,10,9,7,6,4,3,2,1}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,16,18,17,16,15,14,27,12,11,10,9,7,47,6,4,3,2,89,11}) - 14) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,75,6,61,6,83,20,22}) - 20) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,51,12,81,11,10,9,8,97,57,7,6,16,4,3,2,1,4,16,12}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,55,0,0,1,2,5,1,1,2,2,2,2,2,3,3,3,3,3,5,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,4,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10,9,6}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,13,11,9,8,7,6,5,4,3,2,1}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,0,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,10,10,10,10,10,10}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,6,8,3,18,15,15,1,15,15}) - 9) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,16,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,85,87,41,89,91,93,95,97,99,27}) - 47) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,11,0,0,1,1,1,1,1,2,2,2,2,2,3,3,75,3,3,5,4,4,4,4,4,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10}) - 5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,13,11,11,10,9,8,7,5,4,3,2,1,18,3,9}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,3,4,5,6,7,65,9,10,12,13,14,15,17,18,19,20,16,2}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,91,6,8,4,15,2,14,1,1,9,1}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,13,12,11,11,9,8,7,6,6,16,4,3,2,1,7,14,7,12,16}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({0,0,11,0,0,1,1,1,1,1,2,2,2,2,2,3,3,3,75,3,3,5,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7,7,8,8,8,8,8,9,9,9,9,9,10,10,10,10,10,9}) - 5.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,92,6,8,4,15,2,15,6}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,14,0,27,12,11,10,9,8,7,6,4,3,2,3}) - 10.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,5,3,47,15,15,5}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,75,19,6,61,6,8,83,20,22}) - 19) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,13,14,13,3,13,11,10,9,8,7,6,5,4,3,2,1,15}) - 11) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,6,8,3,15,15,2,15,2}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,17,16,15,8,14,51,12,11,10,9,8,7,6,17,4,4,3,2,1,4}) - 10) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,16,15,14,27,11,10,8,7,6,4,3,2,1,6,7}) - 9.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({83,20,31,19,18,17,16,15,13,14,13,13,11,10,9,8,6,5,4,3,2,1}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,67,18,17,16,15,14,0,27,12,11,10,77,5,8,3,7,6,4,3,2,1,16}) - 11.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,9,8,7,6,3,4,4,3}) - 6) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,20,18,17,16,15,8,27,83,11,10,9,6,4,3,2,1,16}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,1,2,91,6,8,4,15,2,14,1,1,9,2,65,9,2}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({2,4,75,6,6,8,83,12,20,22,22}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({10,2,7,3,6,4,4,3,7}) - 4) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,11,0,2,6,8,3,15,15,0}) - 7.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,19,18,77,16,15,14,27,12,11,10,8,8,6,4,3,71,1,18,8}) - 13.0) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({20,8,51,18,17,74,16,16,14,51,12,11,10,9,8,7,16,4,3,2,1}) - 12) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({9,9,8,8,7,9,18,6,5,4,3,6}) - 7.5) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,13,15,17,19,21,23,25,91,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,85,87,89,91,93,95,97,99,55,51}) - 51) < 1e-4)){ tests_passed++; } total_tests++;

    if((abs(median({1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51,53,55,57,59,61,63,65,67,69,71,73,75,77,79,81,83,87,89,91,93,95,97,99}) - 49) < 1e-4)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


