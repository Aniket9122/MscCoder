#include <bitset>
using namespace std;

string solve(int N) {
    int sum = 0;
    
    // calculate the sum of digits in decimal
    while (N > 0)  {
        sum += N % 10;
        N /= 10;
    }
    
    // convert to binary and return as string
    return bitset<32>(sum).to_string();
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

    if((solve(1000) == "1")){ tests_passed++; } total_tests++;

    if((solve(150) == "110")){ tests_passed++; } total_tests++;

    if((solve(147) == "1100")){ tests_passed++; } total_tests++;

    if((solve(333) == "1001")){ tests_passed++; } total_tests++;

    if((solve(963) == "10010")){ tests_passed++; } total_tests++;

    if((solve(1000) == "1")){ tests_passed++; } total_tests++;

    if((solve(150) == "110")){ tests_passed++; } total_tests++;

    if((solve(147) == "1100")){ tests_passed++; } total_tests++;

    if((solve(333) == "1001")){ tests_passed++; } total_tests++;

    if((solve(963) == "10010")){ tests_passed++; } total_tests++;

    if((solve(1) == "1")){ tests_passed++; } total_tests++;

    if((solve(10) == "1")){ tests_passed++; } total_tests++;

    if((solve(101) == "10")){ tests_passed++; } total_tests++;

    if((solve(1111) == "100")){ tests_passed++; } total_tests++;

    if((solve(5000) == "101")){ tests_passed++; } total_tests++;

    if((solve(9999) == "100100")){ tests_passed++; } total_tests++;

    if((solve(819) == "10010")){ tests_passed++; } total_tests++;

    if((solve(15) == "110")){ tests_passed++; } total_tests++;

    if((solve(75) == "1100")){ tests_passed++; } total_tests++;

    if((solve(820) == "1010")){ tests_passed++; } total_tests++;

    if((solve(818) == "10001")){ tests_passed++; } total_tests++;

    if((solve(16) == "111")){ tests_passed++; } total_tests++;

    if((solve(1112) == "101")){ tests_passed++; } total_tests++;

    if((solve(17) == "1000")){ tests_passed++; } total_tests++;

    if((solve(9998) == "100011")){ tests_passed++; } total_tests++;

    if((solve(9997) == "100010")){ tests_passed++; } total_tests++;

    if((solve(821) == "1011")){ tests_passed++; } total_tests++;

    if((solve(2) == "10")){ tests_passed++; } total_tests++;

    if((solve(1110) == "11")){ tests_passed++; } total_tests++;

    if((solve(1113) == "110")){ tests_passed++; } total_tests++;

    if((solve(74) == "1011")){ tests_passed++; } total_tests++;

    if((solve(11) == "10")){ tests_passed++; } total_tests++;

    if((solve(14) == "101")){ tests_passed++; } total_tests++;

    if((solve(10000) == "1")){ tests_passed++; } total_tests++;

    if((solve(100) == "1")){ tests_passed++; } total_tests++;

    if((solve(73) == "1010")){ tests_passed++; } total_tests++;

    if((solve(27) == "1001")){ tests_passed++; } total_tests++;

    if((solve(35) == "1000")){ tests_passed++; } total_tests++;

    if((solve(817) == "10000")){ tests_passed++; } total_tests++;

    if((solve(1114) == "111")){ tests_passed++; } total_tests++;

    if((solve(9996) == "100001")){ tests_passed++; } total_tests++;

    if((solve(1115) == "1000")){ tests_passed++; } total_tests++;

    if((solve(12) == "11")){ tests_passed++; } total_tests++;

    if((solve(18) == "1001")){ tests_passed++; } total_tests++;

    if((solve(816) == "1111")){ tests_passed++; } total_tests++;

    if((solve(13) == "100")){ tests_passed++; } total_tests++;

    if((solve(36) == "1001")){ tests_passed++; } total_tests++;

    if((solve(28) == "1010")){ tests_passed++; } total_tests++;

    if((solve(1109) == "1011")){ tests_passed++; } total_tests++;

    if((solve(96) == "1111")){ tests_passed++; } total_tests++;

    if((solve(97) == "10000")){ tests_passed++; } total_tests++;

    if((solve(5001) == "110")){ tests_passed++; } total_tests++;

    if((solve(76) == "1101")){ tests_passed++; } total_tests++;

    if((solve(1116) == "1001")){ tests_passed++; } total_tests++;

    if((solve(9) == "1001")){ tests_passed++; } total_tests++;

    if((solve(815) == "1110")){ tests_passed++; } total_tests++;

    if((solve(822) == "1100")){ tests_passed++; } total_tests++;

    if((solve(26) == "1000")){ tests_passed++; } total_tests++;

    if((solve(814) == "1101")){ tests_passed++; } total_tests++;

    if((solve(72) == "1001")){ tests_passed++; } total_tests++;

    if((solve(4999) == "11111")){ tests_passed++; } total_tests++;

    if((solve(95) == "1110")){ tests_passed++; } total_tests++;

    if((solve(8) == "1000")){ tests_passed++; } total_tests++;

    if((solve(102) == "11")){ tests_passed++; } total_tests++;

    if((solve(25) == "111")){ tests_passed++; } total_tests++;

    if((solve(3) == "11")){ tests_passed++; } total_tests++;

    if((solve(9995) == "100000")){ tests_passed++; } total_tests++;

    if((solve(1107) == "1001")){ tests_passed++; } total_tests++;

    if((solve(33) == "110")){ tests_passed++; } total_tests++;

    if((solve(19) == "1010")){ tests_passed++; } total_tests++;

    if((solve(4) == "100")){ tests_passed++; } total_tests++;

    if((solve(1117) == "1010")){ tests_passed++; } total_tests++;

    if((solve(20) == "10")){ tests_passed++; } total_tests++;

    if((solve(1118) == "1011")){ tests_passed++; } total_tests++;

    if((solve(5) == "101")){ tests_passed++; } total_tests++;

    if((solve(24) == "110")){ tests_passed++; } total_tests++;

    if((solve(94) == "1101")){ tests_passed++; } total_tests++;

    if((solve(23) == "101")){ tests_passed++; } total_tests++;

    if((solve(34) == "111")){ tests_passed++; } total_tests++;

    if((solve(77) == "1110")){ tests_passed++; } total_tests++;

    if((solve(812) == "1011")){ tests_passed++; } total_tests++;

    if((solve(4998) == "11110")){ tests_passed++; } total_tests++;

    if((solve(6) == "110")){ tests_passed++; } total_tests++;

    if((solve(84) == "1100")){ tests_passed++; } total_tests++;

    if((solve(4997) == "11101")){ tests_passed++; } total_tests++;

    if((solve(813) == "1100")){ tests_passed++; } total_tests++;

    if((solve(29) == "1011")){ tests_passed++; } total_tests++;

    if((solve(103) == "100")){ tests_passed++; } total_tests++;

    if((solve(98) == "10001")){ tests_passed++; } total_tests++;

    if((solve(78) == "1111")){ tests_passed++; } total_tests++;

    if((solve(37) == "1010")){ tests_passed++; } total_tests++;

    if((solve(83) == "1011")){ tests_passed++; } total_tests++;

    if((solve(93) == "1100")){ tests_passed++; } total_tests++;

    if((solve(21) == "11")){ tests_passed++; } total_tests++;

    if((solve(1108) == "1010")){ tests_passed++; } total_tests++;

    if((solve(1119) == "1100")){ tests_passed++; } total_tests++;

    if((solve(31) == "100")){ tests_passed++; } total_tests++;

    if((solve(1120) == "100")){ tests_passed++; } total_tests++;

    if((solve(9994) == "11111")){ tests_passed++; } total_tests++;

    if((solve(85) == "1101")){ tests_passed++; } total_tests++;

    if((solve(79) == "10000")){ tests_passed++; } total_tests++;

    if((solve(7) == "111")){ tests_passed++; } total_tests++;

    if((solve(30) == "11")){ tests_passed++; } total_tests++;

    if((solve(71) == "1000")){ tests_passed++; } total_tests++;

    if((solve(9993) == "11110")){ tests_passed++; } total_tests++;

    if((solve(32) == "101")){ tests_passed++; } total_tests++;

    if((solve(52) == "111")){ tests_passed++; } total_tests++;

    if((solve(90) == "1001")){ tests_passed++; } total_tests++;

    if((solve(91) == "1010")){ tests_passed++; } total_tests++;

    if((solve(8888) == "100000")){ tests_passed++; } total_tests++;

    if((solve(7777) == "11100")){ tests_passed++; } total_tests++;

    if((solve(6666) == "11000")){ tests_passed++; } total_tests++;

    if((solve(5555) == "10100")){ tests_passed++; } total_tests++;

    if((solve(4444) == "10000")){ tests_passed++; } total_tests++;

    if((solve(3333) == "1100")){ tests_passed++; } total_tests++;

    if((solve(2222) == "1000")){ tests_passed++; } total_tests++;

    if((solve(1010) == "10")){ tests_passed++; } total_tests++;

    if((solve(7776) == "11011")){ tests_passed++; } total_tests++;

    if((solve(8889) == "100001")){ tests_passed++; } total_tests++;

    if((solve(3332) == "1011")){ tests_passed++; } total_tests++;

    if((solve(6667) == "11001")){ tests_passed++; } total_tests++;

    if((solve(6668) == "11010")){ tests_passed++; } total_tests++;

    if((solve(2223) == "1001")){ tests_passed++; } total_tests++;

    if((solve(2224) == "1010")){ tests_passed++; } total_tests++;

    if((solve(22) == "100")){ tests_passed++; } total_tests++;

    if((solve(7779) == "11110")){ tests_passed++; } total_tests++;

    if((solve(3331) == "1010")){ tests_passed++; } total_tests++;

    if((solve(7778) == "11101")){ tests_passed++; } total_tests++;

    if((solve(5554) == "10011")){ tests_passed++; } total_tests++;

    if((solve(6665) == "10111")){ tests_passed++; } total_tests++;

    if((solve(6669) == "11011")){ tests_passed++; } total_tests++;

    if((solve(2221) == "111")){ tests_passed++; } total_tests++;

    if((solve(8887) == "11111")){ tests_passed++; } total_tests++;

    if((solve(5553) == "10010")){ tests_passed++; } total_tests++;

    if((solve(4443) == "1111")){ tests_passed++; } total_tests++;

    if((solve(7780) == "10110")){ tests_passed++; } total_tests++;

    if((solve(57) == "1100")){ tests_passed++; } total_tests++;

    if((solve(5556) == "10101")){ tests_passed++; } total_tests++;

    if((solve(6664) == "10110")){ tests_passed++; } total_tests++;

    if((solve(56) == "1011")){ tests_passed++; } total_tests++;

    if((solve(5557) == "10110")){ tests_passed++; } total_tests++;

    if((solve(5552) == "10001")){ tests_passed++; } total_tests++;

    if((solve(3334) == "1101")){ tests_passed++; } total_tests++;

    if((solve(6670) == "10011")){ tests_passed++; } total_tests++;

    if((solve(4445) == "10001")){ tests_passed++; } total_tests++;

    if((solve(2219) == "1110")){ tests_passed++; } total_tests++;

    if((solve(2225) == "1011")){ tests_passed++; } total_tests++;

    if((solve(60) == "110")){ tests_passed++; } total_tests++;

    if((solve(5551) == "10000")){ tests_passed++; } total_tests++;

    if((solve(8886) == "11110")){ tests_passed++; } total_tests++;

    if((solve(1009) == "1010")){ tests_passed++; } total_tests++;

    if((solve(2220) == "110")){ tests_passed++; } total_tests++;

    if((solve(1011) == "11")){ tests_passed++; } total_tests++;

    if((solve(3330) == "1001")){ tests_passed++; } total_tests++;

    if((solve(55) == "1010")){ tests_passed++; } total_tests++;

    if((solve(2218) == "1101")){ tests_passed++; } total_tests++;

    if((solve(5550) == "1111")){ tests_passed++; } total_tests++;

    if((solve(58) == "1101")){ tests_passed++; } total_tests++;

    if((solve(1012) == "100")){ tests_passed++; } total_tests++;

    if((solve(3329) == "10001")){ tests_passed++; } total_tests++;

    if((solve(59) == "1110")){ tests_passed++; } total_tests++;

    if((solve(7775) == "11010")){ tests_passed++; } total_tests++;

    if((solve(6671) == "10100")){ tests_passed++; } total_tests++;

    if((solve(6672) == "10101")){ tests_passed++; } total_tests++;

    if((solve(2227) == "1101")){ tests_passed++; } total_tests++;

    if((solve(8885) == "11101")){ tests_passed++; } total_tests++;

    if((solve(70) == "111")){ tests_passed++; } total_tests++;

    if((solve(1007) == "1000")){ tests_passed++; } total_tests++;

    if((solve(54) == "1001")){ tests_passed++; } total_tests++;

    if((solve(1008) == "1001")){ tests_passed++; } total_tests++;

    if((solve(2228) == "1110")){ tests_passed++; } total_tests++;

    if((solve(2226) == "1100")){ tests_passed++; } total_tests++;

    if((solve(5547) == "10101")){ tests_passed++; } total_tests++;

    if((solve(4442) == "1110")){ tests_passed++; } total_tests++;

    if((solve(2230) == "111")){ tests_passed++; } total_tests++;

    if((solve(2231) == "1000")){ tests_passed++; } total_tests++;

    if((solve(1013) == "101")){ tests_passed++; } total_tests++;

    if((solve(5548) == "10110")){ tests_passed++; } total_tests++;

    if((solve(7782) == "11000")){ tests_passed++; } total_tests++;

    if((solve(44) == "1000")){ tests_passed++; } total_tests++;

    if((solve(7783) == "11001")){ tests_passed++; } total_tests++;

    if((solve(3328) == "10000")){ tests_passed++; } total_tests++;

    if((solve(2232) == "1001")){ tests_passed++; } total_tests++;

    if((solve(2233) == "1010")){ tests_passed++; } total_tests++;

    if((solve(6673) == "10110")){ tests_passed++; } total_tests++;

    if((solve(53) == "1000")){ tests_passed++; } total_tests++;

    if((solve(5549) == "10111")){ tests_passed++; } total_tests++;

    if((solve(2234) == "1011")){ tests_passed++; } total_tests++;

    if((solve(69) == "1111")){ tests_passed++; } total_tests++;

    if((solve(6663) == "10101")){ tests_passed++; } total_tests++;

    if((solve(7774) == "11001")){ tests_passed++; } total_tests++;

    if((solve(7773) == "11000")){ tests_passed++; } total_tests++;

    if((solve(7772) == "10111")){ tests_passed++; } total_tests++;

    if((solve(3335) == "1110")){ tests_passed++; } total_tests++;

    if((solve(7771) == "10110")){ tests_passed++; } total_tests++;

    if((solve(8884) == "11100")){ tests_passed++; } total_tests++;

    if((solve(1014) == "110")){ tests_passed++; } total_tests++;

    if((solve(3336) == "1111")){ tests_passed++; } total_tests++;

    if((solve(3337) == "10000")){ tests_passed++; } total_tests++;

    if((solve(4441) == "1101")){ tests_passed++; } total_tests++;

    if((solve(8883) == "11011")){ tests_passed++; } total_tests++;

    if((solve(5558) == "10111")){ tests_passed++; } total_tests++;

    if((solve(3327) == "1111")){ tests_passed++; } total_tests++;

    if((solve(65) == "1011")){ tests_passed++; } total_tests++;

    if((solve(66) == "1100")){ tests_passed++; } total_tests++;

    if((solve(63) == "1001")){ tests_passed++; } total_tests++;

    if((solve(7770) == "10101")){ tests_passed++; } total_tests++;

    if((solve(5559) == "11000")){ tests_passed++; } total_tests++;

    if((solve(5560) == "10000")){ tests_passed++; } total_tests++;

    if((solve(7769) == "11101")){ tests_passed++; } total_tests++;

    if((solve(5561) == "10001")){ tests_passed++; } total_tests++;

    if((solve(8890) == "11001")){ tests_passed++; } total_tests++;

    if((solve(3338) == "10001")){ tests_passed++; } total_tests++;

    if((solve(8882) == "11010")){ tests_passed++; } total_tests++;

    if((solve(8891) == "11010")){ tests_passed++; } total_tests++;

    if((solve(7768) == "11100")){ tests_passed++; } total_tests++;

    if((solve(62) == "1000")){ tests_passed++; } total_tests++;

    if((solve(5562) == "10010")){ tests_passed++; } total_tests++;

    if((solve(8881) == "11001")){ tests_passed++; } total_tests++;

    if((solve(64) == "1010")){ tests_passed++; } total_tests++;

    if((solve(7767) == "11011")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


