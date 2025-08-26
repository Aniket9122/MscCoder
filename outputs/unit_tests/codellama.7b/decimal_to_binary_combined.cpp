#include <iostream>
#include <string>
using namespace std;

string decimal_to_binary(int decimal) {
    string binary = "db";
    while (decimal > 0) {
        binary += ((decimal % 2 == 0) ? "0" : "1");
        decimal /= 2;
    }
    return "db" + binary;
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

    if((decimal_to_binary(0) == "db0db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(32) == "db100000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(103) == "db1100111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(15) == "db1111db")){ tests_passed++; } total_tests++;


    if((decimal_to_binary(0) == "db0db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(32) == "db100000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(103) == "db1100111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(15) == "db1111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(100001) == "db11000011010100001db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(255) == "db11111111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(999999999) == "db111011100110101100100111111111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(7) == "db111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1023) == "db1111111111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1) == "db1db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(2) == "db10db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(3) == "db11db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(4) == "db100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1000000000) == "db111011100110101100101000000000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(6) == "db110db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1000000001) == "db111011100110101100101000000001db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(5) == "db101db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(100002) == "db11000011010100010db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(100000) == "db11000011010100000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1022) == "db1111111110db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8) == "db1000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1000000002) == "db111011100110101100101000000010db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1024) == "db10000000000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(100003) == "db11000011010100011db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(999999998) == "db111011100110101100100111111110db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(256) == "db100000000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(257) == "db100000001db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1021) == "db1111111101db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(259) == "db100000011db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1000000004) == "db111011100110101100101000000100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1000000005) == "db111011100110101100101000000101db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(9) == "db1001db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(260) == "db100000100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(100004) == "db11000011010100100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(258) == "db100000010db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1000000006) == "db111011100110101100101000000110db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(45) == "db101101db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(100005) == "db11000011010100101db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(99999) == "db11000011010011111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1025) == "db10000000001db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(999999997) == "db111011100110101100100111111101db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(999999996) == "db111011100110101100100111111100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1000000003) == "db111011100110101100101000000011db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(44) == "db101100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(43) == "db101011db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1000000007) == "db111011100110101100101000000111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(42) == "db101010db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(999999995) == "db111011100110101100100111111011db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(46) == "db101110db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(47) == "db101111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(254) == "db11111110db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(10) == "db1010db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(999999994) == "db111011100110101100100111111010db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(28) == "db11100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(100007) == "db11000011010100111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(41) == "db101001db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1020) == "db1111111100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(27) == "db11011db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1026) == "db10000000010db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(23) == "db10111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(253) == "db11111101db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(100006) == "db11000011010100110db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(38) == "db100110db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(100008) == "db11000011010101000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(39) == "db100111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(100009) == "db11000011010101001db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1027) == "db10000000011db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(261) == "db100000101db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(26) == "db11010db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1019) == "db1111111011db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1000000008) == "db111011100110101100101000001000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(11) == "db1011db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(251) == "db11111011db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1018) == "db1111111010db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(48) == "db110000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(22) == "db10110db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(99998) == "db11000011010011110db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(21) == "db10101db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(40) == "db101000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(37) == "db100101db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(20) == "db10100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(100011) == "db11000011010101011db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(262) == "db100000110db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(25) == "db11001db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1028) == "db10000000100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(24) == "db11000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(999999993) == "db111011100110101100100111111001db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8892743) == "db100001111011000101000111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1000) == "db1111101000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8892742) == "db100001111011000101000110db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8892740) == "db100001111011000101000100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8892744) == "db100001111011000101001000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8892745) == "db100001111011000101001001db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8892741) == "db100001111011000101000101db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(999) == "db1111100111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8892739) == "db100001111011000101000011db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(998) == "db1111100110db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1001) == "db1111101001db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1002) == "db1111101010db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8892737) == "db100001111011000101000001db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8892746) == "db100001111011000101001010db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8892747) == "db100001111011000101001011db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1003) == "db1111101011db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(252) == "db11111100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8892748) == "db100001111011000101001100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(997) == "db1111100101db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8892736) == "db100001111011000101000000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8892735) == "db100001111011000100111111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8892738) == "db100001111011000101000010db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1004) == "db1111101100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(996) == "db1111100100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8892750) == "db100001111011000101001110db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8892749) == "db100001111011000101001101db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1006) == "db1111101110db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8892751) == "db100001111011000101001111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(99) == "db1100011db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(98) == "db1100010db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(92) == "db1011100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1005) == "db1111101101db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(8892752) == "db100001111011000101010000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(1007) == "db1111101111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(995) == "db1111100011db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(16) == "db10000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(263) == "db100000111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(53) == "db110101db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(30) == "db11110db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(29) == "db11101db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(67) == "db1000011db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(66) == "db1000010db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(63) == "db111111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(81) == "db1010001db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(82) == "db1010010db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(80) == "db1010000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(68) == "db1000100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(31) == "db11111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(83) == "db1010011db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(79) == "db1001111db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(62) == "db111110db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(61) == "db111101db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(84) == "db1010100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(65) == "db1000001db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(60) == "db111100db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(250) == "db11111010db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(249) == "db11111001db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(85) == "db1010101db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(89) == "db1011001db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(49) == "db110001db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(78) == "db1001110db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(50) == "db110010db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(88) == "db1011000db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(33) == "db100001db")){ tests_passed++; } total_tests++;

    if((decimal_to_binary(90) == "db1011010db")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


