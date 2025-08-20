#include <iostream>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= 9; ++i) {
        if ((n == 1 && i == 1) || (n > 1 && i == 1)) {
            count++;
        } else if ((n >= 2 && i >= 10 && i <= 99) || (n > 2 && i >= 1000 && i <= 9999)) {
            count++;
        } else if ((n == 3 && i >= 100 && i <= 999) || (n > 3 && i >= 10000 && i <= 99999)) {
            count++;
        }
    }
    return count;
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

    if((starts_one_ends(1) == 1)){ tests_passed++; } total_tests++;

    if((starts_one_ends(2) == 18)){ tests_passed++; } total_tests++;

    if((starts_one_ends(3) == 180)){ tests_passed++; } total_tests++;

    if((starts_one_ends(4) == 1800)){ tests_passed++; } total_tests++;

    if((starts_one_ends(5) == 18000)){ tests_passed++; } total_tests++;

    if((starts_one_ends(1) == 1)){ tests_passed++; } total_tests++;

    if((starts_one_ends(2) == 18)){ tests_passed++; } total_tests++;

    if((starts_one_ends(3) == 180)){ tests_passed++; } total_tests++;

    if((starts_one_ends(4) == 1800)){ tests_passed++; } total_tests++;

    if((starts_one_ends(5) == 18000)){ tests_passed++; } total_tests++;

    if((starts_one_ends(6) == 180000)){ tests_passed++; } total_tests++;

    if((starts_one_ends(10) == 1800000000)){ tests_passed++; } total_tests++;

    if((starts_one_ends(8) == 18000000)){ tests_passed++; } total_tests++;

    if((starts_one_ends(9) == 180000000)){ tests_passed++; } total_tests++;

    if((starts_one_ends(7) == 1800000)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


