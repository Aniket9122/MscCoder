#include <iostream>
using namespace std;

int greatest_common_divisor(int a, int b) {
    if (a == 0 || b == 0) return 0;
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
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

    if((greatest_common_divisor(3, 7) == 1)){ tests_passed++; } total_tests++;

     if((greatest_common_divisor(10, 15) == 5)){ tests_passed++; } total_tests++;

      if((greatest_common_divisor(49, 14) == 7)){ tests_passed++; } total_tests++;

     if((greatest_common_divisor(144, 60) == 12)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3, 7) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(10, 15) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(49, 14) == 7)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(144, 60) == 12)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100, 50) == 50)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(98, 56) == 14)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(540, 288) == 36)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(81, 27) == 27)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(33, 55) == 11)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(7, 13) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(14, 28) == 14)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(10, 25) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(12, 54) == 6)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(21, 35) == 7)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100, 27) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(98, 10) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(49, 81) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(33, 56) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(55, 57) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(13, 14) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(540, 540) == 540)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(81, 80) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(34, 33) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(287, 13) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(80, 15) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(49, 28) == 7)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(14, 14) == 14)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(54, 33) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(57, 57) == 57)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(10, 10) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(13, 33) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(14, 540) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(49, 12) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(56, 56) == 56)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(33, 54) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(10, 49) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(28, 29) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(55, 10) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(14, 27) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(50, 28) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(55, 28) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(50, 29) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(25, 24) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(21, 20) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(82, 81) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(80, 49) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(55, 56) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(9, 9) == 9)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(57, 56) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(81, 24) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(287, 12) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(81, 54) == 27)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(56, 35) == 7)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(56, 10) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(287, 56) == 7)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(35, 20) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(81, 287) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(15, 33) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(27, 27) == 27)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(20, 81) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(24, 23) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(15, 80) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(55, 80) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(28, 12) == 4)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(81, 57) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(29, 35) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(49, 50) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(29, 28) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(49, 49) == 49)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(10, 9) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(99, 56) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(80, 81) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(81, 26) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(540, 541) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100, 10) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(81, 81) == 81)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100, 9) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(101, 27) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(13, 55) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(55, 541) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(540, 25) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(287, 287) == 287)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100, 287) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(10, 11) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(9, 98) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(15, 11) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(34, 34) == 34)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(98, 101) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(98, 28) == 14)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(11, 10) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(286, 286) == 286)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(27, 26) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(58, 101) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(21, 54) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(58, 15) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(54, 9) == 9)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(81, 55) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(21, 36) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(540, 10) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(13, 288) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(50, 49) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(14, 15) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(28, 28) == 28)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(108, 192) == 12)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(419, 967) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654321, 123456789) == 9)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 987654321) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456789, 987654321) == 9)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000000, 999999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999999, 111111111) == 111111111)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(99999999, 3699637) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999999, 1000000000) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654321, 987654321) == 987654321)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111111, 111111111) == 111111111)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111111, 967) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(419, 192) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999999, 999999999) == 999999999)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(193, 108) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(191, 1000000000) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456789, 999999999) == 9)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654320, 987654321) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000000, 100000000) == 100000000)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699637, 3699637) == 3699637)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(967, 234567890) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654322, 987654322) == 987654322)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(967, 108) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(967, 967) == 967)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(419, 1000000000) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(99999999, 3699636) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(967, 987654322) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(191, 108) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(99999999, 192) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654324, 987654323) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(192, 192) == 192)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699638, 999999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567889, 987654321) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654321, 108) == 9)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000001, 1000000000) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 1000000000) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000000, 1000000000) == 1000000000)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567889, 234567890) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(106, 108) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(193, 193) == 193)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999999, 111111110) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111111, 999999999) == 111111111)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000000, 987654320) == 80)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(967, 987654323) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654323, 987654323) == 987654323)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000000, 1000000001) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000000, 99999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000000, 987654321) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654320, 108) == 4)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654321, 111111110) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 966) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(194, 193) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 107) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000000, 987654324) == 4)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1234567890, 100000000) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654321, 10) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000001, 100000000) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(108, 108) == 108)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000000, 1000000001) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654323, 987654322) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456789, 1000000001) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999999, 987654322) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699638, 967) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654320, 3699637) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(419, 234567890) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 234567890) == 234567890)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(105, 108) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111111, 1000000001) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654324, 99999999) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(193, 123456789) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000001, 987654321) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000000, 987654321) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654322, 987654321) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(107, 987654323) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999999, 1000000001) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111110, 111111111) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(108, 3699636) == 12)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456790, 987654320) == 123456790)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567888, 3699638) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567888, 234567888) == 234567888)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(192, 191) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111111, 191) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(109, 108) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(419, 10) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456788, 108) == 4)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999998, 111111110) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654324, 100000000) == 4)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111111, 999999998) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699639, 999999999) == 9)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000002, 1000000001) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699636, 107) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699637, 108) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567889, 3699638) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654321, 1000000001) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654324, 3699637) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999998, 999999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699637, 109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(108, 966) == 6)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567888, 1234567890) == 6)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(10, 3699636) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456790, 194) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000001, 3699638) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(191, 107) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(10, 419) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000001, 1000000001) == 1000000001)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699636, 108) == 12)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(419, 419) == 419)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699638, 111111110) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 194) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000000, 987654319) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(194, 987654322) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000002, 1000000002) == 1000000002)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000001, 987654321) == 17)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(192, 193) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000000, 108) == 4)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654318, 108) == 6)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654322, 987654318) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111112, 111111111) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999999, 987654321) == 9)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999998, 108) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699637, 999999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567887, 3699638) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699637, 191) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(99999999, 99999999) == 99999999)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699639, 3699638) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(109, 109) == 109)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654324, 987654320) == 4)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(108, 3699638) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(194, 194) == 194)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567887, 123456788) == 17)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 966) == 966)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699638, 191) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(99999999, 987654320) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654320, 1000000000) == 80)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(191, 123456789) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654322, 967) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(106, 106) == 106)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699637, 967) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 106) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456789, 193) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456788, 419) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(105, 111111111) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111110, 419) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699638, 123456788) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654321, 987654322) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(108, 999999998) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654321, 193) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(10, 123456790) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654320, 987654320) == 987654320)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999998, 194) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000001, 419) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 193) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699637, 987654320) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456788, 987654322) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699637, 192) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654324, 108) == 12)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(10, 123456789) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(191, 191) == 191)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654319, 107) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(194, 999999998) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000001, 234567888) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654320, 234567889) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000001, 106) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1234567890, 109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699639, 419) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000000, 987654318) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699638, 3699638) == 3699638)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(12, 12) == 12)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(193, 195) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456788, 234567890) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(418, 419) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(12, 987654321) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111110, 123456788) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654321, 987654320) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699637, 3699639) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(11, 11) == 11)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 234567889) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 234567891) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567891, 234567892) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999998, 999999998) == 999999998)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000001, 966) == 7)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(195, 123456789) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(967, 234567889) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(965, 965) == 965)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(195, 195) == 195)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699636, 3699637) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111111, 100000000) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699638, 99999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(193, 191) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(418, 987654320) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000000, 100000000) == 100000000)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111110, 418) == 22)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(106, 107) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567889, 234567888) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567889, 1000000000) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(10, 106) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(420, 419) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567887, 3699636) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 987654321) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654322, 968) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(12, 987654318) == 6)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999999, 12) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567891, 3699637) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000000, 111111111) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654322, 987654324) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456789, 419) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654319, 234567889) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567887, 109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456790, 105) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1234567890, 1234567890) == 1234567890)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000002, 1000000000) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1234567890, 107) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(105, 111111112) == 7)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456788, 123456788) == 123456788)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699638, 234567889) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000000, 111111111) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111112, 987654319) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(190, 1000000000) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 195) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(107, 987654318) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456788, 418) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(10, 987654321) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 987654320) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999998, 111111111) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567888, 419) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(968, 967) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654322, 194) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654319, 987654320) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456790, 987654321) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456790, 3699637) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654319, 987654319) == 987654319)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699636, 3699636) == 3699636)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111112, 123456788) == 28)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(194, 108) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567888, 987654321) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000002, 100000001) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(965, 966) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000001, 100000003) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(9, 987654320) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(108, 123456790) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456790, 123456790) == 123456790)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000001, 1000000002) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(194, 234567892) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111111, 234567890) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654321, 111111109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567887, 987654318) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000004, 100000000) == 4)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699639, 107) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699640, 107) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567891, 234567891) == 234567891)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654323, 12) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567887, 100000000) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000002, 106) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699636, 12) == 12)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(190, 191) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000003, 3699638) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 3699636) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000003, 100000000) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1234567890, 987654321) == 9)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567892, 234567891) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699639, 3699639) == 3699639)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000003, 100000003) == 100000003)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(190, 190) == 190)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000001, 234567891) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456788, 420) == 28)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(418, 987654324) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000005, 420) == 105)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654321, 100000003) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(194, 191) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456788, 195) == 13)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(195, 965) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699635, 192) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(107, 107) == 107)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567892, 234567892) == 234567892)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(194, 1234567890) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699635, 100000003) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(965, 195) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111110, 111111110) == 111111110)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(110, 109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000001, 100000001) == 100000001)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(968, 100000000) == 8)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000001, 234567892) == 13)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567888, 3699639) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(12, 999999999) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456788, 987654321) == 17)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111109, 3699638) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000001, 9) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(13, 12) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654319, 987654321) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699638, 123456787) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(99999999, 3699635) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(967, 3699636) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(107, 195) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654321, 100000000) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000002, 1234567890) == 6)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699635, 3699636) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(11, 195) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(107, 123456788) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000001, 234567893) == 7)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699637, 123456788) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(193, 192) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(99999999, 111111110) == 11111111)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999997, 111111110) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1234567890, 999999998) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000001, 100000002) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(194, 195) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111112, 111111112) == 111111112)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654322, 123456789) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(191, 234567892) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(12, 11) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567887, 1234567890) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999998, 1000000001) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(193, 123456788) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567891, 3699638) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000001, 100000005) == 7)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456787, 123456788) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111111, 968) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699640, 111111109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654319, 111111111) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(110, 987654319) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456787, 111111111) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(968, 968) == 968)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654324, 968) == 4)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567888, 194) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000000, 234567888) == 16)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 234567888) == 6)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456789, 123456790) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 987654323) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654324, 987654324) == 987654324)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(109, 3699639) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567891, 99999999) == 9)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(10, 191) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654320, 419) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(193, 194) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567891, 108) == 9)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(10, 109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456789, 123456789) == 123456789)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999997, 1000000001) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1234567889, 987654323) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699637, 3699638) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111109, 100000005) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111111, 3699637) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1234567889, 111111111) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000000, 195) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111109, 105) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456791, 987654321) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654320, 111111111) == 12345679)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654325, 99999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1234567889, 1234567890) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(11, 3699639) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111110, 195) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567886, 418) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654325, 987654319) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(967, 969) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000000, 100000004) == 4)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111111, 234567893) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(2147483647, 1) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1, 1) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(2147483647, 2147483647) == 2147483647)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699637, 99999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 967) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(967, 123456789) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(107, 192) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654321, 967) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(99999999, 966) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456789, 49) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111109, 111111110) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(107, 111111110) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 49) == 7)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1234567890, 123456790) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111109, 987654321) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456790, 123456789) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111110, 111111109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 100000000) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(108, 987654320) == 4)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699637, 987654321) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654321, 965) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 48) == 6)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111110, 123456790) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(967, 999999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(192, 966) == 6)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(99999999, 965) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567891, 234567890) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(108, 107) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(49, 48) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000000, 99999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(99999999, 999999999) == 9)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(419, 123456790) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111110, 965) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 999999999) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 1234567890) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 30) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 108) == 6)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(419, 49) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 111111110) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567891, 192) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(18, 192) == 6)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456790, 1234567890) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111110, 1000000000) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111109, 100000000) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456789, 123456788) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999999, 234567890) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456788, 999999998) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 1234567890) == 6)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654320, 123456789) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 987654320) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654321, 234567890) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111109, 111111109) == 111111109)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(965, 987654321) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(965, 987654320) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(30, 30) == 30)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(108, 1000000000) == 4)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(967, 111111109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 967) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111109, 123456788) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(30, 234567891) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(967, 107) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 192) == 6)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(192, 1000000000) == 64)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000000, 965) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111109, 967) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999998, 234567890) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(30, 100000000) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 999999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 111111109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(109, 192) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999998, 99999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(108, 109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999999, 123456789) == 9)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456789, 50) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(420, 123456790) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111111, 111111110) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(420, 420) == 420)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000000, 29) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699638, 987654321) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654321, 999999998) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(108, 999999999) == 27)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(192, 99999999) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699635, 999999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456790, 111111109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(99999999, 234567890) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(109, 123456789) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456787, 123456787) == 123456787)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654320, 987654318) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 965) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000000, 18) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699636, 420) == 12)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111112, 1234567890) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(965, 1000000001) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(108, 987654321) == 9)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699635, 18) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(48, 234567891) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456787, 420) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699637, 987654322) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000001, 109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699636, 123456787) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(192, 234567890) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(964, 965) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000000, 419) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456790, 99999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567891, 999999999) == 9)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999999, 100000000) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111111, 111111112) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(965, 999999998) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(18, 18) == 18)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999998, 123456787) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456787, 111111113) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999999, 111111109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(965, 964) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699637, 123456790) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 999999998) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(418, 234567890) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111109, 234567891) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699635, 111111110) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(49, 106) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(29, 109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(107, 3699637) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(969, 969) == 969)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(418, 107) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699636, 967) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(30, 987654320) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111109, 111111113) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111109, 109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699635, 967) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(49, 999999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(99999999, 987654319) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654320, 192) == 16)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(99999999, 418) == 11)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111111, 28) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456789, 111111110) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111114, 111111113) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(965, 106) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(964, 3699637) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699640, 3699639) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654322, 123456788) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(108, 106) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000001, 28) == 7)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(968, 966) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654318, 987654320) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(47, 234567891) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(191, 192) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111113, 99999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654320, 234567890) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(50, 234567890) == 10)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000000, 987654318) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(999999998, 419) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654321, 18) == 9)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(969, 968) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(418, 106) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(29, 29) == 29)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000000, 123456788) == 4)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654318, 76) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654320, 987654322) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654319, 1000000001) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456789, 107) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111113, 1234567890) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(19, 18) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000001, 1234567890) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111111, 111111109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1234567890, 966) == 6)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654322, 419) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(51, 50) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(418, 418) == 418)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(969, 111111109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(51, 100000000) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699637, 418) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567889, 418) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(418, 987654321) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(99999999, 999999998) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(417, 418) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 111111113) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(110, 123456789) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(28, 47) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456788, 50) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699635, 3699635) == 3699635)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(1000000001, 3699638) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 3699634) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456788, 77) == 7)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 234567892) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(100000000, 420) == 20)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(49, 123456788) == 7)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654318, 999999998) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(19, 30) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(76, 111111110) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(19, 19) == 19)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(107, 99999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(418, 987654322) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111109, 111111111) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456788, 123456787) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(30, 111111111) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111113, 111111110) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699639, 111111110) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(964, 964) == 964)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(965, 111111110) == 5)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(107, 48) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(48, 964) == 4)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699639, 966) == 3)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 421) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699636, 419) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111112, 999999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(967, 968) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111110, 111111112) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(27, 28) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456790, 111111111) == 12345679)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567890, 123456788) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111110, 999999999) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111113, 111111113) == 111111113)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(29, 30) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(965, 111111109) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654319, 3699638) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(3699636, 28) == 4)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(966, 111111112) == 14)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654318, 968) == 2)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(49, 123456789) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111109, 111111108) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(123456790, 29) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(48, 48) == 48)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(50, 51) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111111, 987654320) == 12345679)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(234567889, 100000000) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(987654320, 421) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(964, 48) == 4)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(111111111, 190) == 1)){ tests_passed++; } total_tests++;

    if((greatest_common_divisor(967, 966) == 1)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


