#include <iostream>
using namespace std;

int get_largest_prime_divisor(int n) {
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return i;
        } else {
            i++;
        }
    }
    return n;
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

    if((largest_prime_factor(15) == 5)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(27) == 3)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(63) == 7)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(330) == 11)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(13195) == 29)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(15) == 5)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(27) == 3)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(63) == 7)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(330) == 11)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(13195) == 29)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(100) == 5)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(256) == 2)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(500) == 5)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(873) == 97)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(9999) == 101)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(121) == 11)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1764) == 7)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(4096) == 2)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(243) == 3)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1024) == 2)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(4097) == 241)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1765) == 353)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(120) == 5)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(501) == 167)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(4095) == 13)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(10000) == 5)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(255) == 17)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1025) == 41)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(4094) == 89)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(242) == 11)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1763) == 43)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(254) == 127)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(9998) == 4999)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(872) == 109)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(9997) == 769)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(502) == 251)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(119) == 17)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(9996) == 17)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(874) == 23)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(253) == 23)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(252) == 7)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1762) == 881)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(122) == 61)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(4098) == 683)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(871) == 67)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1023) == 31)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(9995) == 1999)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(870) == 29)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(99) == 11)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(98) == 7)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(118) == 59)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1761) == 587)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(117) == 13)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(123) == 41)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(10001) == 137)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(87) == 29)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(92) == 23)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(869) == 79)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1766) == 883)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(93) == 31)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(875) == 7)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(244) == 61)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(9994) == 263)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1767) == 31)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1760) == 11)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(124) == 31)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(245) == 7)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(116) == 29)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(9) == 3)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(88) == 11)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(10) == 5)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(86) == 43)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(246) == 41)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(85) == 17)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(115) == 23)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(247) == 19)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1022) == 73)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(91) == 13)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(248) == 31)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(125) == 5)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(94) == 47)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(10002) == 1667)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(249) == 83)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1768) == 17)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(876) == 73)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(38) == 19)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(868) == 31)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1020) == 17)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(8) == 2)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1026) == 19)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(90) == 5)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(866) == 433)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(39) == 13)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(867) == 17)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(9993) == 3331)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1027) == 79)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(9992) == 1249)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1029) == 7)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1028) == 257)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(40) == 5)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(18) == 3)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(60) == 5)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(49) == 7)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(95) == 19)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(48) == 3)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(114) == 19)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(96) == 3)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(72) == 3)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1030) == 103)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(9991) == 103)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(13433) == 101)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(456745) == 547)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(568623) == 17231)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(32767) == 151)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(4) == 2)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(6) == 3)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(12) == 3)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(21) == 7)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(13432) == 73)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(13434) == 2239)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(22) == 11)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(32766) == 127)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(13435) == 2687)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(20) == 5)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(456744) == 19031)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(568622) == 284311)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(81) == 3)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(456743) == 919)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(456742) == 1597)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(13431) == 37)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(32765) == 6553)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(80) == 5)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(456741) == 2671)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(456746) == 113)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(32764) == 8191)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(32763) == 163)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(568621) == 6389)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(82) == 41)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(568624) == 5077)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(32768) == 2)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(13430) == 79)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(456740) == 557)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(13429) == 1033)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(456739) == 401)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(32762) == 16381)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(32769) == 331)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(456747) == 152249)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(14) == 7)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(32761) == 181)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(32770) == 113)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(568620) == 13)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(24) == 3)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(52) == 13)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(568625) == 4549)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(51) == 17)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(456738) == 76123)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(30) == 5)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(50) == 5)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(32760) == 13)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(13428) == 373)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(13427) == 463)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(1000000) == 5)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(16) == 2)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(25) == 5)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(13436) == 3359)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(456749) == 5503)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(13437) == 1493)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(26) == 13)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(456748) == 1283)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(568626) == 94771)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(13438) == 6719)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(13439) == 151)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(456750) == 29)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(456751) == 691)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(456752) == 28547)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(28) == 7)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(32759) == 47)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(84) == 7)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(456753) == 13841)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(65) == 13)){ tests_passed++; } total_tests++;

    if((largest_prime_factor(64) == 2)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


