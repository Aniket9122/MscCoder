#include <iostream>
#include<cmath>
using namespace std;

bool is_simple_power(int x, int n) {
    if (n == 1) return true; // Any number raised to the 0th power gives 1. So it's always a simple power of any positive integer.
    
    while (x % n == 0 && x >= n){
        x /= n;
    }

    return x==1;
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

    if((is_simple_power(1, 4)== true)){ tests_passed++; } total_tests++;

    if((is_simple_power(2, 2)==true)){ tests_passed++; } total_tests++;

    if((is_simple_power(8, 2)==true)){ tests_passed++; } total_tests++;

    if((is_simple_power(3, 2)==false)){ tests_passed++; } total_tests++;

    if((is_simple_power(3, 1)==false)){ tests_passed++; } total_tests++;

    if((is_simple_power(5, 3)==false)){ tests_passed++; } total_tests++;

    if((is_simple_power(16, 2)== true)){ tests_passed++; } total_tests++;

    if((is_simple_power(143214, 16)== false)){ tests_passed++; } total_tests++;

    if((is_simple_power(4, 2)==true)){ tests_passed++; } total_tests++;

    if((is_simple_power(9, 3)==true)){ tests_passed++; } total_tests++;

    if((is_simple_power(16, 4)==true)){ tests_passed++; } total_tests++;

    if((is_simple_power(24, 2)==false)){ tests_passed++; } total_tests++;

    if((is_simple_power(128, 4)==false)){ tests_passed++; } total_tests++;

    if((is_simple_power(12, 6)==false)){ tests_passed++; } total_tests++;

    if((is_simple_power(1, 1)==true)){ tests_passed++; } total_tests++;

    if((is_simple_power(1, 12)==true)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


