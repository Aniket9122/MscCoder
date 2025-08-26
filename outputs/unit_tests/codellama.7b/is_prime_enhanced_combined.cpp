#include <cstdlib>

bool is_prime(long long n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
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

    if((is_prime(6) == false)){ tests_passed++; } total_tests++;

    if((is_prime(101) == true)){ tests_passed++; } total_tests++;

    if((is_prime(11) == true)){ tests_passed++; } total_tests++;

    if((is_prime(13441) == true)){ tests_passed++; } total_tests++;

    if((is_prime(61) == true)){ tests_passed++; } total_tests++;

    if((is_prime(4) == false)){ tests_passed++; } total_tests++;

    if((is_prime(1) == false)){ tests_passed++; } total_tests++;

    if((is_prime(5) == true)){ tests_passed++; } total_tests++;

    if((is_prime(11) == true)){ tests_passed++; } total_tests++;

    if((is_prime(17) == true)){ tests_passed++; } total_tests++;

    if((is_prime(5 * 17) == false)){ tests_passed++; } total_tests++;

    if((is_prime(11 * 7) == false)){ tests_passed++; } total_tests++;

    if((is_prime(13441 * 19) == false)){ tests_passed++; } total_tests++;

    if((is_prime(6) == false)){ tests_passed++; } total_tests++;

    if((is_prime(101) == true)){ tests_passed++; } total_tests++;

    if((is_prime(11) == true)){ tests_passed++; } total_tests++;

    if((is_prime(13441) == true)){ tests_passed++; } total_tests++;

    if((is_prime(61) == true)){ tests_passed++; } total_tests++;

    if((is_prime(4) == false)){ tests_passed++; } total_tests++;

    if((is_prime(1) == false)){ tests_passed++; } total_tests++;

    if((is_prime(5) == true)){ tests_passed++; } total_tests++;

    if((is_prime(17) == true)){ tests_passed++; } total_tests++;

    if((is_prime(85) == false)){ tests_passed++; } total_tests++;

    if((is_prime(77) == false)){ tests_passed++; } total_tests++;

    if((is_prime(255379) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-5) == false)){ tests_passed++; } total_tests++;

    if((is_prime(0) == false)){ tests_passed++; } total_tests++;

    if((is_prime(2) == true)){ tests_passed++; } total_tests++;

    if((is_prime(31) == true)){ tests_passed++; } total_tests++;

    if((is_prime(40) == false)){ tests_passed++; } total_tests++;

    if((is_prime(103) == true)){ tests_passed++; } total_tests++;

    if((is_prime(199) == true)){ tests_passed++; } total_tests++;

    if((is_prime(1009) == true)){ tests_passed++; } total_tests++;

    if((is_prime(8999) == true)){ tests_passed++; } total_tests++;

    if((is_prime(1234567) == false)){ tests_passed++; } total_tests++;

    if((is_prime(9000) == false)){ tests_passed++; } total_tests++;

    if((is_prime(32) == false)){ tests_passed++; } total_tests++;

    if((is_prime(9001) == true)){ tests_passed++; } total_tests++;

    if((is_prime(-1) == false)){ tests_passed++; } total_tests++;

    if((is_prime(39) == false)){ tests_passed++; } total_tests++;

    if((is_prime(1234566) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-4) == false)){ tests_passed++; } total_tests++;

    if((is_prime(9002) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-6) == false)){ tests_passed++; } total_tests++;

    if((is_prime(102) == false)){ tests_passed++; } total_tests++;

    if((is_prime(200) == false)){ tests_passed++; } total_tests++;

    if((is_prime(56) == false)){ tests_passed++; } total_tests++;

    if((is_prime(38) == false)){ tests_passed++; } total_tests++;

    if((is_prime(37) == true)){ tests_passed++; } total_tests++;

    if((is_prime(1010) == false)){ tests_passed++; } total_tests++;

    if((is_prime(1234568) == false)){ tests_passed++; } total_tests++;

    if((is_prime(1008) == false)){ tests_passed++; } total_tests++;

    if((is_prime(33) == false)){ tests_passed++; } total_tests++;

    if((is_prime(35) == false)){ tests_passed++; } total_tests++;

    if((is_prime(64) == false)){ tests_passed++; } total_tests++;

    if((is_prime(63) == false)){ tests_passed++; } total_tests++;

    if((is_prime(1234564) == false)){ tests_passed++; } total_tests++;

    if((is_prime(34) == false)){ tests_passed++; } total_tests++;

    if((is_prime(1011) == false)){ tests_passed++; } total_tests++;

    if((is_prime(1234569) == false)){ tests_passed++; } total_tests++;

    if((is_prime(197) == true)){ tests_passed++; } total_tests++;

    if((is_prime(-3) == false)){ tests_passed++; } total_tests++;

    if((is_prime(8998) == false)){ tests_passed++; } total_tests++;

    if((is_prime(57) == false)){ tests_passed++; } total_tests++;

    if((is_prime(28) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-2) == false)){ tests_passed++; } total_tests++;

    if((is_prime(3) == true)){ tests_passed++; } total_tests++;

    if((is_prime(1234563) == false)){ tests_passed++; } total_tests++;

    if((is_prime(36) == false)){ tests_passed++; } total_tests++;

    if((is_prime(9003) == false)){ tests_passed++; } total_tests++;

    if((is_prime(30) == false)){ tests_passed++; } total_tests++;

    if((is_prime(1234570) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-29) == false)){ tests_passed++; } total_tests++;

    if((is_prime(9004) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-7) == false)){ tests_passed++; } total_tests++;

    if((is_prime(16) == false)){ tests_passed++; } total_tests++;

    if((is_prime(1012) == false)){ tests_passed++; } total_tests++;

    if((is_prime(55) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-30) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-17) == false)){ tests_passed++; } total_tests++;

    if((is_prime(7937) == true)){ tests_passed++; } total_tests++;

    if((is_prime(34981) == true)){ tests_passed++; } total_tests++;

    if((is_prime(42043) == true)){ tests_passed++; } total_tests++;

    if((is_prime(-10) == false)){ tests_passed++; } total_tests++;

    if((is_prime(123456789) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-9) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-18) == false)){ tests_passed++; } total_tests++;

    if((is_prime(42042) == false)){ tests_passed++; } total_tests++;

    if((is_prime(12) == false)){ tests_passed++; } total_tests++;

    if((is_prime(123456790) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-16) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-15) == false)){ tests_passed++; } total_tests++;

    if((is_prime(7939) == false)){ tests_passed++; } total_tests++;

    if((is_prime(7938) == false)){ tests_passed++; } total_tests++;

    if((is_prime(7936) == false)){ tests_passed++; } total_tests++;

    if((is_prime(13) == true)){ tests_passed++; } total_tests++;

    if((is_prime(7935) == false)){ tests_passed++; } total_tests++;

    if((is_prime(23) == true)){ tests_passed++; } total_tests++;

    if((is_prime(42044) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-11) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-14) == false)){ tests_passed++; } total_tests++;

    if((is_prime(7934) == false)){ tests_passed++; } total_tests++;

    if((is_prime(7933) == true)){ tests_passed++; } total_tests++;

    if((is_prime(14) == false)){ tests_passed++; } total_tests++;

    if((is_prime(34980) == false)){ tests_passed++; } total_tests++;

    if((is_prime(24) == false)){ tests_passed++; } total_tests++;

    if((is_prime(15) == false)){ tests_passed++; } total_tests++;

    if((is_prime(42041) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-8) == false)){ tests_passed++; } total_tests++;

    if((is_prime(7940) == false)){ tests_passed++; } total_tests++;

    if((is_prime(70) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-13) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-40) == false)){ tests_passed++; } total_tests++;

    if((is_prime(18) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-12) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-47) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-49) == false)){ tests_passed++; } total_tests++;

    if((is_prime(34979) == false)){ tests_passed++; } total_tests++;

    if((is_prime(42040) == false)){ tests_passed++; } total_tests++;

    if((is_prime(34978) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-41) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-42) == false)){ tests_passed++; } total_tests++;

    if((is_prime(22) == false)){ tests_passed++; } total_tests++;

    if((is_prime(25) == false)){ tests_passed++; } total_tests++;

    if((is_prime(10) == false)){ tests_passed++; } total_tests++;

    if((is_prime(67) == true)){ tests_passed++; } total_tests++;

    if((is_prime(-39) == false)){ tests_passed++; } total_tests++;

    if((is_prime(26) == false)){ tests_passed++; } total_tests++;

    if((is_prime(62) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-48) == false)){ tests_passed++; } total_tests++;

    if((is_prime(66) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-20) == false)){ tests_passed++; } total_tests++;

    if((is_prime(7941) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-50) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-37) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-21) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-28) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-101) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-255379) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-2147483648) == false)){ tests_passed++; } total_tests++;

    if((is_prime(9999991) == true)){ tests_passed++; } total_tests++;

    if((is_prime(34982) == false)){ tests_passed++; } total_tests++;

    if((is_prime(34977) == false)){ tests_passed++; } total_tests++;

    if((is_prime(123456788) == false)){ tests_passed++; } total_tests++;

    if((is_prime(123456791) == true)){ tests_passed++; } total_tests++;

    if((is_prime(-91) == false)){ tests_passed++; } total_tests++;

    if((is_prime(93) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-90) == false)){ tests_passed++; } total_tests++;

    if((is_prime(92) == false)){ tests_passed++; } total_tests++;

    if((is_prime(34983) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-92) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-89) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-78) == false)){ tests_passed++; } total_tests++;

    if((is_prime(82) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-76) == false)){ tests_passed++; } total_tests++;

    if((is_prime(45) == false)){ tests_passed++; } total_tests++;

    if((is_prime(42045) == false)){ tests_passed++; } total_tests++;

    if((is_prime(44) == false)){ tests_passed++; } total_tests++;

    if((is_prime(46) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-100) == false)){ tests_passed++; } total_tests++;

    if((is_prime(19) == true)){ tests_passed++; } total_tests++;

    if((is_prime(72) == false)){ tests_passed++; } total_tests++;

    if((is_prime(91) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-38) == false)){ tests_passed++; } total_tests++;

    if((is_prime(-75) == false)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


