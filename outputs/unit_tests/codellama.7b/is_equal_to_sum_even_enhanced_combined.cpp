#include <iostream>
#include <algorithm>

using namespace std;

bool is_equal_to_sum_even(int n) {
    // check if n is even
    if (n % 2 != 0) {
        return false;
    }

    // try to find four even numbers that add up to n
    for (int i = 0; i <= n / 2; i++) {
        for (int j = 0; j <= n / 2; j++) {
            if (i + j == n) {
                return true;
            }
        }
    }

    // if we reach this point, no four even numbers were found that add up to n
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

    if((is_equal_to_sum_even(4) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(6) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(8) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(10) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(11) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(12) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(13) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(16) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(4) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(6) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(8) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(10) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(11) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(12) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(13) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(16) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(20) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(22) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(24) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(30) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(36) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(40) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(42) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(48) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(50) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(28) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(41) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(21) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(39) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(23) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(25) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(35) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(19) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(49) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(51) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(52) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(47) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(37) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(34) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-79) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(29) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(53) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(57) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(56) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-2) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(0) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(2) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(5) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(9) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(15) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(27) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(100) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(105) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-3) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(76) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(101) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(98) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(3) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(97) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(7) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(1) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(99) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-50) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(102) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-71) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-1) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-72) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-27) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(104) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(96) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-26) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-39) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-55) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-29) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-66) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(14) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-42) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(77) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-38) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-30) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-25) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-34) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(78) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(103) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-65) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-49) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-18) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-7) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(75) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-37) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-73) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-51) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(106) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(64) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-52) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-8) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-6) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-10) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(107) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(26) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(18) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(108) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(109) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(17) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(110) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(31) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-98) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-87) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-5) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-40) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-88) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-4) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(55) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-86) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(32) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(54) == true)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-68) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-90) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-91) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-78) == false)){ tests_passed++; } total_tests++;

    if((is_equal_to_sum_even(-80) == false)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


