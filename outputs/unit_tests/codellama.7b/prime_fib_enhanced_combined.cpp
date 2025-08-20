#include <iostream>

int prime_fib(int n) {
    // Check if n is valid
    if (n < 1) {
        return -1;
    }

    // Initialize variables
    int a = 0, b = 1, c = 1;

    // Calculate the n-th Fibonacci number and check if it's prime
    for (int i = 0; i < n - 1; i++) {
        c = a + b;
        if (c % 2 == 0) {
            return -1;
        }
        a = b;
        b = c;
    }

    // Return the prime Fibonacci number
    return c;
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

    if((prime_fib(1) == 2)){ tests_passed++; } total_tests++;

    if((prime_fib(2) == 3)){ tests_passed++; } total_tests++;

    if((prime_fib(3) == 5)){ tests_passed++; } total_tests++;

    if((prime_fib(4) == 13)){ tests_passed++; } total_tests++;

    if((prime_fib(5) == 89)){ tests_passed++; } total_tests++;

    if((prime_fib(6) == 233)){ tests_passed++; } total_tests++;

    if((prime_fib(7) == 1597)){ tests_passed++; } total_tests++;

    if((prime_fib(8) == 28657)){ tests_passed++; } total_tests++;

    if((prime_fib(9) == 514229)){ tests_passed++; } total_tests++;

    if((prime_fib(10) == 433494437)){ tests_passed++; } total_tests++;

    if((prime_fib(1) == 2)){ tests_passed++; } total_tests++;

    if((prime_fib(2) == 3)){ tests_passed++; } total_tests++;

    if((prime_fib(3) == 5)){ tests_passed++; } total_tests++;

    if((prime_fib(4) == 13)){ tests_passed++; } total_tests++;

    if((prime_fib(5) == 89)){ tests_passed++; } total_tests++;

    if((prime_fib(6) == 233)){ tests_passed++; } total_tests++;

    if((prime_fib(7) == 1597)){ tests_passed++; } total_tests++;

    if((prime_fib(8) == 28657)){ tests_passed++; } total_tests++;

    if((prime_fib(9) == 514229)){ tests_passed++; } total_tests++;

    if((prime_fib(10) == 433494437)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


