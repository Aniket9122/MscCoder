#include <cstdlib>  // for abs function
using namespace std;

int multiply(int a, int b) {
    // Calculate unit digit of a and b
    int lastDigitA = abs(a % 10);
    int lastDigitB = abs(b % 10);
    
    // Return the product of their unit digits
    return lastDigitA * lastDigitB;
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

    if((multiply(148, 412) == 16)){ tests_passed++; } total_tests++;

    if((multiply(19, 28) == 72)){ tests_passed++; } total_tests++;

    if((multiply(2020, 1851) == 0)){ tests_passed++; } total_tests++;

    if((multiply(14,-15) == 20)){ tests_passed++; } total_tests++;

    if((multiply(76, 67) == 42)){ tests_passed++; } total_tests++;

    if((multiply(17, 27) == 49)){ tests_passed++; } total_tests++;

    if((multiply(0, 1) == 0)){ tests_passed++; } total_tests++;

    if((multiply(0, 0) == 0)){ tests_passed++; } total_tests++;

    if((multiply(148, 412) == 16)){ tests_passed++; } total_tests++;

    if((multiply(19, 28) == 72)){ tests_passed++; } total_tests++;

    if((multiply(2020, 1851) == 0)){ tests_passed++; } total_tests++;

    if((multiply(14, -15) == 20)){ tests_passed++; } total_tests++;

    if((multiply(76, 67) == 42)){ tests_passed++; } total_tests++;

    if((multiply(17, 27) == 49)){ tests_passed++; } total_tests++;

    if((multiply(0, 1) == 0)){ tests_passed++; } total_tests++;

    if((multiply(0, 0) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-6, -9) == 54)){ tests_passed++; } total_tests++;

    if((multiply(-87, 5) == 35)){ tests_passed++; } total_tests++;

    if((multiply(39, 25) == 45)){ tests_passed++; } total_tests++;

    if((multiply(1, 100) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-15, -12) == 10)){ tests_passed++; } total_tests++;

    if((multiply(-5, 9) == 45)){ tests_passed++; } total_tests++;

    if((multiply(-12, -16) == 12)){ tests_passed++; } total_tests++;

    if((multiply(0, 8) == 0)){ tests_passed++; } total_tests++;

    if((multiply(8, 0) == 0)){ tests_passed++; } total_tests++;

    if((multiply(123, 321) == 3)){ tests_passed++; } total_tests++;

    if((multiply(-6, -5) == 30)){ tests_passed++; } total_tests++;

    if((multiply(-9, 0) == 0)){ tests_passed++; } total_tests++;

    if((multiply(8, 8) == 64)){ tests_passed++; } total_tests++;

    if((multiply(-87, -87) == 49)){ tests_passed++; } total_tests++;

    if((multiply(123, -12) == 6)){ tests_passed++; } total_tests++;

    if((multiply(5, 25) == 25)){ tests_passed++; } total_tests++;

    if((multiply(1, 0) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1, -16) == 6)){ tests_passed++; } total_tests++;

    if((multiply(125, 124) == 20)){ tests_passed++; } total_tests++;

    if((multiply(-6, -4) == 24)){ tests_passed++; } total_tests++;

    if((multiply(123, 5) == 15)){ tests_passed++; } total_tests++;

    if((multiply(8, -9) == 72)){ tests_passed++; } total_tests++;

    if((multiply(124, 100) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-7, -9) == 63)){ tests_passed++; } total_tests++;

    if((multiply(-7, -6) == 42)){ tests_passed++; } total_tests++;

    if((multiply(8, -16) == 48)){ tests_passed++; } total_tests++;

    if((multiply(8, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(0, -7) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-15, -6) == 30)){ tests_passed++; } total_tests++;

    if((multiply(-86, -87) == 42)){ tests_passed++; } total_tests++;

    if((multiply(-15, -7) == 35)){ tests_passed++; } total_tests++;

    if((multiply(0, -9) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1, 1) == 1)){ tests_passed++; } total_tests++;

    if((multiply(9, 25) == 45)){ tests_passed++; } total_tests++;

    if((multiply(5, -5) == 25)){ tests_passed++; } total_tests++;

    if((multiply(-12, -12) == 4)){ tests_passed++; } total_tests++;

    if((multiply(-8, -9) == 72)){ tests_passed++; } total_tests++;

    if((multiply(-5, 8) == 40)){ tests_passed++; } total_tests++;

    if((multiply(125, 125) == 25)){ tests_passed++; } total_tests++;

    if((multiply(-16, 5) == 30)){ tests_passed++; } total_tests++;

    if((multiply(-11, -12) == 2)){ tests_passed++; } total_tests++;

    if((multiply(-4, -4) == 16)){ tests_passed++; } total_tests++;

    if((multiply(-12, -13) == 6)){ tests_passed++; } total_tests++;

    if((multiply(-86, -86) == 36)){ tests_passed++; } total_tests++;

    if((multiply(124, 99) == 36)){ tests_passed++; } total_tests++;

    if((multiply(-4, -5) == 20)){ tests_passed++; } total_tests++;

    if((multiply(5, 8) == 40)){ tests_passed++; } total_tests++;

    if((multiply(123, 123) == 9)){ tests_passed++; } total_tests++;

    if((multiply(-9, -9) == 81)){ tests_passed++; } total_tests++;

    if((multiply(5, 100) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-5, -4) == 20)){ tests_passed++; } total_tests++;

    if((multiply(-16, -16) == 36)){ tests_passed++; } total_tests++;

    if((multiply(100, 99) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-15, -15) == 25)){ tests_passed++; } total_tests++;

    if((multiply(-87, -86) == 42)){ tests_passed++; } total_tests++;

    if((multiply(8, -4) == 32)){ tests_passed++; } total_tests++;

    if((multiply(25, -9) == 45)){ tests_passed++; } total_tests++;

    if((multiply(-15, 8) == 40)){ tests_passed++; } total_tests++;

    if((multiply(-9, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(8, -8) == 64)){ tests_passed++; } total_tests++;

    if((multiply(0, -6) == 0)){ tests_passed++; } total_tests++;

    if((multiply(124, 124) == 16)){ tests_passed++; } total_tests++;

    if((multiply(-8, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1, 6) == 6)){ tests_passed++; } total_tests++;

    if((multiply(-9, -5) == 45)){ tests_passed++; } total_tests++;

    if((multiply(-6, -8) == 48)){ tests_passed++; } total_tests++;

    if((multiply(9, 9) == 81)){ tests_passed++; } total_tests++;

    if((multiply(-12, 0) == 0)){ tests_passed++; } total_tests++;

    if((multiply(9, 5) == 45)){ tests_passed++; } total_tests++;

    if((multiply(-5, -5) == 25)){ tests_passed++; } total_tests++;

    if((multiply(100, 100) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-86, -12) == 12)){ tests_passed++; } total_tests++;

    if((multiply(123, -8) == 24)){ tests_passed++; } total_tests++;

    if((multiply(125, -6) == 30)){ tests_passed++; } total_tests++;

    if((multiply(124, 98) == 32)){ tests_passed++; } total_tests++;

    if((multiply(5, -86) == 30)){ tests_passed++; } total_tests++;

    if((multiply(-13, -4) == 12)){ tests_passed++; } total_tests++;

    if((multiply(-86, 5) == 30)){ tests_passed++; } total_tests++;

    if((multiply(123, -3) == 9)){ tests_passed++; } total_tests++;

    if((multiply(-15, -11) == 5)){ tests_passed++; } total_tests++;

    if((multiply(5, 5) == 25)){ tests_passed++; } total_tests++;

    if((multiply(25, 8) == 40)){ tests_passed++; } total_tests++;

    if((multiply(-87, 321) == 7)){ tests_passed++; } total_tests++;

    if((multiply(-86, 100) == 0)){ tests_passed++; } total_tests++;

    if((multiply(9, -16) == 54)){ tests_passed++; } total_tests++;

    if((multiply(5, 123) == 15)){ tests_passed++; } total_tests++;

    if((multiply(9, -12) == 18)){ tests_passed++; } total_tests++;

    if((multiply(-9, 99) == 81)){ tests_passed++; } total_tests++;

    if((multiply(124, -7) == 28)){ tests_passed++; } total_tests++;

    if((multiply(124, 8) == 32)){ tests_passed++; } total_tests++;

    if((multiply(5, -15) == 25)){ tests_passed++; } total_tests++;

    if((multiply(-17, -16) == 42)){ tests_passed++; } total_tests++;

    if((multiply(-5, -3) == 15)){ tests_passed++; } total_tests++;

    if((multiply(-17, -87) == 49)){ tests_passed++; } total_tests++;

    if((multiply(-17, 1) == 7)){ tests_passed++; } total_tests++;

    if((multiply(124, -8) == 32)){ tests_passed++; } total_tests++;

    if((multiply(-8, -86) == 48)){ tests_passed++; } total_tests++;

    if((multiply(-10, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-17, 3) == 21)){ tests_passed++; } total_tests++;

    if((multiply(246813579, -975312468) == 72)){ tests_passed++; } total_tests++;

    if((multiply(-99, -99) == 81)){ tests_passed++; } total_tests++;

    if((multiply(-12345, 6789) == 45)){ tests_passed++; } total_tests++;

    if((multiply(987654, -123457) == 28)){ tests_passed++; } total_tests++;

    if((multiply(-987654, -123457) == 28)){ tests_passed++; } total_tests++;

    if((multiply(1234567890, 1234567890) == 0)){ tests_passed++; } total_tests++;

    if((multiply(6789, 6789) == 81)){ tests_passed++; } total_tests++;

    if((multiply(-987654, -987654) == 16)){ tests_passed++; } total_tests++;

    if((multiply(1092387465, 987654) == 20)){ tests_passed++; } total_tests++;

    if((multiply(-16, -17) == 42)){ tests_passed++; } total_tests++;

    if((multiply(6787, 6788) == 56)){ tests_passed++; } total_tests++;

    if((multiply(987655, -123457) == 35)){ tests_passed++; } total_tests++;

    if((multiply(-16, -99) == 54)){ tests_passed++; } total_tests++;

    if((multiply(-987655, -987654) == 20)){ tests_passed++; } total_tests++;

    if((multiply(-17, 2) == 14)){ tests_passed++; } total_tests++;

    if((multiply(2, -123457) == 14)){ tests_passed++; } total_tests++;

    if((multiply(987654, 987654) == 16)){ tests_passed++; } total_tests++;

    if((multiply(-99, -17) == 63)){ tests_passed++; } total_tests++;

    if((multiply(-99, 987654) == 36)){ tests_passed++; } total_tests++;

    if((multiply(-987655, -99) == 45)){ tests_passed++; } total_tests++;

    if((multiply(-17, -17) == 49)){ tests_passed++; } total_tests++;

    if((multiply(-975312468, 1234567892) == 16)){ tests_passed++; } total_tests++;

    if((multiply(2, -99) == 18)){ tests_passed++; } total_tests++;

    if((multiply(6790, 6789) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-123457, -17) == 49)){ tests_passed++; } total_tests++;

    if((multiply(3, 3) == 9)){ tests_passed++; } total_tests++;

    if((multiply(3, -12345) == 15)){ tests_passed++; } total_tests++;

    if((multiply(6786, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-16, 6786) == 36)){ tests_passed++; } total_tests++;

    if((multiply(-12345, -12346) == 30)){ tests_passed++; } total_tests++;

    if((multiply(987654, -12347) == 28)){ tests_passed++; } total_tests++;

    if((multiply(6790, 6790) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-10, 6789) == 0)){ tests_passed++; } total_tests++;

    if((multiply(6787, 6787) == 49)){ tests_passed++; } total_tests++;

    if((multiply(-12345, 246813579) == 45)){ tests_passed++; } total_tests++;

    if((multiply(-975312468, 6790) == 0)){ tests_passed++; } total_tests++;

    if((multiply(6788, 6788) == 64)){ tests_passed++; } total_tests++;

    if((multiply(-10, 6787) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-99, 3) == 27)){ tests_passed++; } total_tests++;

    if((multiply(987653, 987653) == 9)){ tests_passed++; } total_tests++;

    if((multiply(1234567892, -123457) == 14)){ tests_passed++; } total_tests++;

    if((multiply(1234567890, 1234567891) == 0)){ tests_passed++; } total_tests++;

    if((multiply(987653, -12345) == 15)){ tests_passed++; } total_tests++;

    if((multiply(6788, 6787) == 56)){ tests_passed++; } total_tests++;

    if((multiply(987654, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-123457, -123457) == 49)){ tests_passed++; } total_tests++;

    if((multiply(-123457, 2) == 14)){ tests_passed++; } total_tests++;

    if((multiply(1092387466, 987654) == 24)){ tests_passed++; } total_tests++;

    if((multiply(-12345, -12345) == 25)){ tests_passed++; } total_tests++;

    if((multiply(6787, 1092387466) == 42)){ tests_passed++; } total_tests++;

    if((multiply(-99, 6790) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-975312467, 246813579) == 63)){ tests_passed++; } total_tests++;

    if((multiply(-975312468, 6789) == 72)){ tests_passed++; } total_tests++;

    if((multiply(-975312468, 6788) == 64)){ tests_passed++; } total_tests++;

    if((multiply(246813579, -17) == 63)){ tests_passed++; } total_tests++;

    if((multiply(1092387465, 1234567892) == 10)){ tests_passed++; } total_tests++;

    if((multiply(-123458, -123457) == 56)){ tests_passed++; } total_tests++;

    if((multiply(2, 3) == 6)){ tests_passed++; } total_tests++;

    if((multiply(-123457, 1) == 7)){ tests_passed++; } total_tests++;

    if((multiply(6787, -12346) == 42)){ tests_passed++; } total_tests++;

    if((multiply(-975312468, -975312468) == 64)){ tests_passed++; } total_tests++;

    if((multiply(-99, 1092387466) == 54)){ tests_passed++; } total_tests++;

    if((multiply(-99, 1234567890) == 0)){ tests_passed++; } total_tests++;

    if((multiply(6788, 987655) == 40)){ tests_passed++; } total_tests++;

    if((multiply(1234567891, -975312468) == 8)){ tests_passed++; } total_tests++;

    if((multiply(6788, 3) == 24)){ tests_passed++; } total_tests++;

    if((multiply(-12347, -123457) == 49)){ tests_passed++; } total_tests++;

    if((multiply(-987655, -123457) == 35)){ tests_passed++; } total_tests++;

    if((multiply(987655, 6789) == 45)){ tests_passed++; } total_tests++;

    if((multiply(-987655, 987655) == 25)){ tests_passed++; } total_tests++;

    if((multiply(-975312468, 246813579) == 72)){ tests_passed++; } total_tests++;

    if((multiply(1092387466, 1092387466) == 36)){ tests_passed++; } total_tests++;

    if((multiply(3, 4) == 12)){ tests_passed++; } total_tests++;

    if((multiply(987654, 6789) == 36)){ tests_passed++; } total_tests++;

    if((multiply(6788, -16) == 48)){ tests_passed++; } total_tests++;

    if((multiply(-12346, -12346) == 36)){ tests_passed++; } total_tests++;

    if((multiply(987653, 6789) == 27)){ tests_passed++; } total_tests++;

    if((multiply(987654, -123458) == 32)){ tests_passed++; } total_tests++;

    if((multiply(1234567889, -987654) == 36)){ tests_passed++; } total_tests++;

    if((multiply(1234567891, -12347) == 7)){ tests_passed++; } total_tests++;

    if((multiply(1234567892, -975312469) == 18)){ tests_passed++; } total_tests++;

    if((multiply(-12346, 6789) == 54)){ tests_passed++; } total_tests++;

    if((multiply(987653, 6790) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-987654, -17) == 28)){ tests_passed++; } total_tests++;

    if((multiply(1234567891, 1234567891) == 1)){ tests_passed++; } total_tests++;

    if((multiply(-987656, -123457) == 42)){ tests_passed++; } total_tests++;

    if((multiply(-987655, 6785) == 25)){ tests_passed++; } total_tests++;

    if((multiply(1234567889, 1234567889) == 81)){ tests_passed++; } total_tests++;

    if((multiply(-987657, 246813579) == 63)){ tests_passed++; } total_tests++;

    if((multiply(-975312469, 3) == 27)){ tests_passed++; } total_tests++;

    if((multiply(1234567891, -16) == 6)){ tests_passed++; } total_tests++;

    if((multiply(1092387465, -987654) == 20)){ tests_passed++; } total_tests++;

    if((multiply(-987657, 1234567890) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-17, 6787) == 49)){ tests_passed++; } total_tests++;

    if((multiply(-12345, 6788) == 40)){ tests_passed++; } total_tests++;

    if((multiply(1234567891, -123458) == 8)){ tests_passed++; } total_tests++;

    if((multiply(987654, 6788) == 32)){ tests_passed++; } total_tests++;

    if((multiply(6785, 6785) == 25)){ tests_passed++; } total_tests++;

    if((multiply(-123457, 1234567893) == 21)){ tests_passed++; } total_tests++;

    if((multiply(4, 3) == 12)){ tests_passed++; } total_tests++;

    if((multiply(-11, 1092387466) == 6)){ tests_passed++; } total_tests++;

    if((multiply(-12347, 6790) == 0)){ tests_passed++; } total_tests++;

    if((multiply(6788, -123457) == 56)){ tests_passed++; } total_tests++;

    if((multiply(1234567892, -975312470) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-123458, -123458) == 64)){ tests_passed++; } total_tests++;

    if((multiply(1234567890, -987655) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1092387465, 4) == 20)){ tests_passed++; } total_tests++;

    if((multiply(6785, 6788) == 40)){ tests_passed++; } total_tests++;

    if((multiply(987653, -123457) == 21)){ tests_passed++; } total_tests++;

    if((multiply(-99, -987655) == 45)){ tests_passed++; } total_tests++;

    if((multiply(-18, -17) == 56)){ tests_passed++; } total_tests++;

    if((multiply(-975312470, -975312470) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1234567891, -99) == 9)){ tests_passed++; } total_tests++;

    if((multiply(-123458, -123459) == 72)){ tests_passed++; } total_tests++;

    if((multiply(6786, 6786) == 36)){ tests_passed++; } total_tests++;

    if((multiply(1234567891, 1234567890) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-12347, -12346) == 42)){ tests_passed++; } total_tests++;

    if((multiply(1092387466, -16) == 36)){ tests_passed++; } total_tests++;

    if((multiply(-9, -987654) == 36)){ tests_passed++; } total_tests++;

    if((multiply(-987653, -987653) == 9)){ tests_passed++; } total_tests++;

    if((multiply(246813579, 246813579) == 81)){ tests_passed++; } total_tests++;

    if((multiply(-987655, 1234567892) == 10)){ tests_passed++; } total_tests++;

    if((multiply(6788, 246813579) == 72)){ tests_passed++; } total_tests++;

    if((multiply(6790, -12345) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-123459, -123459) == 81)){ tests_passed++; } total_tests++;

    if((multiply(-975312469, -975312470) == 0)){ tests_passed++; } total_tests++;

    if((multiply(987655, -99) == 45)){ tests_passed++; } total_tests++;

    if((multiply(-18, -19) == 72)){ tests_passed++; } total_tests++;

    if((multiply(1234567892, 1234567892) == 4)){ tests_passed++; } total_tests++;

    if((multiply(-18, -987654) == 32)){ tests_passed++; } total_tests++;

    if((multiply(6786, 1092387466) == 36)){ tests_passed++; } total_tests++;

    if((multiply(-987656, -987656) == 36)){ tests_passed++; } total_tests++;

    if((multiply(1234567892, 1234567891) == 2)){ tests_passed++; } total_tests++;

    if((multiply(6789, -975312468) == 72)){ tests_passed++; } total_tests++;

    if((multiply(-9, -987655) == 45)){ tests_passed++; } total_tests++;

    if((multiply(1234567892, 2) == 4)){ tests_passed++; } total_tests++;

    if((multiply(6789, 6788) == 72)){ tests_passed++; } total_tests++;

    if((multiply(1234567891, -12346) == 6)){ tests_passed++; } total_tests++;

    if((multiply(1092387466, 5) == 30)){ tests_passed++; } total_tests++;

    if((multiply(5, -975312469) == 45)){ tests_passed++; } total_tests++;

    if((multiply(-12344, -12344) == 16)){ tests_passed++; } total_tests++;

    if((multiply(6789, -12347) == 63)){ tests_passed++; } total_tests++;

    if((multiply(-16, 6789) == 54)){ tests_passed++; } total_tests++;

    if((multiply(1234567892, 1092387466) == 12)){ tests_passed++; } total_tests++;

    if((multiply(-12344, -12345) == 20)){ tests_passed++; } total_tests++;

    if((multiply(6785, 6787) == 35)){ tests_passed++; } total_tests++;

    if((multiply(1234567890, 1092387465) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-11, -987656) == 6)){ tests_passed++; } total_tests++;

    if((multiply(6786, 6785) == 30)){ tests_passed++; } total_tests++;

    if((multiply(-18, -18) == 64)){ tests_passed++; } total_tests++;

    if((multiply(1092387466, -17) == 42)){ tests_passed++; } total_tests++;

    if((multiply(6787, 2) == 14)){ tests_passed++; } total_tests++;

    if((multiply(1234567893, -123458) == 24)){ tests_passed++; } total_tests++;

    if((multiply(-123459, -99) == 81)){ tests_passed++; } total_tests++;

    if((multiply(246813579, -16) == 54)){ tests_passed++; } total_tests++;

    if((multiply(-12345, -123458) == 40)){ tests_passed++; } total_tests++;

    if((multiply(-11, -11) == 1)){ tests_passed++; } total_tests++;

    if((multiply(1, 6790) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1092387466, 6788) == 48)){ tests_passed++; } total_tests++;

    if((multiply(6786, 6787) == 42)){ tests_passed++; } total_tests++;

    if((multiply(3, -12344) == 12)){ tests_passed++; } total_tests++;

    if((multiply(3, 6789) == 27)){ tests_passed++; } total_tests++;

    if((multiply(5, 1234567890) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-12347, -17) == 49)){ tests_passed++; } total_tests++;

    if((multiply(1234567893, 6786) == 18)){ tests_passed++; } total_tests++;

    if((multiply(6790, 987654) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-123457, -12344) == 28)){ tests_passed++; } total_tests++;

    if((multiply(6790, -975312470) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1234567891, -12345) == 5)){ tests_passed++; } total_tests++;

    if((multiply(-52, 1234567889) == 18)){ tests_passed++; } total_tests++;

    if((multiply(1092387465, 1234567891) == 5)){ tests_passed++; } total_tests++;

    if((multiply(-12347, 1234567893) == 21)){ tests_passed++; } total_tests++;

    if((multiply(2, 2) == 4)){ tests_passed++; } total_tests++;

    if((multiply(-12346, 1092387465) == 30)){ tests_passed++; } total_tests++;

    if((multiply(6791, 6790) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1234567890, -12346) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-16, -12346) == 36)){ tests_passed++; } total_tests++;

    if((multiply(-987654, -99) == 36)){ tests_passed++; } total_tests++;

    if((multiply(-12344, 6787) == 28)){ tests_passed++; } total_tests++;

    if((multiply(-123458, 6789) == 72)){ tests_passed++; } total_tests++;

    if((multiply(-99, -12345) == 45)){ tests_passed++; } total_tests++;

    if((multiply(-10, 3) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-987655, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-12346, -9) == 54)){ tests_passed++; } total_tests++;

    if((multiply(-12346, -8) == 48)){ tests_passed++; } total_tests++;

    if((multiply(-12344, -123457) == 28)){ tests_passed++; } total_tests++;

    if((multiply(-99, 1234567891) == 9)){ tests_passed++; } total_tests++;

    if((multiply(1234567889, -12344) == 36)){ tests_passed++; } total_tests++;

    if((multiply(0, 246813579) == 0)){ tests_passed++; } total_tests++;

    if((multiply(6789, 2) == 18)){ tests_passed++; } total_tests++;

    if((multiply(-9, 6787) == 63)){ tests_passed++; } total_tests++;

    if((multiply(6786, 75) == 30)){ tests_passed++; } total_tests++;

    if((multiply(0, 987654) == 0)){ tests_passed++; } total_tests++;

    if((multiply(6785, -975312468) == 40)){ tests_passed++; } total_tests++;

    if((multiply(-99, -11) == 9)){ tests_passed++; } total_tests++;

    if((multiply(-10, -12344) == 0)){ tests_passed++; } total_tests++;

    if((multiply(987655, 987654) == 20)){ tests_passed++; } total_tests++;

    if((multiply(6791, -975312468) == 8)){ tests_passed++; } total_tests++;

    if((multiply(246813579, -975312470) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-9, 3) == 27)){ tests_passed++; } total_tests++;

    if((multiply(-9, 246813579) == 81)){ tests_passed++; } total_tests++;

    if((multiply(2, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(6787, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-12346, 987654) == 24)){ tests_passed++; } total_tests++;

    if((multiply(4, 5) == 20)){ tests_passed++; } total_tests++;

    if((multiply(6788, 6790) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-16, -18) == 48)){ tests_passed++; } total_tests++;

    if((multiply(6789, -123457) == 63)){ tests_passed++; } total_tests++;

    if((multiply(-975312467, -9) == 63)){ tests_passed++; } total_tests++;

    if((multiply(1234567889, 1234567891) == 9)){ tests_passed++; } total_tests++;

    if((multiply(-987656, 3) == 18)){ tests_passed++; } total_tests++;

    if((multiply(-975312469, 6788) == 72)){ tests_passed++; } total_tests++;

    if((multiply(-12347, -11) == 7)){ tests_passed++; } total_tests++;

    if((multiply(1234567893, 1092387466) == 18)){ tests_passed++; } total_tests++;

    if((multiply(-10, 1) == 0)){ tests_passed++; } total_tests++;

    if((multiply(987653, -987655) == 15)){ tests_passed++; } total_tests++;

    if((multiply(4, -12345) == 20)){ tests_passed++; } total_tests++;

    if((multiply(987655, -100) == 0)){ tests_passed++; } total_tests++;

    if((multiply(987653, -12347) == 21)){ tests_passed++; } total_tests++;

    if((multiply(6788, -18) == 64)){ tests_passed++; } total_tests++;

    if((multiply(-123458, 6786) == 48)){ tests_passed++; } total_tests++;

    if((multiply(-987656, 1) == 6)){ tests_passed++; } total_tests++;

    if((multiply(6788, 6789) == 72)){ tests_passed++; } total_tests++;

    if((multiply(6785, 6786) == 30)){ tests_passed++; } total_tests++;

    if((multiply(-19, 6790) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-975312470, -99) == 0)){ tests_passed++; } total_tests++;

    if((multiply(6787, -18) == 56)){ tests_passed++; } total_tests++;

    if((multiply(-12347, -12347) == 49)){ tests_passed++; } total_tests++;

    if((multiply(-16, 6788) == 48)){ tests_passed++; } total_tests++;

    if((multiply(-987653, -99) == 27)){ tests_passed++; } total_tests++;

    if((multiply(-16, 246813579) == 54)){ tests_passed++; } total_tests++;

    if((multiply(6786, 6788) == 48)){ tests_passed++; } total_tests++;

    if((multiply(-975312470, -975312469) == 0)){ tests_passed++; } total_tests++;

    if((multiply(987655, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1234567889, -12346) == 54)){ tests_passed++; } total_tests++;

    if((multiply(1092387466, 4) == 24)){ tests_passed++; } total_tests++;

    if((multiply(1092387464, 1092387464) == 16)){ tests_passed++; } total_tests++;

    if((multiply(-12344, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(987653, -16) == 18)){ tests_passed++; } total_tests++;

    if((multiply(-975312469, -975312468) == 72)){ tests_passed++; } total_tests++;

    if((multiply(-975312469, 1092387464) == 36)){ tests_passed++; } total_tests++;

    if((multiply(3, 1234567890) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-8, -8) == 64)){ tests_passed++; } total_tests++;

    if((multiply(-987655, 1234567891) == 5)){ tests_passed++; } total_tests++;

    if((multiply(-10, -987656) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1234567891, -17) == 7)){ tests_passed++; } total_tests++;

    if((multiply(-9, -8) == 72)){ tests_passed++; } total_tests++;

    if((multiply(6788, -987656) == 48)){ tests_passed++; } total_tests++;

    if((multiply(1234567889, 6787) == 63)){ tests_passed++; } total_tests++;

    if((multiply(-987654, -123458) == 32)){ tests_passed++; } total_tests++;

    if((multiply(-12348, -12347) == 56)){ tests_passed++; } total_tests++;

    if((multiply(-987655, -987655) == 25)){ tests_passed++; } total_tests++;

    if((multiply(987655, 4) == 20)){ tests_passed++; } total_tests++;

    if((multiply(6785, -8) == 40)){ tests_passed++; } total_tests++;

    if((multiply(-15, -987657) == 35)){ tests_passed++; } total_tests++;

    if((multiply(-12348, -16) == 48)){ tests_passed++; } total_tests++;

    if((multiply(987653, -8) == 24)){ tests_passed++; } total_tests++;

    if((multiply(-12345, 1234567891) == 5)){ tests_passed++; } total_tests++;

    if((multiply(246813578, -987657) == 56)){ tests_passed++; } total_tests++;

    if((multiply(987655, 5) == 25)){ tests_passed++; } total_tests++;

    if((multiply(-17, -12) == 14)){ tests_passed++; } total_tests++;

    if((multiply(-12, 6789) == 18)){ tests_passed++; } total_tests++;

    if((multiply(-975312469, 2) == 18)){ tests_passed++; } total_tests++;

    if((multiply(6790, -9) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-18, 3) == 24)){ tests_passed++; } total_tests++;

    if((multiply(-100, -9) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-987654, -975312468) == 32)){ tests_passed++; } total_tests++;

    if((multiply(-975312469, 4) == 36)){ tests_passed++; } total_tests++;

    if((multiply(1234567893, -12347) == 21)){ tests_passed++; } total_tests++;

    if((multiply(1234567893, 6789) == 27)){ tests_passed++; } total_tests++;

    if((multiply(2, 1) == 2)){ tests_passed++; } total_tests++;

    if((multiply(-987656, -11) == 6)){ tests_passed++; } total_tests++;

    if((multiply(-99, 6785) == 45)){ tests_passed++; } total_tests++;

    if((multiply(-16, -123457) == 42)){ tests_passed++; } total_tests++;

    if((multiply(1234567890, -11) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1092387464, -100) == 0)){ tests_passed++; } total_tests++;

    if((multiply(246813578, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-10, -11) == 0)){ tests_passed++; } total_tests++;

    if((multiply(6788, 1234567891) == 8)){ tests_passed++; } total_tests++;

    if((multiply(-17, 4) == 28)){ tests_passed++; } total_tests++;

    if((multiply(1234567891, -975312469) == 9)){ tests_passed++; } total_tests++;

    if((multiply(6789, -975312470) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-12348, 6788) == 64)){ tests_passed++; } total_tests++;

    if((multiply(1092387465, -975312470) == 0)){ tests_passed++; } total_tests++;

    if((multiply(3, 2) == 6)){ tests_passed++; } total_tests++;

    if((multiply(4, 4) == 16)){ tests_passed++; } total_tests++;

    if((multiply(0, 3) == 0)){ tests_passed++; } total_tests++;

    if((multiply(6785, -987654) == 20)){ tests_passed++; } total_tests++;

    if((multiply(1092387465, -17) == 35)){ tests_passed++; } total_tests++;

    if((multiply(-987657, -987657) == 49)){ tests_passed++; } total_tests++;

    if((multiply(1092387465, 1092387465) == 25)){ tests_passed++; } total_tests++;

    if((multiply(-987656, -19) == 54)){ tests_passed++; } total_tests++;

    if((multiply(-987656, -12345) == 30)){ tests_passed++; } total_tests++;

    if((multiply(6784, -987654) == 16)){ tests_passed++; } total_tests++;

    if((multiply(3, 6788) == 24)){ tests_passed++; } total_tests++;

    if((multiply(6786, -975312468) == 48)){ tests_passed++; } total_tests++;

    if((multiply(1234567890, 1234567892) == 0)){ tests_passed++; } total_tests++;

    if((multiply(6789, 3) == 27)){ tests_passed++; } total_tests++;

    if((multiply(-52, -99) == 18)){ tests_passed++; } total_tests++;

    if((multiply(1092387466, 1092387465) == 30)){ tests_passed++; } total_tests++;

    if((multiply(987655, 987655) == 25)){ tests_passed++; } total_tests++;

    if((multiply(4, 6791) == 4)){ tests_passed++; } total_tests++;

    if((multiply(-19, -19) == 81)){ tests_passed++; } total_tests++;

    if((multiply(987655, 6) == 30)){ tests_passed++; } total_tests++;

    if((multiply(-15, 3) == 15)){ tests_passed++; } total_tests++;

    if((multiply(-12347, 2) == 14)){ tests_passed++; } total_tests++;

    if((multiply(-123459, 5) == 45)){ tests_passed++; } total_tests++;

    if((multiply(-975312469, -987653) == 27)){ tests_passed++; } total_tests++;

    if((multiply(-975312471, 6787) == 7)){ tests_passed++; } total_tests++;

    if((multiply(-12344, -12346) == 24)){ tests_passed++; } total_tests++;

    if((multiply(-12, -11) == 2)){ tests_passed++; } total_tests++;

    if((multiply(1, -99) == 9)){ tests_passed++; } total_tests++;

    if((multiply(1234567892, 4) == 8)){ tests_passed++; } total_tests++;

    if((multiply(-17, -99) == 63)){ tests_passed++; } total_tests++;

    if((multiply(-987653, -51) == 3)){ tests_passed++; } total_tests++;

    if((multiply(1234567891, -11) == 1)){ tests_passed++; } total_tests++;

    if((multiply(-975312467, -8) == 56)){ tests_passed++; } total_tests++;

    if((multiply(-975312467, -12345) == 35)){ tests_passed++; } total_tests++;

    if((multiply(5, -16) == 30)){ tests_passed++; } total_tests++;

    if((multiply(6784, -987653) == 12)){ tests_passed++; } total_tests++;

    if((multiply(-7, -8) == 56)){ tests_passed++; } total_tests++;

    if((multiply(-12, 246813579) == 18)){ tests_passed++; } total_tests++;

    if((multiply(5, 0) == 0)){ tests_passed++; } total_tests++;

    if((multiply(0, 5) == 0)){ tests_passed++; } total_tests++;

    if((multiply(5, 7) == 35)){ tests_passed++; } total_tests++;

    if((multiply(56789, 126) == 54)){ tests_passed++; } total_tests++;

    if((multiply(0, 15) == 0)){ tests_passed++; } total_tests++;

    if((multiply(25, 0) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-1, 0) == 0)){ tests_passed++; } total_tests++;

    if((multiply(0, -1) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-1, -1) == 1)){ tests_passed++; } total_tests++;

    if((multiply(-975312468, 1234567890) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1234567890, 1092387466) == 0)){ tests_passed++; } total_tests++;

    if((multiply(246813579, 987654) == 36)){ tests_passed++; } total_tests++;

    if((multiply(-975312468, 1234567889) == 72)){ tests_passed++; } total_tests++;

    if((multiply(6788, -99) == 72)){ tests_passed++; } total_tests++;

    if((multiply(3, 1092387465) == 15)){ tests_passed++; } total_tests++;

    if((multiply(246813579, -975312469) == 81)){ tests_passed++; } total_tests++;

    if((multiply(246813579, -123457) == 63)){ tests_passed++; } total_tests++;

    if((multiply(1234567890, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(2, 1234567891) == 2)){ tests_passed++; } total_tests++;

    if((multiply(-975312468, 1092387466) == 48)){ tests_passed++; } total_tests++;

    if((multiply(6788, 1234567890) == 0)){ tests_passed++; } total_tests++;

    if((multiply(246813580, 246813579) == 0)){ tests_passed++; } total_tests++;

    if((multiply(3, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-975312469, 6789) == 81)){ tests_passed++; } total_tests++;

    if((multiply(246813579, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-11, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-11, -9) == 9)){ tests_passed++; } total_tests++;

    if((multiply(-975312469, -975312469) == 81)){ tests_passed++; } total_tests++;

    if((multiply(2, 1092387465) == 10)){ tests_passed++; } total_tests++;

    if((multiply(1092387465, 2) == 10)){ tests_passed++; } total_tests++;

    if((multiply(6788, 1234567892) == 16)){ tests_passed++; } total_tests++;

    if((multiply(6788, 1234567893) == 24)){ tests_passed++; } total_tests++;

    if((multiply(-12345, -98) == 40)){ tests_passed++; } total_tests++;

    if((multiply(-975312469, 1234567893) == 27)){ tests_passed++; } total_tests++;

    if((multiply(-17, -9) == 63)){ tests_passed++; } total_tests++;

    if((multiply(-11, -8) == 8)){ tests_passed++; } total_tests++;

    if((multiply(246813580, -975312470) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1092387466, 1092387464) == 24)){ tests_passed++; } total_tests++;

    if((multiply(6788, -975312471) == 8)){ tests_passed++; } total_tests++;

    if((multiply(-12, -8) == 16)){ tests_passed++; } total_tests++;

    if((multiply(1092387466, 2) == 12)){ tests_passed++; } total_tests++;

    if((multiply(1092387466, -11) == 6)){ tests_passed++; } total_tests++;

    if((multiply(1092387465, 1092387466) == 30)){ tests_passed++; } total_tests++;

    if((multiply(-100, 1092387466) == 0)){ tests_passed++; } total_tests++;

    if((multiply(246813579, 4) == 36)){ tests_passed++; } total_tests++;

    if((multiply(-12344, -17) == 28)){ tests_passed++; } total_tests++;

    if((multiply(2, 1092387464) == 8)){ tests_passed++; } total_tests++;

    if((multiply(1092387466, -123457) == 42)){ tests_passed++; } total_tests++;

    if((multiply(1234567889, 1234567890) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-8, 246813579) == 72)){ tests_passed++; } total_tests++;

    if((multiply(-10, -12345) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-12, -975312468) == 16)){ tests_passed++; } total_tests++;

    if((multiply(-10, -123457) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-98, 246813580) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-12345, 1092387466) == 30)){ tests_passed++; } total_tests++;

    if((multiply(-10, -8) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-12, 246813580) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1234567889, 1092387464) == 36)){ tests_passed++; } total_tests++;

    if((multiply(-12, 1092387465) == 10)){ tests_passed++; } total_tests++;

    if((multiply(246813580, 1234567888) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-123457, 1234567888) == 56)){ tests_passed++; } total_tests++;

    if((multiply(-975312470, -123457) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-10, -975312470) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-975312469, 246813579) == 81)){ tests_passed++; } total_tests++;

    if((multiply(6787, 1234567891) == 7)){ tests_passed++; } total_tests++;

    if((multiply(1234567889, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1234567890, 246813580) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-8, 4) == 32)){ tests_passed++; } total_tests++;

    if((multiply(-975312471, 246813579) == 9)){ tests_passed++; } total_tests++;

    if((multiply(-100, 1234567890) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-12346, 1092387466) == 36)){ tests_passed++; } total_tests++;

    if((multiply(987654, 1234567893) == 12)){ tests_passed++; } total_tests++;

    if((multiply(-8, 246813580) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-975312468, -975312469) == 72)){ tests_passed++; } total_tests++;

    if((multiply(1234567889, 246813580) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1234567892, 1234567893) == 6)){ tests_passed++; } total_tests++;

    if((multiply(1234567891, -12344) == 4)){ tests_passed++; } total_tests++;

    if((multiply(-10, 2) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1, 2) == 2)){ tests_passed++; } total_tests++;

    if((multiply(-12345, -12344) == 20)){ tests_passed++; } total_tests++;

    if((multiply(1234567892, -9) == 18)){ tests_passed++; } total_tests++;

    if((multiply(1234567890, 1092387464) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-7, 4) == 28)){ tests_passed++; } total_tests++;

    if((multiply(-98, -975312470) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-123457, 1234567891) == 7)){ tests_passed++; } total_tests++;

    if((multiply(-975312471, 246813578) == 8)){ tests_passed++; } total_tests++;

    if((multiply(246813579, 1234567891) == 9)){ tests_passed++; } total_tests++;

    if((multiply(-17, -7) == 49)){ tests_passed++; } total_tests++;

    if((multiply(-98, -7) == 56)){ tests_passed++; } total_tests++;

    if((multiply(1234567888, 1234567888) == 64)){ tests_passed++; } total_tests++;

    if((multiply(246813580, -123457) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1, 1092387466) == 6)){ tests_passed++; } total_tests++;

    if((multiply(-975312471, 1234567890) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1092387465, 1092387467) == 35)){ tests_passed++; } total_tests++;

    if((multiply(-975312469, -12346) == 54)){ tests_passed++; } total_tests++;

    if((multiply(6789, -98) == 72)){ tests_passed++; } total_tests++;

    if((multiply(-8, 1) == 8)){ tests_passed++; } total_tests++;

    if((multiply(6788, -17) == 56)){ tests_passed++; } total_tests++;

    if((multiply(-12, 1234567890) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-12, -975312469) == 18)){ tests_passed++; } total_tests++;

    if((multiply(1234567888, 1234567890) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1234567894, -8) == 32)){ tests_passed++; } total_tests++;

    if((multiply(4, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(6789, 1234567889) == 81)){ tests_passed++; } total_tests++;

    if((multiply(-6, 4) == 24)){ tests_passed++; } total_tests++;

    if((multiply(-123458, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-975312469, -7) == 63)){ tests_passed++; } total_tests++;

    if((multiply(-99, -123457) == 63)){ tests_passed++; } total_tests++;

    if((multiply(6790, 6788) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-975312471, 1234567892) == 2)){ tests_passed++; } total_tests++;

    if((multiply(246813578, 3) == 24)){ tests_passed++; } total_tests++;

    if((multiply(246813579, -975312472) == 18)){ tests_passed++; } total_tests++;

    if((multiply(-7, -12345) == 35)){ tests_passed++; } total_tests++;

    if((multiply(-9, -975312471) == 9)){ tests_passed++; } total_tests++;

    if((multiply(246813579, 6789) == 81)){ tests_passed++; } total_tests++;

    if((multiply(-16, 3) == 18)){ tests_passed++; } total_tests++;

    if((multiply(-975312470, 6787) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-123456, 1234567888) == 48)){ tests_passed++; } total_tests++;

    if((multiply(-101, 1234567890) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-12, 1234567888) == 16)){ tests_passed++; } total_tests++;

    if((multiply(-975312470, -975312471) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1234567892, -975312471) == 2)){ tests_passed++; } total_tests++;

    if((multiply(987654, -12346) == 24)){ tests_passed++; } total_tests++;

    if((multiply(6789, -12344) == 36)){ tests_passed++; } total_tests++;

    if((multiply(1234567894, 1234567894) == 16)){ tests_passed++; } total_tests++;

    if((multiply(4, 2) == 8)){ tests_passed++; } total_tests++;

    if((multiply(246813582, 246813582) == 4)){ tests_passed++; } total_tests++;

    if((multiply(1092387467, 1092387466) == 42)){ tests_passed++; } total_tests++;

    if((multiply(-98, -98) == 64)){ tests_passed++; } total_tests++;

    if((multiply(1092387464, 6791) == 4)){ tests_passed++; } total_tests++;

    if((multiply(-123456, 31) == 6)){ tests_passed++; } total_tests++;

    if((multiply(-97, -975312470) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-123456, -11) == 6)){ tests_passed++; } total_tests++;

    if((multiply(6787, -97) == 49)){ tests_passed++; } total_tests++;

    if((multiply(-10, -9) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-100, 1092387464) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-11, -12346) == 6)){ tests_passed++; } total_tests++;

    if((multiply(-12, -123458) == 16)){ tests_passed++; } total_tests++;

    if((multiply(1234567889, -8) == 72)){ tests_passed++; } total_tests++;

    if((multiply(-12, -12346) == 12)){ tests_passed++; } total_tests++;

    if((multiply(-123458, -975312470) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1234567893, 1234567891) == 3)){ tests_passed++; } total_tests++;

    if((multiply(1234567891, -987654) == 4)){ tests_passed++; } total_tests++;

    if((multiply(-975312469, -123458) == 72)){ tests_passed++; } total_tests++;

    if((multiply(6787, -975312468) == 56)){ tests_passed++; } total_tests++;

    if((multiply(-975312471, -975312471) == 1)){ tests_passed++; } total_tests++;

    if((multiply(246813578, 1092387466) == 48)){ tests_passed++; } total_tests++;

    if((multiply(6791, 6791) == 1)){ tests_passed++; } total_tests++;

    if((multiply(-975312470, 246813582) == 0)){ tests_passed++; } total_tests++;

    if((multiply(6788, 1234567889) == 72)){ tests_passed++; } total_tests++;

    if((multiply(1234567894, 1234567895) == 20)){ tests_passed++; } total_tests++;

    if((multiply(-123456, -123457) == 42)){ tests_passed++; } total_tests++;

    if((multiply(-123457, -123458) == 56)){ tests_passed++; } total_tests++;

    if((multiply(-123456, -12344) == 24)){ tests_passed++; } total_tests++;

    if((multiply(246813580, 246813580) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1, -123457) == 7)){ tests_passed++; } total_tests++;

    if((multiply(-8, -123457) == 56)){ tests_passed++; } total_tests++;

    if((multiply(1092387466, 246813580) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-13, -13) == 9)){ tests_passed++; } total_tests++;

    if((multiply(-7, -123457) == 49)){ tests_passed++; } total_tests++;

    if((multiply(-7, 1092387466) == 42)){ tests_passed++; } total_tests++;

    if((multiply(1234567895, 1234567890) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-987654, 2) == 8)){ tests_passed++; } total_tests++;

    if((multiply(-12344, -975312469) == 36)){ tests_passed++; } total_tests++;

    if((multiply(1234567889, -975312468) == 72)){ tests_passed++; } total_tests++;

    if((multiply(-123456, -12346) == 36)){ tests_passed++; } total_tests++;

    if((multiply(246813581, 246813580) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1092387465, 1092387463) == 15)){ tests_passed++; } total_tests++;

    if((multiply(246813578, -975312470) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-101, -101) == 1)){ tests_passed++; } total_tests++;

    if((multiply(1234567892, 6791) == 2)){ tests_passed++; } total_tests++;

    if((multiply(-12, -100) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-987654, -975312470) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-12344, 1234567893) == 12)){ tests_passed++; } total_tests++;

    if((multiply(246813578, 246813579) == 72)){ tests_passed++; } total_tests++;

    if((multiply(-975312471, -975312470) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-11, 6789) == 9)){ tests_passed++; } total_tests++;

    if((multiply(246813579, 1234567888) == 72)){ tests_passed++; } total_tests++;

    if((multiply(-975312472, -13) == 6)){ tests_passed++; } total_tests++;

    if((multiply(-7, 1092387465) == 35)){ tests_passed++; } total_tests++;

    if((multiply(1234567891, 1234567892) == 2)){ tests_passed++; } total_tests++;

    if((multiply(-8, -12346) == 48)){ tests_passed++; } total_tests++;

    if((multiply(-98, -12345) == 40)){ tests_passed++; } total_tests++;

    if((multiply(-8, 1234567888) == 64)){ tests_passed++; } total_tests++;

    if((multiply(1234567895, -975312470) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-975312468, -11) == 8)){ tests_passed++; } total_tests++;

    if((multiply(4, 1092387462) == 8)){ tests_passed++; } total_tests++;

    if((multiply(-99, -9) == 81)){ tests_passed++; } total_tests++;

    if((multiply(1234567888, -10) == 0)){ tests_passed++; } total_tests++;

    if((multiply(6791, 1234567895) == 5)){ tests_passed++; } total_tests++;

    if((multiply(-9, -11) == 9)){ tests_passed++; } total_tests++;

    if((multiply(-975312472, -9) == 18)){ tests_passed++; } total_tests++;

    if((multiply(-975312469, -97) == 63)){ tests_passed++; } total_tests++;

    if((multiply(1234567894, 1234567893) == 12)){ tests_passed++; } total_tests++;

    if((multiply(-97, -123457) == 49)){ tests_passed++; } total_tests++;

    if((multiply(-97, 1092387465) == 35)){ tests_passed++; } total_tests++;

    if((multiply(-6, -98) == 48)){ tests_passed++; } total_tests++;

    if((multiply(1092387463, 1234567891) == 3)){ tests_passed++; } total_tests++;

    if((multiply(246813578, -975312471) == 8)){ tests_passed++; } total_tests++;

    if((multiply(246813579, -8) == 72)){ tests_passed++; } total_tests++;

    if((multiply(246813583, 246813582) == 6)){ tests_passed++; } total_tests++;

    if((multiply(6789, -12345) == 45)){ tests_passed++; } total_tests++;

    if((multiply(4, -123457) == 28)){ tests_passed++; } total_tests++;

    if((multiply(246813579, 987653) == 27)){ tests_passed++; } total_tests++;

    if((multiply(246813578, -8) == 64)){ tests_passed++; } total_tests++;

    if((multiply(1092387468, 1092387468) == 64)){ tests_passed++; } total_tests++;

    if((multiply(-17, 1234567890) == 0)){ tests_passed++; } total_tests++;

    if((multiply(6790, 1234567889) == 0)){ tests_passed++; } total_tests++;

    if((multiply(3, -99) == 27)){ tests_passed++; } total_tests++;

    if((multiply(246813579, -12) == 18)){ tests_passed++; } total_tests++;

    if((multiply(-975312470, -123456) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-975312472, -12345) == 10)){ tests_passed++; } total_tests++;

    if((multiply(1234567894, -975312470) == 0)){ tests_passed++; } total_tests++;

    if((multiply(31, 246813578) == 8)){ tests_passed++; } total_tests++;

    if((multiply(-7, -12344) == 28)){ tests_passed++; } total_tests++;

    if((multiply(246813578, 246813578) == 64)){ tests_passed++; } total_tests++;

    if((multiply(1, 1234567892) == 2)){ tests_passed++; } total_tests++;

    if((multiply(6790, 6791) == 0)){ tests_passed++; } total_tests++;

    if((multiply(6789, 246813582) == 18)){ tests_passed++; } total_tests++;

    if((multiply(-7, -7) == 49)){ tests_passed++; } total_tests++;

    if((multiply(987653, 1234567891) == 3)){ tests_passed++; } total_tests++;

    if((multiply(-8, -12345) == 40)){ tests_passed++; } total_tests++;

    if((multiply(31, 987654) == 4)){ tests_passed++; } total_tests++;

    if((multiply(-975312468, -12346) == 48)){ tests_passed++; } total_tests++;

    if((multiply(31, 2) == 2)){ tests_passed++; } total_tests++;

    if((multiply(1234567895, 246813580) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1234567895, 1234567895) == 25)){ tests_passed++; } total_tests++;

    if((multiply(-975312471, 6790) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1092387465, -975312472) == 10)){ tests_passed++; } total_tests++;

    if((multiply(-9, 1092387464) == 36)){ tests_passed++; } total_tests++;

    if((multiply(-987655, 2) == 10)){ tests_passed++; } total_tests++;

    if((multiply(-98, -123457) == 56)){ tests_passed++; } total_tests++;

    if((multiply(6789, 6791) == 9)){ tests_passed++; } total_tests++;

    if((multiply(-12344, 246813582) == 8)){ tests_passed++; } total_tests++;

    if((multiply(-12346, 1092387464) == 24)){ tests_passed++; } total_tests++;

    if((multiply(-101, -100) == 0)){ tests_passed++; } total_tests++;

    if((multiply(987654, -8) == 32)){ tests_passed++; } total_tests++;

    if((multiply(1092387467, 246813579) == 63)){ tests_passed++; } total_tests++;

    if((multiply(1092387463, 1092387463) == 9)){ tests_passed++; } total_tests++;

    if((multiply(1092387464, -975312471) == 4)){ tests_passed++; } total_tests++;

    if((multiply(6792, 6791) == 2)){ tests_passed++; } total_tests++;

    if((multiply(-98, -99) == 72)){ tests_passed++; } total_tests++;

    if((multiply(6792, 2) == 4)){ tests_passed++; } total_tests++;

    if((multiply(1, 1234567889) == 9)){ tests_passed++; } total_tests++;

    if((multiply(1234567889, -975312469) == 81)){ tests_passed++; } total_tests++;

    if((multiply(246813579, 5) == 45)){ tests_passed++; } total_tests++;

    if((multiply(6791, 6789) == 9)){ tests_passed++; } total_tests++;

    if((multiply(1234567893, -123457) == 21)){ tests_passed++; } total_tests++;

    if((multiply(-12, 1092387467) == 14)){ tests_passed++; } total_tests++;

    if((multiply(1092387463, 246813580) == 0)){ tests_passed++; } total_tests++;

    if((multiply(246813580, -975312468) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-12, -99) == 18)){ tests_passed++; } total_tests++;

    if((multiply(-10, 6790) == 0)){ tests_passed++; } total_tests++;

    if((multiply(6788, 246813582) == 16)){ tests_passed++; } total_tests++;

    if((multiply(6792, 1234567892) == 4)){ tests_passed++; } total_tests++;

    if((multiply(-17, 1234567888) == 56)){ tests_passed++; } total_tests++;

    if((multiply(-6, -12344) == 24)){ tests_passed++; } total_tests++;

    if((multiply(32, 31) == 2)){ tests_passed++; } total_tests++;

    if((multiply(-12345, 1092387464) == 20)){ tests_passed++; } total_tests++;

    if((multiply(1092387464, 246813583) == 12)){ tests_passed++; } total_tests++;

    if((multiply(32, 1234567895) == 10)){ tests_passed++; } total_tests++;

    if((multiply(1092387468, 3) == 24)){ tests_passed++; } total_tests++;

    if((multiply(-10, 5) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-7, 1092387463) == 21)){ tests_passed++; } total_tests++;

    if((multiply(31, 1234567890) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-123456, 6791) == 6)){ tests_passed++; } total_tests++;

    if((multiply(1234567891, 246813581) == 1)){ tests_passed++; } total_tests++;

    if((multiply(1234567892, 1234567896) == 12)){ tests_passed++; } total_tests++;

    if((multiply(-101, -975312468) == 8)){ tests_passed++; } total_tests++;

    if((multiply(6792, 246813581) == 2)){ tests_passed++; } total_tests++;

    if((multiply(1234567888, -975312470) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-123457, -12345) == 35)){ tests_passed++; } total_tests++;

    if((multiply(-101, -98) == 8)){ tests_passed++; } total_tests++;

    if((multiply(1234567893, 6791) == 3)){ tests_passed++; } total_tests++;

    if((multiply(-123458, 1092387467) == 56)){ tests_passed++; } total_tests++;

    if((multiply(-9, 1234567888) == 72)){ tests_passed++; } total_tests++;

    if((multiply(-12346, 1234567895) == 30)){ tests_passed++; } total_tests++;

    if((multiply(-123456, -123456) == 36)){ tests_passed++; } total_tests++;

    if((multiply(3, 246813580) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-99, -98) == 72)){ tests_passed++; } total_tests++;

    if((multiply(-975312472, -975312472) == 4)){ tests_passed++; } total_tests++;

    if((multiply(-12346, -975312469) == 54)){ tests_passed++; } total_tests++;

    if((multiply(5, -123457) == 35)){ tests_passed++; } total_tests++;

    if((multiply(1092387463, 1234567889) == 27)){ tests_passed++; } total_tests++;

    if((multiply(-975312468, -123458) == 64)){ tests_passed++; } total_tests++;

    if((multiply(1234567888, -16) == 48)){ tests_passed++; } total_tests++;

    if((multiply(3, 1092387464) == 12)){ tests_passed++; } total_tests++;

    if((multiply(-975312469, 1234567895) == 45)){ tests_passed++; } total_tests++;

    if((multiply(1234567891, 1092387465) == 5)){ tests_passed++; } total_tests++;

    if((multiply(-12344, 6790) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-99, -12346) == 54)){ tests_passed++; } total_tests++;

    if((multiply(-10, 246813579) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-9, 6789) == 81)){ tests_passed++; } total_tests++;

    if((multiply(-12344, -11) == 4)){ tests_passed++; } total_tests++;

    if((multiply(1234567888, -11) == 8)){ tests_passed++; } total_tests++;

    if((multiply(1, -13) == 3)){ tests_passed++; } total_tests++;

    if((multiply(1234567893, 1234567892) == 6)){ tests_passed++; } total_tests++;

    if((multiply(-11, -975312472) == 2)){ tests_passed++; } total_tests++;

    if((multiply(1234567896, 987654) == 24)){ tests_passed++; } total_tests++;

    if((multiply(987653, -101) == 3)){ tests_passed++; } total_tests++;

    if((multiply(-11, -123457) == 7)){ tests_passed++; } total_tests++;

    if((multiply(-123458, -12) == 16)){ tests_passed++; } total_tests++;

    if((multiply(-123455, 1234567888) == 40)){ tests_passed++; } total_tests++;

    if((multiply(-123456, 1234567893) == 18)){ tests_passed++; } total_tests++;

    if((multiply(-9, 6) == 54)){ tests_passed++; } total_tests++;

    if((multiply(-12, 246813578) == 16)){ tests_passed++; } total_tests++;

    if((multiply(6787, 246813579) == 63)){ tests_passed++; } total_tests++;

    if((multiply(-11, -12345) == 5)){ tests_passed++; } total_tests++;

    if((multiply(-12, 1234567891) == 2)){ tests_passed++; } total_tests++;

    if((multiply(-16, -123455) == 30)){ tests_passed++; } total_tests++;

    if((multiply(1092387468, -97) == 56)){ tests_passed++; } total_tests++;

    if((multiply(-14, -14) == 16)){ tests_passed++; } total_tests++;

    if((multiply(-97, 4) == 28)){ tests_passed++; } total_tests++;

    if((multiply(-97, 6788) == 56)){ tests_passed++; } total_tests++;

    if((multiply(246813582, -99) == 18)){ tests_passed++; } total_tests++;

    if((multiply(-987654, 246813580) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-101, 6791) == 1)){ tests_passed++; } total_tests++;

    if((multiply(1092387465, 1234567895) == 25)){ tests_passed++; } total_tests++;

    if((multiply(1092387465, 1234567890) == 0)){ tests_passed++; } total_tests++;

    if((multiply(1234567892, 6792) == 4)){ tests_passed++; } total_tests++;

    if((multiply(-975312467, 1234567889) == 63)){ tests_passed++; } total_tests++;

    if((multiply(1092387463, -9) == 27)){ tests_passed++; } total_tests++;

    if((multiply(6792, 6792) == 4)){ tests_passed++; } total_tests++;

    if((multiply(246813578, 246813580) == 0)){ tests_passed++; } total_tests++;

    if((multiply(-975312471, 246813583) == 3)){ tests_passed++; } total_tests++;

    if((multiply(4, 1092387467) == 28)){ tests_passed++; } total_tests++;

    if((multiply(6789, -9) == 81)){ tests_passed++; } total_tests++;

    if((multiply(-12, 1092387466) == 12)){ tests_passed++; } total_tests++;

    if((multiply(5, 1234567891) == 5)){ tests_passed++; } total_tests++;

    if((multiply(-9, 1092387468) == 72)){ tests_passed++; } total_tests++;

    if((multiply(246813578, 32) == 16)){ tests_passed++; } total_tests++;

    if((multiply(-123457, -123456) == 42)){ tests_passed++; } total_tests++;

    if((multiply(3, -16) == 18)){ tests_passed++; } total_tests++;

    if((multiply(1092387463, 1092387464) == 12)){ tests_passed++; } total_tests++;

    if((multiply(246813581, -11) == 1)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


