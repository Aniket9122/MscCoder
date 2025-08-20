#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int sum_squares(const vector<float>& lst) {
    int result = 0;
    for (const auto& element : lst) {
        float rounded = ceil(element);
        result += pow(rounded, 2);
    }
    return result;
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

    if((sum_squares({1,2,3})==14)){ tests_passed++; } total_tests++;

    if((sum_squares({1.0,2,3})==14)){ tests_passed++; } total_tests++;

    if((sum_squares({1,3,5,7})==84)){ tests_passed++; } total_tests++;

    if((sum_squares({1.4,4.2,0})==29)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.4,1,1})==6)){ tests_passed++; } total_tests++;

    if((sum_squares({100,1,15,2})==10230)){ tests_passed++; } total_tests++;

    if((sum_squares({10000,10000})==200000000)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.4,4.6,6.3})==75)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.4,17.9,18.9,19.9})==1086)){ tests_passed++; } total_tests++;

    if((sum_squares({0})==0)){ tests_passed++; } total_tests++;

    if((sum_squares({-1})==1)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,1,0})==2)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,3})==14)){ tests_passed++; } total_tests++;

    if((sum_squares({1.0,2,3})==14)){ tests_passed++; } total_tests++;

    if((sum_squares({1,3,5,7})==84)){ tests_passed++; } total_tests++;

    if((sum_squares({1.4,4.2,0})==29)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.4,1,1})==6)){ tests_passed++; } total_tests++;

    if((sum_squares({100,1,15,2})==10230)){ tests_passed++; } total_tests++;

    if((sum_squares({10000,10000})==200000000)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.4,4.6,6.3})==75)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.4,17.9,18.9,19.9})==1086)){ tests_passed++; } total_tests++;

    if((sum_squares({0})==0)){ tests_passed++; } total_tests++;

    if((sum_squares({-1})==1)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,1,0})==2)){ tests_passed++; } total_tests++;

    if((sum_squares({-3,4,5,6,7})==135)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,4,-5})==54)){ tests_passed++; } total_tests++;

    if((sum_squares({0,3.3,7.7,-2.2})==84)){ tests_passed++; } total_tests++;

    if((sum_squares({10,20,30,40})==3000)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,3,4,5,6,7,8,9,10})==385)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0})==0)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-2,-3})==14)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,3.7})==29)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.9,-2.5,-1.1})==9)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,0.5,0.9})==3)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,2,4,-5})==58)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.535790961084111,3.7})==29)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,3.7,1.1})==33)){ tests_passed++; } total_tests++;

    if((sum_squares({0.5,0.9})==2)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,0,4,5,6,7,8,9,10})==376)){ tests_passed++; } total_tests++;

    if((sum_squares({3,4,-5})==50)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,0.5,0.9,0.5})==4)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.9,-2.5})==8)){ tests_passed++; } total_tests++;

    if((sum_squares({10,20,30,40,10})==3100)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.9,-2.5,-1.1,-1.1})==10)){ tests_passed++; } total_tests++;

    if((sum_squares({10,3,10,2,4,-5,4})==270)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,0,6,5,6,7,8,9,10})==396)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,2,9,4,-5})==139)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,2,4,-5,-5})==83)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,0,6,5,7,8,9,10})==360)){ tests_passed++; } total_tests++;

    if((sum_squares({1.3807739357525621,0.5,0.9})==6)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,3,4,5,6,7,8,9,10,2})==389)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-2,-3,-1,-1})==16)){ tests_passed++; } total_tests++;

    if((sum_squares({10,3,10,2,4,-5,4,4})==286)){ tests_passed++; } total_tests++;

    if((sum_squares({0.5,3.3,0.5651200929607817})==18)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1964179356010927,2.5,3.7,1.1})==33)){ tests_passed++; } total_tests++;

    if((sum_squares({1.3807739357525621,0.5,0.9,0.5})==7)){ tests_passed++; } total_tests++;

    if((sum_squares({30,10,20,30,40,10})==4000)){ tests_passed++; } total_tests++;

    if((sum_squares({-3,4,5,6,7,4})==151)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,0,5,6,7,8,9,10})==360)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,20,30,40,10,10})==3125)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-2,-2})==8)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,4})==29)){ tests_passed++; } total_tests++;

    if((sum_squares({-0.0395412918863951,1.3807739357525621,0.5,0.5})==6)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0})==0)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-2,30,-1})==906)){ tests_passed++; } total_tests++;

    if((sum_squares({-3,8,4,5,6,7})==199)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,20,30,10,10,10,10,10})==1825)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,3,3,4,5,6,7,8,9,10})==394)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,20,30,9,10,10,10,10,10})==1906)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,0,6,5,6,7,8,9,10,6})==432)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,-5})==45)){ tests_passed++; } total_tests++;

    if((sum_squares({-2,30,10,20,30,40,10})==4004)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.535790961084111,3.7,1.1})==33)){ tests_passed++; } total_tests++;

    if((sum_squares({1.3807739357525621,0.5,0.9,0.5,0.9})==8)){ tests_passed++; } total_tests++;

    if((sum_squares({-2,30,-1})==905)){ tests_passed++; } total_tests++;

    if((sum_squares({40,-2,-2,30,-1,30,-1})==3410)){ tests_passed++; } total_tests++;

    if((sum_squares({40,-2,-2,30,-1,-3,-1})==2519)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.5,-1.1,-1.1})==6)){ tests_passed++; } total_tests++;

    if((sum_squares({40,-2,-2,30,-1,30,-1,-2})==3414)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,2,4,-5,-5,2})==87)){ tests_passed++; } total_tests++;

    if((sum_squares({1,4,2,0,6,5,7,8,9,10})==376)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-2})==4)){ tests_passed++; } total_tests++;

    if((sum_squares({-2,4,5,5,6,7,5})==180)){ tests_passed++; } total_tests++;

    if((sum_squares({10,20,30,7,10})==1549)){ tests_passed++; } total_tests++;

    if((sum_squares({-3,8,4,5,7,6,7})==248)){ tests_passed++; } total_tests++;

    if((sum_squares({1.3807739357525621,0.5,0.9,3.3,0.5,0.5})==24)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-2,-3,-1,-1,-1})==17)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.5,0.5,1.3122633441453049,-1.1,-1.820012478772272,-1.1,-2.5})==16)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.5,-1.1})==5)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1964179356010927,2.5,3.7,1.1,2.5})==42)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,2,4,-5,-4,2})==85)){ tests_passed++; } total_tests++;

    if((sum_squares({2.535790961084111,-0.0395412918863951,2.535790961084111})==18)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,0,10,5,6,7,8,9,10,8,10})==624)){ tests_passed++; } total_tests++;

    if((sum_squares({-4,2,4,-5,2})==65)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1964179356010927})==4)){ tests_passed++; } total_tests++;

    if((sum_squares({-4,4,2,4,-5,-4,2})==97)){ tests_passed++; } total_tests++;

    if((sum_squares({-2,-2,30,-1,-1})==910)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-2,-1})==5)){ tests_passed++; } total_tests++;

    if((sum_squares({1,4,2,0,6,5,7,8,9,10,7})==425)){ tests_passed++; } total_tests++;

    if((sum_squares({40,-2,-2,30,5,30,-1,-2})==3438)){ tests_passed++; } total_tests++;

    if((sum_squares({1,4,-5})==42)){ tests_passed++; } total_tests++;

    if((sum_squares({4})==16)){ tests_passed++; } total_tests++;

    if((sum_squares({4,-3,8,4,5,7,6,7,6})==300)){ tests_passed++; } total_tests++;

    if((sum_squares({-3,8,4,5,6,7,4})==215)){ tests_passed++; } total_tests++;

    if((sum_squares({10,20,30,40,10,40})==4700)){ tests_passed++; } total_tests++;

    if((sum_squares({1.3807739357525621,0.13158576006729072,0.9})==6)){ tests_passed++; } total_tests++;

    if((sum_squares({10,9,20,30,7,10})==1630)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,1,-5,2,4,-5})==84)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,2,-5,4,-5,-5,2})==112)){ tests_passed++; } total_tests++;

    if((sum_squares({1,4,2,0,6,1,5,7,8,9,10,7})==426)){ tests_passed++; } total_tests++;

    if((sum_squares({10,20,30,4,10,40})==3116)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.9,-1.1})==5)){ tests_passed++; } total_tests++;

    if((sum_squares({2,0,1,-5,2,4,-5})==75)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,-5,-5})==63)){ tests_passed++; } total_tests++;

    if((sum_squares({-2,-2,30,-1,-3,-1})==919)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,6,0})==36)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,6,5,0})==61)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,9,20,30,10,10,10,10})==1806)){ tests_passed++; } total_tests++;

    if((sum_squares({10,4,3,10,2,4,-5,4})==286)){ tests_passed++; } total_tests++;

    if((sum_squares({1.3807739357525621,0.5,0.5})==6)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,40,-2,-3,-1,-1})==1616)){ tests_passed++; } total_tests++;

    if((sum_squares({-3,-5,4,5,6,7})==160)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,20,30,8,10,10,10,10})==1789)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,0,5,6,7,8,9,10,9})==441)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,3.4,-4.6,5.1,6})==109)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,5.2,6})==110)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,4.6,5.1,6})==116)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,-3.4,-4.6,-5.1,-6})==91)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-5.2,-6})==99)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,-8.09,2.71,0.69,1.62,-9.99,6.28,-14.04})==420)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,3.2,4.6,5.1,6.7})==140)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5,5.5,6})==182)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5})==195)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,3.6,7.1,-6.5})==155)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,3.2,4.234081562814888,6.851261387881998,6.7})==153)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-2.8396588982482287,5.2,6})==114)){ tests_passed++; } total_tests++;

    if((sum_squares({1,4,3.4,5.1,6})==105)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.716809497407311,5,5.2,6})==135)){ tests_passed++; } total_tests++;

    if((sum_squares({-6,1,2,-3.4,-4.6,-5.1,-6})==127)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,2.71,3.2,4.6,5.1,6.7,6.7})==185)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,-3.4,-5.1,-6})==75)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,6.7})==146)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.716809497407311,5,-6.5,6})==135)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.716809497407311,5,-6.5,6,1.1})==139)){ tests_passed++; } total_tests++;

    if((sum_squares({4.5,0.1,1.5,2.9,3.2,4.234081562814888,6.851261387881998,6.7})==178)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-4.716809497407311,2.9,3.2,4.967726321372912,4.6,5.1,6.7})==181)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,4.234081562814888,5,-4.716809497407311,5,-6.5,7,1.1})==202)){ tests_passed++; } total_tests++;

    if((sum_squares({1,4,3.4,6})==69)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-5.2,-6})==83)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,8.527593815012729,6.7,4.234081562814888,1.5})==256)){ tests_passed++; } total_tests++;

    if((sum_squares({6.28,1.566848906209739,-3.7,4.6,5.1,6})==159)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,1.1,3.2,4.234081562814888,6.851261387881998,6.7})==148)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,3.4,-4.6,5.1,6,6})==145)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,3.2,4.234081562814888,3.729477873601854,6.7})==120)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,5.5,2.71,3.2,4.6,5.1,6.7,6.7})==221)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-2.8396588982482287,2.4936669865395658,4.234081562814888,6.851261387881998,6.7})==141)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.716809497407311,-6.5,6,1.1})==114)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-4.141299863600741,-6})==90)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,5.5,2.71,3.2,4.6,5.1,6.7,6.7,2.71})==230)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-5,2,-3.4,-2.7,-3.2596671445918055,-6})==88)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,3.890157601890744,3.2,4.6,5.1,6.7})==147)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,4.6,5.1,6,5.1,6})==188)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,5.5,6.851261387881998,3.2,4.6,2.4936669865395658,5.1,6.7,6.7})==270)){ tests_passed++; } total_tests++;

    if((sum_squares({1,4,3.4,5.1})==69)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-4.276874536373084,-5.2,-9.99,-6})==196)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,-8.09,2.71,0.69,1.62,-9.99,6.28})==224)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,3.4,5.1,6})==108)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,3.2,4.6,5.1,3.890157601890744})==107)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-4.6,5.2,6,5.2})==137)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,4.234081562814888,5,-4.716809497407311,5,-6.5,1.1})==153)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,2.230942080154173,1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,6.7})==155)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-5,2,-3.4,-2.7,-3.2596671445918055,0,-6})==88)){ tests_passed++; } total_tests++;

    if((sum_squares({0.052289320520992534,0.1,1.5,3.890157601890744,3.2,4.6,5.1,6.7})==148)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-4.716809497407311,2.9,2.9915540201886883,4.967726321372912,4.6,5.1,6.7})==174)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,6.7,6.7})==195)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,4.234081562814888,5,-4.716809497407311,5,-6.5,1.1,1.1})==157)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5,3.5})==211)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,5.5,-3.7,3.2,4.6,5.1,6.7,6.7})==221)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,1.1,3.2,4.234081562814888,6.851261387881998,6.7,4.234081562814888})==173)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,8.527593815012729,6.7,4.234081562814888,1.5,2.4936669865395658})==264)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,8.527593815012729,6.7,7.1,1.5,2.4936669865395658})==303)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,-4.6,-2.8396588982482287,5.2,6})==111)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,-3.4,-4.6,-6,-5.1,-6,-4.6,-4.6})==159)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5,0,1})==196)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,2.4,-5.2,-6})==83)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,6.7,7.4145549533273405,6.7})==259)){ tests_passed++; } total_tests++;

    if((sum_squares({6.28,-5.1,1.566848906209739,-3.7,4.6,5.1,6})==184)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-4.716809497407311,2.9,4.129563514953585,4.967726321372912,4.6,5.1,6.7,4.6})==215)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-8.09,-4.716809497407311,2.9,4.129563514953585,4.967726321372912,4.6,5.1,6.7,4.6})==275)){ tests_passed++; } total_tests++;

    if((sum_squares({-6,1,2,-4.6,-5.1,-6})==118)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,4.234081562814888,6.851261387881998,6.7,2.9})==146)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,1.1,3.0179751175777536,4.234081562814888,6.851261387881998,6.7,4.234081562814888,4.234081562814888,6.7})==247)){ tests_passed++; } total_tests++;

    if((sum_squares({4.164996313633066,1,4,3.4,5.1,6,3.4,4})==162)){ tests_passed++; } total_tests++;

    if((sum_squares({0.061283494508126014,1.5,1.1,3.2,4.234081562814888,6.851261387881998,8.634480834505068,6.7,4.234081562814888})==254)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,3.975992715202202,6.851261387881998,6.7,2.9,2.9})==146)){ tests_passed++; } total_tests++;

    if((sum_squares({-0.6763327164350088,2.5,-3.7,-4.6,-2.8396588982482287,6})==74)){ tests_passed++; } total_tests++;

    if((sum_squares({4.234081562814888,0.1,5.5,-3.7,3.2,4.6,5.1,6.7,6.7,6.7})==295)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,1.1,3.2,4.234081562814888,6.851261387881998,3.975992715202202,4.6})==140)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,8.527593815012729,6.7,2.230942080154173,4.234081562814888,1.5,2.4936669865395658})==273)){ tests_passed++; } total_tests++;

    if((sum_squares({0.061283494508126014,2.5,-3.7,4.6,5.1,6})==116)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,3.499530218204873,3.975992715202202,6.851261387881998,6.7,2.9,2.9})==162)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-8.09,-4.716809497407311,2.9,4.129563514953585,4.967726321372912,3.499530218204873,5.1,6.7,4.6})==266)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,3.499530218204873,1.275713502619218,3.975992715202202,6.851261387881998,6.7,2.9,2.9})==166)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,8.527593815012729,6.7,2.230942080154173,4.234081562814888,1.5,2.4936669865395658,4.234081562814888})==298)){ tests_passed++; } total_tests++;

    if((sum_squares({8.634480834505068,1,-5,2,-3.4,-3.2512040012099304,-3.2596671445918055,-6,-3.2512040012099304})==183)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,3.4,-4.6,5.1,6,6,6})==181)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,5.5,2.71,3.2,4.6,5.1,9.283640269180903,6.7})==272)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.5091429749847305,3.6,7.1,-6.5})==155)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,-3.7,-4.6,-2.8396588982482287,5.2,6})==102)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.5,-3.7,4.6,5.1,-1.5,6})==108)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,4.6,5.147008615293544,6,5.1,6})==188)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,3.975992715202202,6.7,2.230942080154173,4.234081562814888,1.5,2.4936669865395658,4.234081562814888})==233)){ tests_passed++; } total_tests++;

    if((sum_squares({2,-3.4,-4.6,-6,-5.1,-6,-4.6,-4.6})==158)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,-3.7,-4.6,-2.8396588982482287,5.2,6,-4.6})==118)){ tests_passed++; } total_tests++;

    if((sum_squares({-3.2596671445918055,0.1,1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,6.7,7.4145549533273405,6.7})==268)){ tests_passed++; } total_tests++;

    if((sum_squares({4.5,2.034150193392351,0.1,1.5,2.9,3.2,4.234081562814888,3.499530218204873,6.7})==154)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,2,-3.4,9.283640269180903,-3.2596671445918055,-6})==160)){ tests_passed++; } total_tests++;

    if((sum_squares({4,3.4,5.1,6,2})==108)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,-3.4,-4.6,-5.1,-6,2})==95)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,6})==74)){ tests_passed++; } total_tests++;

    if((sum_squares({4.5,0.3244010923433097,1.5,2.9,3.2,4.234081562814888,6.851261387881998,6.7})==178)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,4.6,5.147008615293544,6,5.1,6,2.5})==197)){ tests_passed++; } total_tests++;

    if((sum_squares({4,3.4,4.129563514953585,6,2})==97)){ tests_passed++; } total_tests++;

    if((sum_squares({2,-3.4,-4.6,-5.1,-6})==90)){ tests_passed++; } total_tests++;

    if((sum_squares({2,-3.4,-4.6,-6,3,-5.1,-6,-4.6,-4.6})==167)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,5.2,6,1.1})==114)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-14.04,5.5,2.71,3.2,4.6,5.1,9.283640269180903,6.7})==468)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-5,2,-3.4,-2.7,-3.2596671445918055,0,-6,2,2})==96)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-3,2,-3.4,-4.6,0,-5.1,-6,2})==104)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,-3.7,4.234081562814888,-4.716809497407311,5,-6.5,1.1})==124)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,-3.7,2.034150193392351,-4.6,-2.8396588982482287,5.2,6})==111)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-4,-5.2,-4.09005682631597,-6})==131)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,1,3.5,4,4.5,5,-2.5,2.5})==200)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,3.4,2.034150193392351,-4.6,-2.8396588982482287,5.2})==82)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,4.6,5.147008615293544,5.1,6})==152)){ tests_passed++; } total_tests++;

    if((sum_squares({3,3.4,4.129563514953585,6,2})==90)){ tests_passed++; } total_tests++;

    if((sum_squares({2,-3.4,-6.773948579844583,-6,-5.1,-6,-4.6,-2.98440779706064,-6.773948579844583})==202)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-8.09,-4.716809497407311,2.9,4.129563514953585,4.967726321372912,3.499530218204873,5.1,4.6})==217)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,-8.09,2.71,0.69,1.62,-9.99,6.28,1.62,-8.09})==292)){ tests_passed++; } total_tests++;

    if((sum_squares({4.234081562814888,0.1,5.5,-3.7,3.2,4.6,5.1,6.7,6.7,6.7,5.5})==331)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,1.1,3.2,4.234081562814888,6.851261387881998,6.7,3.2})==164)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,5,-6.5,6,1.1})==123)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-4,-3.4,-4.6,-5.1,-6})==103)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,2.71,0.69,1.62,-9.99,3.5,-14.04})==323)){ tests_passed++; } total_tests++;

    if((sum_squares({1,4,3.4,5.1,3.4})==85)){ tests_passed++; } total_tests++;

    if((sum_squares({0.061283494508126014,1.5,1.1,3.2,6.851261387881998,8.634480834505068,6.7,4.234081562814888,6.851261387881998})==278)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,-6.5,2.4936669865395658,4.234081562814888,6.851261387881998,8.527593815012729,6.7,4.487285882920272,1.5})==292)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,4.234081562814888,5,1.5483316324617946,-4.716809497407311,5,-6.5,1.1,4,1.1})==177)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-1,2,3.4,-8.09,-4.6,5.1,6,6,5.1})==246)){ tests_passed++; } total_tests++;

    if((sum_squares({6.28,1.566848906209739,-3.7,4.6,5.1,6,-3.7})==168)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,2,-3.4,-2.7,-3.2596671445918055,-6})==87)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-1,3,3.4,-8.09,-4.6,5.1,6,6,5.1})==251)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,4.234081562814888,5,-4.716809497407311,5,4.164996313633066,1.1,1.1})==146)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,-3.7,4.234081562814888,-4.716809497407311,5,-6.5,3.890157601890744})==136)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,3.5,-6})==90)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,5.5,2.71,3.2,4.6,5.1,6.7})==172)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,6.7,7.4145549533273405,6.7,6.7})==308)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-4.716809497407311,2.9,4.129563514953585,4.967726321372912,4.6,5.1,6.7,4.6,4.967726321372912})==240)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,6,-3.7,4.234081562814888,5,-4.716809497407311,5,-6.5,1.1,1.1})==193)){ tests_passed++; } total_tests++;

    if((sum_squares({1,3.4,2.7894813137255015,5.1,6})==98)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,2.964251544523867,4,4.5,5,0,1,0})==189)){ tests_passed++; } total_tests++;

    if((sum_squares({1,4,-5,2,-3.4,-2.7,-3.2596671445918055,0})==68)){ tests_passed++; } total_tests++;

    if((sum_squares({1,3.4,-4.6,5.1,6,6,6,-4.6})==193)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,-3.7,4.234081562814888,-4.716809497407311,5,-6.5,1.1,4.234081562814888})==149)){ tests_passed++; } total_tests++;

    if((sum_squares({4.164996313633066,1,4,3.4,6.851261387881998,5.1,6,3.4,4,6,1})==248)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-5,-3.4,-2.7,-3.2596671445918055,0,-6})==84)){ tests_passed++; } total_tests++;

    if((sum_squares({-6,-4.819527226651202,1,2,-3.4,-4.6,-5.1,-6})==143)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5,4})==211)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-5.2,-6,-5.2})==124)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-5.2,-6,-6})==119)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,1.1,3.2,4.234081562814888,6.851261387881998,6.7,-2.5091429749847305})==152)){ tests_passed++; } total_tests++;

    if((sum_squares({4.234081562814888,0.1,4.715583291999385,-3.7,3.2,-3.3629337697813977,4.6,5.1,6.7,6.7})==244)){ tests_passed++; } total_tests++;

    if((sum_squares({4.5,2.034150193392351,0.1,1.5,2.9,3.2,3.287852215132159,3.499530218204873,6.7})==145)){ tests_passed++; } total_tests++;

    if((sum_squares({4,2,-3.4,-4.6,-5.1,-6,2})==110)){ tests_passed++; } total_tests++;

    if((sum_squares({-6,1,2,-3.4,-4.6,-5.1115162115352})==91)){ tests_passed++; } total_tests++;

    if((sum_squares({-6,1,2,-3.4,0.5,-5.1,-6})==112)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,3.890157601890744,3.2,3.0021567711294432,5.1,6.7})==138)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-4.6,0.6212597321029525,5.2,6,5.2,1.1})==142)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-8.09,-4.716809497407311,2.9,4.129563514953585,4.967726321372912,5.1,4.6})==201)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,4.6,5.147008615293544,6,5.1,6,4.6})==213)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,3.499530218204873,1.275713502619218,3.975992715202202,6.851261387881998,6.7,2.9,2.9,6.851261387881998})==215)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,6.409972729146418,6.851261387881998,3.2,4.6,2.4936669865395658,3.287852215132159,6.7,6.7})==263)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.840256743666684,1.1,3.2,4.234081562814888,6.851261387881998,6.7,3.2})==164)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,-8.09,2.71,0.69,1.5224939717635053,-9.99,6.28,1.62,-8.09})==292)){ tests_passed++; } total_tests++;

    if((sum_squares({3,3.4,6,2})==65)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-4.716809497407311,5,-6.5,6,1.1})==130)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,4.234081562814888,5,-4.716809497407311,5,4.164996313633066,1.1,1.1,1.1})==150)){ tests_passed++; } total_tests++;

    if((sum_squares({-4.1487020521034745,0.1,1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,6.7,7.4145549533273405,6.7})==275)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-8.09,-4.716809497407311,2.9,4.129563514953585,4.967726321372912,3.499530218204873,5.1,6.7,7.1,4.6})==330)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,8.527593815012729,6.7,4.234081562814888,1.5,2.4936669865395658,0.584204380758542,6.7})==314)){ tests_passed++; } total_tests++;

    if((sum_squares({-0.6763327164350088,2.5,-3.7,-4.6,-2.8396588982482287,6,6,6})==146)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,-3.7,-5.2,-6})==79)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-2.8396588982482287,2.4936669865395658,4.234081562814888,6.851261387881998,0.7284547363306774,6.7})==142)){ tests_passed++; } total_tests++;

    if((sum_squares({3.074745760163279,1.1,2.5,-3.7,-4.716809497407311,5,-6.5,6})==151)){ tests_passed++; } total_tests++;

    if((sum_squares({1,3,2,-4.1487020521034745,3.4,-4.6,0.5,6,6})==135)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-7.77060807675203,-4.716809497407311,2.9,4.129563514953585,4.967726321372912,4.6,5.1,6.7,4.6,-4.716809497407311})==276)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-14.04,5.5,2.71,3.2,4.6,5.1,8.607004238120686,6.7,0.1})==450)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.5,-3.7,-1.0030764293945094,4.6,5.1,-1.5,6})==109)){ tests_passed++; } total_tests++;

    if((sum_squares({4.5,2.034150193392351,0.1,1.5,2.9,3.2,3.287852215132159,3.499530218204873,6.7,3.287852215132159,4.5})==186)){ tests_passed++; } total_tests++;

    if((sum_squares({-0.8317460690765607,3.787597101449791,1.5,1.1,3.2,4.234081562814888,6.851261387881998,3.975992715202202,4.6})==155)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-8.09,-4.716809497407311,2.9,4.129563514953585,4.967726321372912,3.499530218204873,5.1,4.6,4.6})==242)){ tests_passed++; } total_tests++;

    if((sum_squares({4.234081562814888,0.1,5.5,5.5,-3.7,3.2,4.6,5.1,6.7,6.7,6.7,5.5,5.1})==403)){ tests_passed++; } total_tests++;

    if((sum_squares({4.5,0.1,1.5,2.9,3.2,6.851261387881998,-6.773948579844583,6.7,4.234081562814888})==214)){ tests_passed++; } total_tests++;

    if((sum_squares({-6,3.0179751175777536,1,-3.4,0.5,-5.1,-6})==124)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,-8.09,2.71,0.6991319764835219,1.62,-9.99,6.28,1.62,-8.09,6.28})==341)){ tests_passed++; } total_tests++;

    if((sum_squares({0,4,3.4,5.1,6,3.4})==120)){ tests_passed++; } total_tests++;

    if((sum_squares({1,3,2,-4.1487020521034745,3.4,3.6,0.5,6,6,-4.1487020521034745,6})==187)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,6.7,5.5,-6.5,3.2,4.6,-9.99,5.1,6.7,6.7})==378)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-7.77060807675203,-4.716809497407311,2.9,4.129563514953585,4.967726321372912,4.715583291999385,5.1,6.7,4.6,-4.716809497407311})==276)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-2.9445611166646914,4.6,5.1,6,-1.1})==112)){ tests_passed++; } total_tests++;

    if((sum_squares({3.4,4.129563514953585,6,2,2})==85)){ tests_passed++; } total_tests++;

    if((sum_squares({0.061283494508126014,1.5,1.1,3.5445903520942394,4.234081562814888,6.851261387881998,8.634480834505068,6.7,4.234081562814888})==254)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-4.276874536373084,-5.2,-9.99,-6,-9.99,-9.99})==358)){ tests_passed++; } total_tests++;

    if((sum_squares({-0.6763327164350088,2.5,-3.7,-4.6,-4.6,-2.8396588982482287,6,6,6,6})==198)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5,4,4})==227)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-3.7,-4.6,-4.276874536373084,-5.2,-9.99,-6})==187)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.276480747131856,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5,3.5})==211)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,4.234081562814888,5,-4.716809497407311,5,-6.5,1.5,1.1})==157)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,3.6,7.1,-6.5,-1.5})==156)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,8.527593815012729,9.895068822944094,6.7,7.1,0.5,2.4936669865395658})==400)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-2.5091429749847305,1.5,2.9,-2.5091429749847305,3.2,4.234081562814888,3.729477873601854,6.7})==128)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,2.71,9.895068822944094,3.2,4.6,5.1,6.7,6.7})==285)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,-8.09,0.69,1.5224939717635053,-9.99,6.28,1.62,-8.09})==283)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,4,-5.2,-6})==99)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-3.7,4.234081562814888,5,-4.716809497407311,5,-6.5,1.1,1.1})==148)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,1.1,3.2,-1.0030764293945094,4.234081562814888,6.851261387881998,6.7,-2.5091429749847305})==153)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-5,2,-3.4,-3.2596671445918055,0,-6,2,2})==92)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,-3.4,0.5,-5.1,-6})==76)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-4.716809497407311,5,4.234081562814888,-6.5,6,1.1})==155)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,1.1,3.2,4.234081562814888,6.851261387881998,6.7})==147)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.832781453766651,-2.9445611166646914,4.6,5.1,2.964251544523867,6,-1.1})==121)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,6.851261387881998,3.2,3.6993494219923884,3.287852215132159,6.7,6.7})==196)){ tests_passed++; } total_tests++;

    if((sum_squares({-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-0.5,0,0.5,1,1.5,2,2.5,1,3.5,4,4.5,5,-2.5,2.5})==174)){ tests_passed++; } total_tests++;

    if((sum_squares({2.71,1.5,2.9,3.499530218204873,1.275713502619218,3.975992715202202,3.499530218204873,6.7,2.9,2.9})==141)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-1,2,3.4,-8.09,-4.6,5.1,6,6,5.1,-8.09})==310)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,2.4936669865395658,6.074143235398845,6.851261387881998,6.7,7.4145549533273405,0.09750769450579759,6.7})==284)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5,0,0.584204380758542,3,1})==206)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,2.5,3,3.5,4,4.5,5,5.5,6})==181)){ tests_passed++; } total_tests++;

    if((sum_squares({-6,3.0179751175777536,1,-3.4,0.5,-5.1,-6,-5.1})==149)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,-4.276480747131856,7.1,-6.5,-1.5,-1.9831292900001547,-2.7})==161)){ tests_passed++; } total_tests++;

    if((sum_squares({1,4,3.4,5.1,6.373235401692621,3.4})==134)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,5.5,-4.6,5.1,6})==129)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5,0,0.584204380758542,3,1,-1})==207)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,-8.09,2.71,0.6991319764835219,1.62,-6.5,-9.99,6.28,1.62,-8.09,6.28})==377)){ tests_passed++; } total_tests++;

    if((sum_squares({3.4,6,2})==56)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-4,-2.9445611166646914,-5.2,-4.09005682631597,-6})==135)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-5,-3.4,0,-2.7,-3.2596671445918055,0,-6})==84)){ tests_passed++; } total_tests++;

    if((sum_squares({4.234081562814888,0.1,4.8800688925364994,5.5,-3.7,3.2,4.6,5.1,6.7,6.7,6.7,5.1})==356)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-4.716809497407311,2.9,4.129563514953585,4.246063504872289,4.6,5.014482212889489,6.7,4.6,4.967726321372912})==240)){ tests_passed++; } total_tests++;

    if((sum_squares({4.5,0.3244010923433097,1.5,4.914341801876925,2.9,3.2,4.234081562814888,6.851261387881998,-4.1487020521034745,6.7})==219)){ tests_passed++; } total_tests++;

    if((sum_squares({-6,1,2,-3.4,-4.6,6.851261387881998})==115)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,2,4.5,-4.6,0,-5.1,-6,2})==115)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-4.716809497407311,2.9,4.129563514953585,4.246063504872289,5.014482212889489,6.7,4.6,4.6,4.967726321372912})==240)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-4.6,0.6212597321029525,5.2,6,5.2,5.2})==174)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,3.2,6.851261387881998,-6.773948579844583,6.7,4.234081562814888})==180)){ tests_passed++; } total_tests++;

    if((sum_squares({0.061283494508126014,1.5,3.2,6.851261387881998,8.634480834505068,6.7,4.234081562814888,6.851261387881998})==274)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,6.7,7.4145549533273405,6.7,1.5})==262)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,2,2.5,1,3.5,4,4.5,5,-2.5,2.5})==196)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,8.527593815012729,6.7,4.234081562814888,1.5,2.4936669865395658,0.584204380758542,6.7,0.584204380758542})==315)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,3.5,4,5,0,1})==171)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-2.5091429749847305,1.5,2.9,-2.5091429749847305,3.499530218204873,3.2,3.729477873601854,6.7})==119)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,6.7,5.5,-6.5,3.2,4.6,4.487285882920272,5.1,6.7})==273)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-1,4.841112510159845,3,3.4,-8.09,-4.6,5.1,6,6,5.1})==276)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-4.716809497407311,2.9,4.129563514953585,4.967726321372912,4.6,5.1,6.7,4.967726321372912})==215)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,4.487285882920272,2.9,4.234081562814888,6.851261387881998,8.527593815012729,6.7,2.230942080154173,4.234081562814888,1.5,2.4936669865395658,4.234081562814888})==314)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.716809497407311,5,5.2,-3,5.2})==144)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-4.716809497407311,5,4.234081562814888,-6.5,6,1.1,2.5})==164)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,8.527593815012729,4.234081562814888,1.5})==207)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,3.6,1.840256743666684,7.1,-6.5,-1.5})==160)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5,0,0.584204380758542,3,1,-1,5})==232)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,0.1,-8.09,-4.716809497407311,2.9,4.129563514953585,4.967726321372912,3.499530218204873,5.1,6.7,4.164996313633066,4.6})==292)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,2.9,4.234081562814888,6.851261387881998,8.527593815012729,4.234081562814888,1.5})==194)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-2.5091429749847305,1.5,2.9,-2.5091429749847305,3.2,4.234081562814888,3.729477873601854,6.7,6.7})==177)){ tests_passed++; } total_tests++;

    if((sum_squares({1,4,3.4,3.729477873601854,6.373235401692621,3.4,6.373235401692621})==163)){ tests_passed++; } total_tests++;

    if((sum_squares({2.71,1.5,2.9,3.499530218204873,1.275713502619218,3.975992715202202,4.193079181251758,6.7,2.9})==141)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,-3.4,-4.6,1.5,-6})==73)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,-4.6,3.5739448781811447,-2.8396588982482287,5.2,6})==127)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.4936669865395658,3,3.5,4,4.5,5,0,1})==196)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,5,2.5,-3.7,4.6,5.147008615293544,5.1,6})==177)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-0.8413477856752207,-2.9445611166646914,4.6,5.1,6,-1.1})==112)){ tests_passed++; } total_tests++;

    if((sum_squares({1,4,-5,2,-3.4,-2.7,-3.2596671445918055,7,0})==117)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,3.4,-4.6,5.1,2,6})==113)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,4.6,5.570054272140174,6,5.1,4.6})==177)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,4.6,5.570054272140174,6,5.1,4.6,5.570054272140174})==213)){ tests_passed++; } total_tests++;

    if((sum_squares({2,-3.4,-4.6,-6,-5.1,-6,-4.6,-4.6,-6})==194)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,6.7,7.4145549533273405,6.7,6.7,6.851261387881998})==357)){ tests_passed++; } total_tests++;

    if((sum_squares({2.71,1.7753151854022948,2.9,3.499530218204873,1.275713502619218,3.975992715202202,4.193079181251758,6.7,2.9})==141)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-8.09,-4.716809497407311,2.9,4.129563514953585,4.967726321372912,4.6,5.1,6.7})==250)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,-1.1914858495003662,0,-1.5,-2.7,3.6,7.1,7.1})==184)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,3.4,1.8071929743812858,5.1,3.4})==92)){ tests_passed++; } total_tests++;

    if((sum_squares({6.28,1.566848906209739,4.6,5.1,6,-3.7})==159)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-2.0796883804736686,-2.910512079602772,-2.5091429749847305,3.6,7.1,-6.5,-2.5091429749847305})==166)){ tests_passed++; } total_tests++;

    if((sum_squares({4.5,0.1,1.5,0.052289320520992534,2.9,4.234081562814888,6.851261387881998,6.7})==163)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-1,3,3.4,-8.09,-4.6,6,6,5.1})==215)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,4.234081562814888,5,-4.716809497407311,-6.5,1.1})==128)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5,3.5})==207)){ tests_passed++; } total_tests++;

    if((sum_squares({6.28,-3.7,4.6,5.1,6,-3.7,-3.7})==173)){ tests_passed++; } total_tests++;

    if((sum_squares({2,-3.4,-6.773948579844583,-6,-5.1,-6,-4.6,-2.98440779706064,-6.773948579844583,2})==206)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,3.499530218204873,1.275713502619218,3.975992715202202,6.851261387881998,6.7,3.172195971968054,2.9,2.9,6.851261387881998})==231)){ tests_passed++; } total_tests++;

    if((sum_squares({4,1,2,-3.4,9.283640269180903,-3.2596671445918055,-6})==175)){ tests_passed++; } total_tests++;

    if((sum_squares({3,3.4,2,3})==38)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,3.499530218204873,1.1237040199009254,3.975992715202202,6.851261387881998,6.7,2.9,2.9})==166)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,3.4,5.1,3.4,3.4})==104)){ tests_passed++; } total_tests++;

    if((sum_squares({-0.6763327164350088,-1,-3.7,-4.6,-2.8396588982482287,6})==66)){ tests_passed++; } total_tests++;

    if((sum_squares({4.5,0.1,1.5,2.9,3.2,2.9,6.851261387881998,-6.773948579844583,6.7,-6.773948579844583,6.7})==283)){ tests_passed++; } total_tests++;

    if((sum_squares({6.28,1.566848906209739,-3.7,-4.09005682631597,5.1,6,-3.7})==159)){ tests_passed++; } total_tests++;

    if((sum_squares({6.28,1.566848906209739,-3.7,4,4.6,5.1,6,-3.7})==184)){ tests_passed++; } total_tests++;

    if((sum_squares({-3.2596671445918055,0.1,1.5,2.9,2.4936669865395658,-3.2596671445918055,6.851261387881998,6.7,7.4145549533273405,6.7})==252)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,2,-3.4,1,-2.7,-3.2596671445918055,-6})==88)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-3.99789403272053,5.2,6,1.1})==123)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,3.51395547222391,5.1,6})==107)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-5,2,-3.4,0,-6,2,2})==83)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.5,5.310292523850798,-4.6295639817413345,-1.0030764293945094,4.6,5.1,-1.3088872539122631,6})==152)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-4,-5.2,-4.09005682631597,-6,2.5})==140)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-5,2,-3.4,-3.2596671445918055,-1.1,-6,2,2})==93)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3,-3.7,-4.6,6})==83)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-1,3,-4.33753565336939,3.4,-8.09,-4.6,5.1,6,6,5.1})==267)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,5.1,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5})==222)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,-3.7,-5.741411425705513,5,-6.5,1.1,4.234081562814888})==133)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,2.9,2.4936669865395658,6.851261387881998,8.375338782048383,6.7,2.230942080154173,4.234081562814888,1.5,2.4936669865395658,4.234081562814888})==273)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,5.1,-3,-2.5,-2,-1.5,-1,-0.5,-3,0.5,1,1.5,2,2.5,3,3.5,4,5.183640582073313,5})==242)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.832781453766651,0.6991319764835219,-2.9445611166646914,4.6,5.1,2.964251544523867,6,-1.1})==122)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-3.7,4.234081562814888,5,-4.716809497407311,3.14,5,-6.5,4.841112510159845,1.1})==185)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,1.1,3.2,4.234081562814888,6.851261387881998,1.1960864681930536,6.7,-2.5091429749847305})==156)){ tests_passed++; } total_tests++;

    if((sum_squares({0.061283494508126014,1.5,1.1,3.2,0.6212597321029525,6.851261387881998,8.634480834505068,6.7,4.234081562814888,6.7})==279)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-2.8396588982482287,5.2,6,-2.8396588982482287})==118)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-2.5091429749847305,1.5,2.9,-0.8413477856752207,-2.5091429749847305,3.499530218204873,3.2,3.729477873601854,6.7})==119)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5,8.042844849551145,6})==227)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,3.2,4.234081562814888,6.851261387881998,6.7})==144)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,-3.7,-5.2,-6,2.5})==88)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-4.716809497407311,2.9,4.129563514953585,4.246063504872289,0.14826026329246098,4.6,5.014482212889489,6.7,4.6,4.967726321372912})==241)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-1,2,3.4,-8.09,-4.6,5.1,6,6,5.1,5.1})==281)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,3.380466316535683,-0.8413477856752207,-2.9445611166646914,4.6,5.1,6,-1.1,-0.8413477856752207})==128)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-3.330424793270251,-5,2,-3.4,-2.7,-3.2596671445918055,-6,1})==98)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,1.275713502619218,3.975992715202202,6.851261387881998,6.7,3.172195971968054,2.9,2.9,6.851261387881998})==215)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,1.1,3.2,4.234081562814888,3.6155552298103606,6.851261387881998,6.7,-2.5091429749847305,6.851261387881998})==217)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,0.5548524556523429,2.9,3.975992715202202,6.851261387881998,2.9,2.9})==94)){ tests_passed++; } total_tests++;

    if((sum_squares({-6,-3,1,2,-3.4,0.5,-6,0.5,0.5})==98)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,4.6,5.147008615293544,5.1})==116)){ tests_passed++; } total_tests++;

    if((sum_squares({4.234081562814888,0.1,5.5,5.5,-3.7,3.2,4.6,5.1,6.7,6.7,6.7,5.5,5.1,5.1})==439)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.211013714786509,-3.7,4.6,5.147008615293544,5.1})==116)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,4.129563514953585,4.967726321372912,4.6,5.1,6.7,4.6})==199)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,2,3.4,-8.09,-4.6,5.1,6,6,6})==245)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,2.71,2.4936669865395658,4.234081562814888,6.851261387881998,8.527593815012729,6.7,4.234081562814888,1.5,2.4936669865395658,0.584204380758542,6.7})==314)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,-3.7,-4.6,-2.8396588982482287,6})==66)){ tests_passed++; } total_tests++;

    if((sum_squares({2.71,1.5,2.9,3.499530218204873,1.275713502619218,3.975992715202202,5.080474606366394,6.7,2.9})==152)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,2.9,5.1,6})==90)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.680748699004898,-6})==74)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,3.074745760163279,5.570054272140174,6,5.1,4.6})==168)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-5,2,-2.7,-3.2596671445918055,-6})==79)){ tests_passed++; } total_tests++;

    if((sum_squares({0.9670100705040044,6.409972729146418,6.851261387881998,3.2,4.6,9.283640269180903,2.4936669865395658,3.287852215132159,6.7,6.7})==363)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-4.6,3.5,-6})==81)){ tests_passed++; } total_tests++;

    if((sum_squares({1,3,2,-4.1487020521034745,3.4,-4.6,0.5,3.6617590099399284,6,6})==151)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,1,4,3.4,6})==85)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-4.716809497407311,0.06472360550567396,4.129563514953585,4.967726321372912,4.6,5.1,6.7,4.6,4.967726321372912})==232)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-4.716809497407311,2.9,3.2,4.967726321372912,4.6,5.1,6.7,1.5})==185)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,2.9,2.4936669865395658,6.851261387881998,8.375338782048383,1.7753151854022948,6.7,2.230942080154173,4.234081562814888,1.5,2.4936669865395658,4.234081562814888})==277)){ tests_passed++; } total_tests++;

    if((sum_squares({4,3.4,5.1,6,2,2})==112)){ tests_passed++; } total_tests++;

    if((sum_squares({1,3,2,-4.1487020521034745,3.4,3.6,0.5,6,6,-4.1487020521034745,6,3.4})==203)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-5.2,-6,2.5})==92)){ tests_passed++; } total_tests++;

    if((sum_squares({1,3.4,-4.6,5.1,4.8800688925364994,6,6,-4.6,-4.6})==198)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3.4,-3.4,-5,-4.6,-6,3,-5.1,-6,-4.6,-4.6})==208)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,5.5,3.2,4.6,5.1,6.7,6.7})==212)){ tests_passed++; } total_tests++;

    if((sum_squares({-3.2596671445918055,0.1,1.5,2.9,2.228516548185696,4.234081562814888,7.503336396687594,6.7,7.4145549533273405,6.7})==283)){ tests_passed++; } total_tests++;

    if((sum_squares({1,6,3,2,-4.1487020521034745,3.4,1.1237040199009254,-4.6,0.5,6})==139)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,-8.09,2.71,0.69,1.62,6.28,1.62,-8.09,2.71})==220)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,2.9,4.234081562814888,6.851261387881998,8.527593815012729,4.234081562814888,1.5,2.9})==203)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,-3.7,-4.6,-2.8396588982482287,1.566848906209739,6})==70)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-14.04,-4.6,-3.99789403272053,5.2,6,1.1})==319)){ tests_passed++; } total_tests++;

    if((sum_squares({8.607004238120686,1.1,2.5,-3.7,-4.716809497407311,5,-6.5,6})==216)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-3.4,0,-2.7,-3.2596671445918055,0,-6})==83)){ tests_passed++; } total_tests++;

    if((sum_squares({2,-3.4,-6.773948579844583,-6,-3.479116172840631,-6,-4.6,-2.98440779706064,8.375338782048383,-6.773948579844583,2})==271)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-3.7,-4.6,-4,-5.2,-4.09005682631597,-6,2.5})==131)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,2,-3.4,9.283640269180903,-3.2596671445918055,-6,2})==164)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,4.234081562814888,6.851261387881998,6.7,0.12719557110029214,3.263069699177953,6.851261387881998})==203)){ tests_passed++; } total_tests++;

    if((sum_squares({-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-0.5,0,0.5,1,1.5,2,2.5,1,3.5,4,4.5,5,-2.5,2.5,4})==190)){ tests_passed++; } total_tests++;

    if((sum_squares({1,3.4,5.1,4.8800688925364994,6,6,-4.6,-4.6})==182)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,2.034150193392351,0,-2.0796883804736686,-2.910512079602772,-2.5091429749847305,3.6,7.1,-6.5,-2.5091429749847305})==175)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-4.716809497407311,2.9,4.129563514953585,4.967726321372912,4.6,5.1,6.7,4.967726321372912,2.9})==224)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,-1.3088872539122631,3,3.5,4,4.5,5})==187)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,3.074745760163279,5.570054272140174,6,5.1,4.532971210865655,4.6})==193)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,6.409972729146418,2.9167159120600434,6.851261387881998,3.2,4.6,2.4936669865395658,3.287852215132159,6.7,6.7})==272)){ tests_passed++; } total_tests++;

    if((sum_squares({6,2})==40)){ tests_passed++; } total_tests++;

    if((sum_squares({2,-6.773948579844583,-6,-3.479116172840631,-6,-4.6,-6.773948579844583,2})==177)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,5,-4.6,5.2,6})==117)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-1,2,3.4,5,-8.09,-4.6,5.1,7,6,5.1,5.1})==319)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-2.910512079602772,-2.5091429749847305,3.6,7.1,-6.5,-2.5091429749847305})==162)){ tests_passed++; } total_tests++;

    if((sum_squares({2.71,1.7753151854022948,2.9,3.499530218204873,1.275713502619218,3.975992715202202,4.193079181251758,6.7,2.1196134413303294})==141)){ tests_passed++; } total_tests++;

    if((sum_squares({3.074745760163279,1.1,2.5,-3.7,4.193079181251758,-4.716809497407311,5,-6.5,6})==176)){ tests_passed++; } total_tests++;

    if((sum_squares({2.71,1.5,2.9,3.499530218204873,1.275713502619218,3.975992715202202,5.080474606366394,6.7,2.9,2.9})==161)){ tests_passed++; } total_tests++;

    if((sum_squares({4.5,2.034150193392351,0.1,1.5,2.9,3.2,3.287852215132159,6.240762858871131,3.287852215132159,4.5})==170)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,1.6394323213396855,-3.7,4.234081562814888,-4.716809497407311,5,-6.5,3.890157601890744})==140)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,8.527593815012729,9.552869613565447,2.230942080154173,4.234081562814888,1.9034097986764364,2.4936669865395658})==324)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,5.1,-3,-2.5,2,-2,-1.5,-1,-0.5,-3,0.5,1,1.5,2,2.5,3,3.5,4,5.183640582073313,5})==246)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,6.7,2.9})==155)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-5,-3.4,0,-2.7,-3.2596671445918055,-1,-6,-3.4})==94)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,5.1,-3,-2.5,2,-2,-1.5,-1,-0.5,-3,1.5277171248034649,0.5,1,1.5,2,2.5,3,3.5,4,5.183640582073313,5})==250)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,5.1,-3,-2.5,2,-2,-1.5,2,-1,-0.5,-3,1.5277171248034649,0.5,1.5,2,2.5,3,3.5,4,5.183640582073313,5})==253)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,2,1.5,2,2.5,3.5,4,4.5,5,5.5,6})==176)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-3.7,-6.198816864183874,-4.276874536373084,-5.2,-9.99,-6})==207)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4.967726321372912,-6.773948579844583,-6,-3.479116172840631,-6,-4.6,-6.773948579844583,2})==202)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-5.2,-6,8.527593815012729,2.5})==173)){ tests_passed++; } total_tests++;

    if((sum_squares({3,4,3.4,5.1,6,3.4})==129)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,2,3.5,4,4.5,5,3.5})==215)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,4.046570157069361,-4.6,5.1,6,6,-3.081504434169668,6})==199)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,6.879000473686945,4.6,5.147008615293544,6,5.1,6,-3.7})==246)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,3.4,1.8071929743812858,5,-4.6,3.4})==97)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-5.2,-6,-4.33753565336939,-6,-5.2})==160)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,2,4.5,-4.6,0,-5.1,-6,2,-2})==119)){ tests_passed++; } total_tests++;

    if((sum_squares({4.2,0,-1.5,-2.7,3.6,7.1,1,-6.5,-1.5,-1.5})==149)){ tests_passed++; } total_tests++;

    if((sum_squares({4.5,2.034150193392351,0.1,1.5,2.9,3.2,3.287852215132159,6.240762858871131,3.287852215132159,4.5,0.1})==171)){ tests_passed++; } total_tests++;

    if((sum_squares({0,4,3.4,5.1,6,3.4,4})==136)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.5,5.310292523850798,-4.6295639817413345,-1.0030764293945094,4.6,5.1,-1.3088872539122631,0.06472360550567396,6})==153)){ tests_passed++; } total_tests++;

    if((sum_squares({4.234081562814888,0.1,4.715583291999385,-3.7,3.2,-3.3629337697813977,4.6,5.1,6.7,6.7,6.7})==293)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,-3.4,-5.1,-6,1,1})==77)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,-3.7,-4.716809497407311,-6.5,6,1.1,2.5})==119)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,2,3.4,5,-8.09,-4.6,5.1,-11.746046942732079,7,6,5.1,5.1,-4.6})==456)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,2.9,4.234081562814888,6.851261387881998,8.527593815012729,4.234081562814888,1.5,4.234081562814888})==219)){ tests_passed++; } total_tests++;

    if((sum_squares({1,4.442220245176467,4,3.4,5.1})==94)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-0.8413477856752207,-2.9445611166646914,4.6,5.1,6})==111)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,3.2,4.234081562814888,3.729477873601854,6.7,0.1})==121)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,4.3240944046206335,2.5,-4.716809497407311,5,4.234081562814888,-6.5,6,1.1,2.5})==189)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,-3.4,2.964251544523867,-6,-5.1,-6,-4.6,-4.6,-4.6})==168)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.211013714786509,2.9,4.129563514953585,4.967726321372912,4.6,5.1,6.7,4.6})==208)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-8.09,-4.716809497407311,2.9,4.129563514953585,4.967726321372912,3.499530218204873,5.1,4.6,4.6,4.6})==267)){ tests_passed++; } total_tests++;

    if((sum_squares({2.71,1.7753151854022948,2.9,3.499530218204873,1.275713502619218,3.975992715202202,4.193079181251758,6.7,2.9,2.9})==150)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,4.234081562814888,5,-4.716809497407311,5,4.164996313633066,1.1,1.1})==137)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,4.234081562814888,5,-4.716809497407311,5,4.164996313633066,1.1,1.1,4.164996313633066})==171)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,-3.7,-4.716809497407311,-6.5,6,7,1.1,2.5,2.5})==177)){ tests_passed++; } total_tests++;

    if((sum_squares({-6,3.0179751175777536,1,-3.4,0.5,-5.1,-7,-5.1})==162)){ tests_passed++; } total_tests++;

    if((sum_squares({4.5,0.1,1.5,2.9,3.2,6.851261387881998,-6.773948579844583,6.7,4.234081562814888,2.9})==223)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,4.6,5.147008615293544,6,5.1,6,4.6,-3.7})==222)){ tests_passed++; } total_tests++;

    if((sum_squares({2,-3.4,-6.773948579844583,-6,-5.1,-6,-4.6,-2.98440779706064,-6.773948579844583,2,-6.773948579844583})==242)){ tests_passed++; } total_tests++;

    if((sum_squares({1,3.4,2.7894813137255015,2.37497846404422,5.1,6,2.7894813137255015})==116)){ tests_passed++; } total_tests++;

    if((sum_squares({-0.8317460690765607,3.454312388429943,3.787597101449791,1.5,1.1,3.2,4.234081562814888,6.851261387881998,3.975992715202202,4.6})==171)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,2.9,-6.5,5.1,6})==126)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-5,2,-3.4,-2.7,-3.2596671445918055,0,-6,2,2,-5})==121)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-4.716809497407311,2.9,3.8313894511030147,2.9915540201886883,4.967726321372912,4.6,5.1,6.7})==190)){ tests_passed++; } total_tests++;

    if((sum_squares({-0.8317460690765607,3.787597101449791,1.5,1.1,3.2,4.234081562814888,6.851261387881998,3.9336180777735263,3.975992715202202,4.6})==171)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-5,2,-1.1,-3.4,-2.7,-3.2596671445918055,0,-6,2,2,-5,-3.4})==131)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,4.234081562814888,6.7,1.4145967562528985,2.9,0.1})==102)){ tests_passed++; } total_tests++;

    if((sum_squares({3.263069699177953,1.1,2.5,-4.716809497407311,5,-6.5,6,3.499530218204873,0.6651634925536496,1.1})==163)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,0.5,-3.7,4.234081562814888,5,3.6993494219923884,-4.716809497407311,5,-6.5,1.1})==161)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,-8.09,2.71,0.6991319764835219,1.62,-6.5,-7.08893824300642,6.28,1.62,-8.09,6.28})==345)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.4388447986447082,2.5,-3.7,4.6,5.147008615293544,5.1,6,4.6})==177)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,4.6,5.147008615293544,5.1,6,5.1,2.5})==197)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-3.7,4.234081562814888,5,-4.716809497407311,3.14,5,-6.5,4.841112510159845,1.1,4.841112510159845})==210)){ tests_passed++; } total_tests++;

    if((sum_squares({6.28,1.566848906209739,-3.7,4.6,5.1,6,1.566848906209739})==163)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-4.716809497407311,2.9,4.129563514953585,4.246063504872289,5.014482212889489,4.6,4.6,4.967726321372912})==191)){ tests_passed++; } total_tests++;

    if((sum_squares({4.5,0.1,1.5,2.0026403456856325,3.2,6.851261387881998,-6.773948579844583,6.7,4.234081562814888,4.5})==239)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,-3.4,-4.6,-5.1,-6,2,-6,-6})==167)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,-3.7,-4.6,-2.8396588982482287,7,5.2,7})==164)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,0.1,-8.09,-4.716809497407311,2.9,4.129563514953585,4.967726321372912,3.499530218204873,5.1,6.7,4.164996313633066,5.512119285062335})==303)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-5,-3.4,0,-5,-2.7,-3.2596671445918055,0,-6})==109)){ tests_passed++; } total_tests++;

    if((sum_squares({2.056490122394295,0.1,1.5,2.9,3.2,4.6,5.1,6.7})==149)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,3.2,6.851261387881998,-6.773948579844583,6.7,1.8071929743812858,4.234081562814888})==183)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-4.716809497407311,2.9,2.9915540201886883,4.967726321372912,4.6,5.1,7.225026998188071})==189)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,8.527593815012729,6.7,4.234081562814888,1.5,2.4936669865395658,0.584204380758542})==265)){ tests_passed++; } total_tests++;

    if((sum_squares({1,6,3,2,2.034150193392351,3.4,1.1237040199009254,-2.3744170907243327,0.5,6})==120)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,3.4,7.1286095269742775,5.1,6})==172)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-4.6,0.6212597321029525,5.2,6,5.2})==138)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,5.5,2.71,3.2,4.6,5.1,6.7,6.7,0.1,4.6})==247)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-3.7,2.596787976854052,5,-4.716809497407311,-6.5,1.1})==103)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,5.080474606366394,4.234081562814888,6.851261387881998,8.527593815012729,4.234081562814888,1.5,4.234081562814888})==246)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.276480747131856,-4,3.2,-2.5091429749847305,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,2,2.5,3,3.5,4,4.5,5,3.5})==217)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,2,-3.4,-2.7,-3.2596671445918055,-6,-3.4})==96)){ tests_passed++; } total_tests++;

    if((sum_squares({3.074745760163279,1.1,2.5,-3.7,-4.716809497407311,5,-6.5,6,-6.5})==187)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,2.9,2.4936669865395658,6.851261387881998,8.375338782048383,6.7,2.230942080154173,5.121410407042558,4.234081562814888,1.5,2.4936669865395658,4.234081562814888})==309)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-0.8413477856752207,-3.9938098070834855,-2.9445611166646914,4.6,5.1,6})==120)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-3.7,-4,2.596787976854052,5,-4.716809497407311,-6.5,1.1})==119)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,3.499530218204873,1.275713502619218,3.975992715202202,3.729477873601854,6.851261387881998,6.7,3.172195971968054,2.9,2.9,6.851261387881998})==247)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-3,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,-4.6295639817413345,4,4.5,5,0,1})==201)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,5.1,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,5,3.5,4,4.5,5})==222)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-3.7,-4.6,-4.276874536373084,-5.2,-9.99,-6,-9.99,-9.99,2.5})==358)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-4.716809497407311,2.9,3.2,4.967726321372912,4.6,5.1})==132)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,3.499530218204873,1.275713502619218,3.994048159586825,3.975992715202202,6.851261387881998,6.7,2.9,2.9,6.851261387881998,3.1777410668943764,1.275713502619218})==251)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.716809497407311,5,-6.5,6,2.5})==144)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-14.04,2.71,3.2,4.6,5.1,9.283640269180903,6.7})==432)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-5,7,2,-2.7,-3.2596671445918055,-6,2})==132)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-1,2,3.4,-8.09,-4.6,5.1,6,6,-8.09})==274)){ tests_passed++; } total_tests++;

    if((sum_squares({6.28,4.6,5.1,6,-3.7,-3.7,-3.7})==173)){ tests_passed++; } total_tests++;

    if((sum_squares({1,6,3,2,-4.1487020521034745,3.4,1.1237040199009254,0.5,6,3})==132)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,1.1,3.2,-1.0030764293945094,4.234081562814888,6.851261387881998,6.7,-2.5091429749847305,-2.5091429749847305})==157)){ tests_passed++; } total_tests++;

    if((sum_squares({1,3,-3.4,0,-2.7,-3.2596671445918055,0,-6})==68)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-5,-3.4,0,-5,-2.7,-3.2596671445918055,0,-6,-2.7})==113)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-1,2,3.4,-4.6,4.960798642151972,5.1,6,6,5.1,6})==243)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,3.454312388429943,-3.7,-6.198816864183874,-4.276874536373084,-5.2,-9.99,-6})==223)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,2,1,-3.4,9.283640269180903,-3.2596671445918055,-6})==161)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-8.09,-5.05526115977665,2.9,4.129563514953585,4.967726321372912,3.499530218204873,5.1,6.7,4.6})==275)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,-8.09,0.69,1.5224939717635053,-9.99,6.28,1.62,-8.09,-8.09})==347)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,6.122998757707743,-3.7,-4.716809497407311,5,5.2,6})==180)){ tests_passed++; } total_tests++;

    if((sum_squares({2,-3.4,-6.773948579844583,-6,-5,-5.1,-5,-4.6,-2.98440779706064,-6.773948579844583,3})==225)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,-3.7,4.234081562814888,-4.716809497407311,5,-6.5,-3.330424793270251})==129)){ tests_passed++; } total_tests++;

    if((sum_squares({54,70,13,-31,-99})==18747)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-0.8413477856752207,-3.9938098070834855,-2.9445611166646914,4.6,5.1})==84)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-3.7,4.234081562814888,5,-4.716809497407311,5,54,-6.5,1.1,1.1})==3064)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.4010212753236457,0.1,1.5,2.9,2.228516548185696,4.234081562814888,7.503336396687594,6.7,7.4145549533273405,6.7})==278)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-14.04,5.5,2.71,3.2,4.6,5.1,8.607004238120686,6.7,0.1,3.2})==466)){ tests_passed++; } total_tests++;

    if((sum_squares({-6,1,1,2,-3.4,-4.6,-5.1115162115352})==92)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,-3.7,-4.6,-2.8396588982482287,5.2,-4.6})==82)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-1.853311257563793,4.6,5.1,6,-1.1})==109)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-4.716809497407311,5,4.234081562814888,-6.5,6,1.1,2.5,1.1})==168)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-1.853311257563793,4.6,5.1,6,-1.1,4.6})==134)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,3.5,-6,-6})==126)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-3.4,0,-2.7,-1.9236363858825494,-9.99,0,-6})==156)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,3.6,1.840256743666684,7.1,-6.5,-1.5,7.1})==224)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-4.716809497407311,2.9,3.985738011668973,3.2,4.967726321372912,4.6,5.1})==148)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-8.09,-4.716809497407311,2.9,4.129563514953585,4.967726321372912,8.634480834505068,3.6617590099399284,5.1,6.7})==322)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,2.4936669865395658,6.851261387881998,6.7,1.5})==125)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,2.9,2.4936669865395658,6.074143235398845,6.851261387881998,6.7,7.4145549533273405,0.09750769450579759,6.7})==293)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,3.2,4.6,0.7284547363306774,6.7})==105)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,2.9,4.234081562814888,6.7,1.4145967562528985,2.9,0.1})==101)){ tests_passed++; } total_tests++;

    if((sum_squares({-3.2596671445918055,0.1,1.5,2.9,2.228516548185696,4.234081562814888,7.503336396687594,7.4145549533273405,6.7})==234)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-0.7272026844382555,4.234081562814888,6.851261387881998,8.527593815012729,4.234081562814888,1.5,2.9})==194)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,6.7,7.4145549533273405,6.7,6.7,6.851261387881998,0.1,7.4145549533273405})==422)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,-3.1047291694555414,0,0.5,1,1.5,2,2.4936669865395658,3,3.5,4,4.5,5,0,1})==205)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,-3.7,4.234081562814888,-4.716809497407311,5,-6.5,-3.330424793270251,-3.330424793270251,-6.5})==174)){ tests_passed++; } total_tests++;

    if((sum_squares({-6,1,2,-3.4,-4.6,-6})==102)){ tests_passed++; } total_tests++;

    if((sum_squares({-3.2596671445918055,0.1,1.5,2.9,2.228516548185696,4.234081562814888,6.7,7.4145549533273405,6.7,2.9,7.4145549533273405})==292)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.4010212753236457,0.1,1.5,2.9,4.234081562814888,7.503336396687594,6.7,7.4145549533273405,6.7})==269)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-5,2,-3.4,-2.7,0,-6})==79)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,-8.09,2.71,0.69,1.62,-5.4474913879499605,6.28,1.62,3.739925690046062})==188)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-5,-3.4,0,-2.7,-3.298675345122931,-1,-6,-3.4})==94)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-7.779577990481837,0.1,-8.09,-4.716809497407311,2.9,4.129563514953585,4.967726321372912,3.499530218204873,5.1,6.7,4.164996313633066,4.6})==341)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,2.9,2.4936669865395658,4.234081562814888,6.851261387881998,8.527593815012729,9.895068822944094,5.27131687733624,6.7,7.1,0.5,2.4936669865395658})==436)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,-8.09,0.8407610504622577,1.5224939717635053,-9.99,6.28,1.62,-8.09})==283)){ tests_passed++; } total_tests++;

    if((sum_squares({0.061283494508126014,1.5,3.2,6.851261387881998,7.859916102380617,8.634480834505068,-0.9061133911750052,6.7,5.147008615293544,6.851261387881998})==349)){ tests_passed++; } total_tests++;

    if((sum_squares({0.061283494508126014,1.5,1.1,3.2,6.851261387881998,8.634480834505068,6.7,4.234081562814888})==229)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-1,2,3.4,-8.09,-4.6,5.1,6,6,5.1,5.1,5.1})==317)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,-7.779577990481837,-7.77060807675203,0.1,-8.09,-4.716809497407311,2.9,-2.8396588982482287,4.967726321372912,3.499530218204873,5.1,6.7,4.164996313633066,4.6})==369)){ tests_passed++; } total_tests++;

    if((sum_squares({1,54,3,2,-4.1487020521034745,3.4,1.1237040199009254,-4.6,0.5,6,3.4})==3035)){ tests_passed++; } total_tests++;

    if((sum_squares({4,8.634480834505068,4.129563514953585,6,2})==162)){ tests_passed++; } total_tests++;

    if((sum_squares({})==0)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-5,-10})==126)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,0.2,0.3})==3)){ tests_passed++; } total_tests++;

    if((sum_squares({-0.1,-0.5,-0.9})==0)){ tests_passed++; } total_tests++;

    if((sum_squares({9.1,8.7,7.3})==245)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,-2.4,3,-4,5.5})==69)){ tests_passed++; } total_tests++;

    if((sum_squares({0.5,1.5,2.5})==14)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-1.5,-2.5})==6)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,0,1})==2)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,1,1.5,2,2.5,-6,3,3.5,4,4.5,5,5.5,6})==218)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,1,1.817939135685336,2,-6,3,3.5,4,4.5,5,5.5,6,2})==213)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,2.5,-6,3,-3.5,4,4.5,5,5.5,6,2})==214)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-8.09,-2.7,3.6,7.1,-6.5,3.6})==235)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,1.62,2.5,-3.7,4.6,5.1,6})==120)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,4.6,-1.4030222827046124,5.1,6})==117)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,2.1708877608703743,2,2.5,3,3.5,4,4.5,2})==179)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,3.6,7.1,-6.5,-2.7})==159)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,-3.4,-4.6,-5.1,-2.4521274053810718,-6})==95)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-8.09,-2.7,3.6,7.1,-6.5,2.5})==228)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,4.6,5.1})==80)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.4,2.9,3.2,2.273475836168904,4.6,5.1,6.7})==158)){ tests_passed++; } total_tests++;

    if((sum_squares({1,3,3.4,-4.6,5.1,6})==114)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,0,1.5,2,2.5,3,3.5,4,4.5,5})==194)){ tests_passed++; } total_tests++;

    if((sum_squares({-6,-2.4521274053810718,1.1,2.5,-3.7,-4.6,-5.2,1})==104)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-8.09,-2.7,3.6,7.1,-6.5,2.9,3.6})==244)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,-6,-3.4,-4.6,-5.1,-6})==127)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,5.2,6})==94)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,3.6,-6.5})==91)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,2.5,-6,3,-3.5,4,-1,4.5,5,5.5,6,2})==215)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,2.1708877608703743,2,2.5,3,3.5,4,6.6775046302601595,2})==203)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,2.5,-6,3,-3.5,4,4.5,5,5.5,6,2,2})==218)){ tests_passed++; } total_tests++;

    if((sum_squares({-9.99,2.5,-3.7,-4.6,5.2,6,1.1})==191)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,5.2,-3,-2.5,-2,-1.5,-1,-0.5,0,2,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5})==226)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3,-2.5,-2,-1.5,-1,3.4904607835802204,-0.5,0,0.5,1,1.5,2.5,3,3.5,4,4.5,5})==198)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,7.1,-6.5,-2.7})==143)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,-8.09,2.71,0.69,1.62,-9.721676958355848,6.28,-14.04})==420)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,2.5,-6,3,-3.5,4,-1,5,5.5,6,2})==190)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,-2.7,-3.7,4.6,-1.4030222827046124,5.1,6})==112)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,3.9888913701360824,-3.7,4.6,5.1})==96)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.4,2.9,3.2,2.2366791542480873,2.273475836168904,4.6,5.1,6.7})==167)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-1.4030222827046124,-4.6,-5.2,0,-6})==100)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,3.6,7.1,-4.6})==135)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,3.6,6.28})==104)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,3.9888913701360824,-3.7,4.6,5.1})==87)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,3.4,-4.6,5.1,6,2})==113)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5,-0.5})==195)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,-6.5,-2.7})==79)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,3.9888913701360824,1.5,2.4,2.9,3.2,2.273475836168904,4.6,5.1,6.7,0.1})==175)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,-8.09,0.3215624746733021,2.71,0.69,1.62,-9.721676958355848,6.28,-14.04})==421)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,1.5,2,2.5,3,3.5,4,4.5,5,5.5,6})==181)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-3.5,-5.2,-6,-4.6})==124)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-2.5,-3.7,4.6,-1.4030222827046124,5.1,6})==121)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,3,3.5,4,4.5,5,-0.5})==186)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,-6.5})==75)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.4,2.9,3.2,2.2366791542480873,2.273475836168904,4.6,6.7,6.7})==180)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.7,-3.7,4.6,-1.4030222827046124,5.1,6})==111)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-5.2,0,-6})==99)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,4.6,3.4})==60)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.4,2.3547386137496993,2.9,3.2,2.2366791542480873,2.273475836168904,4.6,6.7,6.7,2.2366791542480873})==198)){ tests_passed++; } total_tests++;

    if((sum_squares({4.5,-1.1,-2.7,-3.7,4.6,-1.4030222827046124,5.1,6})==137)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,1.62,2.5,3.5,-3.7,4.6,5.1,6,4.6})==161)){ tests_passed++; } total_tests++;

    if((sum_squares({-2,2,3.4,6.28,-4.6,5.1,2})==129)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.4,3.2,2.2366791542480873,2.273475836168904,-2.7,4.6,5.1,6.7,2.273475836168904,3.2})==187)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1.5,2,2.5,-6,3,-3.5,4,-1,5,5.5,6,2})==190)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-3.5,-5.2,-6,-4.6,-4.6,-3.5})==149)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5.5,1,6})==158)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,-8.09,5.5,0.69,1.62,-9.721676958355848,6.28,-14.04})==447)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,3.6,7.1,3.4904607835802204,7.1})==199)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,2.5,-6,3,-3.5,4,5,5.5,6,2})==189)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.5,4.2,0,-1.5,-2.7,3.6,-3.7864140592085103})==59)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,0,3.4,-4.6,5.1,6,2,2})==117)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,0,1,2.219466925563955,-4.6,5.1,6,2,-1})==108)){ tests_passed++; } total_tests++;

    if((sum_squares({-2,3.4,6.477207896546531,-4.6,5.1,2})==125)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,-2.7,-3.7,4.6,-1.4030222827046124,-1.4319704534945266,6})==77)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,5.1,-3.7,5.2,6,2.5})==139)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,3.6,6.6775046302601595,7.1})==168)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,5.2,6,-4.6})==126)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,2.219466925563955,-2.7,-6.5})==84)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-8.09,-2.7,3.4,3.6,7.1,-6.5,2.5})==244)){ tests_passed++; } total_tests++;

    if((sum_squares({-7,1,2,-3.4,-4.6,-5.1,-2.4521274053810718,-6,-6})==180)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,2.4,2.273475836168904,3.2,2.2366791542480873,2.273475836168904,4.6,5.1,6.7})==163)){ tests_passed++; } total_tests++;

    if((sum_squares({-5.986694077231327,2.4,4.2,0,-1.5,-8.09,-2.7,3.4,3.6,7.1,-6.5,2.5})==269)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-3.7,5.2,6})==85)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-1.5,-1,-0.5,5,0,0.5,1,1.5,2,3,3.5,4,4.5,5,-0.5})==207)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-2.5,-3.7,4.6,-1.4030222827046124,5.1,6,-1.1})==122)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.8132736798649614,-3.4,-3.7,4.6,3.4,3.4})==85)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-4.6,-5.2,-6})==90)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,2.5,-6,3,-3.0296477623825755,4,4.5,5,5.5,6,2,2})==218)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3,-2.5,-2,-1.5,-6,3.4904607835802204,-0.5,0,0.5,1,1.5,2.5,3,3.5,4,4.5,5,3.4904607835802204})==249)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.4,2.9,3.2,2.273475836168904,2.4,4.6,2.546264498725473,5.1,6.7})==176)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,6})==58)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,-3.7,4.6,5.1})==79)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,-6,-6,-3.4,-4.6,-5.1,-6})==163)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,1.62,2.5,3.5,-3.7,4.6,5.1,6,4.6,4.6})==186)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,5.1,-3.7,5.2,5,2.5,5.1})==164)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,2.5,-4.6,-5.1,-2.4521274053810718,-6})==95)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5.5,1,6,5.5})==194)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,3.9888913701360824,4.6,5.1})==87)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,2.5,-6,3,-3.5,4,4.5,5,5.5,6,2,2,0})==218)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,2.4,2.273475836168904,3.2,2.2366791542480873,2.273475836168904,4.6,4.334736767041201,6.7})==152)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,2.5,-6,0,3,-3.0296477623825755,4,4.5,5,5.5,6,2,2,2.5})==227)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,2.5145216637593935,-8.09,5.5,0.69,1.62,-9.721676958355848,6.28,-14.04})==456)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,2.920636056879275,0,-1.5,-2.7,3.6,6.28})==88)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-0.5,-5.2,-6})==83)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,5.1,-3.7,6,1.6493522291861098})==98)){ tests_passed++; } total_tests++;

    if((sum_squares({6.9922715006859315,2.4,4.2,-1.5,-2.7,3.6,7.1})==168)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,1.62,2.5,3.5,-3.7,2.1708877608703743,5.1,6,4.6,4.6})==170)){ tests_passed++; } total_tests++;

    if((sum_squares({-7,1,2,-3.4,-4.6,0,-5.1,-2.4521274053810718,-6,-6,-4.106937042084065})==196)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,6})==49)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.7,-3.7,4.6,-1.4030222827046124,5.1,6,6})==147)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,3.6,-6.5,-2.7,2.4})==104)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,2.749995677486564,-1.4030222827046124,-4.6,-5.2,0,-6})==109)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,0,2.219466925563955,2.5145216637593935,5.1,6,2,-1})==100)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5.5,1,6,6.145489621506014})==207)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,0,3.4,-4.6,5.1,6,2,2,2})==121)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,2.749995677486564,-1.4030222827046124,-4.6,0.8223279570020958,-5.2,0,-6})==110)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,-6,-3.4,-4.6,-5.1,-6,-3.4})==136)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,2.273475836168904,3.2,2.2366791542480873,2.273475836168904,4.6,5.1,6.7,5.1})==198)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,2.219466925563955,-2.7,-6.5})==83)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-1.4030222827046124,-4.6,0.8223279570020958,-3.5533453362323013,0,-6})==85)){ tests_passed++; } total_tests++;

    if((sum_squares({4.763901218015793,2.4,4.2,0,-1.5,-2.7,3.6,-6.5,-1.4386495928063685,2.4})==126)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.4180889952675366,-2.7,3.6,7.1,3.4904607835802204,7.1})==199)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.7,-3.7,4.6,-1.4030222827046124,-0.6100297458611561,5.1,6})==111)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,3.6,-0.6100297458611561})==55)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,3.2,-2,-1.5,-1,-0.5,0,0.5,0,1.5,2,2.5,3,3.5,4,4.5,5,2.5})==215)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,-1.269665958664233,1.62,2.5,3.5,-3.7,4.6,5.1,6,4.6,4.6,-1.269665958664233})==188)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,1,1.5,2,2.5,3.636734487171691,3,3.5,4,4.5,5,5.5,6})==198)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5145216637593935,-8.09,5.5,0.69,1.62,-9.721676958355848,6.28})==244)){ tests_passed++; } total_tests++;

    if((sum_squares({3.415302610166583,-8.09,2.71,0.69,1.62,-9.99,6.28,-14.04})==420)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-8.09,-2.7,3.6,7.1,-6.5,3.6,3.6})==251)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,3.9888913701360824,4.6,5.1,2.5})==96)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.7,-3.7,4.6,-1.4030222827046124,-1.4319704534945266,6})==76)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,3.4,-4.6,5.1,6,3.4})==125)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,2.5,-6,3,-3.5,4,4.5,5,-9.99,6,2,2})==263)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-2.7,3.6,6.6775046302601595,7.1})==167)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,4.117397448699318,-6.5})==100)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-8.09,-2.7,3.6,7.1,-6.5,3.6,4.2})==260)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,-6.5,5.1,-2.7,4.2})==140)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,1,2,0,3.4,-4.6,6,2})==78)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,4.6,5.1,6})==107)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,4.334736767041201,-1.4030222827046124,-4.6,-5.2,0,-6})==116)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-2.4521274053810718,5.1,-3.7,5.2,6,2.5})==143)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,2.273475836168904,-1.5,-2.7,3.6,-0.6100297458611561})==64)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.7,-4.04983483792288,4.6,-1.4319704534945266,6})==82)){ tests_passed++; } total_tests++;

    if((sum_squares({-9.99,2.5,-4.6,5.2,6,1.1})==182)){ tests_passed++; } total_tests++;

    if((sum_squares({4.6,2.4,4.2,0,-1.5,-2.7,3.6,6.6775046302601595,7.1,7.1})==257)){ tests_passed++; } total_tests++;

    if((sum_squares({1.62,2.5,3.5,-3.7,4.6,5.1,6,5.1019079087963215})==171)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,1,1.5,2,2.5,3.636734487171691,3,3.5,4.5,5,5.5,6})==182)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,-4,4.5,5,-0.5})==179)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,-2.7,4.6,-1.4030222827046124,-1.4319704534945266,6})==68)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,4,-4.5,-4,-3.5,-3,-6,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,2.1708877608703743,2,2.5,3,3.5,4,6.6775046302601595,2})==255)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,2.5,-6,3,-3.0296477623825755,4,5,5.5,6,2,2})==193)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-4.6,6.9922715006859315,1.817939135685336,-5.2,-6,-4.6})==159)){ tests_passed++; } total_tests++;

    if((sum_squares({-4.344536610349558,-1.1,2.5,-3.7,4.6,5.1,6})==132)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,1,1.5,2,2.5,3,3.5,4.5,5.5,1,6,5.5})==178)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1.4319704534945266,-1,-0.5,0,0.5,1,1.5,2,2.5,3,-4,4.5,5,-0.5})==180)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,-3.7,4.6,3.4})==59)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-3.7,-4.6,-5.2,-6})==90)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,4,-4.5,-4,-3.5,-3,-6,5,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,2.1708877608703743,2,2.5,3,3.5,4,6,6.266841951443214,2,6.6775046302601595})==365)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,2.273475836168904,3.2,2.2366791542480873,2.273475836168904,3.4904607835802204,4.6,5.1,6.7,5.1})==214)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,2,0,3.4,-4.6,5.1,6,2,2,2})==125)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,2.273475836168904,-1.5,-2.7,3.6})==64)){ tests_passed++; } total_tests++;

    if((sum_squares({2.273475836168904,0,-1.5,-3.8477823477077773,3.6,7.1,-4.6})==115)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,1.9937426462347088,4.6,-4.6,-1.4180889952675366,-6})==86)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-0.5,-5.2,-6,-5.2})==108)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-0.5,-5.2,-6,3.415302610166583,3.4904607835802204})==115)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,3.6,-0.6100297458611561,-0.6100297458611561})==55)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,0,2.219466925563955,2.5145216637593935,0,5.1,6,2,-1})==100)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,-4,4.5,5,-0.5,0})==179)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,-2,2.273475836168904,-1.5,-2.7,3.6})==68)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,2.273475836168904,3.2,2.2366791542480873,2.273475836168904,3.4904607835802204,4.6,5.1,6.7,5.1,3.2})==230)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,-8.09,5.5,2.8132736798649614,3.8913933006601304,0.69,1.62,-9.721676958355848,6.28,-14.04})==472)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1.5,2,2.5,-6,3,-3.5,4,-1,5,5.0893253204939715,6,2})==190)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,6.266841951443214,4.6,5.1,6,-3.7})==165)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-5.986694077231327,2.4,4.2,0,-1.5,-8.09,-2.7,3.4,3.6,7.1,2.5})==233)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,1,1.817939135685336,2,3,3.5,4,4.5,5,5.5,6,2})==177)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5145216637593935,-8.09,5.5,-0.6100297458611561,0.69,1.62,-9.721676958355848,6.28})==244)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,3.4,-4.6,6,2})==77)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,1,1.5,2,3,3.5,4,4.5,5,5.5,6})==173)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,7,3.4,-4.6,5.1,6,6,6})==230)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,5,-0.5,0,0.5,1,1.5,2,2.5,3,-4,4.5,5,-0.5})==204)){ tests_passed++; } total_tests++;

    if((sum_squares({-9.99,2.5,-4.6,6,1.1})==146)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-4.949230056545978,2.5,-3.7,-4.6,5.2,6,-4.6})==142)){ tests_passed++; } total_tests++;

    if((sum_squares({-8,1,2,-3.4,-4.6,-5.1,3.14,-6,-6,1})==208)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,2.273475836168904,-1.5,4.445695355838067,-2.7,3.6,-0.6100297458611561})==89)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,2.273475836168904,-1.5,2.546264498725473,-2.7,3.6,-0.6100297458611561})==73)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.4180889952675366,-2.7,3.6,0.1,3.4904607835802204,7.1})==136)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,3.9888913701360824,-3.7,4.6,5.1,-1.1})==88)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,2.9,3.2,4.6,-4.344536610349558,5.1,6.7})==155)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-1.4030222827046124,-4.6,-5.2,0,-6,-5.2})==125)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,4,-0.5,0,0.5,1,1.5,2,2.5,3,-4,4.5,5,4.117397448699318,-0.5})==220)){ tests_passed++; } total_tests++;

    if((sum_squares({0,2.4,4.2,0,-1.5,-2.7,3.6,6.6775046302601595,7.1})==168)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,4,-1,-4.5,-4,-3.5,-3,-6,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,2.1708877608703743,2,2.5,3,3.5,4,6.6775046302601595})==252)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,-3.5,0,-1.5,-2.7,3.6,7.1,-4.6})==144)){ tests_passed++; } total_tests++;

    if((sum_squares({0,2.4,4.2,0,-1.5,-2.7,3.6,-0.6100297458611561,2.4})==64)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,1,1.5,2,2.5,3,3.636734487171691,3,3.5,4,4.5,5,5.5,6,4})==223)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1,-0.5,0,0.5,1,1.5,2,3,3.5,4,4.5,5,-0.5})==185)){ tests_passed++; } total_tests++;

    if((sum_squares({1.088711792263298,2.5,5.1,-3.7,6,1.6493522291861098,2.5})==107)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,5.2})==58)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,1,1.5,2,2.5,1,3,3.5,4,4.5,5,5.5,6})==183)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-4.949230056545978,2.5,-3.7,4.6,6,-4.6})==115)){ tests_passed++; } total_tests++;

    if((sum_squares({4.2,0,2.219466925563955,-2.7,-6.5})==74)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-4.949230056545978,3.0687507091327326,-3.7,4.6,6,-4.6,-4.949230056545978})==138)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,3.4,-4.6,5.1,6,1})==110)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,3.9888913701360824,-3.7,4.6,5.1,-1.1})==97)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,3,3.5,4,4.376774415010225,5,-0.5,-2.5})==190)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,1,2,0,3.4,-4.6,6,2,0})==78)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5.5,1,6,6.145489621506014,4})==223)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,-6,-3.071142782022182,-3.4,-4.6,-5.1,-6,-6,-3.4})==181)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,2.5,-3.7,-0.5,-5.2,-6,-5.2,1.1,-5.2})==149)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-0.5,6.477207896546531,-3.186467207295819,-6})==116)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-0.5,-5.2,-6,-5.2})==99)){ tests_passed++; } total_tests++;

    if((sum_squares({1.9937426462347088,4.6,-4.6,-1.4180889952675366,-6,-4.6,4.6})==123)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,4,3.4,-4.6,5.1,6,2,2})==133)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.949230056545978,5.2,6,-4.6})==126)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-2.8445641444531704,2.5,-3.7,5.2})==62)){ tests_passed++; } total_tests++;

    if((sum_squares({1.62,2.5,3.5,-3.7,4.6,5.910939357877671,6,5.1019079087963215})==171)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,-2.7,2.4,2.9,3.2,2.273475836168904,4.6,5.1,6.7})==162)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-1.5,-1,-0.5,5,0,0.5,1,1.5,2,3,3.5,4,4.5,5,-0.5})==203)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,1.62,2.5,3.5,-3.7,4.6,5.1,6,4.6,1.62})==165)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,7,2.71,-4.6,5.1,6,6,6})==220)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,2.1708877608703743,2,2.5,3,4.445695355838067,4,6.6775046302601595,2})==212)){ tests_passed++; } total_tests++;

    if((sum_squares({1,3,5,3.4,-4.6,-8,5.1,6})==203)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,3.9888913701360824,-3.7,4.6,1.9937426462347088,5.1})==100)){ tests_passed++; } total_tests++;

    if((sum_squares({2,-1.1,1.62,2.5,3.5,-3.7,4.6,5.1,6,4.6})==165)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,2.5,-6,3,-3.5,4,-1,4.5,5,5.5,2,0})==179)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,5.406170932089104,2.5,3.9888913701360824,-3.7,4.6,1.9937426462347088,5.1,-1.1})==137)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-4.1555315727634365,5.2})==56)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,2.749995677486564,-1.4030222827046124,-4.6,0.8223279570020958,-5.2,-6})==110)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.4,3.2,2.2366791542480873,2.273475836168904,4.6,5.1,6.7})==158)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-4.6,-5.2,-7})==103)){ tests_passed++; } total_tests++;

    if((sum_squares({-2,1,2,0,3.4,-4.6,6,0,0})==77)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.9,3.2,2.273475836168904,2.4,2.273475836168904,2.546264498725473,5.1,6.7})==151)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,4.2,-8.09,-2.7,-3.090598813501536,3.4,3.6,7.1,-6.5,2.5})==277)){ tests_passed++; } total_tests++;

    if((sum_squares({3.415302610166583,-8.09,2.71,0.69,1.62,-9.99,6.28,-14.698999803874095})==420)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,-5.1,6.266841951443214,4.6,5.1,6,-3.7})==181)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,0,2.219466925563955,2.5145216637593935,5,6,2,-1})==89)){ tests_passed++; } total_tests++;

    if((sum_squares({4.2,0,2.219466925563955,-2.7,-6.5,0,0})==74)){ tests_passed++; } total_tests++;

    if((sum_squares({-2,2,0,3.4,-4.6,6,0,0})==76)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-2.4521274053810718,5.1,-3.7,5.2,-7,2.5})==156)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,3.4,-4.6,5.1,-5})==98)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-2.5,-3.7,4.6,-1.4030222827046124,6,-1.1})==86)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-3.7,-4.6,-5.2})==54)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,-2.7,-2.052739052752247,4.6,-1.4030222827046124,5.1,6})==107)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,3.9888913701360824,4.6,2.5})==60)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,7,3.4,-4.6,1.7612406893234727,6,6,6})==198)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,-2.7,4.6,-1.4319704534945266,6})==67)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,3.2,5,-2,-1.5,-1,-0.5,0,0.5,0,1.5,2,2.5,3,3.5,4,4.5,5,2.5})==240)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.4180889952675366,-2.7,3.6,7.1,3.4904607835802204,7.1,0})==199)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,5.1,-3.7,6,1.6493522291861098,2.5})==103)){ tests_passed++; } total_tests++;

    if((sum_squares({2.0201484617102117,4.2,0,-1.5,-2.7,3.6,7.1,3.4904607835802204,7.1})==199)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,1.62,2.5,3.5,-3.3050773104066433,2.1708877608703743,5.1,6,4.6,4.6})==170)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,3.2,-2,-1.5,-1,-0.5,0,0.5,0,1.5,2,2.5,3,3.5,4,5,2.5,-2})==194)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-1.4030222827046124,-4.6,-5.2,0,-6,-5.2,-4.6})==141)){ tests_passed++; } total_tests++;

    if((sum_squares({2.0201484617102117,4.2,0,-1.5,-2.7,3.6,3.4904607835802204,7.1})==135)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,1,1.5,2,2.5,3,3.636734487171691,3,3.5,4,4.5,5,5.5,6,4,4.5})==248)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,0.8223279570020958,4.2,0,-1.4180889952675366,-2.7,3.6,0.1,3.4904607835802204,7.1})==137)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,5.1019079087963215,-3.5,-3,-1.5,4.5,-1,-0.5,5,0,0.5,1,1.5,2,3,3.5,4,5,-0.5})==239)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,3.8913933006601304,-3.7,4.6,5.1,4.6})==120)){ tests_passed++; } total_tests++;

    if((sum_squares({2,-6,-2.4521274053810718,1.1,1.33452930255498,-3.7,-4.6,1,1.1})==82)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,5,-0.5,0,0.5,1,1.5,2,2.5,3,-4,4.5,5,-0.5,4.5})==229)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,4,-1,-4.5,-4,-3.5,-3,-6,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,2.1708877608703743,2,2.5,3,3.5,4,6.6775046302601595,-5})==277)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,4,-0.5,0,0.5,1,0,1.5,2,2.5,3,-4,4.5,5,4.117397448699318,-0.5})==220)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,2.5,-6,3,-3.5,4,4.5,5,5.5,2})==178)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.949230056545978,5.2,6,-4.6,2.5,-4.6})==151)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,2,2.5,-6,3,-3.5,4,-1,5,5.5,6,2})==186)){ tests_passed++; } total_tests++;

    if((sum_squares({-7,1,2,-3.4,-7.378009948706506,-4.6,-5.1,-2.4521274053810718,-6,-6})==229)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-4.949230056545978,-4.264737834772669,3.0687507091327326,-3.7,4.6,6,-4.6,-5.986694077231327,-4.949230056545978})==179)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,2.1708877608703743,-2.7,3.6,6.6775046302601595,7.1})==176)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,3.5,-3.7,2.1708877608703743,5.1,6,4.6,4.6})==166)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-6,-3.4,-4.6,-5.1,-6,-5.1})==148)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-3.071142782022182,-3.7,-4.949230056545978,5.2,6,-4.6,2.5,-4.6})==151)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-5.2,2.3547386137496993,0,-6})==108)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,3.2,5,-2,-1.5,-1,-0.5,0,0.5,0,2,2.5,3,3.5,4,4.5,5,2.5,-5,1.5})==265)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,-3.4,-4.6,-5.1,-6,-6})==127)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-2.5,4.6,-1.4030222827046124,5.1,6,-1.1})==113)){ tests_passed++; } total_tests++;

    if((sum_squares({-3.0296477623825755,3.14,2.5,-3.7,-0.5,-5.2,-6,1.1,-5.2})==133)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,2,3.4,-4.6,5.1,6,1})==111)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.4386495928063685,-8.09,5.5,0.69,1.62,-9.721676958355848,6.28,-14.261675339369988})==432)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-5.089800239845543,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,1.5,2,2.5,3,-4,4.5,5,-0.5})==188)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,-2.7,3.6,6.6775046302601595,7.1})==167)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,4.6,2.5})==44)){ tests_passed++; } total_tests++;

    if((sum_squares({3.2,-4.949230056545978,2.5,-3.7,-4.6,5.2,6,-4.6})==154)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5169349786213426,-1.1,5.406170932089104,2.5,3.9888913701360824,-3.7,4.6,1.9937426462347088,-0.6100297458611561,-1.1})==110)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-5.2,-6,-4.6,-4.6,-3.5})==140)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,2.5,-6,0,3,-3.0296477623825755,4,4.5,5,5.5,6,2,2,-5.986694077231327,2.5})==252)){ tests_passed++; } total_tests++;

    if((sum_squares({2.71,2.5,-3.7,2.749995677486564,-1.4030222827046124,-4.6,-5.2,0,-6})==114)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.121057984229812,0.8957346503262392,2.5,6.266841951443214,4.6,5.1,6})==166)){ tests_passed++; } total_tests++;

    if((sum_squares({-3.7,5.2,6,5})==106)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.4,2.9,3.2,2.273475836168904,2.219466925563955,6.7,6.7})==155)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-0.5,-5.2,-6,3.415302610166583,3.4904607835802204,2.5})==115)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-0.5,-5.2,-6,3.415302610166583,1.4422096460861824,3.4904607835802204,2.5})==119)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-2.8445641444531704,-3.7,5.2,-2.8445641444531704})==57)){ tests_passed++; } total_tests++;

    if((sum_squares({-3.7,5.2,6,5,-3.7})==115)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-3.071142782022182,-3.7,-4.5,5.2,6,-4.6,-4.56071541305902,2.5,-4.6,-4.56071541305902})==183)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,4.6,2.5})==35)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-5.2,-4.949230056545978,-6,-4.6,-4.6,-3.5,-6})==192)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,1,1.5,2,2.5,-6,3,-3.5,4,4.5,5,5.5,-0.5,6,2})==215)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,2,0,3.4,-4.6,5.1,6,2,3,2})==130)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,3.0862421726231712,-9.721676958355848,-8.09,5.5,0.69,1.62,-9.721676958355848,6.28,-14.04})==544)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,1.62,3.5,-3.7,4.6,5.1,6,4.6,1.62})==156)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,0,3.4,2.546264498725473,4.763901218015793,5.1,6,2,2})==135)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,4,-4.5,-4,-3.5,-3,-6,5,-2.5,-1.5,-1,-0.5,0,0.5,1,-4,2.1708877608703743,2,2.5,3,3.5,4,6,6.266841951443214,2,6.6775046302601595})==377)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.7,-3.7,4.6,-4,-1.4030222827046124,2.749995677486564,6,6,-1.4319704534945266})==137)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,1,2,2.5,-4.6,-5.1,-2.4521274053810718,-6})==96)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,1.62,2.5,3.5,-3.7,5.1,6,4.6,1.62})==140)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,5.2,-3,-2.5,-2,-1.5,-1,-0.5,0,2,0.5,1,1.5,2.5,3,3.5,4,4.5,5})==222)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,3.9888913701360824,-3.7,4.6})==51)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-5.089800239845543,-4,-3.5,-3,-2.5,-2,-1.5,-0.5,0,0.5,1,1.5,2,2.5,3,-4,4.5,5,-0.5})==187)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-2.1202168585911467,-1,-0.5,0,0.5,1,2.1708877608703743,2,2.5,3,4.445695355838067,4,6.6775046302601595,2,2.1708877608703743})==224)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-1.4030222827046124,-4.6,0.8223279570020958,-5.2,-6})==101)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-3.071142782022182,-3.7,-4.5,5.2,6,-4.6,-4.56071541305902,2.5,6.7,-4.6,-4.56071541305902})==232)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,2.273475836168904,-1.5,2.546264498725473,-2.6419541777974347,3.6,-0.6100297458611561})==73)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-1.5,-1,5,-0.5,0,0.5,1,1.5,2,2.5,3,-4,4.5,5,-0.5,4.5})==225)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-5.2,-6,-4.673541451357892,-4.6,-3.5})==140)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,1.5831905408125861,2.5,-3.7,4.6})==48)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.7,-1.4030222827046124,5.1,6,6})==113)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,2.4,-4.56071541305902,4.264531624920706,3.2,2.2366791542480873,2.273475836168904,4.6,6.7,6.7})==208)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,-8.09,2.71,0.69,1.62,-9.721676958355848,1.163099159985125,6.28,-14.04})==424)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,5.1019079087963215,-3.5,-3,-1.5,4.5,-1,-0.5,5,0,0.5,-1.7075174220993832,1,1.5,2,3,3.5,4,5,2.8132736798649614})==249)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,5,-0.5,0,0.5,1,1.5,2,2.5,3,-4,5,-0.5,4.5})==204)){ tests_passed++; } total_tests++;

    if((sum_squares({-3.4191045010192274,-5,-4.5,-4,5.2,-3,-2.5,-2,-1.5,-1,-0.5,0,2,0.5,1,1.5,2,2.5,3,3.5,4,4.5,5})==235)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3,-2.5,-2,-1.5,-1,3.4904607835802204,5,-0.5,0,0.5,1,1.5,2.5,3,3.5,4,4.5,5})==223)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-0.5,-5.2,-6,4.763901218015793})==108)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,2,3.4,-4.6,5.1,6,1,1})==112)){ tests_passed++; } total_tests++;

    if((sum_squares({-8,1,2,-3.4,-4.6,2.121057984229812,-5.1,3.14,-6,-6,1})==217)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-4.949230056545978,2.5,-2.894496233330983,4.6,6,-4.6})==110)){ tests_passed++; } total_tests++;

    if((sum_squares({3.14,-8.09,0.3215624746733021,2.71,0.69,1.62,-14.505612154397998,6.28,-14.04})==536)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,-2.4521274053810718,2,2.5,-6,3,-3.5,4,5.097104505395701,-1,4.5,5,5.5,6,2})==251)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-3.7,-1.4030222827046124,-4.6,-5.2,0,-6,-5.2,-5.2})==141)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,4,-1,-4.5,-4,-3.5,-3,-8,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,-3.8477823477077773,2,2.5,3,3.5,4,6.6775046302601595,-5})==305)){ tests_passed++; } total_tests++;

    if((sum_squares({-2,2,6.28,-4.6,5.1,2,2})==117)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,-6,3,-3.5,4,-1,5,5.5,6,2,5.5})==217)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,-5.1,6.266841951443214,4.6,5.1,6,-3.7,4.6})==206)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1.5,2,2.5,-6,3,-3.5,4,-1,5,5.5,6,2,7,4})==255)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,4.6,2.5,4.6})==69)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-7,1.5,2,2.5,-6,3,-3.5,4,4.5,5,5.5,-0.5,6,2})==263)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,1.4422096460861824,5.2,3.1842930235177858,-3.7,4.6,5.1,-1.1})==128)){ tests_passed++; } total_tests++;

    if((sum_squares({1.5,-2.8445641444531704,2.9,3.2,4.6,-4.344536610349558,5.1,6.7})==159)){ tests_passed++; } total_tests++;

    if((sum_squares({-9.99,2.5,-4.6,6,1.1,1.1,1.1})==154)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,2.5,-6,3,-3.0296477623825755,4,4.5,1,5,5.5,6,2,2})==219)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,5.715004335425014,2.5,5.1,-3.7,6,1.6493522291861098})==134)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.7,-3.7,4.6,-1.4030222827046124,5.1,-1.84062214755369})==76)){ tests_passed++; } total_tests++;

    if((sum_squares({0.1,1.5,2.307038896064827,2.2366791542480873,2.273475836168904,4.6,5.1,6.7})==142)){ tests_passed++; } total_tests++;

    if((sum_squares({6,2,-6,-3.4,-4.6,-5.1,-6})==162)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,4,-4.5,-4,-3.5,-3,-6,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,2.1708877608703743,2,2.5,3,4,6.6775046302601595,2})==239)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,5,3.4,-4.6,5.1,6,1,2})==136)){ tests_passed++; } total_tests++;

    if((sum_squares({3.6,-2.7,-3.7,4.6,-4,-1.4030222827046124,2.749995677486564,6,6,-1.4319704534945266})==153)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,0,3.4,2.546264498725473,4.763901218015793,6,2,2})==99)){ tests_passed++; } total_tests++;

    if((sum_squares({3,3.4,-4.6,5.1,3.8069780653403997,6})==129)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,7,3.4,-4.6,1.7612406893234727,6,6})==162)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.5,-2.7,3.6,6.28,6.28})==153)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,2.273475836168904,-1.5,4.445695355838067,-2.7,-0.6100297458611561,4.445695355838067})==98)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,2,0,3.4,-4.6,5.1,6,-3,2,2,2})==134)){ tests_passed++; } total_tests++;

    if((sum_squares({-2.7,-4.04983483792288,6.9922715006859315,-1.4319704534945266,6,-1.4319704534945266})==107)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,1,2,-6,-6,-3.4,-4.6,-6})==163)){ tests_passed++; } total_tests++;

    if((sum_squares({-7,2,-3.4,-7.378009948706506,-4.6,-5.1,-2.4521274053810718,-6,-6})==228)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-4.6,6.9922715006859315,1.817939135685336,-5.2,-2,-4.6,-6})==163)){ tests_passed++; } total_tests++;

    if((sum_squares({-5.1,6.266841951443214,4.6,5.1,6,-3.7,4.6})==205)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-1.5,-1,6,-0.5,0,0.5,1,1.5,2,2.5,3,-4,4.5,5,-0.5,4.5})==236)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,5.2,-3,-2.5,-2,-1.5,-1,-0.5,0,2,0.5,1,1.5,-2,2.5,3,3.5,4,4.5,5,2})==230)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,4,-6,-1,-4.5,-4,-8,-3.5,-3,-6,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,2.1708877608703743,2,2.5,3,3.5,4,6.6775046302601595,-5})==377)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,5.2,4.2,0,-1.4180889952675366,-2.7,3.6,0.1,3.4904607835802204,7.1})==172)){ tests_passed++; } total_tests++;

    if((sum_squares({-9.99,2.5,5.2,6,1.1})==166)){ tests_passed++; } total_tests++;

    if((sum_squares({-7,1,2,-3.4,-7.378009948706506,-4.6,-5.1,-2.4521274053810718,-7,-6})==242)){ tests_passed++; } total_tests++;

    if((sum_squares({1.62,2.5,3.5,1.9833613278429287,-3.7,-4.949230056545978,5.1,6,5.1019079087963215})==166)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,-2.7,-3.7,4.6,-1.4030222827046124,5.1,6,-1.4030222827046124})==113)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,-3.7,-4.6,-5.2,-4.673541451357892,-4.6,-3.5})==95)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,2.5,-6,3,-3.5,4,4.5,5,5.5,6,1.4422096460861824,2,2})==222)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-0.5,-6})==58)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,2.749995677486564,-1.4030222827046124,-4.6,0.8223279570020958,-5.2,0,-6,0.8223279570020958})==111)){ tests_passed++; } total_tests++;

    if((sum_squares({-5,-4.5,-4,-3.5,-3,-2.5,-2,-1.5,-1,-0.5,0,0.5,1,2.1708877608703743,2,2.5,3,3.5,6.6775046302601595,2})==187)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,2.5,-6,3,-3.5,4,4.5,5,6.781023380124337,6,2,4})==243)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.5,-3.7,4.6,5.1,6,1.62})==120)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,-2,2.273475836168904,-1.5,-2.7,4.511943821816748})==77)){ tests_passed++; } total_tests++;

    if((sum_squares({2.5,-3.7,5.2,6,2.5})==99)){ tests_passed++; } total_tests++;

    if((sum_squares({6.7,2.5,-3.7})==67)){ tests_passed++; } total_tests++;

    if((sum_squares({1.1,2.5,-3.7,-4.6,-5.2,2.3547386137496993,4.511943821816748,0,-6})==133)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,1.62,3.5,-3.7,4.6,5.1,3,4.6,1.62})==129)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,-3.5,0,-1.5,-2.7,3.6,7.1,-4.6,2.4})==153)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,2.121057984229812,0.8957346503262392,2.5,6.266841951443214,4.6,5.1,5,6.255431757016205,-1.1})==205)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,0,-1.4180889952675366,-2.7,3.6,7.1,3.4904607835802204,7.1,0,0})==199)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,-1,1.5,2,2.5,5,3.5,4,5.5,1,0,6,6.145489621506014,4})==214)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.2,2.273475836168904,-1.5,2.546264498725473,-2.6419541777974347,3.6,3.14,-0.6100297458611561})==89)){ tests_passed++; } total_tests++;

    if((sum_squares({2.4,4.34685453735128,0,-1.5,-2.7,3.6,6.28})==104)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,1.5,2,2.5,3,1.6493522291861098,4,4.5,5,5.5,6,1.5})==173)){ tests_passed++; } total_tests++;

    if((sum_squares({-1.1,1.4422096460861824,5.2,3.1842930235177858,-3.7,5.652668931909759,4.6,7.258417242145231,-1.1})==192)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2.34580378504941,2,-6,-3.4,-4.6,-5.1,-6})==131)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0.5,-1,1.5,2,2.5,5,3.5,4,5.5,1,-2,6,6.145489621506014,4})==218)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,1.5,2,2.5,-6,3,-3.5,4,-1,4.5,5,5.5,2,0,1.5,-6})==219)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


