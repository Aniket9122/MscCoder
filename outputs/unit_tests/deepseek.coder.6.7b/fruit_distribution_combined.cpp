#include<stdio.h>
#include<string>
using namespace std;

int fruit_distribution(string s, int n) {
    int apples, oranges;
    sscanf(s.c_str(), "%*d %*s %d %*s %d", &apples, &oranges); // Extract the number of apples and oranges from the string
    return n - apples - oranges;  // Subtract the sum of apples and oranges from total fruits to find out the number of mangoes
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

    if((fruit_distribution("5 apples and 6 oranges",19) == 8)){ tests_passed++; } total_tests++;

    if((fruit_distribution("5 apples and 6 oranges",21) == 10)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 1 oranges",3) == 2)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 0 oranges",3) == 2)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 3 oranges",100) == 95)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 3 oranges",5) == 0)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 100 oranges",120) == 19)){ tests_passed++; } total_tests++;

    if((fruit_distribution("5 apples and 6 oranges",19) == 8)){ tests_passed++; } total_tests++;

    if((fruit_distribution("5 apples and 6 oranges",21) == 10)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 1 oranges",3) == 2)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 0 oranges",3) == 2)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 3 oranges",100) == 95)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 3 oranges",5) == 0)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 100 oranges",120) == 19)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 20 oranges",50) == 20)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 4 oranges",9) == 2)){ tests_passed++; } total_tests++;

    if((fruit_distribution("7 apples and 8 oranges",30) == 15)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 0 oranges",5) == 3)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",10) == 10)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 1 oranges",1) == 0)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 0 oranges",15) == 5)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 5 oranges",12) == 4)){ tests_passed++; } total_tests++;

    if((fruit_distribution("5 apples and 5 oranges",12) == 2)){ tests_passed++; } total_tests++;

    if((fruit_distribution("8 apples and 2 oranges",15) == 5)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 0 oranges",12) == 10)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 0 oranges",30) == 28)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",9) == 9)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 1 oranges",50) == 49)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 1 oranges",15) == 14)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 1 oranges",14) == 13)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",30) == 30)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 1 oranges",10) == 9)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 1 oranges",12) == 11)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 20 oranges",30) == 0)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 0 oranges",13) == 11)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 4 oranges",30) == 23)){ tests_passed++; } total_tests++;

    if((fruit_distribution("8 apples and 2 oranges",10) == 0)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 1 oranges",2) == 1)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 20 oranges",51) == 21)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 5 oranges",10) == 2)){ tests_passed++; } total_tests++;

    if((fruit_distribution("5 apples and 5 oranges",15) == 5)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 1 oranges",9) == 8)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 1 oranges",8) == 7)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 1 oranges",13) == 12)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",1) == 1)){ tests_passed++; } total_tests++;

    if((fruit_distribution("7 apples and 8 oranges",15) == 0)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 5 oranges",51) == 43)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 4 oranges",8) == 1)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 5 oranges",13) == 5)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 1 oranges",51) == 50)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 0 oranges",11) == 9)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 0 oranges",30) == 20)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 0 oranges",14) == 12)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",29) == 29)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 20 oranges",52) == 22)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 1 oranges",4) == 3)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 0 oranges",50) == 48)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 0 oranges",51) == 49)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 1 oranges",11) == 10)){ tests_passed++; } total_tests++;

    if((fruit_distribution("5 apples and 5 oranges",11) == 1)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 0 oranges",52) == 50)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 4 oranges",12) == 5)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 4 oranges",10) == 3)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 0 oranges",29) == 19)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 0 oranges",3) == 1)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 0 oranges",6) == 4)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 5 oranges",9) == 1)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 0 oranges",29) == 27)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 0 oranges",8) == 6)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",12) == 12)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 0 oranges",10) == 8)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 5 oranges",14) == 6)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 0 oranges",9) == 7)){ tests_passed++; } total_tests++;

    if((fruit_distribution("5 apples and 5 oranges",13) == 3)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",15) == 15)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 4 oranges",13) == 6)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",14) == 14)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",0) == 0)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 4 oranges",50) == 43)){ tests_passed++; } total_tests++;

    if((fruit_distribution("2 apples and 0 oranges",15) == 13)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",20) == 5)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",15) == 5)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",30) == 7)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 18 oranges",50) == 8)){ tests_passed++; } total_tests++;

    if((fruit_distribution("50 apples and 50 oranges",100) == 0)){ tests_passed++; } total_tests++;

    if((fruit_distribution("100 apples and 100 oranges",200) == 0)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 99 oranges",105) == 5)){ tests_passed++; } total_tests++;

    if((fruit_distribution("99 apples and 1 oranges",105) == 5)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",25) == 5)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 99 oranges",100) == 0)){ tests_passed++; } total_tests++;

    if((fruit_distribution("99 apples and 1 oranges",104) == 4)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",199) == 179)){ tests_passed++; } total_tests++;

    if((fruit_distribution("50 apples and 50 oranges",199) == 99)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 99 oranges",199) == 99)){ tests_passed++; } total_tests++;

    if((fruit_distribution("50 apples and 50 oranges",200) == 100)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",198) == 178)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 18 oranges",105) == 63)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 18 oranges",100) == 58)){ tests_passed++; } total_tests++;

    if((fruit_distribution("99 apples and 1 oranges",106) == 6)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",20) == 10)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",25) == 15)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 99 oranges",104) == 4)){ tests_passed++; } total_tests++;

    if((fruit_distribution("97 apples and 1 oranges",198) == 100)){ tests_passed++; } total_tests++;

    if((fruit_distribution("97 apples and 1 oranges",105) == 7)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",26) == 6)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",198) == 188)){ tests_passed++; } total_tests++;

    if((fruit_distribution("50 apples and 50 oranges",105) == 5)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",197) == 177)){ tests_passed++; } total_tests++;

    if((fruit_distribution("50 apples and 50 oranges",106) == 6)){ tests_passed++; } total_tests++;

    if((fruit_distribution("50 apples and 50 oranges",104) == 4)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",198) == 175)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",11) == 11)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 18 oranges",106) == 64)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 99 oranges",103) == 3)){ tests_passed++; } total_tests++;

    if((fruit_distribution("99 apples and 1 oranges",103) == 3)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 99 oranges",197) == 97)){ tests_passed++; } total_tests++;

    if((fruit_distribution("99 apples and 1 oranges",198) == 98)){ tests_passed++; } total_tests++;

    if((fruit_distribution("97 apples and 1 oranges",200) == 102)){ tests_passed++; } total_tests++;

    if((fruit_distribution("50 apples and 50 oranges",103) == 3)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",199) == 199)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",26) == 3)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 18 oranges",49) == 7)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",106) == 83)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",99) == 79)){ tests_passed++; } total_tests++;

    if((fruit_distribution("99 apples and 1 oranges",197) == 97)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",21) == 11)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",103) == 93)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",101) == 91)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 18 oranges",51) == 9)){ tests_passed++; } total_tests++;

    if((fruit_distribution("100 apples and 100 oranges",201) == 1)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",50) == 30)){ tests_passed++; } total_tests++;

    if((fruit_distribution("99 apples and 1 oranges",199) == 99)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",200) == 180)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",106) == 106)){ tests_passed++; } total_tests++;

    if((fruit_distribution("97 apples and 1 oranges",199) == 101)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",16) == 6)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",27) == 7)){ tests_passed++; } total_tests++;

    if((fruit_distribution("50 apples and 50 oranges",101) == 1)){ tests_passed++; } total_tests++;

    if((fruit_distribution("97 apples and 1 oranges",100) == 2)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 99 oranges",106) == 6)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",197) == 197)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",107) == 87)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",21) == 6)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 99 oranges",196) == 96)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 18 oranges",104) == 62)){ tests_passed++; } total_tests++;

    if((fruit_distribution("99 apples and 1 oranges",102) == 2)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",30) == 10)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 99 oranges",101) == 1)){ tests_passed++; } total_tests++;

    if((fruit_distribution("97 apples and 1 oranges",107) == 9)){ tests_passed++; } total_tests++;

    if((fruit_distribution("50 apples and 50 oranges",102) == 2)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 18 oranges",99) == 57)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",197) == 174)){ tests_passed++; } total_tests++;

    if((fruit_distribution("97 apples and 1 oranges",201) == 103)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",105) == 82)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",100) == 77)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",28) == 5)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",198) == 198)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",50) == 50)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 118 oranges",198) == 56)){ tests_passed++; } total_tests++;

    if((fruit_distribution("97 apples and 1 oranges",103) == 5)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",51) == 36)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",104) == 84)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 118 oranges",199) == 57)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",31) == 11)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",107) == 84)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",30) == 15)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",106) == 96)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",106) == 86)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 18 oranges",48) == 6)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",48) == 28)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 99 oranges",107) == 7)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",101) == 81)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",200) == 200)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",49) == 26)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 99 oranges",198) == 98)){ tests_passed++; } total_tests++;

    if((fruit_distribution("50 apples and 50 oranges",197) == 97)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",199) == 184)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",197) == 187)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",196) == 176)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",12) == 2)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",26) == 16)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",25) == 25)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",10) == 0)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",199) == 176)){ tests_passed++; } total_tests++;

    if((fruit_distribution("99 apples and 1 oranges",101) == 1)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",15) == 0)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",196) == 173)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",22) == 12)){ tests_passed++; } total_tests++;

    if((fruit_distribution("97 apples and 1 oranges",104) == 6)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 118 oranges",196) == 54)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 99 oranges",102) == 2)){ tests_passed++; } total_tests++;

    if((fruit_distribution("97 apples and 1 oranges",196) == 98)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 18 oranges",98) == 56)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",105) == 85)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",102) == 82)){ tests_passed++; } total_tests++;

    if((fruit_distribution("99 apples and 1 oranges",200) == 100)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 11 oranges",49) == 14)){ tests_passed++; } total_tests++;

    if((fruit_distribution("97 apples and 1 oranges",197) == 99)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 118 oranges",197) == 55)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",28) == 8)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",49) == 49)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",99) == 99)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",201) == 181)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",105) == 95)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",28) == 13)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",27) == 17)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",28) == 18)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",104) == 81)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 18 oranges",199) == 157)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",48) == 25)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",20) == 20)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 18 oranges",196) == 154)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 18 oranges",195) == 153)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 18 oranges",103) == 61)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",99) == 76)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",104) == 94)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",27) == 12)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 18 oranges",97) == 55)){ tests_passed++; } total_tests++;

    if((fruit_distribution("99 apples and 1 oranges",196) == 96)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",101) == 86)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",103) == 80)){ tests_passed++; } total_tests++;

    if((fruit_distribution("24 apples and 11 oranges",107) == 72)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",108) == 85)){ tests_passed++; } total_tests++;

    if((fruit_distribution("50 apples and 50 oranges",201) == 101)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",29) == 14)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",105) == 105)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",104) == 104)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",105) == 90)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",17) == 7)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",14) == 4)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",104) == 89)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",29) == 19)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",105) == 95)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",31) == 8)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",31) == 21)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",100) == 100)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",99) == 89)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",32) == 9)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",104) == 94)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",28) == 18)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",49) == 39)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",106) == 91)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",31) == 21)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",31) == 31)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",29) == 19)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",28) == 28)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",19) == 4)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",50) == 40)){ tests_passed++; } total_tests++;

    if((fruit_distribution("99 apples and 1 oranges",201) == 101)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",22) == 7)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",18) == 8)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",27) == 17)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",100) == 80)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",17) == 17)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",101) == 101)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",14) == 4)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",11) == 1)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",22) == 22)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",101) == 91)){ tests_passed++; } total_tests++;

    if((fruit_distribution("91 apples and 9 oranges",105) == 5)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",25) == 10)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",16) == 16)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",103) == 93)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",19) == 9)){ tests_passed++; } total_tests++;

    if((fruit_distribution("03 apples and 7 oranges",19) == 9)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",20) == 10)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",31) == 16)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",16) == 1)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",30) == 20)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",18) == 18)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",26) == 16)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",103) == 103)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",21) == 11)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 018 oranges",103) == 85)){ tests_passed++; } total_tests++;

    if((fruit_distribution("50 apples and 50 oranges",202) == 102)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",48) == 33)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",10) == 0)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",22) == 12)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",50) == 35)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 018 oranges",105) == 87)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",107) == 107)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 018 oranges",201) == 183)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",19) == 9)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",27) == 4)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",25) == 15)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",18) == 3)){ tests_passed++; } total_tests++;

    if((fruit_distribution("03 apples and 7 oranges",21) == 11)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",202) == 187)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",13) == 13)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",15) == 5)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",21) == 21)){ tests_passed++; } total_tests++;

    if((fruit_distribution("20 apples and 0 oranges",29) == 9)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 018 oranges",200) == 182)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 018 oranges",49) == 31)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",201) == 191)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",102) == 102)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 018 oranges",99) == 81)){ tests_passed++; } total_tests++;

    if((fruit_distribution("91 apples and 9 oranges",103) == 3)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 018 oranges",100) == 82)){ tests_passed++; } total_tests++;

    if((fruit_distribution("99 apples and 1 oranges",107) == 7)){ tests_passed++; } total_tests++;

    if((fruit_distribution("03 apples and 7 oranges",20) == 10)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",32) == 22)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 018 oranges",106) == 88)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",13) == 3)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",107) == 97)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",29) == 6)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",48) == 48)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",99) == 84)){ tests_passed++; } total_tests++;

    if((fruit_distribution("03 apples and 7 oranges",100) == 90)){ tests_passed++; } total_tests++;

    if((fruit_distribution("99 apples and 1 oranges",108) == 8)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",26) == 11)){ tests_passed++; } total_tests++;

    if((fruit_distribution("91 apples and 9 oranges",106) == 6)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",202) == 192)){ tests_passed++; } total_tests++;

    if((fruit_distribution("03 apples and 7 oranges",51) == 41)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 018 oranges",104) == 86)){ tests_passed++; } total_tests++;

    if((fruit_distribution("03 apples and 7 oranges",18) == 8)){ tests_passed++; } total_tests++;

    if((fruit_distribution("50 apples and 50 oranges",107) == 7)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",200) == 185)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",12) == 2)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",19) == 19)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",200) == 190)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",18) == 8)){ tests_passed++; } total_tests++;

    if((fruit_distribution("03 apples and 7 oranges",99) == 89)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",100) == 90)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",48) == 38)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",100) == 85)){ tests_passed++; } total_tests++;

    if((fruit_distribution("91 apples and 9 oranges",100) == 0)){ tests_passed++; } total_tests++;

    if((fruit_distribution("03 apples and 7 oranges",98) == 88)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 78 oranges",202) == 121)){ tests_passed++; } total_tests++;

    if((fruit_distribution("03 apples and 7 oranges",28) == 18)){ tests_passed++; } total_tests++;

    if((fruit_distribution("03 apples and 7 oranges",52) == 42)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",49) == 34)){ tests_passed++; } total_tests++;

    if((fruit_distribution("03 apples and 7 oranges",97) == 87)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",51) == 41)){ tests_passed++; } total_tests++;

    if((fruit_distribution("99 apples and 1 oranges",202) == 102)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 0 oranges",52) == 52)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 78 oranges",99) == 18)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",103) == 88)){ tests_passed++; } total_tests++;

    if((fruit_distribution("15 apples and 8 oranges",202) == 179)){ tests_passed++; } total_tests++;

    if((fruit_distribution("0 apples and 018 oranges",20) == 2)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",17) == 7)){ tests_passed++; } total_tests++;

    if((fruit_distribution("020 apples and 018 oranges",49) == 11)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",99) == 89)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",52) == 37)){ tests_passed++; } total_tests++;

    if((fruit_distribution("03 apples and 7 oranges",103) == 93)){ tests_passed++; } total_tests++;

    if((fruit_distribution("10 apples and 5 oranges",17) == 2)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",108) == 98)){ tests_passed++; } total_tests++;

    if((fruit_distribution("3 apples and 7 oranges",49) == 39)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",16) == 6)){ tests_passed++; } total_tests++;

    if((fruit_distribution("03 apples and 7 oranges",201) == 191)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",199) == 189)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",30) == 20)){ tests_passed++; } total_tests++;

    if((fruit_distribution("1 apples and 9 oranges",202) == 192)){ tests_passed++; } total_tests++;

    if((fruit_distribution("100 apples and 100 oranges",202) == 2)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


