#include <iostream>

int largest_divisor(int n) {
    if (n == 1) {
        return 1;
    }

    for (int i = n / 2; i >= 1; i--) {
        if (n % i == 0) {
            return i;
        }
    }

    return 1;
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

    if((largest_divisor(3) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(7) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(10) == 5)){ tests_passed++; } total_tests++;

    if((largest_divisor(100) == 50)){ tests_passed++; } total_tests++;

    if((largest_divisor(49) == 7)){ tests_passed++; } total_tests++;

    if((largest_divisor(3) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(7) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(10) == 5)){ tests_passed++; } total_tests++;

    if((largest_divisor(100) == 50)){ tests_passed++; } total_tests++;

    if((largest_divisor(49) == 7)){ tests_passed++; } total_tests++;

    if((largest_divisor(2) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(27) == 9)){ tests_passed++; } total_tests++;

    if((largest_divisor(101) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(235) == 47)){ tests_passed++; } total_tests++;

    if((largest_divisor(500) == 250)){ tests_passed++; } total_tests++;

    if((largest_divisor(999) == 333)){ tests_passed++; } total_tests++;

    if((largest_divisor(1000) == 500)){ tests_passed++; } total_tests++;

    if((largest_divisor(36) == 18)){ tests_passed++; } total_tests++;

    if((largest_divisor(72) == 36)){ tests_passed++; } total_tests++;

    if((largest_divisor(81) == 27)){ tests_passed++; } total_tests++;

    if((largest_divisor(499) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(234) == 117)){ tests_passed++; } total_tests++;

    if((largest_divisor(73) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(998) == 499)){ tests_passed++; } total_tests++;

    if((largest_divisor(35) == 7)){ tests_passed++; } total_tests++;

    if((largest_divisor(22) == 11)){ tests_passed++; } total_tests++;

    if((largest_divisor(23) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(1001) == 143)){ tests_passed++; } total_tests++;

    if((largest_divisor(74) == 37)){ tests_passed++; } total_tests++;

    if((largest_divisor(236) == 118)){ tests_passed++; } total_tests++;

    if((largest_divisor(82) == 41)){ tests_passed++; } total_tests++;

    if((largest_divisor(75) == 25)){ tests_passed++; } total_tests++;

    if((largest_divisor(99) == 33)){ tests_passed++; } total_tests++;

    if((largest_divisor(76) == 38)){ tests_passed++; } total_tests++;

    if((largest_divisor(77) == 11)){ tests_passed++; } total_tests++;

    if((largest_divisor(24) == 12)){ tests_passed++; } total_tests++;

    if((largest_divisor(28) == 14)){ tests_passed++; } total_tests++;

    if((largest_divisor(80) == 40)){ tests_passed++; } total_tests++;

    if((largest_divisor(238) == 119)){ tests_passed++; } total_tests++;

    if((largest_divisor(29) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(237) == 79)){ tests_passed++; } total_tests++;

    if((largest_divisor(56) == 28)){ tests_passed++; } total_tests++;

    if((largest_divisor(57) == 19)){ tests_passed++; } total_tests++;

    if((largest_divisor(997) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(30) == 15)){ tests_passed++; } total_tests++;

    if((largest_divisor(4) == 2)){ tests_passed++; } total_tests++;

    if((largest_divisor(102) == 51)){ tests_passed++; } total_tests++;

    if((largest_divisor(37) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(233) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(103) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(78) == 39)){ tests_passed++; } total_tests++;

    if((largest_divisor(55) == 11)){ tests_passed++; } total_tests++;

    if((largest_divisor(5) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(58) == 29)){ tests_passed++; } total_tests++;

    if((largest_divisor(21) == 7)){ tests_passed++; } total_tests++;

    if((largest_divisor(83) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(25) == 5)){ tests_passed++; } total_tests++;

    if((largest_divisor(1003) == 59)){ tests_passed++; } total_tests++;

    if((largest_divisor(996) == 498)){ tests_passed++; } total_tests++;

    if((largest_divisor(11) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(501) == 167)){ tests_passed++; } total_tests++;

    if((largest_divisor(34) == 17)){ tests_passed++; } total_tests++;

    if((largest_divisor(232) == 116)){ tests_passed++; } total_tests++;

    if((largest_divisor(995) == 199)){ tests_passed++; } total_tests++;

    if((largest_divisor(231) == 77)){ tests_passed++; } total_tests++;

    if((largest_divisor(33) == 11)){ tests_passed++; } total_tests++;

    if((largest_divisor(79) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(502) == 251)){ tests_passed++; } total_tests++;

    if((largest_divisor(1004) == 502)){ tests_passed++; } total_tests++;

    if((largest_divisor(54) == 27)){ tests_passed++; } total_tests++;

    if((largest_divisor(1005) == 335)){ tests_passed++; } total_tests++;

    if((largest_divisor(1002) == 501)){ tests_passed++; } total_tests++;

    if((largest_divisor(20) == 10)){ tests_passed++; } total_tests++;

    if((largest_divisor(230) == 115)){ tests_passed++; } total_tests++;

    if((largest_divisor(98) == 49)){ tests_passed++; } total_tests++;

    if((largest_divisor(32) == 16)){ tests_passed++; } total_tests++;

    if((largest_divisor(31) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(53) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(65) == 13)){ tests_passed++; } total_tests++;

    if((largest_divisor(59) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(38) == 19)){ tests_passed++; } total_tests++;

    if((largest_divisor(52) == 26)){ tests_passed++; } total_tests++;

    if((largest_divisor(19) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(97) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(64) == 32)){ tests_passed++; } total_tests++;

    if((largest_divisor(12) == 6)){ tests_passed++; } total_tests++;

    if((largest_divisor(51) == 17)){ tests_passed++; } total_tests++;

    if((largest_divisor(1006) == 503)){ tests_passed++; } total_tests++;

    if((largest_divisor(39) == 13)){ tests_passed++; } total_tests++;

    if((largest_divisor(40) == 20)){ tests_passed++; } total_tests++;

    if((largest_divisor(60) == 30)){ tests_passed++; } total_tests++;

    if((largest_divisor(61) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(6) == 3)){ tests_passed++; } total_tests++;

    if((largest_divisor(96) == 48)){ tests_passed++; } total_tests++;

    if((largest_divisor(63) == 21)){ tests_passed++; } total_tests++;

    if((largest_divisor(26) == 13)){ tests_passed++; } total_tests++;

    if((largest_divisor(104) == 52)){ tests_passed++; } total_tests++;

    if((largest_divisor(239) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(41) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(88) == 44)){ tests_passed++; } total_tests++;

    if((largest_divisor(42) == 21)){ tests_passed++; } total_tests++;

    if((largest_divisor(84) == 42)){ tests_passed++; } total_tests++;

    if((largest_divisor(503) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(43) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(62) == 31)){ tests_passed++; } total_tests++;

    if((largest_divisor(18) == 9)){ tests_passed++; } total_tests++;

    if((largest_divisor(127) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(1321) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(500027) == 45457)){ tests_passed++; } total_tests++;

    if((largest_divisor(732312) == 366156)){ tests_passed++; } total_tests++;

    if((largest_divisor(1234567) == 9721)){ tests_passed++; } total_tests++;

    if((largest_divisor(732313) == 23623)){ tests_passed++; } total_tests++;

    if((largest_divisor(126) == 63)){ tests_passed++; } total_tests++;

    if((largest_divisor(500028) == 250014)){ tests_passed++; } total_tests++;

    if((largest_divisor(1322) == 661)){ tests_passed++; } total_tests++;

    if((largest_divisor(732314) == 366157)){ tests_passed++; } total_tests++;

    if((largest_divisor(1234568) == 617284)){ tests_passed++; } total_tests++;

    if((largest_divisor(1320) == 660)){ tests_passed++; } total_tests++;

    if((largest_divisor(500029) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(95) == 19)){ tests_passed++; } total_tests++;

    if((largest_divisor(500030) == 250015)){ tests_passed++; } total_tests++;

    if((largest_divisor(732311) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(1323) == 441)){ tests_passed++; } total_tests++;

    if((largest_divisor(1234569) == 411523)){ tests_passed++; } total_tests++;

    if((largest_divisor(1234566) == 617283)){ tests_passed++; } total_tests++;

    if((largest_divisor(500031) == 166677)){ tests_passed++; } total_tests++;

    if((largest_divisor(50) == 25)){ tests_passed++; } total_tests++;

    if((largest_divisor(732315) == 244105)){ tests_passed++; } total_tests++;

    if((largest_divisor(1234570) == 617285)){ tests_passed++; } total_tests++;

    if((largest_divisor(732310) == 366155)){ tests_passed++; } total_tests++;

    if((largest_divisor(128) == 64)){ tests_passed++; } total_tests++;

    if((largest_divisor(732309) == 244103)){ tests_passed++; } total_tests++;

    if((largest_divisor(1324) == 662)){ tests_passed++; } total_tests++;

    if((largest_divisor(500026) == 250013)){ tests_passed++; } total_tests++;

    if((largest_divisor(71) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(732316) == 366158)){ tests_passed++; } total_tests++;

    if((largest_divisor(131) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(125) == 25)){ tests_passed++; } total_tests++;

    if((largest_divisor(500025) == 166675)){ tests_passed++; } total_tests++;

    if((largest_divisor(70) == 35)){ tests_passed++; } total_tests++;

    if((largest_divisor(48) == 24)){ tests_passed++; } total_tests++;

    if((largest_divisor(47) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(46) == 23)){ tests_passed++; } total_tests++;

    if((largest_divisor(994) == 497)){ tests_passed++; } total_tests++;

    if((largest_divisor(69) == 23)){ tests_passed++; } total_tests++;

    if((largest_divisor(124) == 62)){ tests_passed++; } total_tests++;

    if((largest_divisor(1234572) == 617286)){ tests_passed++; } total_tests++;

    if((largest_divisor(1325) == 265)){ tests_passed++; } total_tests++;

    if((largest_divisor(500024) == 250012)){ tests_passed++; } total_tests++;

    if((largest_divisor(132) == 66)){ tests_passed++; } total_tests++;

    if((largest_divisor(1234571) == 94967)){ tests_passed++; } total_tests++;

    if((largest_divisor(1319) == 1)){ tests_passed++; } total_tests++;

    if((largest_divisor(94) == 47)){ tests_passed++; } total_tests++;

    if((largest_divisor(993) == 331)){ tests_passed++; } total_tests++;

    if((largest_divisor(130) == 65)){ tests_passed++; } total_tests++;

    if((largest_divisor(992) == 496)){ tests_passed++; } total_tests++;

    if((largest_divisor(129) == 43)){ tests_passed++; } total_tests++;

    if((largest_divisor(1318) == 659)){ tests_passed++; } total_tests++;

    if((largest_divisor(732317) == 38543)){ tests_passed++; } total_tests++;

    if((largest_divisor(732318) == 366159)){ tests_passed++; } total_tests++;

    if((largest_divisor(990) == 495)){ tests_passed++; } total_tests++;

    if((largest_divisor(44) == 22)){ tests_passed++; } total_tests++;

    if((largest_divisor(989) == 43)){ tests_passed++; } total_tests++;

    if((largest_divisor(732308) == 366154)){ tests_passed++; } total_tests++;

    if((largest_divisor(732306) == 366153)){ tests_passed++; } total_tests++;

    if((largest_divisor(732307) == 15581)){ tests_passed++; } total_tests++;

    if((largest_divisor(732305) == 146461)){ tests_passed++; } total_tests++;

    if((largest_divisor(732304) == 366152)){ tests_passed++; } total_tests++;

    if((largest_divisor(1234565) == 246913)){ tests_passed++; } total_tests++;

    if((largest_divisor(732303) == 244101)){ tests_passed++; } total_tests++;

    if((largest_divisor(8) == 4)){ tests_passed++; } total_tests++;

    if((largest_divisor(732302) == 366151)){ tests_passed++; } total_tests++;

    if((largest_divisor(92) == 46)){ tests_passed++; } total_tests++;

    if((largest_divisor(93) == 31)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


