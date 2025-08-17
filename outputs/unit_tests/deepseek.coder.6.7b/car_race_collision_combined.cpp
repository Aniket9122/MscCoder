#include<iostream>
using namespace std;

int car_race_collision(int n){
    // calculate square of number of cars (n^2) 
    return n*n;
}

// unit tests for the function 'car_race_collision'
void test(){
   cout<< "Testing...\n";
   assert(car_race_collision(2) == 4);
   assert(car_race_collision(3) == 9);
   assert(car_race_collision(4) == 16);
   
   cout<< "All test cases pass\n";
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

    if((car_race_collision(2) == 4)){ tests_passed++; } total_tests++;

    if((car_race_collision(3) == 9)){ tests_passed++; } total_tests++;

    if((car_race_collision(4) == 16)){ tests_passed++; } total_tests++;

    if((car_race_collision(8) == 64)){ tests_passed++; } total_tests++;

    if((car_race_collision(10) == 100)){ tests_passed++; } total_tests++;

    if((car_race_collision(2) == 4)){ tests_passed++; } total_tests++;

    if((car_race_collision(3) == 9)){ tests_passed++; } total_tests++;

    if((car_race_collision(4) == 16)){ tests_passed++; } total_tests++;

    if((car_race_collision(8) == 64)){ tests_passed++; } total_tests++;

    if((car_race_collision(10) == 100)){ tests_passed++; } total_tests++;

    if((car_race_collision(5) == 25)){ tests_passed++; } total_tests++;

    if((car_race_collision(6) == 36)){ tests_passed++; } total_tests++;

    if((car_race_collision(12) == 144)){ tests_passed++; } total_tests++;

    if((car_race_collision(15) == 225)){ tests_passed++; } total_tests++;

    if((car_race_collision(20) == 400)){ tests_passed++; } total_tests++;

    if((car_race_collision(1) == 1)){ tests_passed++; } total_tests++;

    if((car_race_collision(25) == 625)){ tests_passed++; } total_tests++;

    if((car_race_collision(7) == 49)){ tests_passed++; } total_tests++;

    if((car_race_collision(100) == 10000)){ tests_passed++; } total_tests++;

    if((car_race_collision(500) == 250000)){ tests_passed++; } total_tests++;

    if((car_race_collision(24) == 576)){ tests_passed++; } total_tests++;

    if((car_race_collision(101) == 10201)){ tests_passed++; } total_tests++;

    if((car_race_collision(14) == 196)){ tests_passed++; } total_tests++;

    if((car_race_collision(99) == 9801)){ tests_passed++; } total_tests++;

    if((car_race_collision(23) == 529)){ tests_passed++; } total_tests++;

    if((car_race_collision(19) == 361)){ tests_passed++; } total_tests++;

    if((car_race_collision(47) == 2209)){ tests_passed++; } total_tests++;

    if((car_race_collision(48) == 2304)){ tests_passed++; } total_tests++;

    if((car_race_collision(46) == 2116)){ tests_passed++; } total_tests++;

    if((car_race_collision(26) == 676)){ tests_passed++; } total_tests++;

    if((car_race_collision(499) == 249001)){ tests_passed++; } total_tests++;

    if((car_race_collision(27) == 729)){ tests_passed++; } total_tests++;

    if((car_race_collision(98) == 9604)){ tests_passed++; } total_tests++;

    if((car_race_collision(28) == 784)){ tests_passed++; } total_tests++;

    if((car_race_collision(18) == 324)){ tests_passed++; } total_tests++;

    if((car_race_collision(45) == 2025)){ tests_passed++; } total_tests++;

    if((car_race_collision(498) == 248004)){ tests_passed++; } total_tests++;

    if((car_race_collision(13) == 169)){ tests_passed++; } total_tests++;

    if((car_race_collision(102) == 10404)){ tests_passed++; } total_tests++;

    if((car_race_collision(11) == 121)){ tests_passed++; } total_tests++;

    if((car_race_collision(17) == 289)){ tests_passed++; } total_tests++;

    if((car_race_collision(501) == 251001)){ tests_passed++; } total_tests++;

    if((car_race_collision(68) == 4624)){ tests_passed++; } total_tests++;

    if((car_race_collision(21) == 441)){ tests_passed++; } total_tests++;

    if((car_race_collision(30) == 900)){ tests_passed++; } total_tests++;

    if((car_race_collision(10000) == 100000000)){ tests_passed++; } total_tests++;

    if((car_race_collision(1000) == 1000000)){ tests_passed++; } total_tests++;

    if((car_race_collision(1002) == 1004004)){ tests_passed++; } total_tests++;

    if((car_race_collision(97) == 9409)){ tests_passed++; } total_tests++;

    if((car_race_collision(9999) == 99980001)){ tests_passed++; } total_tests++;

    if((car_race_collision(22) == 484)){ tests_passed++; } total_tests++;

    if((car_race_collision(29) == 841)){ tests_passed++; } total_tests++;

    if((car_race_collision(10001) == 100020001)){ tests_passed++; } total_tests++;

    if((car_race_collision(16) == 256)){ tests_passed++; } total_tests++;

    if((car_race_collision(31) == 961)){ tests_passed++; } total_tests++;

    if((car_race_collision(9998) == 99960004)){ tests_passed++; } total_tests++;

    if((car_race_collision(89) == 7921)){ tests_passed++; } total_tests++;

    if((car_race_collision(44) == 1936)){ tests_passed++; } total_tests++;

    if((car_race_collision(9997) == 99940009)){ tests_passed++; } total_tests++;

    if((car_race_collision(1003) == 1006009)){ tests_passed++; } total_tests++;

    if((car_race_collision(83) == 6889)){ tests_passed++; } total_tests++;

    if((car_race_collision(43) == 1849)){ tests_passed++; } total_tests++;

    if((car_race_collision(84) == 7056)){ tests_passed++; } total_tests++;

    if((car_race_collision(59) == 3481)){ tests_passed++; } total_tests++;

    if((car_race_collision(58) == 3364)){ tests_passed++; } total_tests++;

    if((car_race_collision(999) == 998001)){ tests_passed++; } total_tests++;

    if((car_race_collision(998) == 996004)){ tests_passed++; } total_tests++;

    if((car_race_collision(57) == 3249)){ tests_passed++; } total_tests++;

    if((car_race_collision(997) == 994009)){ tests_passed++; } total_tests++;

    if((car_race_collision(996) == 992016)){ tests_passed++; } total_tests++;

    if((car_race_collision(56) == 3136)){ tests_passed++; } total_tests++;

    if((car_race_collision(9) == 81)){ tests_passed++; } total_tests++;

    if((car_race_collision(55) == 3025)){ tests_passed++; } total_tests++;

    if((car_race_collision(92) == 8464)){ tests_passed++; } total_tests++;

    if((car_race_collision(50) == 2500)){ tests_passed++; } total_tests++;

    if((car_race_collision(42) == 1764)){ tests_passed++; } total_tests++;

    if((car_race_collision(54) == 2916)){ tests_passed++; } total_tests++;

    if((car_race_collision(53) == 2809)){ tests_passed++; } total_tests++;

    if((car_race_collision(87) == 7569)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


