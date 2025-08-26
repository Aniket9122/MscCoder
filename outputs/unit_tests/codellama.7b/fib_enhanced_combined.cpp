#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        // Handle the case where n is less than or equal to 1
        if (n == 1 || n == 2) {
            return 1;
        }
        return fib(n-1) + fib(n-2);
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

    if((fib(10) == 55)){ tests_passed++; } total_tests++;

    if((fib(1) == 1)){ tests_passed++; } total_tests++;

    if((fib(8) == 21)){ tests_passed++; } total_tests++;

    if((fib(11) == 89)){ tests_passed++; } total_tests++;

    if((fib(12) == 144)){ tests_passed++; } total_tests++;

    if((fib(10) == 55)){ tests_passed++; } total_tests++;

    if((fib(1) == 1)){ tests_passed++; } total_tests++;

    if((fib(8) == 21)){ tests_passed++; } total_tests++;

    if((fib(11) == 89)){ tests_passed++; } total_tests++;

    if((fib(12) == 144)){ tests_passed++; } total_tests++;

    if((fib(0) == 0)){ tests_passed++; } total_tests++;

    if((fib(16) == 987)){ tests_passed++; } total_tests++;

    if((fib(2) == 1)){ tests_passed++; } total_tests++;

    if((fib(17) == 1597)){ tests_passed++; } total_tests++;

    if((fib(15) == 610)){ tests_passed++; } total_tests++;

    if((fib(14) == 377)){ tests_passed++; } total_tests++;

    if((fib(13) == 233)){ tests_passed++; } total_tests++;

    if((fib(3) == 2)){ tests_passed++; } total_tests++;

    if((fib(35) == 9227465)){ tests_passed++; } total_tests++;

    if((fib(36) == 14930352)){ tests_passed++; } total_tests++;

    if((fib(34) == 5702887)){ tests_passed++; } total_tests++;

    if((fib(4) == 3)){ tests_passed++; } total_tests++;

    if((fib(5) == 5)){ tests_passed++; } total_tests++;

    if((fib(44) == 701408733)){ tests_passed++; } total_tests++;

    if((fib(28) == 317811)){ tests_passed++; } total_tests++;

    if((fib(18) == 2584)){ tests_passed++; } total_tests++;

    if((fib(6) == 8)){ tests_passed++; } total_tests++;

    if((fib(45) == 1134903170)){ tests_passed++; } total_tests++;

    if((fib(29) == 514229)){ tests_passed++; } total_tests++;

    if((fib(7) == 13)){ tests_passed++; } total_tests++;

    if((fib(27) == 196418)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


