#include <iostream>
using namespace std;

int fibfib(int n) {
    if (n <= 1) return 0; // base case
    if (n == 2) return 1; // base case
    return fibfib(n-1) + fibfib(n-2) + fibfib(n-3); // recursive case
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

    if((fibfib(2) == 1)){ tests_passed++; } total_tests++;

    if((fibfib(1) == 0)){ tests_passed++; } total_tests++;

    if((fibfib(5) == 4)){ tests_passed++; } total_tests++;

    if((fibfib(8) == 24)){ tests_passed++; } total_tests++;

    if((fibfib(10) == 81)){ tests_passed++; } total_tests++;

    if((fibfib(12) == 274)){ tests_passed++; } total_tests++;

    if((fibfib(14) == 927)){ tests_passed++; } total_tests++;

    if((fibfib(2) == 1)){ tests_passed++; } total_tests++;

    if((fibfib(1) == 0)){ tests_passed++; } total_tests++;

    if((fibfib(5) == 4)){ tests_passed++; } total_tests++;

    if((fibfib(8) == 24)){ tests_passed++; } total_tests++;

    if((fibfib(10) == 81)){ tests_passed++; } total_tests++;

    if((fibfib(12) == 274)){ tests_passed++; } total_tests++;

    if((fibfib(14) == 927)){ tests_passed++; } total_tests++;

    if((fibfib(20) == 35890)){ tests_passed++; } total_tests++;

    if((fibfib(0) == 0)){ tests_passed++; } total_tests++;

    if((fibfib(15) == 1705)){ tests_passed++; } total_tests++;

    if((fibfib(23) == 223317)){ tests_passed++; } total_tests++;

    if((fibfib(21) == 66012)){ tests_passed++; } total_tests++;

    if((fibfib(25) == 755476)){ tests_passed++; } total_tests++;

    if((fibfib(13) == 504)){ tests_passed++; } total_tests++;

    if((fibfib(19) == 19513)){ tests_passed++; } total_tests++;

    if((fibfib(22) == 121415)){ tests_passed++; } total_tests++;

    if((fibfib(24) == 410744)){ tests_passed++; } total_tests++;

    if((fibfib(18) == 10609)){ tests_passed++; } total_tests++;

    if((fibfib(11) == 149)){ tests_passed++; } total_tests++;

    if((fibfib(26) == 1389537)){ tests_passed++; } total_tests++;

    if((fibfib(4) == 2)){ tests_passed++; } total_tests++;

    if((fibfib(16) == 3136)){ tests_passed++; } total_tests++;

    if((fibfib(27) == 2555757)){ tests_passed++; } total_tests++;

    if((fibfib(28) == 4700770)){ tests_passed++; } total_tests++;

    if((fibfib(3) == 1)){ tests_passed++; } total_tests++;

    if((fibfib(17) == 5768)){ tests_passed++; } total_tests++;

    if((fibfib(29) == 8646064)){ tests_passed++; } total_tests++;

    if((fibfib(30) == 15902591)){ tests_passed++; } total_tests++;

    if((fibfib(31) == 29249425)){ tests_passed++; } total_tests++;

    if((fibfib(32) == 53798080)){ tests_passed++; } total_tests++;

    if((fibfib(33) == 98950096)){ tests_passed++; } total_tests++;

    if((fibfib(34) == 181997601)){ tests_passed++; } total_tests++;

    if((fibfib(9) == 44)){ tests_passed++; } total_tests++;

    if((fibfib(35) == 334745777)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


