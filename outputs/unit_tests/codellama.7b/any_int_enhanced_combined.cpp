#include <cmath>

bool any_int(float a, float b, float c) {
    // Check if all numbers are integers
    if (!std::isnan(a) && !std::isnan(b) && !std::isnan(c)) {
        int ia = (int)a;
        int ib = (int)b;
        int ic = (int)c;
        // Check if the sum of the numbers is equal to one of the numbers
        if ((ia + ib == ic) || (ib + ic == ia) || (ic + ia == ib)) {
            return true;
        }
    }
    return false;
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

    if((any_int(2, 3, 1)==true)){ tests_passed++; } total_tests++;

    if((any_int(2.5, 2, 3)==false)){ tests_passed++; } total_tests++;

    if((any_int(1.5, 5, 3.5)==false)){ tests_passed++; } total_tests++;

    if((any_int(2, 6, 2)==false)){ tests_passed++; } total_tests++;

    if((any_int(4, 2, 2)==true)){ tests_passed++; } total_tests++;

    if((any_int(2.2, 2.2, 2.2)==false)){ tests_passed++; } total_tests++;

    if((any_int(-4, 6, 2)==true)){ tests_passed++; } total_tests++;

    if((any_int(2,1,1)==true)){ tests_passed++; } total_tests++;

    if((any_int(3,4,7)==true)){ tests_passed++; } total_tests++;

    if((any_int(3.01,4,7)==false)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


