#include <vector>
using namespace std;

// Function to check if number is prime or not
bool isPrime(int n) {
    if (n <= 1) return false;
    
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) 
            return false;
    }
        
    return true;
}

// Factorize function that returns vector of prime factors of given integer in the order from smallest to largest.
vector<int> factorize(int n) {
    vector<int> factors;
    
    for (int i = 2; i <= n;) {
        if (!(n % i)) {  // If number is divisible by 'i'
            n /= i;       // Divide the number by 'i'.
            factors.push_back(i);   // Push 'i' into vector.
        } else {    // If not, increment 'i' until it becomes a prime factor of 'n'.
            if (isPrime(i))  i++;    
        }
        
        if (isPrime(n) && n != 1){   // Checking if remaining number is prime.
          factors.push_back(n);       // If yes, push it into vector.
           n = 1;                     // And set 'n' equal to 1 for exit from loop.
        }        
    }
    
    return factors;   // Return the factors of number.
}

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
bool issame(vector<int> a,vector<int>b){
    if (a.size()!=b.size()) return false;
    for (int i=0;i<a.size();i++)
    {
        if (a[i]!=b[i]) return false;
    }
    return true;
}
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

    if((issame(factorize(2) , {2}))){ tests_passed++; } total_tests++;

    if((issame(factorize(4) , {2, 2}))){ tests_passed++; } total_tests++;

    if((issame(factorize(8) , {2, 2, 2}))){ tests_passed++; } total_tests++;

     if((issame(factorize(3 * 19) , {3, 19}))){ tests_passed++; } total_tests++;

    if((issame(factorize(3 * 19 * 3 * 19) , {3, 3, 19, 19}))){ tests_passed++; } total_tests++;
 
    if((issame(factorize(3 * 19 * 3 * 19 * 3 * 19) , {3, 3, 3, 19, 19, 19}))){ tests_passed++; } total_tests++;
 
    if((issame(factorize(3 * 19 * 19 * 19) , {3, 19, 19, 19}))){ tests_passed++; } total_tests++;
 
    if((issame(factorize(3 * 2 * 3) , {2, 3, 3}))){ tests_passed++; } total_tests++;

    if((issame(factorize(2) , {2}))){ tests_passed++; } total_tests++;

    if((issame(factorize(4) , {2,2}))){ tests_passed++; } total_tests++;

    if((issame(factorize(8) , {2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(factorize(57) , {3,19}))){ tests_passed++; } total_tests++;

    if((issame(factorize(3249) , {3,3,19,19}))){ tests_passed++; } total_tests++;

    if((issame(factorize(185193) , {3,3,3,19,19,19}))){ tests_passed++; } total_tests++;

    if((issame(factorize(20577) , {3,19,19,19}))){ tests_passed++; } total_tests++;

    if((issame(factorize(18) , {2,3,3}))){ tests_passed++; } total_tests++;

    if((issame(factorize(10) , {2,5}))){ tests_passed++; } total_tests++;

    if((issame(factorize(15) , {3,5}))){ tests_passed++; } total_tests++;

    if((issame(factorize(28) , {2,2,7}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1024) , {2,2,2,2,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(factorize(131) , {131}))){ tests_passed++; } total_tests++;

    if((issame(factorize(33) , {3,11}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1000) , {2,2,2,5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(factorize(100) , {2,2,5,5}))){ tests_passed++; } total_tests++;

    if((issame(factorize(123456789) , {3,3,3607,3803}))){ tests_passed++; } total_tests++;

    if((issame(factorize(987654321) , {3,3,17,17,379721}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1025) , {5,5,41}))){ tests_passed++; } total_tests++;

    if((issame(factorize(11) , {11}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1026) , {2,3,3,3,19}))){ tests_passed++; } total_tests++;

    if((issame(factorize(29) , {29}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1027) , {13,79}))){ tests_passed++; } total_tests++;

    if((issame(factorize(14) , {2,7}))){ tests_passed++; } total_tests++;

    if((issame(factorize(34) , {2,17}))){ tests_passed++; } total_tests++;

    if((issame(factorize(13) , {13}))){ tests_passed++; } total_tests++;

    if((issame(factorize(99) , {3,3,11}))){ tests_passed++; } total_tests++;

    if((issame(factorize(132) , {2,2,3,11}))){ tests_passed++; } total_tests++;

    if((issame(factorize(123456790) , {2,5,37,333667}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1023) , {3,11,31}))){ tests_passed++; } total_tests++;

    if((issame(factorize(123456788) , {2,2,7,13,17,71,281}))){ tests_passed++; } total_tests++;

    if((issame(factorize(32) , {2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(factorize(31) , {31}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1022) , {2,7,73}))){ tests_passed++; } total_tests++;

    if((issame(factorize(987654320) , {2,2,2,2,5,37,333667}))){ tests_passed++; } total_tests++;

    if((issame(factorize(123456791) , {123456791}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1028) , {2,2,257}))){ tests_passed++; } total_tests++;

    if((issame(factorize(123456787) , {31,31,128467}))){ tests_passed++; } total_tests++;

    if((issame(factorize(123456792) , {2,2,2,3,59,87187}))){ tests_passed++; } total_tests++;

    if((issame(factorize(27) , {3,3,3}))){ tests_passed++; } total_tests++;

    if((issame(factorize(39) , {3,13}))){ tests_passed++; } total_tests++;

    if((issame(factorize(12) , {2,2,3}))){ tests_passed++; } total_tests++;

    if((issame(factorize(30) , {2,3,5}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1207943) , {11,11,67,149}))){ tests_passed++; } total_tests++;

    if((issame(factorize(112234369) , {13,8633413}))){ tests_passed++; } total_tests++;

    if((issame(factorize(999983) , {999983}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1003001001) , {3,31,10784957}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1073741789) , {1073741789}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1003001000) , {2,2,2,5,5,5,1003001}))){ tests_passed++; } total_tests++;

    if((issame(factorize(112234370) , {2,5,11223437}))){ tests_passed++; } total_tests++;

    if((issame(factorize(56) , {2,2,2,7}))){ tests_passed++; } total_tests++;

    if((issame(factorize(2147483646) , {2,3,3,7,11,31,151,331}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1003000999) , {7,11,13,41,24439}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1207942) , {2,41,14731}))){ tests_passed++; } total_tests++;

    if((issame(factorize(999984) , {2,2,2,2,3,83,251}))){ tests_passed++; } total_tests++;

    if((issame(factorize(79) , {79}))){ tests_passed++; } total_tests++;

    if((issame(factorize(80) , {2,2,2,2,5}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1003001002) , {2,181,631,4391}))){ tests_passed++; } total_tests++;

    if((issame(factorize(78) , {2,3,13}))){ tests_passed++; } total_tests++;

    if((issame(factorize(77) , {7,11}))){ tests_passed++; } total_tests++;

    if((issame(factorize(112234368) , {2,2,2,2,2,2,2,3,19,15383}))){ tests_passed++; } total_tests++;

    if((issame(factorize(83) , {83}))){ tests_passed++; } total_tests++;

    if((issame(factorize(76) , {2,2,19}))){ tests_passed++; } total_tests++;

    if((issame(factorize(75) , {3,5,5}))){ tests_passed++; } total_tests++;

    if((issame(factorize(112234367) , {7,16033481}))){ tests_passed++; } total_tests++;

    if((issame(factorize(52) , {2,2,13}))){ tests_passed++; } total_tests++;

    if((issame(factorize(112234371) , {3,37411457}))){ tests_passed++; } total_tests++;

    if((issame(factorize(2147483645) , {5,19,22605091}))){ tests_passed++; } total_tests++;

    if((issame(factorize(53) , {53}))){ tests_passed++; } total_tests++;

    if((issame(factorize(112234372) , {2,2,28058593}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1003001004) , {2,2,3,3,27861139}))){ tests_passed++; } total_tests++;

    if((issame(factorize(101) , {101}))){ tests_passed++; } total_tests++;

    if((issame(factorize(6) , {2,3}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1003001005) , {5,200600201}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1073741788) , {2,2,7,2341,16381}))){ tests_passed++; } total_tests++;

    if((issame(factorize(67) , {67}))){ tests_passed++; } total_tests++;

    if((issame(factorize(123456786) , {2,3,20576131}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1003001003) , {17,59,101,9901}))){ tests_passed++; } total_tests++;

    if((issame(factorize(47) , {47}))){ tests_passed++; } total_tests++;

    if((issame(factorize(58) , {2,29}))){ tests_passed++; } total_tests++;

    if((issame(factorize(26) , {2,13}))){ tests_passed++; } total_tests++;

    if((issame(factorize(51) , {3,17}))){ tests_passed++; } total_tests++;

    if((issame(factorize(55) , {5,11}))){ tests_passed++; } total_tests++;

    if((issame(factorize(38) , {2,19}))){ tests_passed++; } total_tests++;

    if((issame(factorize(37) , {37}))){ tests_passed++; } total_tests++;

    if((issame(factorize(17) , {17}))){ tests_passed++; } total_tests++;

    if((issame(factorize(125) , {5,5,5}))){ tests_passed++; } total_tests++;

    if((issame(factorize(7919) , {7919}))){ tests_passed++; } total_tests++;

    if((issame(factorize(987654322) , {2,701,704461}))){ tests_passed++; } total_tests++;

    if((issame(factorize(987654323) , {987654323}))){ tests_passed++; } total_tests++;

    if((issame(factorize(123456785) , {5,24691357}))){ tests_passed++; } total_tests++;

    if((issame(factorize(112234366) , {2,56117183}))){ tests_passed++; } total_tests++;

    if((issame(factorize(999982) , {2,79,6329}))){ tests_passed++; } total_tests++;

    if((issame(factorize(112234365) , {3,3,5,23,108439}))){ tests_passed++; } total_tests++;

    if((issame(factorize(2147483644) , {2,2,233,1103,2089}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1207944) , {2,2,2,3,3,19,883}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1073741790) , {2,3,5,11,47,107,647}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1073741791) , {29,97,381707}))){ tests_passed++; } total_tests++;

    if((issame(factorize(2147483643) , {3,715827881}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1207945) , {5,241589}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1207946) , {2,31,19483}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1003000998) , {2,3,167,1000999}))){ tests_passed++; } total_tests++;

    if((issame(factorize(112234364) , {2,2,11,643,3967}))){ tests_passed++; } total_tests++;

    if((issame(factorize(987654324) , {2,2,3,443,185789}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1207947) , {3,13,47,659}))){ tests_passed++; } total_tests++;

    if((issame(factorize(999980) , {2,2,5,49999}))){ tests_passed++; } total_tests++;

    if((issame(factorize(999979) , {999979}))){ tests_passed++; } total_tests++;

    if((issame(factorize(999981) , {3,3,111109}))){ tests_passed++; } total_tests++;

    if((issame(factorize(987654319) , {987654319}))){ tests_passed++; } total_tests++;

    if((issame(factorize(999985) , {5,7,28571}))){ tests_passed++; } total_tests++;

    if((issame(factorize(2147483642) , {2,23,46684427}))){ tests_passed++; } total_tests++;

    if((issame(factorize(2147483641) , {2699,795659}))){ tests_passed++; } total_tests++;

    if((issame(factorize(46) , {2,23}))){ tests_passed++; } total_tests++;

    if((issame(factorize(999987) , {3,257,1297}))){ tests_passed++; } total_tests++;

    if((issame(factorize(987654325) , {5,5,7,337,16747}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1003000997) , {23,317,137567}))){ tests_passed++; } total_tests++;

    if((issame(factorize(987654326) , {2,131,3769673}))){ tests_passed++; } total_tests++;

    if((issame(factorize(1207948) , {2,2,7,7,6163}))){ tests_passed++; } total_tests++;

    if((issame(factorize(999986) , {2,13,38461}))){ tests_passed++; } total_tests++;

    if((issame(factorize(987654327) , {3,11,31,163,5923}))){ tests_passed++; } total_tests++;

    if((issame(factorize(50) , {2,5,5}))){ tests_passed++; } total_tests++;

    if((issame(factorize(999978) , {2,3,7,29,821}))){ tests_passed++; } total_tests++;

    if((issame(factorize(999988) , {2,2,11,22727}))){ tests_passed++; } total_tests++;

    if((issame(factorize(999977) , {11,90907}))){ tests_passed++; } total_tests++;

    if((issame(factorize(999989) , {19,52631}))){ tests_passed++; } total_tests++;

    if((issame(factorize(44) , {2,2,11}))){ tests_passed++; } total_tests++;

    if((issame(factorize(43) , {43}))){ tests_passed++; } total_tests++;

    if((issame(factorize(42) , {2,3,7}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


