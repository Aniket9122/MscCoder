bool issame(const vector<int>& v1, const vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) 
        if (v1[i]!=v2[i]) return false;
    return true;
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

    if((issame(generate_integers(2, 10) , {2, 4, 6, 8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(10, 2) , {2, 4, 6, 8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(132, 2) , {2, 4, 6, 8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(17,89) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(2, 10) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(10, 2) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(132, 2) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(17, 89) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(6, 12) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 25) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(50, 60) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100, 200) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(201, 299) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(5, 5) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(11, 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(10, 5) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(5, 11) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(50, 34) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(5, 10) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(201, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(34, 201) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(12, 5) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(34, 200) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(201, 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(299, 299) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(200, 299) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(25, 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(201, 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(11, 299) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(12, 25) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(5, 6) , {6}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(14, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(200, 300) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(60, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(50, 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 201) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(14, 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(5, 4) , {4}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(5, 34) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(201, 298) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(200, 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(300, 299) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(199, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(200, 200) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(298, 34) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(34, 34) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(14, 14) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 202) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(6, 13) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(12, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(34, 14) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(300, 5) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(301, 299) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(201, 300) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(14, 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(299, 34) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(301, 34) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(300, 34) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(302, 299) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(4, 5) , {4}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(300, 6) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(25, 34) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(298, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(199, 202) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(199, 299) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(11, 61) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(9, 9) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(201, 14) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(199, 34) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(9, 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(5, 300) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(11, 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(10, 34) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100, 6) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 60) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(12, 34) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(202, 202) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(14, 34) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(298, 298) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(50, 50) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(6, 6) , {6}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(201, 201) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(61, 299) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(61, 34) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(200, 201) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(10, 300) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(301, 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(62, 299) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(297, 298) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(6, 61) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(200, 297) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(298, 50) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(302, 301) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(199, 14) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(12, 299) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(6, 8) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(198, 34) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(201, 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(202, 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(201, 202) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(12, 300) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(7, 5) , {6}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(300, 302) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(8, 298) , {8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(8, 5) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100, 1000) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(999, 1) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(101, 1001) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 17) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(101, 110) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(16, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1000, 1000) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56789, 56789) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56789, 56788) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(101, 101) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56788, 56789) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(16, 16) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(17, 17) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1001, 1001) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(2, 2) , {2}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100, 101) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(10000, 10000) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1, 1) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(10000, 10001) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(17, 2) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(12, 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(16, 1) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(999, 2) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1001, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56789, 56790) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 100) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(102, 1001) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(15, 110) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100000, 100000) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456790, 123456789) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(14, 100) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(11, 110) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(12, 1001) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(3, 15) , {4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(16, 1001) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(12, 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(12, 1) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(999, 999) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1001, 2) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(15, 2) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1001, 1000) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100, 110) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(2, 14) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(101, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(2, 13) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(15, 16) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456789, 123456789) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(2, 1000) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56790, 56790) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(10001, 10001) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56788, 56790) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(3, 102) , {4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654322, 987654322) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(14, 101) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456788, 123456789) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100, 100) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56791, 56791) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(3, 3) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(99, 99) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(14, 16) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(11, 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(2, 1) , {2}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(12, 100) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(9999, 9999) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 3) , {4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1, 2) , {2}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56788, 56788) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(110, 110) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456792, 123456791) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56792, 56791) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 14) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(10, 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(101, 100) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 16) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(102, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123457, 123457) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123458, 123457) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456788, 123456788) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1002, 1002) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(18, 18) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56787, 56787) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456789, 123456788) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(99999, 99999) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 1000) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(16, 15) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(16, 999) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(102, 101) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(999, 14) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(16, 101) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100001, 100001) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(9999, 10000) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(102, 102) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(998, 101) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(3, 2) , {2}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100001, 100000) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(11, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456790, 123456790) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(3, 16) , {4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(4, 101) , {4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1001, 1002) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(101, 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56788, 56787) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456791, 123456792) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456787, 123456788) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(15, 15) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(99, 100) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456791, 123456790) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(999, 110) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(18, 1) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(102, 4) , {4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123455, 123455) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1002, 3) , {4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1000, 14) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654321, 987654321) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1001, 1) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456789, 123456790) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(10001, 10000) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(12, 4) , {4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(99, 1000) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456791, 123456791) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 1002) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1000, 110) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(11, 998) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(998, 998) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(10002, 10000) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(16, 998) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456787, 123456789) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1002, 5) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1003, 3) , {4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56787, 56788) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100, 1) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654323, 987654323) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100000, 99999) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(998, 2) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56789, 56792) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1001, 100) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(17, 14) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(4, 1002) , {4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100, 14) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(101, 103) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1001, 15) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(109, 110) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123458, 123455) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456791, 123456789) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1000, 15) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456790, 123456791) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1000, 103) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(16, 17) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(98, 100) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 102) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1002, 1003) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1, 1001) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456792, 123456792) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1004, 100) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(16, 1000) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(66, 14) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1001, 110) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(12, 102) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(4, 17) , {4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(99, 1004) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100000, 100001) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123454, 123455) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(15, 1002) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1000, 1001) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456793, 123456792) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(2, 3) , {2}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(12, 109) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56790, 56787) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56786, 56787) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(997, 2) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1001, 99) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654322, 987654323) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(12, 3) , {4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1003, 102) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1004, 16) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1000, 102) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56790, 56789) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456789, 123456791) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654325, 987654324) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(16, 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56791, 56790) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(99996, 99996) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100, 16) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56785, 56790) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(11, 14) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(98, 99) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(17, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(101, 102) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100, 103) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(19, 1) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(18, 2) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1004, 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(99998, 99998) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56789, 56787) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1004, 14) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1003, 1003) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(15, 14) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(102, 5) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654321, 987654322) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1003, 1001) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(998, 16) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(4, 12) , {4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(17, 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(66, 5) , {6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(102, 100) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(16, 19) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456787, 123456787) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(110, 998) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(15, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1000, 104) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1000, 111) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1, 15) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(10001, 10002) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(14, 15) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(111, 110) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56792, 56792) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1002, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 18) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(11, 109) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(10, 10) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1004, 1004) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(66, 66) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100, 99) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 2) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(110, 1) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(17, 100) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(999, 998) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(102, 98) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 1) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 1001) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1000, 999) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1000, 998) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1000, 1) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654320, 987654321) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654321, 987654320) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(998, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(99, 110) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(12, 110) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(99, 998) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(111, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(999, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(101, 1) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(998, 999) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654319, 987654321) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(111, 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654320, 987654320) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(109, 98) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1001, 111) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(99, 98) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1001, 101) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100, 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654319, 987654320) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456788, 123456790) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(18, 101) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1000, 19) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(101, 1000) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 998) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(998, 18) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(101, 99) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(110, 98) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100, 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(110, 111) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 110) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654319, 987654319) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100, 999) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(101, 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654324, 987654321) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(12, 111) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(110, 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(99, 102) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(999, 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 99) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(999, 101) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(11, 111) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(19, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654323, 987654320) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(18, 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(19, 19) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(111, 1) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1001, 16) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100, 111) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(98, 98) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(110, 11) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(98, 110) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1001, 998) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(99, 1001) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(19, 999) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654326, 987654325) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(101, 98) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(14, 1000) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(20, 19) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 111) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(111, 111) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 101) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(14, 1001) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(18, 1001) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(99999, 100000) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56786, 56789) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654324, 987654324) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654325, 987654320) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(101, 999) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(999, 100) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(19, 18) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(11, 101) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(102, 1000) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(2, 101) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1002, 101) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654320, 987654319) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(18, 17) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(19, 101) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654326, 987654326) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654322, 987654321) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(99999, 99998) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123453, 123454) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(102, 108) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(98, 1) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(98, 97) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123454, 123454) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1, 12) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(10000, 9999) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1000, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(15, 98) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(97, 17) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(99997, 99998) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(17, 16) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(99997, 99997) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(20, 999) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(101, 998) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123455, 123456) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(109, 15) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1, 999) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456788, 123456787) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100, 98) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(20, 99) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(108, 12) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456, 123456) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(100, 2) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(97, 97) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(108, 999) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(97, 98) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1001, 98) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654317, 987654324) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123456786, 123456786) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123457, 123456) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(2, 17) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1, 101) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123457, 123453) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(17, 18) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654325, 987654325) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(11, 100) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(19, 20) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(123452, 123453) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(2, 110) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(11, 97) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56786, 56788) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(104, 108) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(2, 999) , {2,4,6,8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654324, 987654319) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654319, 987654326) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654324, 987654318) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654316, 987654315) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(13, 15) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1002, 998) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(56787, 56786) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(102, 109) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(108, 13) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(8, 9) , {8}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(108, 108) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654324, 987654325) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(1002, 111) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(111, 1001) , {}))){ tests_passed++; } total_tests++;

    if((issame(generate_integers(987654323, 987654322) , {}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


