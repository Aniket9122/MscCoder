#include<iostream>
#include<vector>
using namespace std;

// Function to determine if a digit is even or odd
bool IsEven(int num) { return num % 2 == 0; }

vector<int> even_odd_count(int num){
    vector<int> counts = {0, 0}; // initialize vector with two zeros
    int digit;
    
    while (num != 0) {
        digit = abs(num % 10);  
        if (IsEven(digit))
            counts[0]++; // increase count for even digits
        else
            counts[1]++; // increase count for odd digits
        
        num /= 10; 
    }
    
    return counts;
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

    if((issame(even_odd_count(7) , {0, 1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-78) , {1, 1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(3452) , {2, 2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(346211) , {3, 3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-345821) , {3, 3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2) , {1, 0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-45347) , {2, 3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(0) , {1, 0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(7) , {0,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-78) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(3452) , {2,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(346211) , {3,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-345821) , {3,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2) , {1,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-45347) , {2,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(0) , {1,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(2368) , {3,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-111) , {0,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2468031) , {5,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(1010101) , {3,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-123456789) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-590) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(125890) , {3,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(444444444) , {9,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-1111111) , {0,7}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-222222222) , {9,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-591) , {0,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(444444443) , {8,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(444444445) , {8,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-222222221) , {8,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-1111110) , {1,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-592) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-222222224) , {9,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-222222223) , {8,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-7) , {0,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(2369) , {2,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2468032) , {6,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-112) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(125889) , {3,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-589) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-588) , {2,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-123456790) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-593) , {0,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2468033) , {5,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-222222225) , {8,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-222222226) , {9,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(2367) , {2,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-110) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-113) , {0,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(444444442) , {9,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(1010100) , {4,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-114) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-67) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-586) , {2,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-1111112) , {1,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(1010099) , {3,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(1010098) , {4,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-222222227) , {8,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2468034) , {6,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-123456791) , {3,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(2366) , {3,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-9) , {0,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-123456792) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-587) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-1111113) , {0,7}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2468035) , {5,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(444444446) , {9,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(11) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-222222220) , {9,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(444444447) , {8,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-109) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-6) , {1,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-585) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(125891) , {2,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-93) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-10) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(12) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(125888) , {4,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-115) , {0,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(125892) , {3,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(13) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-48) , {2,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(37) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-97) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-94) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-92) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-98) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-11) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-1) , {0,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(36) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(2370) , {2,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(14) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-1111109) , {1,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(15) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-222222228) , {9,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-123456793) , {3,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(34) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-16) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(35) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(10) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-68) , {2,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(444444441) , {8,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-1111114) , {1,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-69) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-222222229) , {8,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(444444440) , {9,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-15) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(444444439) , {7,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(33) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-5) , {0,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2468036) , {6,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-1111115) , {0,7}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-53) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-923456789) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(246813579) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(11111) , {0,5}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2222) , {4,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-923456790) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(11112) , {1,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-923456792) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2221) , {3,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2219) , {2,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-70) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-71) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(11110) , {1,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2223) , {3,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-18) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2220) , {4,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-923456788) , {5,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(3) , {0,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-17) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(246813578) , {5,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-85) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-923456793) , {3,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(11109) , {1,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-8) , {1,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-59) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-19) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-66) , {2,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-923456794) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-923456787) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-58) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-923456785) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2218) , {3,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-80) , {2,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(46) , {2,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-60) , {2,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-81) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(4) , {1,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(246813577) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-12) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-923456786) , {5,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(11107) , {1,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(19) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(5) , {0,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-61) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-14) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(18) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(11106) , {2,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-13) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(20) , {2,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-56) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-923456795) , {3,6}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(11108) , {2,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(17) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(2) , {1,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-923456784) , {5,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-65) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(1) , {0,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(89) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-64) , {2,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-82) , {2,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-63) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(64) , {2,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(11105) , {1,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(90) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(99) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(65) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(11104) , {2,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(11113) , {0,5}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-83) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(6) , {1,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-62) , {2,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(53) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-84) , {2,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2224) , {4,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(66) , {2,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(11103) , {1,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-86) , {2,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(67) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-35) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2217) , {2,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2216) , {3,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-923456783) , {4,5}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-3) , {0,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-57) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-33) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(13579) , {0,5}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2468) , {4,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(2147483647) , {6,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(246813580) , {6,3}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(246813581) , {5,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(16) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(78) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(77) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(76) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(75) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-2225) , {3,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(58) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(246813576) , {5,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(39) , {0,2}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(246813583) , {5,4}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(38) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(48) , {2,0}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(-21) , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(even_odd_count(40) , {2,0}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


