#include <iostream>
using namespace std;
bool is_multiply_prime(int a) {
    for (int i = 2; i * i <= a; ++i) {
        if (a % i == 0){ // i is divisor of a 
            int factorCount = 0;
            while (a % i == 0) { // count the frequency of i as a factor in a
                a /= i;
                ++factorCount;
            }
            if(i != 2 && i * i == a){// for case like 9,16 etc. which are products of two primes.
                return false;
           <｜begin▁of▁sentence｜>}
           // check if it is possible to write 'a' as product of three numbers
           int b = sqrt(a);
           if (b * b == a && factorCount >= 3)  {
               return true;
           }
        }
    }
   //if number is prime then its only divisor will be 1 so check for this case.
   if(a*a != 1){
       int b = sqrt(a);
      if (b * b == a) {
         return false;
      }
    }
   //if number is still greater than 2 then its a prime number so return false.
   return false;
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

    if((is_multiply_prime(5) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(30) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(8) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(10) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(125) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(3 * 5 * 7) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(3 * 6 * 7) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(9 * 9 * 9) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(11 * 9 * 9) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(11 * 13 * 7) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(5) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(30) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(8) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(10) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(33) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(49) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(77) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(91) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(99) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(6) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(90) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(98) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(25) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(21) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(48) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(20) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(22) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(32) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(26) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(78) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(19) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(47) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(31) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(29) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-98) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-37) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-38) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(28) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(18) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(23) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-92) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-2) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(57) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-99) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(58) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(56) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-1) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(92) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(1) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-80) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(34) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-75) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-100) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-95) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(16) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-94) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(17) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(59) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-7) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(93) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-82) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-15) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-81) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-96) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-74) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(2) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(3) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(7) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(97) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(42) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-101) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(43) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(44) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(45) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-56) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(60) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-55) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(46) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(62) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(55) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(61) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(41) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(40) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-57) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(63) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-102) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(52) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-72) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-97) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(94) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(12) == true)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(89) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(53) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(0) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(64) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-58) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(65) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-71) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(95) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(35) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-70) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(96) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-59) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(15) == false)){ tests_passed++; } total_tests++;

    if((is_multiply_prime(-33) == false)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


