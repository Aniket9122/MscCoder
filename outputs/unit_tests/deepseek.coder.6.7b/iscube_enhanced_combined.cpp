#include<cmath>
using namespace std;

bool iscube(int a){
    int cuberoot = (int)pow((double)abs(a), (1.0/3));  // get the cube root, taking care of negatives by using abs() and rounding to nearest integer
    return pow(cuberoot, 3) == abs(a);   // raise that back up to a power of 3 and see if it matches the original number (taking absolute value as needed)
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

    if((iscube(1) == true)){ tests_passed++; } total_tests++;

    if((iscube(2) == false)){ tests_passed++; } total_tests++;

    if((iscube(-1) == true)){ tests_passed++; } total_tests++;

    if((iscube(64) == true)){ tests_passed++; } total_tests++;

    if((iscube(180) == false)){ tests_passed++; } total_tests++;

    if((iscube(1000) == true)){ tests_passed++; } total_tests++;

    if((iscube(0) == true)){ tests_passed++; } total_tests++;

    if((iscube(1729) == false)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


