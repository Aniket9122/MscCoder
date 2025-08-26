#include<bits/stdc++.h>
using namespace std;

string circular_shift(int x, int shift) {
    string s = to_string(x);
    
    if (shift >= s.size()) { // If rotation is greater than size of number return reverse 
        reverse(s.begin(), s.end());
        return s;
    } else{                   
       rotate(s.begin(), s.begin()+s.size()-shift, s.end());
       return s;
   }
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

    if((circular_shift(100, 2) == "001")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 2) == "12")){ tests_passed++; } total_tests++;

    if((circular_shift(97, 8) == "79")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 1) == "21")){ tests_passed++; } total_tests++;

    if((circular_shift(11, 101) == "11")){ tests_passed++; } total_tests++;

    if((circular_shift(100, 2) == "001")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 2) == "12")){ tests_passed++; } total_tests++;

    if((circular_shift(97, 8) == "79")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 1) == "21")){ tests_passed++; } total_tests++;

    if((circular_shift(11, 101) == "11")){ tests_passed++; } total_tests++;

    if((circular_shift(16, 3) == "61")){ tests_passed++; } total_tests++;

    if((circular_shift(1234, 6) == "4321")){ tests_passed++; } total_tests++;

    if((circular_shift(341209, 4) == "120934")){ tests_passed++; } total_tests++;

    if((circular_shift(789456123, 10) == "321654987")){ tests_passed++; } total_tests++;

    if((circular_shift(500, 4) == "005")){ tests_passed++; } total_tests++;

    if((circular_shift(345, 1) == "534")){ tests_passed++; } total_tests++;

    if((circular_shift(86314, 3) == "31486")){ tests_passed++; } total_tests++;

    if((circular_shift(22, 4) == "22")){ tests_passed++; } total_tests++;

    if((circular_shift(987654321, 9) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(777, 10) == "777")){ tests_passed++; } total_tests++;

    if((circular_shift(23, 789456124) == "32")){ tests_passed++; } total_tests++;

    if((circular_shift(341209, 3) == "209341")){ tests_passed++; } total_tests++;

    if((circular_shift(341209, 341209) == "902143")){ tests_passed++; } total_tests++;

    if((circular_shift(789456123, 23) == "321654987")){ tests_passed++; } total_tests++;

    if((circular_shift(789456122, 789456123) == "221654987")){ tests_passed++; } total_tests++;

    if((circular_shift(500, 3) == "500")){ tests_passed++; } total_tests++;

    if((circular_shift(23, 16) == "32")){ tests_passed++; } total_tests++;

    if((circular_shift(789456123, 777) == "321654987")){ tests_passed++; } total_tests++;

    if((circular_shift(15, 2) == "15")){ tests_passed++; } total_tests++;

    if((circular_shift(789456122, 789456122) == "221654987")){ tests_passed++; } total_tests++;

    if((circular_shift(23, 22) == "32")){ tests_passed++; } total_tests++;

    if((circular_shift(789456124, 789456124) == "421654987")){ tests_passed++; } total_tests++;

    if((circular_shift(2, 3) == "2")){ tests_passed++; } total_tests++;

    if((circular_shift(10, 6) == "01")){ tests_passed++; } total_tests++;

    if((circular_shift(2, 345) == "2")){ tests_passed++; } total_tests++;

    if((circular_shift(789456123, 789456123) == "321654987")){ tests_passed++; } total_tests++;

    if((circular_shift(15, 6) == "51")){ tests_passed++; } total_tests++;

    if((circular_shift(23, 10) == "32")){ tests_passed++; } total_tests++;

    if((circular_shift(22, 777) == "22")){ tests_passed++; } total_tests++;

    if((circular_shift(789456124, 3) == "124789456")){ tests_passed++; } total_tests++;

    if((circular_shift(3, 3) == "3")){ tests_passed++; } total_tests++;

    if((circular_shift(789456123, 11) == "321654987")){ tests_passed++; } total_tests++;

    if((circular_shift(501, 3) == "501")){ tests_passed++; } total_tests++;

    if((circular_shift(15, 23) == "51")){ tests_passed++; } total_tests++;

    if((circular_shift(9, 777) == "9")){ tests_passed++; } total_tests++;

    if((circular_shift(1, 777) == "1")){ tests_passed++; } total_tests++;

    if((circular_shift(1235, 23) == "5321")){ tests_passed++; } total_tests++;

    if((circular_shift(15, 9) == "51")){ tests_passed++; } total_tests++;

    if((circular_shift(341209, 5) == "412093")){ tests_passed++; } total_tests++;

    if((circular_shift(5, 789456123) == "5")){ tests_passed++; } total_tests++;

    if((circular_shift(499, 3) == "499")){ tests_passed++; } total_tests++;

    if((circular_shift(1, 776) == "1")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 4) == "21")){ tests_passed++; } total_tests++;

    if((circular_shift(341209, 789456124) == "902143")){ tests_passed++; } total_tests++;

    if((circular_shift(776, 23) == "677")){ tests_passed++; } total_tests++;

    if((circular_shift(10, 1) == "01")){ tests_passed++; } total_tests++;

    if((circular_shift(2, 777) == "2")){ tests_passed++; } total_tests++;

    if((circular_shift(3, 2) == "3")){ tests_passed++; } total_tests++;

    if((circular_shift(14, 14) == "41")){ tests_passed++; } total_tests++;

    if((circular_shift(341210, 5) == "412103")){ tests_passed++; } total_tests++;

    if((circular_shift(22, 8) == "22")){ tests_passed++; } total_tests++;

    if((circular_shift(341208, 4) == "120834")){ tests_passed++; } total_tests++;

    if((circular_shift(777, 777) == "777")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 12) == "21")){ tests_passed++; } total_tests++;

    if((circular_shift(4, 3) == "4")){ tests_passed++; } total_tests++;

    if((circular_shift(987654321, 3) == "321987654")){ tests_passed++; } total_tests++;

    if((circular_shift(15, 15) == "51")){ tests_passed++; } total_tests++;

    if((circular_shift(500, 500) == "005")){ tests_passed++; } total_tests++;

    if((circular_shift(987654321, 987654321) == "123456789")){ tests_passed++; } total_tests++;

    if((circular_shift(501, 4) == "105")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 10) == "21")){ tests_passed++; } total_tests++;

    if((circular_shift(5, 776) == "5")){ tests_passed++; } total_tests++;

    if((circular_shift(2, 22) == "2")){ tests_passed++; } total_tests++;

    if((circular_shift(341208, 345) == "802143")){ tests_passed++; } total_tests++;

    if((circular_shift(15, 1) == "51")){ tests_passed++; } total_tests++;

    if((circular_shift(3, 341209) == "3")){ tests_passed++; } total_tests++;

    if((circular_shift(789456124, 341209) == "421654987")){ tests_passed++; } total_tests++;

    if((circular_shift(22, 23) == "22")){ tests_passed++; } total_tests++;

    if((circular_shift(14, 10) == "41")){ tests_passed++; } total_tests++;

    if((circular_shift(5, 341209) == "5")){ tests_passed++; } total_tests++;

    if((circular_shift(1234, 10) == "4321")){ tests_passed++; } total_tests++;

    if((circular_shift(22, 5) == "22")){ tests_passed++; } total_tests++;

    if((circular_shift(6, 776) == "6")){ tests_passed++; } total_tests++;

    if((circular_shift(8, 8) == "8")){ tests_passed++; } total_tests++;

    if((circular_shift(11, 10) == "11")){ tests_passed++; } total_tests++;

    if((circular_shift(1234, 1235) == "4321")){ tests_passed++; } total_tests++;

    if((circular_shift(341208, 10) == "802143")){ tests_passed++; } total_tests++;

    if((circular_shift(789456124, 23) == "421654987")){ tests_passed++; } total_tests++;

    if((circular_shift(3, 9) == "3")){ tests_passed++; } total_tests++;

    if((circular_shift(5, 23) == "5")){ tests_passed++; } total_tests++;

    if((circular_shift(5, 4) == "5")){ tests_passed++; } total_tests++;

    if((circular_shift(789456122, 3) == "122789456")){ tests_passed++; } total_tests++;

    if((circular_shift(14, 15) == "41")){ tests_passed++; } total_tests++;

    if((circular_shift(9, 8) == "9")){ tests_passed++; } total_tests++;

    if((circular_shift(777, 12) == "777")){ tests_passed++; } total_tests++;

    if((circular_shift(501, 777) == "105")){ tests_passed++; } total_tests++;

    if((circular_shift(499, 499) == "994")){ tests_passed++; } total_tests++;

    if((circular_shift(3, 6) == "3")){ tests_passed++; } total_tests++;

    if((circular_shift(2147483647, 11) == "7463847412")){ tests_passed++; } total_tests++;

    if((circular_shift(55672, 10) == "27655")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 100) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567890, 1000) == "0987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(0, 1000) == "0")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 1234567890) == "1987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 123456789) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1000, 1000) == "0001")){ tests_passed++; } total_tests++;

    if((circular_shift(100, 55671) == "001")){ tests_passed++; } total_tests++;

    if((circular_shift(158, 25) == "851")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 123456790) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1000, 123456788) == "0001")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 1000) == "1987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(2147483646, 11) == "6463847412")){ tests_passed++; } total_tests++;

    if((circular_shift(55672, 1000) == "27655")){ tests_passed++; } total_tests++;

    if((circular_shift(99, 1000) == "99")){ tests_passed++; } total_tests++;

    if((circular_shift(99, 99) == "99")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 99) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1000, 98) == "0001")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 1234567891) == "1987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(2147483647, 1001) == "7463847412")){ tests_passed++; } total_tests++;

    if((circular_shift(55672, 26) == "27655")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567890, 123456789) == "0987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(123456788, 123456789) == "887654321")){ tests_passed++; } total_tests++;

    if((circular_shift(27, 11) == "72")){ tests_passed++; } total_tests++;

    if((circular_shift(999, 1000) == "999")){ tests_passed++; } total_tests++;

    if((circular_shift(25, 25) == "52")){ tests_passed++; } total_tests++;

    if((circular_shift(55672, 25) == "27655")){ tests_passed++; } total_tests++;

    if((circular_shift(199, 200) == "991")){ tests_passed++; } total_tests++;

    if((circular_shift(157, 25) == "751")){ tests_passed++; } total_tests++;

    if((circular_shift(159, 158) == "951")){ tests_passed++; } total_tests++;

    if((circular_shift(100, 100) == "001")){ tests_passed++; } total_tests++;

    if((circular_shift(11, 12) == "11")){ tests_passed++; } total_tests++;

    if((circular_shift(55674, 24) == "47655")){ tests_passed++; } total_tests++;

    if((circular_shift(26, 26) == "62")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 1000) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(158, 158) == "851")){ tests_passed++; } total_tests++;

    if((circular_shift(98, 99) == "89")){ tests_passed++; } total_tests++;

    if((circular_shift(98, 25) == "89")){ tests_passed++; } total_tests++;

    if((circular_shift(1000, 28) == "0001")){ tests_passed++; } total_tests++;

    if((circular_shift(55675, 24) == "57655")){ tests_passed++; } total_tests++;

    if((circular_shift(28, 55671) == "82")){ tests_passed++; } total_tests++;

    if((circular_shift(26, 11) == "62")){ tests_passed++; } total_tests++;

    if((circular_shift(27, 2147483646) == "72")){ tests_passed++; } total_tests++;

    if((circular_shift(55672, 1234567890) == "27655")){ tests_passed++; } total_tests++;

    if((circular_shift(24, 25) == "42")){ tests_passed++; } total_tests++;

    if((circular_shift(55671, 10) == "17655")){ tests_passed++; } total_tests++;

    if((circular_shift(998, 123456789) == "899")){ tests_passed++; } total_tests++;

    if((circular_shift(25, 26) == "52")){ tests_passed++; } total_tests++;

    if((circular_shift(123456790, 123456790) == "097654321")){ tests_passed++; } total_tests++;

    if((circular_shift(15, 99) == "51")){ tests_passed++; } total_tests++;

    if((circular_shift(159, 123456790) == "951")){ tests_passed++; } total_tests++;

    if((circular_shift(158, 1000) == "851")){ tests_passed++; } total_tests++;

    if((circular_shift(27, 27) == "72")){ tests_passed++; } total_tests++;

    if((circular_shift(2147483646, 1001) == "6463847412")){ tests_passed++; } total_tests++;

    if((circular_shift(55675, 2147483646) == "57655")){ tests_passed++; } total_tests++;

    if((circular_shift(13, 11) == "31")){ tests_passed++; } total_tests++;

    if((circular_shift(28, 27) == "82")){ tests_passed++; } total_tests++;

    if((circular_shift(28, 1000) == "82")){ tests_passed++; } total_tests++;

    if((circular_shift(159, 159) == "951")){ tests_passed++; } total_tests++;

    if((circular_shift(98, 55672) == "89")){ tests_passed++; } total_tests++;

    if((circular_shift(2147483646, 100) == "6463847412")){ tests_passed++; } total_tests++;

    if((circular_shift(99, 98) == "99")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567890, 27) == "0987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(200, 200) == "002")){ tests_passed++; } total_tests++;

    if((circular_shift(98, 98) == "89")){ tests_passed++; } total_tests++;

    if((circular_shift(27, 159) == "72")){ tests_passed++; } total_tests++;

    if((circular_shift(999, 2147483646) == "999")){ tests_passed++; } total_tests++;

    if((circular_shift(2147483647, 200) == "7463847412")){ tests_passed++; } total_tests++;

    if((circular_shift(1001, 1234567890) == "1001")){ tests_passed++; } total_tests++;

    if((circular_shift(11, 11) == "11")){ tests_passed++; } total_tests++;

    if((circular_shift(11, 1000) == "11")){ tests_passed++; } total_tests++;

    if((circular_shift(98, 1001) == "89")){ tests_passed++; } total_tests++;

    if((circular_shift(2147483647, 1234567891) == "7463847412")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 0) == "1234567891")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 1234567890) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(2147483647, 2147483647) == "7463847412")){ tests_passed++; } total_tests++;

    if((circular_shift(156, 157) == "651")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 98) == "1987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(156, 99) == "651")){ tests_passed++; } total_tests++;

    if((circular_shift(10, 11) == "01")){ tests_passed++; } total_tests++;

    if((circular_shift(123456787, 11) == "787654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1001, 27) == "1001")){ tests_passed++; } total_tests++;

    if((circular_shift(25, 199) == "52")){ tests_passed++; } total_tests++;

    if((circular_shift(25, 158) == "52")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 200) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567892, 1234567892) == "2987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(99, 100) == "99")){ tests_passed++; } total_tests++;

    if((circular_shift(27, 12) == "72")){ tests_passed++; } total_tests++;

    if((circular_shift(55674, 15) == "47655")){ tests_passed++; } total_tests++;

    if((circular_shift(1001, 1000) == "1001")){ tests_passed++; } total_tests++;

    if((circular_shift(998, 13) == "899")){ tests_passed++; } total_tests++;

    if((circular_shift(2147483646, 26) == "6463847412")){ tests_passed++; } total_tests++;

    if((circular_shift(28, 1234567891) == "82")){ tests_passed++; } total_tests++;

    if((circular_shift(55672, 123456787) == "27655")){ tests_passed++; } total_tests++;

    if((circular_shift(55672, 0) == "55672")){ tests_passed++; } total_tests++;

    if((circular_shift(13, 1000) == "31")){ tests_passed++; } total_tests++;

    if((circular_shift(26, 99) == "62")){ tests_passed++; } total_tests++;

    if((circular_shift(55671, 200) == "17655")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 26) == "1987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(2147483647, 1234567892) == "7463847412")){ tests_passed++; } total_tests++;

    if((circular_shift(55672, 55672) == "27655")){ tests_passed++; } total_tests++;

    if((circular_shift(157, 199) == "751")){ tests_passed++; } total_tests++;

    if((circular_shift(159, 2147483647) == "951")){ tests_passed++; } total_tests++;

    if((circular_shift(123456787, 123456787) == "787654321")){ tests_passed++; } total_tests++;

    if((circular_shift(200, 11) == "002")){ tests_passed++; } total_tests++;

    if((circular_shift(998, 11) == "899")){ tests_passed++; } total_tests++;

    if((circular_shift(2147483647, 99) == "7463847412")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 25) == "1987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(123456790, 123456789) == "097654321")){ tests_passed++; } total_tests++;

    if((circular_shift(24, 100) == "42")){ tests_passed++; } total_tests++;

    if((circular_shift(201, 199) == "102")){ tests_passed++; } total_tests++;

    if((circular_shift(26, 25) == "62")){ tests_passed++; } total_tests++;

    if((circular_shift(998, 123456787) == "899")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567890, 99) == "0987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(100, 11) == "001")){ tests_passed++; } total_tests++;

    if((circular_shift(1002, 1002) == "2001")){ tests_passed++; } total_tests++;

    if((circular_shift(55671, 99) == "17655")){ tests_passed++; } total_tests++;

    if((circular_shift(1001, 200) == "1001")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 999) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(55671, 55671) == "17655")){ tests_passed++; } total_tests++;

    if((circular_shift(201, 11) == "102")){ tests_passed++; } total_tests++;

    if((circular_shift(13, 123456789) == "31")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 2147483647) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(55673, 25) == "37655")){ tests_passed++; } total_tests++;

    if((circular_shift(100, 55673) == "001")){ tests_passed++; } total_tests++;

    if((circular_shift(123456790, 2147483647) == "097654321")){ tests_passed++; } total_tests++;

    if((circular_shift(97, 97) == "79")){ tests_passed++; } total_tests++;

    if((circular_shift(200, 201) == "002")){ tests_passed++; } total_tests++;

    if((circular_shift(97, 2147483646) == "79")){ tests_passed++; } total_tests++;

    if((circular_shift(199, 1000) == "991")){ tests_passed++; } total_tests++;

    if((circular_shift(25, 200) == "52")){ tests_passed++; } total_tests++;

    if((circular_shift(123456787, 28) == "787654321")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 98) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567890, 2147483647) == "0987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(55672, 55671) == "27655")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567890, 1234567890) == "0987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(158, 1234567890) == "851")){ tests_passed++; } total_tests++;

    if((circular_shift(123456787, 1001) == "787654321")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 2147483646) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(123456787, 98) == "787654321")){ tests_passed++; } total_tests++;

    if((circular_shift(100, 99) == "001")){ tests_passed++; } total_tests++;

    if((circular_shift(157, 1234567892) == "751")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567892, 1234567890) == "2987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(0, 55672) == "0")){ tests_passed++; } total_tests++;

    if((circular_shift(159, 0) == "159")){ tests_passed++; } total_tests++;

    if((circular_shift(202, 11) == "202")){ tests_passed++; } total_tests++;

    if((circular_shift(199, 2147483646) == "991")){ tests_passed++; } total_tests++;

    if((circular_shift(202, 55676) == "202")){ tests_passed++; } total_tests++;

    if((circular_shift(997, 200) == "799")){ tests_passed++; } total_tests++;

    if((circular_shift(27, 16) == "72")){ tests_passed++; } total_tests++;

    if((circular_shift(1001, 1001) == "1001")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 12) == "1987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(99, 1234567890) == "99")){ tests_passed++; } total_tests++;

    if((circular_shift(1, 1234567892) == "1")){ tests_passed++; } total_tests++;

    if((circular_shift(998, 55674) == "899")){ tests_passed++; } total_tests++;

    if((circular_shift(25, 99) == "52")){ tests_passed++; } total_tests++;

    if((circular_shift(201, 55676) == "102")){ tests_passed++; } total_tests++;

    if((circular_shift(123456788, 2147483646) == "887654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1000, 1001) == "0001")){ tests_passed++; } total_tests++;

    if((circular_shift(998, 123456786) == "899")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 13) == "21")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 1234567889) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1000, 157) == "0001")){ tests_passed++; } total_tests++;

    if((circular_shift(100, 2147483647) == "001")){ tests_passed++; } total_tests++;

    if((circular_shift(998, 998) == "899")){ tests_passed++; } total_tests++;

    if((circular_shift(27, 1234567891) == "72")){ tests_passed++; } total_tests++;

    if((circular_shift(24, 99) == "42")){ tests_passed++; } total_tests++;

    if((circular_shift(201, 201) == "102")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567892, 0) == "1234567892")){ tests_passed++; } total_tests++;

    if((circular_shift(1001, 0) == "1001")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567892, 27) == "2987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 1234567892) == "1987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(97, 10) == "79")){ tests_passed++; } total_tests++;

    if((circular_shift(123456787, 158) == "787654321")){ tests_passed++; } total_tests++;

    if((circular_shift(123456788, 13) == "887654321")){ tests_passed++; } total_tests++;

    if((circular_shift(55673, 123456789) == "37655")){ tests_passed++; } total_tests++;

    if((circular_shift(11, 123456789) == "11")){ tests_passed++; } total_tests++;

    if((circular_shift(123456788, 123456788) == "887654321")){ tests_passed++; } total_tests++;

    if((circular_shift(159, 160) == "951")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 13) == "1987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(999, 100) == "999")){ tests_passed++; } total_tests++;

    if((circular_shift(1001, 14) == "1001")){ tests_passed++; } total_tests++;

    if((circular_shift(200, 1234567892) == "002")){ tests_passed++; } total_tests++;

    if((circular_shift(1000, 999) == "0001")){ tests_passed++; } total_tests++;

    if((circular_shift(158, 123456787) == "851")){ tests_passed++; } total_tests++;

    if((circular_shift(26, 27) == "62")){ tests_passed++; } total_tests++;

    if((circular_shift(55675, 55675) == "57655")){ tests_passed++; } total_tests++;

    if((circular_shift(55674, 1234567890) == "47655")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 123456789) == "21")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 159) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 11) == "21")){ tests_passed++; } total_tests++;

    if((circular_shift(1002, 1001) == "2001")){ tests_passed++; } total_tests++;

    if((circular_shift(160, 158) == "061")){ tests_passed++; } total_tests++;

    if((circular_shift(159, 123456791) == "951")){ tests_passed++; } total_tests++;

    if((circular_shift(100, 101) == "001")){ tests_passed++; } total_tests++;

    if((circular_shift(55671, 9) == "17655")){ tests_passed++; } total_tests++;

    if((circular_shift(123456788, 1001) == "887654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1000, 27) == "0001")){ tests_passed++; } total_tests++;

    if((circular_shift(55676, 24) == "67655")){ tests_passed++; } total_tests++;

    if((circular_shift(201, 27) == "102")){ tests_passed++; } total_tests++;

    if((circular_shift(199, 24) == "991")){ tests_passed++; } total_tests++;

    if((circular_shift(159, 1234567890) == "951")){ tests_passed++; } total_tests++;

    if((circular_shift(24, 123456787) == "42")){ tests_passed++; } total_tests++;

    if((circular_shift(157, 157) == "751")){ tests_passed++; } total_tests++;

    if((circular_shift(157, 55671) == "751")){ tests_passed++; } total_tests++;

    if((circular_shift(100, 1000) == "001")){ tests_passed++; } total_tests++;

    if((circular_shift(199, 123456788) == "991")){ tests_passed++; } total_tests++;

    if((circular_shift(11, 100) == "11")){ tests_passed++; } total_tests++;

    if((circular_shift(1000, 200) == "0001")){ tests_passed++; } total_tests++;

    if((circular_shift(55671, 8) == "17655")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 9) == "2345678911")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567889, 1234567890) == "9887654321")){ tests_passed++; } total_tests++;

    if((circular_shift(99, 158) == "99")){ tests_passed++; } total_tests++;

    if((circular_shift(8, 1001) == "8")){ tests_passed++; } total_tests++;

    if((circular_shift(2147483646, 2147483646) == "6463847412")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567889, 1234567888) == "9887654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 2147483647) == "1987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567892, 158) == "2987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(26, 0) == "26")){ tests_passed++; } total_tests++;

    if((circular_shift(100, 0) == "100")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 156) == "1987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(55675, 55674) == "57655")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 1003) == "1987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1003, 1003) == "3001")){ tests_passed++; } total_tests++;

    if((circular_shift(13, 12) == "31")){ tests_passed++; } total_tests++;

    if((circular_shift(16, 2147483646) == "61")){ tests_passed++; } total_tests++;

    if((circular_shift(15, 55674) == "51")){ tests_passed++; } total_tests++;

    if((circular_shift(1000, 156) == "0001")){ tests_passed++; } total_tests++;

    if((circular_shift(15, 2147483646) == "51")){ tests_passed++; } total_tests++;

    if((circular_shift(199, 998) == "991")){ tests_passed++; } total_tests++;

    if((circular_shift(123456790, 11) == "097654321")){ tests_passed++; } total_tests++;

    if((circular_shift(999, 159) == "999")){ tests_passed++; } total_tests++;

    if((circular_shift(15, 13) == "51")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 99) == "1987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(200, 55675) == "002")){ tests_passed++; } total_tests++;

    if((circular_shift(25, 998) == "52")){ tests_passed++; } total_tests++;

    if((circular_shift(98, 10) == "89")){ tests_passed++; } total_tests++;

    if((circular_shift(123456791, 27) == "197654321")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 1234567892) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(123456791, 123456790) == "197654321")){ tests_passed++; } total_tests++;

    if((circular_shift(158, 2147483647) == "851")){ tests_passed++; } total_tests++;

    if((circular_shift(100, 102) == "001")){ tests_passed++; } total_tests++;

    if((circular_shift(1002, 27) == "2001")){ tests_passed++; } total_tests++;

    if((circular_shift(15, 200) == "51")){ tests_passed++; } total_tests++;

    if((circular_shift(0, 5) == "0")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 0) == "12")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 3) == "21")){ tests_passed++; } total_tests++;

    if((circular_shift(1, 0) == "1")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 10) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(11, 201) == "11")){ tests_passed++; } total_tests++;

    if((circular_shift(9, 9) == "9")){ tests_passed++; } total_tests++;

    if((circular_shift(123456790, 99) == "097654321")){ tests_passed++; } total_tests++;

    if((circular_shift(10, 9) == "01")){ tests_passed++; } total_tests++;

    if((circular_shift(10, 100) == "01")){ tests_passed++; } total_tests++;

    if((circular_shift(15, 26) == "51")){ tests_passed++; } total_tests++;

    if((circular_shift(11, 0) == "11")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 101) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(9, 10) == "9")){ tests_passed++; } total_tests++;

    if((circular_shift(25, 9) == "52")){ tests_passed++; } total_tests++;

    if((circular_shift(123456788, 100) == "887654321")){ tests_passed++; } total_tests++;

    if((circular_shift(10, 101) == "01")){ tests_passed++; } total_tests++;

    if((circular_shift(15, 1000) == "51")){ tests_passed++; } total_tests++;

    if((circular_shift(8, 10) == "8")){ tests_passed++; } total_tests++;

    if((circular_shift(55671, 0) == "55671")){ tests_passed++; } total_tests++;

    if((circular_shift(17, 17) == "71")){ tests_passed++; } total_tests++;

    if((circular_shift(28, 158) == "82")){ tests_passed++; } total_tests++;

    if((circular_shift(0, 0) == "0")){ tests_passed++; } total_tests++;

    if((circular_shift(10, 12) == "01")){ tests_passed++; } total_tests++;

    if((circular_shift(8, 11) == "8")){ tests_passed++; } total_tests++;

    if((circular_shift(16, 18) == "61")){ tests_passed++; } total_tests++;

    if((circular_shift(28, 999) == "82")){ tests_passed++; } total_tests++;

    if((circular_shift(10, 10) == "01")){ tests_passed++; } total_tests++;

    if((circular_shift(201, 15) == "102")){ tests_passed++; } total_tests++;

    if((circular_shift(15, 25) == "51")){ tests_passed++; } total_tests++;

    if((circular_shift(123456790, 8) == "234567901")){ tests_passed++; } total_tests++;

    if((circular_shift(7, 11) == "7")){ tests_passed++; } total_tests++;

    if((circular_shift(7, 123456790) == "7")){ tests_passed++; } total_tests++;

    if((circular_shift(200, 12) == "002")){ tests_passed++; } total_tests++;

    if((circular_shift(123456788, 123456787) == "887654321")){ tests_passed++; } total_tests++;

    if((circular_shift(17, 16) == "71")){ tests_passed++; } total_tests++;

    if((circular_shift(123456786, 123456787) == "687654321")){ tests_passed++; } total_tests++;

    if((circular_shift(55672, 1) == "25567")){ tests_passed++; } total_tests++;

    if((circular_shift(11, 2147483647) == "11")){ tests_passed++; } total_tests++;

    if((circular_shift(55671, 16) == "17655")){ tests_passed++; } total_tests++;

    if((circular_shift(199, 999) == "991")){ tests_passed++; } total_tests++;

    if((circular_shift(6, 2147483647) == "6")){ tests_passed++; } total_tests++;

    if((circular_shift(158, 123456790) == "851")){ tests_passed++; } total_tests++;

    if((circular_shift(199, 12) == "991")){ tests_passed++; } total_tests++;

    if((circular_shift(7, 158) == "7")){ tests_passed++; } total_tests++;

    if((circular_shift(1000, 26) == "0001")){ tests_passed++; } total_tests++;

    if((circular_shift(55673, 55672) == "37655")){ tests_passed++; } total_tests++;

    if((circular_shift(16, 55671) == "61")){ tests_passed++; } total_tests++;

    if((circular_shift(2147483647, 6) == "4836472147")){ tests_passed++; } total_tests++;

    if((circular_shift(8, 123456790) == "8")){ tests_passed++; } total_tests++;

    if((circular_shift(10, 8) == "01")){ tests_passed++; } total_tests++;

    if((circular_shift(201, 200) == "102")){ tests_passed++; } total_tests++;

    if((circular_shift(29, 999) == "92")){ tests_passed++; } total_tests++;

    if((circular_shift(123456790, 123456791) == "097654321")){ tests_passed++; } total_tests++;

    if((circular_shift(29, 7) == "92")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 8) == "234567891")){ tests_passed++; } total_tests++;

    if((circular_shift(55672, 11) == "27655")){ tests_passed++; } total_tests++;

    if((circular_shift(28, 28) == "82")){ tests_passed++; } total_tests++;

    if((circular_shift(28, 99) == "82")){ tests_passed++; } total_tests++;

    if((circular_shift(18, 55672) == "81")){ tests_passed++; } total_tests++;

    if((circular_shift(123456791, 55671) == "197654321")){ tests_passed++; } total_tests++;

    if((circular_shift(29, 123456790) == "92")){ tests_passed++; } total_tests++;

    if((circular_shift(7, 28) == "7")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 11) == "1987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(10, 2147483647) == "01")){ tests_passed++; } total_tests++;

    if((circular_shift(29, 55671) == "92")){ tests_passed++; } total_tests++;

    if((circular_shift(0, 8) == "0")){ tests_passed++; } total_tests++;

    if((circular_shift(100, 15) == "001")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 999) == "21")){ tests_passed++; } total_tests++;

    if((circular_shift(999, 123456788) == "999")){ tests_passed++; } total_tests++;

    if((circular_shift(200, 199) == "002")){ tests_passed++; } total_tests++;

    if((circular_shift(123456790, 17) == "097654321")){ tests_passed++; } total_tests++;

    if((circular_shift(123456787, 123456786) == "787654321")){ tests_passed++; } total_tests++;

    if((circular_shift(158, 123456789) == "851")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 28) == "1987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(16, 16) == "61")){ tests_passed++; } total_tests++;

    if((circular_shift(11, 158) == "11")){ tests_passed++; } total_tests++;

    if((circular_shift(123456790, 999) == "097654321")){ tests_passed++; } total_tests++;

    if((circular_shift(7, 7) == "7")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 26) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(6, 28) == "6")){ tests_passed++; } total_tests++;

    if((circular_shift(999, 28) == "999")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 19) == "21")){ tests_passed++; } total_tests++;

    if((circular_shift(28, 998) == "82")){ tests_passed++; } total_tests++;

    if((circular_shift(998, 123456790) == "899")){ tests_passed++; } total_tests++;

    if((circular_shift(200, 999) == "002")){ tests_passed++; } total_tests++;

    if((circular_shift(1000, 17) == "0001")){ tests_passed++; } total_tests++;

    if((circular_shift(123456790, 26) == "097654321")){ tests_passed++; } total_tests++;

    if((circular_shift(15, 2147483647) == "51")){ tests_passed++; } total_tests++;

    if((circular_shift(9, 101) == "9")){ tests_passed++; } total_tests++;

    if((circular_shift(123456788, 158) == "887654321")){ tests_passed++; } total_tests++;

    if((circular_shift(16, 15) == "61")){ tests_passed++; } total_tests++;

    if((circular_shift(10, 18) == "01")){ tests_passed++; } total_tests++;

    if((circular_shift(998, 55671) == "899")){ tests_passed++; } total_tests++;

    if((circular_shift(55674, 17) == "47655")){ tests_passed++; } total_tests++;

    if((circular_shift(98, 8) == "89")){ tests_passed++; } total_tests++;

    if((circular_shift(123456790, 123456788) == "097654321")){ tests_passed++; } total_tests++;

    if((circular_shift(123456791, 12) == "197654321")){ tests_passed++; } total_tests++;

    if((circular_shift(101, 100) == "101")){ tests_passed++; } total_tests++;

    if((circular_shift(17, 55671) == "71")){ tests_passed++; } total_tests++;

    if((circular_shift(999, 999) == "999")){ tests_passed++; } total_tests++;

    if((circular_shift(16, 17) == "61")){ tests_passed++; } total_tests++;

    if((circular_shift(101, 101) == "101")){ tests_passed++; } total_tests++;

    if((circular_shift(123456791, 123456791) == "197654321")){ tests_passed++; } total_tests++;

    if((circular_shift(999, 1234567889) == "999")){ tests_passed++; } total_tests++;

    if((circular_shift(18, 123456791) == "81")){ tests_passed++; } total_tests++;

    if((circular_shift(10, 55672) == "01")){ tests_passed++; } total_tests++;

    if((circular_shift(55671, 55672) == "17655")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567889, 158) == "9887654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 8) == "3456789112")){ tests_passed++; } total_tests++;

    if((circular_shift(25, 123456790) == "52")){ tests_passed++; } total_tests++;

    if((circular_shift(19, 19) == "91")){ tests_passed++; } total_tests++;

    if((circular_shift(11, 19) == "11")){ tests_passed++; } total_tests++;

    if((circular_shift(99, 103) == "99")){ tests_passed++; } total_tests++;

    if((circular_shift(18, 27) == "81")){ tests_passed++; } total_tests++;

    if((circular_shift(16, 55673) == "61")){ tests_passed++; } total_tests++;

    if((circular_shift(25, 1234567890) == "52")){ tests_passed++; } total_tests++;

    if((circular_shift(17, 1) == "71")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567890, 98) == "0987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(11, 20) == "11")){ tests_passed++; } total_tests++;

    if((circular_shift(20, 998) == "02")){ tests_passed++; } total_tests++;

    if((circular_shift(5, 5) == "5")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 100) == "21")){ tests_passed++; } total_tests++;

    if((circular_shift(25, 8) == "52")){ tests_passed++; } total_tests++;

    if((circular_shift(1000, 199) == "0001")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567890, 8) == "3456789012")){ tests_passed++; } total_tests++;

    if((circular_shift(100, 123456789) == "001")){ tests_passed++; } total_tests++;

    if((circular_shift(29, 100) == "92")){ tests_passed++; } total_tests++;

    if((circular_shift(28, 100) == "82")){ tests_passed++; } total_tests++;

    if((circular_shift(6, 7) == "6")){ tests_passed++; } total_tests++;

    if((circular_shift(999, 998) == "999")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567890, 100) == "0987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(999, 199) == "999")){ tests_passed++; } total_tests++;

    if((circular_shift(10, 123456787) == "01")){ tests_passed++; } total_tests++;

    if((circular_shift(198, 199) == "891")){ tests_passed++; } total_tests++;

    if((circular_shift(15, 0) == "15")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 55671) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567889, 123456789) == "9887654321")){ tests_passed++; } total_tests++;

    if((circular_shift(123456790, 55674) == "097654321")){ tests_passed++; } total_tests++;

    if((circular_shift(16, 55674) == "61")){ tests_passed++; } total_tests++;

    if((circular_shift(99, 55671) == "99")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 100) == "1987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(29, 11) == "92")){ tests_passed++; } total_tests++;

    if((circular_shift(10, 20) == "01")){ tests_passed++; } total_tests++;

    if((circular_shift(20, 20) == "02")){ tests_passed++; } total_tests++;

    if((circular_shift(103, 28) == "301")){ tests_passed++; } total_tests++;

    if((circular_shift(25, 123456788) == "52")){ tests_passed++; } total_tests++;

    if((circular_shift(19, 10) == "91")){ tests_passed++; } total_tests++;

    if((circular_shift(26, 100) == "62")){ tests_passed++; } total_tests++;

    if((circular_shift(6, 2147483646) == "6")){ tests_passed++; } total_tests++;

    if((circular_shift(29, 158) == "92")){ tests_passed++; } total_tests++;

    if((circular_shift(2147483647, 201) == "7463847412")){ tests_passed++; } total_tests++;

    if((circular_shift(11, 26) == "11")){ tests_passed++; } total_tests++;

    if((circular_shift(102, 198) == "201")){ tests_passed++; } total_tests++;

    if((circular_shift(123456786, 15) == "687654321")){ tests_passed++; } total_tests++;

    if((circular_shift(7, 8) == "7")){ tests_passed++; } total_tests++;

    if((circular_shift(20, 27) == "02")){ tests_passed++; } total_tests++;

    if((circular_shift(100, 1234567890) == "001")){ tests_passed++; } total_tests++;

    if((circular_shift(18, 17) == "81")){ tests_passed++; } total_tests++;

    if((circular_shift(17, 29) == "71")){ tests_passed++; } total_tests++;

    if((circular_shift(123456787, 123456790) == "787654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567888, 1234567888) == "8887654321")){ tests_passed++; } total_tests++;

    if((circular_shift(4, 5) == "4")){ tests_passed++; } total_tests++;

    if((circular_shift(29, 29) == "92")){ tests_passed++; } total_tests++;

    if((circular_shift(17, 198) == "71")){ tests_passed++; } total_tests++;

    if((circular_shift(999, 123456790) == "999")){ tests_passed++; } total_tests++;

    if((circular_shift(16, 10) == "61")){ tests_passed++; } total_tests++;

    if((circular_shift(46, 45) == "64")){ tests_passed++; } total_tests++;

    if((circular_shift(29, 201) == "92")){ tests_passed++; } total_tests++;

    if((circular_shift(123456790, 15) == "097654321")){ tests_passed++; } total_tests++;

    if((circular_shift(123456791, 101) == "197654321")){ tests_passed++; } total_tests++;

    if((circular_shift(998, 2147483647) == "899")){ tests_passed++; } total_tests++;

    if((circular_shift(123456790, 28) == "097654321")){ tests_passed++; } total_tests++;

    if((circular_shift(123456790, 45) == "097654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567892, 11) == "2987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(18, 4) == "81")){ tests_passed++; } total_tests++;

    if((circular_shift(15, 100) == "51")){ tests_passed++; } total_tests++;

    if((circular_shift(123456786, 123456786) == "687654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567888, 45) == "8887654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1000, 9) == "0001")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567891, 5) == "6789112345")){ tests_passed++; } total_tests++;

    if((circular_shift(45, 1000) == "54")){ tests_passed++; } total_tests++;

    if((circular_shift(2147483647, 15) == "7463847412")){ tests_passed++; } total_tests++;

    if((circular_shift(5, 99) == "5")){ tests_passed++; } total_tests++;

    if((circular_shift(159, 123456789) == "951")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 7) == "21")){ tests_passed++; } total_tests++;

    if((circular_shift(99, 102) == "99")){ tests_passed++; } total_tests++;

    if((circular_shift(20, 99) == "02")){ tests_passed++; } total_tests++;

    if((circular_shift(101, 2147483647) == "101")){ tests_passed++; } total_tests++;

    if((circular_shift(19, 11) == "91")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567890, 11) == "0987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567890, 999) == "0987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 123456787) == "21")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567888, 999) == "8887654321")){ tests_passed++; } total_tests++;

    if((circular_shift(30, 25) == "03")){ tests_passed++; } total_tests++;

    if((circular_shift(1, 123456786) == "1")){ tests_passed++; } total_tests++;

    if((circular_shift(17, 4) == "71")){ tests_passed++; } total_tests++;

    if((circular_shift(11, 27) == "11")){ tests_passed++; } total_tests++;

    if((circular_shift(103, 103) == "301")){ tests_passed++; } total_tests++;

    if((circular_shift(11, 25) == "11")){ tests_passed++; } total_tests++;

    if((circular_shift(46, 2147483647) == "64")){ tests_passed++; } total_tests++;

    if((circular_shift(103, 104) == "301")){ tests_passed++; } total_tests++;

    if((circular_shift(123456791, 102) == "197654321")){ tests_passed++; } total_tests++;

    if((circular_shift(6, 6) == "6")){ tests_passed++; } total_tests++;

    if((circular_shift(123456790, 0) == "123456790")){ tests_passed++; } total_tests++;

    if((circular_shift(55671, 11) == "17655")){ tests_passed++; } total_tests++;

    if((circular_shift(7, 25) == "7")){ tests_passed++; } total_tests++;

    if((circular_shift(4, 4) == "4")){ tests_passed++; } total_tests++;

    if((circular_shift(14, 13) == "41")){ tests_passed++; } total_tests++;

    if((circular_shift(158, 157) == "851")){ tests_passed++; } total_tests++;

    if((circular_shift(200, 100) == "002")){ tests_passed++; } total_tests++;

    if((circular_shift(13, 14) == "31")){ tests_passed++; } total_tests++;

    if((circular_shift(104, 28) == "401")){ tests_passed++; } total_tests++;

    if((circular_shift(10, 99) == "01")){ tests_passed++; } total_tests++;

    if((circular_shift(101, 102) == "101")){ tests_passed++; } total_tests++;

    if((circular_shift(13, 2147483647) == "31")){ tests_passed++; } total_tests++;

    if((circular_shift(98, 158) == "89")){ tests_passed++; } total_tests++;

    if((circular_shift(17, 123456790) == "71")){ tests_passed++; } total_tests++;

    if((circular_shift(20, 55675) == "02")){ tests_passed++; } total_tests++;

    if((circular_shift(200, 28) == "002")){ tests_passed++; } total_tests++;

    if((circular_shift(55674, 11) == "47655")){ tests_passed++; } total_tests++;

    if((circular_shift(55673, 6) == "37655")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567888, 13) == "8887654321")){ tests_passed++; } total_tests++;

    if((circular_shift(46, 46) == "64")){ tests_passed++; } total_tests++;

    if((circular_shift(123456789, 12) == "987654321")){ tests_passed++; } total_tests++;

    if((circular_shift(123456787, 123456788) == "787654321")){ tests_passed++; } total_tests++;

    if((circular_shift(7, 55674) == "7")){ tests_passed++; } total_tests++;

    if((circular_shift(198, 0) == "198")){ tests_passed++; } total_tests++;

    if((circular_shift(1234567888, 40) == "8887654321")){ tests_passed++; } total_tests++;

    if((circular_shift(1, 17) == "1")){ tests_passed++; } total_tests++;

    if((circular_shift(26, 1000) == "62")){ tests_passed++; } total_tests++;

    if((circular_shift(55672, 17) == "27655")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 15) == "21")){ tests_passed++; } total_tests++;

    if((circular_shift(104, 1000) == "401")){ tests_passed++; } total_tests++;

    if((circular_shift(55673, 55674) == "37655")){ tests_passed++; } total_tests++;

    if((circular_shift(55675, 26) == "57655")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 201) == "21")){ tests_passed++; } total_tests++;

    if((circular_shift(103, 102) == "301")){ tests_passed++; } total_tests++;

    if((circular_shift(98, 103) == "89")){ tests_passed++; } total_tests++;

    if((circular_shift(8, 28) == "8")){ tests_passed++; } total_tests++;

    if((circular_shift(55674, 2147483646) == "47655")){ tests_passed++; } total_tests++;

    if((circular_shift(0, 1) == "0")){ tests_passed++; } total_tests++;

    if((circular_shift(123456790, 123456787) == "097654321")){ tests_passed++; } total_tests++;

    if((circular_shift(123456790, 123456792) == "097654321")){ tests_passed++; } total_tests++;

    if((circular_shift(55672, 55673) == "27655")){ tests_passed++; } total_tests++;

    if((circular_shift(123456791, 7) == "345679112")){ tests_passed++; } total_tests++;

    if((circular_shift(158, 14) == "851")){ tests_passed++; } total_tests++;

    if((circular_shift(10, 123456789) == "01")){ tests_passed++; } total_tests++;

    if((circular_shift(27, 26) == "72")){ tests_passed++; } total_tests++;

    if((circular_shift(24, 24) == "42")){ tests_passed++; } total_tests++;

    if((circular_shift(55674, 55674) == "47655")){ tests_passed++; } total_tests++;

    if((circular_shift(998, 123456791) == "899")){ tests_passed++; } total_tests++;

    if((circular_shift(17, 199) == "71")){ tests_passed++; } total_tests++;

    if((circular_shift(1, 7) == "1")){ tests_passed++; } total_tests++;

    if((circular_shift(20, 201) == "02")){ tests_passed++; } total_tests++;

    if((circular_shift(0, 12) == "0")){ tests_passed++; } total_tests++;

    if((circular_shift(101, 15) == "101")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 55672) == "21")){ tests_passed++; } total_tests++;

    if((circular_shift(12, 8) == "21")){ tests_passed++; } total_tests++;

    if((circular_shift(123456792, 17) == "297654321")){ tests_passed++; } total_tests++;

    if((circular_shift(198, 15) == "891")){ tests_passed++; } total_tests++;

    if((circular_shift(101, 8) == "101")){ tests_passed++; } total_tests++;

    if((circular_shift(104, 999) == "401")){ tests_passed++; } total_tests++;

    if((circular_shift(1001, 2147483647) == "1001")){ tests_passed++; } total_tests++;

    if((circular_shift(20, 21) == "02")){ tests_passed++; } total_tests++;

    if((circular_shift(55671, 98) == "17655")){ tests_passed++; } total_tests++;

    if((circular_shift(199, 199) == "991")){ tests_passed++; } total_tests++;

    if((circular_shift(18, 55671) == "81")){ tests_passed++; } total_tests++;

    if((circular_shift(123456792, 123456791) == "297654321")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


