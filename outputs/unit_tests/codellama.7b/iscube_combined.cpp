#include <cmath>

bool isCube(int a) {
    return std::cbrt(a) * std::cbrt(a) * std::cbrt(a) == a;
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


