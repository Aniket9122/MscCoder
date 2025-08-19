#include <iostream>
using namespace std;

int digits(int n){
    int product = 1, digit;
    while (n != 0) {
        // get last digit
        digit = n % 10;
        
        // if the digit is odd, multiply it to the product
        if(digit % 2 != 0){
            product *= digit;
        }
        
        // remove the processed digit from number
        n /= 10;
    }
    
    return (product == 1) ? 0 : product;
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

    if((digits(5) == 5)){ tests_passed++; } total_tests++;

    if((digits(54) == 5)){ tests_passed++; } total_tests++;

    if((digits(120) ==1)){ tests_passed++; } total_tests++;

    if((digits(5014) == 5)){ tests_passed++; } total_tests++;

    if((digits(98765) == 315)){ tests_passed++; } total_tests++;

    if((digits(5576543) == 2625)){ tests_passed++; } total_tests++;

    if((digits(2468) == 0)){ tests_passed++; } total_tests++;

    if((digits(5) == 5)){ tests_passed++; } total_tests++;

    if((digits(54) == 5)){ tests_passed++; } total_tests++;

    if((digits(120) == 1)){ tests_passed++; } total_tests++;

    if((digits(5014) == 5)){ tests_passed++; } total_tests++;

    if((digits(98765) == 315)){ tests_passed++; } total_tests++;

    if((digits(5576543) == 2625)){ tests_passed++; } total_tests++;

    if((digits(2468) == 0)){ tests_passed++; } total_tests++;

    if((digits(951) == 45)){ tests_passed++; } total_tests++;

    if((digits(246) == 0)){ tests_passed++; } total_tests++;

    if((digits(135797531) == 99225)){ tests_passed++; } total_tests++;

    if((digits(888) == 0)){ tests_passed++; } total_tests++;

    if((digits(182135) == 15)){ tests_passed++; } total_tests++;

    if((digits(703) == 21)){ tests_passed++; } total_tests++;

    if((digits(999) == 729)){ tests_passed++; } total_tests++;

    if((digits(111) == 1)){ tests_passed++; } total_tests++;

    if((digits(1001) == 1)){ tests_passed++; } total_tests++;

    if((digits(3) == 3)){ tests_passed++; } total_tests++;

    if((digits(952) == 45)){ tests_passed++; } total_tests++;

    if((digits(889) == 9)){ tests_passed++; } total_tests++;

    if((digits(998) == 81)){ tests_passed++; } total_tests++;

    if((digits(2) == 0)){ tests_passed++; } total_tests++;

    if((digits(182136) == 3)){ tests_passed++; } total_tests++;

    if((digits(25) == 5)){ tests_passed++; } total_tests++;

    if((digits(701) == 7)){ tests_passed++; } total_tests++;

    if((digits(4) == 0)){ tests_passed++; } total_tests++;

    if((digits(24) == 0)){ tests_passed++; } total_tests++;

    if((digits(997) == 567)){ tests_passed++; } total_tests++;

    if((digits(247) == 7)){ tests_passed++; } total_tests++;

    if((digits(6) == 0)){ tests_passed++; } total_tests++;

    if((digits(953) == 135)){ tests_passed++; } total_tests++;

    if((digits(135797532) == 99225)){ tests_passed++; } total_tests++;

    if((digits(7) == 7)){ tests_passed++; } total_tests++;

    if((digits(248) == 0)){ tests_passed++; } total_tests++;

    if((digits(23) == 3)){ tests_passed++; } total_tests++;

    if((digits(996) == 81)){ tests_passed++; } total_tests++;

    if((digits(135797533) == 297675)){ tests_passed++; } total_tests++;

    if((digits(995) == 405)){ tests_passed++; } total_tests++;

    if((digits(994) == 81)){ tests_passed++; } total_tests++;

    if((digits(891) == 9)){ tests_passed++; } total_tests++;

    if((digits(26) == 0)){ tests_passed++; } total_tests++;

    if((digits(8) == 0)){ tests_passed++; } total_tests++;

    if((digits(112) == 1)){ tests_passed++; } total_tests++;

    if((digits(22) == 0)){ tests_passed++; } total_tests++;

    if((digits(950) == 45)){ tests_passed++; } total_tests++;

    if((digits(702) == 7)){ tests_passed++; } total_tests++;

    if((digits(1000) == 1)){ tests_passed++; } total_tests++;

    if((digits(704) == 7)){ tests_passed++; } total_tests++;

    if((digits(182137) == 21)){ tests_passed++; } total_tests++;

    if((digits(893) == 27)){ tests_passed++; } total_tests++;

    if((digits(993) == 243)){ tests_passed++; } total_tests++;

    if((digits(135797534) == 99225)){ tests_passed++; } total_tests++;

    if((digits(135797535) == 496125)){ tests_passed++; } total_tests++;

    if((digits(245) == 5)){ tests_passed++; } total_tests++;

    if((digits(249) == 9)){ tests_passed++; } total_tests++;

    if((digits(9) == 9)){ tests_passed++; } total_tests++;

    if((digits(244) == 0)){ tests_passed++; } total_tests++;

    if((digits(890) == 9)){ tests_passed++; } total_tests++;

    if((digits(47) == 7)){ tests_passed++; } total_tests++;

    if((digits(992) == 81)){ tests_passed++; } total_tests++;

    if((digits(700) == 7)){ tests_passed++; } total_tests++;

    if((digits(135797530) == 99225)){ tests_passed++; } total_tests++;

    if((digits(705) == 35)){ tests_passed++; } total_tests++;

    if((digits(243) == 3)){ tests_passed++; } total_tests++;

    if((digits(27) == 7)){ tests_passed++; } total_tests++;

    if((digits(182134) == 3)){ tests_passed++; } total_tests++;

    if((digits(887) == 7)){ tests_passed++; } total_tests++;

    if((digits(46) == 0)){ tests_passed++; } total_tests++;

    if((digits(894) == 9)){ tests_passed++; } total_tests++;

    if((digits(699) == 81)){ tests_passed++; } total_tests++;

    if((digits(45) == 5)){ tests_passed++; } total_tests++;

    if((digits(707) == 49)){ tests_passed++; } total_tests++;

    if((digits(892) == 9)){ tests_passed++; } total_tests++;

    if((digits(182138) == 3)){ tests_passed++; } total_tests++;

    if((digits(182139) == 27)){ tests_passed++; } total_tests++;

    if((digits(1002) == 1)){ tests_passed++; } total_tests++;

    if((digits(113) == 3)){ tests_passed++; } total_tests++;

    if((digits(1) == 1)){ tests_passed++; } total_tests++;

    if((digits(88) == 0)){ tests_passed++; } total_tests++;

    if((digits(706) == 7)){ tests_passed++; } total_tests++;

    if((digits(250) == 5)){ tests_passed++; } total_tests++;

    if((digits(110) == 1)){ tests_passed++; } total_tests++;

    if((digits(949) == 81)){ tests_passed++; } total_tests++;

    if((digits(698) == 9)){ tests_passed++; } total_tests++;

    if((digits(242) == 0)){ tests_passed++; } total_tests++;

    if((digits(11) == 1)){ tests_passed++; } total_tests++;

    if((digits(135797529) == 297675)){ tests_passed++; } total_tests++;

    if((digits(1003) == 3)){ tests_passed++; } total_tests++;

    if((digits(109) == 9)){ tests_passed++; } total_tests++;

    if((digits(135797536) == 99225)){ tests_passed++; } total_tests++;

    if((digits(182133) == 9)){ tests_passed++; } total_tests++;

    if((digits(43) == 3)){ tests_passed++; } total_tests++;

    if((digits(135797538) == 99225)){ tests_passed++; } total_tests++;

    if((digits(241) == 1)){ tests_passed++; } total_tests++;

    if((digits(71) == 7)){ tests_passed++; } total_tests++;

    if((digits(114) == 1)){ tests_passed++; } total_tests++;

    if((digits(28) == 0)){ tests_passed++; } total_tests++;

    if((digits(135797539) == 893025)){ tests_passed++; } total_tests++;

    if((digits(10) == 1)){ tests_passed++; } total_tests++;

    if((digits(89) == 9)){ tests_passed++; } total_tests++;

    if((digits(954) == 45)){ tests_passed++; } total_tests++;

    if((digits(240) == 0)){ tests_passed++; } total_tests++;

    if((digits(44) == 0)){ tests_passed++; } total_tests++;

    if((digits(886) == 0)){ tests_passed++; } total_tests++;

    if((digits(115) == 5)){ tests_passed++; } total_tests++;

    if((digits(70) == 7)){ tests_passed++; } total_tests++;

    if((digits(991) == 81)){ tests_passed++; } total_tests++;

    if((digits(13579) == 945)){ tests_passed++; } total_tests++;

    if((digits(123456789) == 945)){ tests_passed++; } total_tests++;

    if((digits(945) == 45)){ tests_passed++; } total_tests++;

    if((digits(123456788) == 105)){ tests_passed++; } total_tests++;

    if((digits(123456787) == 735)){ tests_passed++; } total_tests++;

    if((digits(944) == 9)){ tests_passed++; } total_tests++;

    if((digits(943) == 27)){ tests_passed++; } total_tests++;

    if((digits(942) == 9)){ tests_passed++; } total_tests++;

    if((digits(941) == 9)){ tests_passed++; } total_tests++;

    if((digits(123456786) == 105)){ tests_passed++; } total_tests++;

    if((digits(13578) == 105)){ tests_passed++; } total_tests++;

    if((digits(53) == 15)){ tests_passed++; } total_tests++;

    if((digits(940) == 9)){ tests_passed++; } total_tests++;

    if((digits(52) == 5)){ tests_passed++; } total_tests++;

    if((digits(946) == 9)){ tests_passed++; } total_tests++;

    if((digits(73) == 21)){ tests_passed++; } total_tests++;

    if((digits(947) == 63)){ tests_passed++; } total_tests++;

    if((digits(55) == 25)){ tests_passed++; } total_tests++;

    if((digits(16) == 1)){ tests_passed++; } total_tests++;

    if((digits(69) == 9)){ tests_passed++; } total_tests++;

    if((digits(15) == 5)){ tests_passed++; } total_tests++;

    if((digits(13577) == 735)){ tests_passed++; } total_tests++;

    if((digits(30) == 3)){ tests_passed++; } total_tests++;

    if((digits(74) == 7)){ tests_passed++; } total_tests++;

    if((digits(64) == 0)){ tests_passed++; } total_tests++;

    if((digits(72) == 7)){ tests_passed++; } total_tests++;

    if((digits(17) == 7)){ tests_passed++; } total_tests++;

    if((digits(14) == 1)){ tests_passed++; } total_tests++;

    if((digits(51) == 5)){ tests_passed++; } total_tests++;

    if((digits(95) == 45)){ tests_passed++; } total_tests++;

    if((digits(94) == 9)){ tests_passed++; } total_tests++;

    if((digits(123456785) == 525)){ tests_passed++; } total_tests++;

    if((digits(57) == 35)){ tests_passed++; } total_tests++;

    if((digits(32) == 3)){ tests_passed++; } total_tests++;

    if((digits(65) == 5)){ tests_passed++; } total_tests++;

    if((digits(62) == 0)){ tests_passed++; } total_tests++;

    if((digits(68) == 0)){ tests_passed++; } total_tests++;

    if((digits(123456784) == 105)){ tests_passed++; } total_tests++;

    if((digits(18) == 1)){ tests_passed++; } total_tests++;

    if((digits(33) == 9)){ tests_passed++; } total_tests++;

    if((digits(96) == 9)){ tests_passed++; } total_tests++;

    if((digits(76) == 7)){ tests_passed++; } total_tests++;

    if((digits(948) == 9)){ tests_passed++; } total_tests++;

    if((digits(75) == 35)){ tests_passed++; } total_tests++;

    if((digits(13580) == 15)){ tests_passed++; } total_tests++;

    if((digits(13) == 3)){ tests_passed++; } total_tests++;

    if((digits(123456783) == 315)){ tests_passed++; } total_tests++;

    if((digits(100) == 1)){ tests_passed++; } total_tests++;

    if((digits(13581) == 15)){ tests_passed++; } total_tests++;

    if((digits(123456790) == 945)){ tests_passed++; } total_tests++;

    if((digits(13576) == 105)){ tests_passed++; } total_tests++;

    if((digits(13582) == 15)){ tests_passed++; } total_tests++;

    if((digits(123456791) == 945)){ tests_passed++; } total_tests++;

    if((digits(13583) == 45)){ tests_passed++; } total_tests++;

    if((digits(21) == 1)){ tests_passed++; } total_tests++;

    if((digits(49) == 9)){ tests_passed++; } total_tests++;

    if((digits(20) == 0)){ tests_passed++; } total_tests++;

    if((digits(13585) == 75)){ tests_passed++; } total_tests++;

    if((digits(123456792) == 945)){ tests_passed++; } total_tests++;

    if((digits(99) == 81)){ tests_passed++; } total_tests++;

    if((digits(48) == 0)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


