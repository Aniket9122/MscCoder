#include <iostream>
using namespace std;

int sum_to_n(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
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

    if((sum_to_n(1) == 1)){ tests_passed++; } total_tests++;

    if((sum_to_n(6) == 21)){ tests_passed++; } total_tests++;

    if((sum_to_n(11) == 66)){ tests_passed++; } total_tests++;

    if((sum_to_n(30) == 465)){ tests_passed++; } total_tests++;

    if((sum_to_n(100) == 5050)){ tests_passed++; } total_tests++;

    if((sum_to_n(1) == 1)){ tests_passed++; } total_tests++;

    if((sum_to_n(6) == 21)){ tests_passed++; } total_tests++;

    if((sum_to_n(11) == 66)){ tests_passed++; } total_tests++;

    if((sum_to_n(30) == 465)){ tests_passed++; } total_tests++;

    if((sum_to_n(100) == 5050)){ tests_passed++; } total_tests++;

    if((sum_to_n(2) == 3)){ tests_passed++; } total_tests++;

    if((sum_to_n(3) == 6)){ tests_passed++; } total_tests++;

    if((sum_to_n(4) == 10)){ tests_passed++; } total_tests++;

    if((sum_to_n(7) == 28)){ tests_passed++; } total_tests++;

    if((sum_to_n(15) == 120)){ tests_passed++; } total_tests++;

    if((sum_to_n(20) == 210)){ tests_passed++; } total_tests++;

    if((sum_to_n(25) == 325)){ tests_passed++; } total_tests++;

    if((sum_to_n(50) == 1275)){ tests_passed++; } total_tests++;

    if((sum_to_n(75) == 2850)){ tests_passed++; } total_tests++;

    if((sum_to_n(1000) == 500500)){ tests_passed++; } total_tests++;

    if((sum_to_n(14) == 105)){ tests_passed++; } total_tests++;

    if((sum_to_n(5) == 15)){ tests_passed++; } total_tests++;

    if((sum_to_n(16) == 136)){ tests_passed++; } total_tests++;

    if((sum_to_n(26) == 351)){ tests_passed++; } total_tests++;

    if((sum_to_n(92) == 4278)){ tests_passed++; } total_tests++;

    if((sum_to_n(19) == 190)){ tests_passed++; } total_tests++;

    if((sum_to_n(93) == 4371)){ tests_passed++; } total_tests++;

    if((sum_to_n(94) == 4465)){ tests_passed++; } total_tests++;

    if((sum_to_n(999) == 499500)){ tests_passed++; } total_tests++;

    if((sum_to_n(51) == 1326)){ tests_passed++; } total_tests++;

    if((sum_to_n(17) == 153)){ tests_passed++; } total_tests++;

    if((sum_to_n(21) == 231)){ tests_passed++; } total_tests++;

    if((sum_to_n(22) == 253)){ tests_passed++; } total_tests++;

    if((sum_to_n(8) == 36)){ tests_passed++; } total_tests++;

    if((sum_to_n(74) == 2775)){ tests_passed++; } total_tests++;

    if((sum_to_n(52) == 1378)){ tests_passed++; } total_tests++;

    if((sum_to_n(23) == 276)){ tests_passed++; } total_tests++;

    if((sum_to_n(91) == 4186)){ tests_passed++; } total_tests++;

    if((sum_to_n(76) == 2926)){ tests_passed++; } total_tests++;

    if((sum_to_n(24) == 300)){ tests_passed++; } total_tests++;

    if((sum_to_n(90) == 4095)){ tests_passed++; } total_tests++;

    if((sum_to_n(18) == 171)){ tests_passed++; } total_tests++;

    if((sum_to_n(13) == 91)){ tests_passed++; } total_tests++;

    if((sum_to_n(27) == 378)){ tests_passed++; } total_tests++;

    if((sum_to_n(998) == 498501)){ tests_passed++; } total_tests++;

    if((sum_to_n(55) == 1540)){ tests_passed++; } total_tests++;

    if((sum_to_n(65) == 2145)){ tests_passed++; } total_tests++;

    if((sum_to_n(66) == 2211)){ tests_passed++; } total_tests++;

    if((sum_to_n(73) == 2701)){ tests_passed++; } total_tests++;

    if((sum_to_n(89) == 4005)){ tests_passed++; } total_tests++;

    if((sum_to_n(56) == 1596)){ tests_passed++; } total_tests++;

    if((sum_to_n(57) == 1653)){ tests_passed++; } total_tests++;

    if((sum_to_n(997) == 497503)){ tests_passed++; } total_tests++;

    if((sum_to_n(996) == 496506)){ tests_passed++; } total_tests++;

    if((sum_to_n(77) == 3003)){ tests_passed++; } total_tests++;

    if((sum_to_n(28) == 406)){ tests_passed++; } total_tests++;

    if((sum_to_n(87) == 3828)){ tests_passed++; } total_tests++;

    if((sum_to_n(88) == 3916)){ tests_passed++; } total_tests++;

    if((sum_to_n(72) == 2628)){ tests_passed++; } total_tests++;

    if((sum_to_n(54) == 1485)){ tests_passed++; } total_tests++;

    if((sum_to_n(53) == 1431)){ tests_passed++; } total_tests++;

    if((sum_to_n(86) == 3741)){ tests_passed++; } total_tests++;

    if((sum_to_n(85) == 3655)){ tests_passed++; } total_tests++;

    if((sum_to_n(78) == 3081)){ tests_passed++; } total_tests++;

    if((sum_to_n(67) == 2278)){ tests_passed++; } total_tests++;

    if((sum_to_n(29) == 435)){ tests_passed++; } total_tests++;

    if((sum_to_n(58) == 1711)){ tests_passed++; } total_tests++;

    if((sum_to_n(79) == 3160)){ tests_passed++; } total_tests++;

    if((sum_to_n(995) == 495510)){ tests_passed++; } total_tests++;

    if((sum_to_n(49) == 1225)){ tests_passed++; } total_tests++;

    if((sum_to_n(71) == 2556)){ tests_passed++; } total_tests++;

    if((sum_to_n(994) == 494515)){ tests_passed++; } total_tests++;

    if((sum_to_n(59) == 1770)){ tests_passed++; } total_tests++;

    if((sum_to_n(37) == 703)){ tests_passed++; } total_tests++;

    if((sum_to_n(80) == 3240)){ tests_passed++; } total_tests++;

    if((sum_to_n(48) == 1176)){ tests_passed++; } total_tests++;

    if((sum_to_n(47) == 1128)){ tests_passed++; } total_tests++;

    if((sum_to_n(38) == 741)){ tests_passed++; } total_tests++;

    if((sum_to_n(64) == 2080)){ tests_passed++; } total_tests++;

    if((sum_to_n(60) == 1830)){ tests_passed++; } total_tests++;

    if((sum_to_n(992) == 492528)){ tests_passed++; } total_tests++;

    if((sum_to_n(40) == 820)){ tests_passed++; } total_tests++;

    if((sum_to_n(993) == 493521)){ tests_passed++; } total_tests++;

    if((sum_to_n(81) == 3321)){ tests_passed++; } total_tests++;

    if((sum_to_n(12) == 78)){ tests_passed++; } total_tests++;

    if((sum_to_n(84) == 3570)){ tests_passed++; } total_tests++;

    if((sum_to_n(39) == 780)){ tests_passed++; } total_tests++;

    if((sum_to_n(9) == 45)){ tests_passed++; } total_tests++;

    if((sum_to_n(63) == 2016)){ tests_passed++; } total_tests++;

    if((sum_to_n(10) == 55)){ tests_passed++; } total_tests++;

    if((sum_to_n(83) == 3486)){ tests_passed++; } total_tests++;

    if((sum_to_n(62) == 1953)){ tests_passed++; } total_tests++;

    if((sum_to_n(991) == 491536)){ tests_passed++; } total_tests++;

    if((sum_to_n(61) == 1891)){ tests_passed++; } total_tests++;

    if((sum_to_n(36) == 666)){ tests_passed++; } total_tests++;

    if((sum_to_n(45) == 1035)){ tests_passed++; } total_tests++;

    if((sum_to_n(35) == 630)){ tests_passed++; } total_tests++;

    if((sum_to_n(68) == 2346)){ tests_passed++; } total_tests++;

    if((sum_to_n(990) == 490545)){ tests_passed++; } total_tests++;

    if((sum_to_n(1001) == 501501)){ tests_passed++; } total_tests++;

    if((sum_to_n(69) == 2415)){ tests_passed++; } total_tests++;

    if((sum_to_n(95) == 4560)){ tests_passed++; } total_tests++;

    if((sum_to_n(34) == 595)){ tests_passed++; } total_tests++;

    if((sum_to_n(70) == 2485)){ tests_passed++; } total_tests++;

    if((sum_to_n(96) == 4656)){ tests_passed++; } total_tests++;

    if((sum_to_n(215) == 23220)){ tests_passed++; } total_tests++;

    if((sum_to_n(217) == 23653)){ tests_passed++; } total_tests++;

    if((sum_to_n(214) == 23005)){ tests_passed++; } total_tests++;

    if((sum_to_n(216) == 23436)){ tests_passed++; } total_tests++;

    if((sum_to_n(213) == 22791)){ tests_passed++; } total_tests++;

    if((sum_to_n(43) == 946)){ tests_passed++; } total_tests++;

    if((sum_to_n(212) == 22578)){ tests_passed++; } total_tests++;

    if((sum_to_n(44) == 990)){ tests_passed++; } total_tests++;

    if((sum_to_n(42) == 903)){ tests_passed++; } total_tests++;

    if((sum_to_n(218) == 23871)){ tests_passed++; } total_tests++;

    if((sum_to_n(46) == 1081)){ tests_passed++; } total_tests++;

    if((sum_to_n(41) == 861)){ tests_passed++; } total_tests++;

    if((sum_to_n(211) == 22366)){ tests_passed++; } total_tests++;

    if((sum_to_n(219) == 24090)){ tests_passed++; } total_tests++;

    if((sum_to_n(220) == 24310)){ tests_passed++; } total_tests++;

    if((sum_to_n(1002) == 502503)){ tests_passed++; } total_tests++;

    if((sum_to_n(210) == 22155)){ tests_passed++; } total_tests++;

    if((sum_to_n(209) == 21945)){ tests_passed++; } total_tests++;

    if((sum_to_n(1003) == 503506)){ tests_passed++; } total_tests++;

    if((sum_to_n(221) == 24531)){ tests_passed++; } total_tests++;

    if((sum_to_n(82) == 3403)){ tests_passed++; } total_tests++;

    if((sum_to_n(1004) == 504510)){ tests_passed++; } total_tests++;

    if((sum_to_n(1005) == 505515)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


