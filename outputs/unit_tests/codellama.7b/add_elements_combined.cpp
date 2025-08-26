#include <iostream>
#include <vector>
#include <cmath>

int add_elements(const std::vector<int>& arr, int k) {
    int sum = 0;
    for (int i = 0; i < k && i < arr.size(); ++i) {
        int num = abs(arr[i]);
        sum += num / pow(10, std::floor(log10(num)) - 2);
    }
    return sum;
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

    if((add_elements({1,-2,-3,41,57,76,87,88,99}, 3) == -4)){ tests_passed++; } total_tests++;

    if((add_elements({111,121,3,4000,5,6}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({11,21,3,90,5,6,7,8,9}, 4) == 125)){ tests_passed++; } total_tests++;

    if((add_elements({111,21,3,4000,5,6,7,8,9}, 4) == 24)){ tests_passed++; } total_tests++;

    if((add_elements({1}, 1) == 1)){ tests_passed++; } total_tests++;

    if((add_elements({1,-2,-3,41,57,76,87,88,99}, 3) == -4)){ tests_passed++; } total_tests++;

    if((add_elements({111,121,3,4000,5,6}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({11,21,3,90,5,6,7,8,9}, 4) == 125)){ tests_passed++; } total_tests++;

    if((add_elements({111,21,3,4000,5,6,7,8,9}, 4) == 24)){ tests_passed++; } total_tests++;

    if((add_elements({1}, 1) == 1)){ tests_passed++; } total_tests++;

    if((add_elements({98,87,76,65,54,43,32,21,10}, 5) == 380)){ tests_passed++; } total_tests++;

    if((add_elements({-4,5,67,34,56,12,89,23,45}, 7) == 259)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,40,50,60}, 1) == 10)){ tests_passed++; } total_tests++;

    if((add_elements({-1,-2,-3,-4,-5,-6,-7,-8,-9}, 4) == -10)){ tests_passed++; } total_tests++;

    if((add_elements({9,10,11,100,200,300}, 5) == 30)){ tests_passed++; } total_tests++;

    if((add_elements({90,80,70,60,50,40,30}, 3) == 240)){ tests_passed++; } total_tests++;

    if((add_elements({1,11,22,99,100,999}, 6) == 133)){ tests_passed++; } total_tests++;

    if((add_elements({5,10,15,20,25,30,35,40,45,50}, 10) == 275)){ tests_passed++; } total_tests++;

    if((add_elements({101,202,303}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({98,87,65,54,43,32,21,10,87}, 5) == 347)){ tests_passed++; } total_tests++;

    if((add_elements({100,199,300,400,500,600}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,500,600}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-1,-2,-3,-4,-5,-6,-7,-8,-9}, 3) == -6)){ tests_passed++; } total_tests++;

    if((add_elements({100,199,300,400,500,600}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({98,87,76,20,65,54,43,32,21,10}, 5) == 346)){ tests_passed++; } total_tests++;

    if((add_elements({98,87,76,20,65,54,43,32,21,10,87}, 5) == 346)){ tests_passed++; } total_tests++;

    if((add_elements({100,199,400,500,600}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-4,5,67,34,56,12,23,87}, 7) == 193)){ tests_passed++; } total_tests++;

    if((add_elements({-1,-2,-3,-4,-5,-6,-7,-8,-10}, 3) == -6)){ tests_passed++; } total_tests++;

    if((add_elements({90,80,70,60,50,40,30,90}, 3) == 240)){ tests_passed++; } total_tests++;

    if((add_elements({-1,-2,-3,-4,-5,-6,-7,99,-10}, 3) == -6)){ tests_passed++; } total_tests++;

    if((add_elements({100,199,300,400,500,600,600}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-4,5,67,34,56,12,23,87,67,34}, 7) == 193)){ tests_passed++; } total_tests++;

    if((add_elements({101,303}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({5,10,15,20,-2,25,30,35,40,45,50}, 10) == 223)){ tests_passed++; } total_tests++;

    if((add_elements({9,10,11,101,200,300}, 6) == 30)){ tests_passed++; } total_tests++;

    if((add_elements({5,10,15,20,-2,25,30,35,40,45,50,-2}, 10) == 223)){ tests_passed++; } total_tests++;

    if((add_elements({-4,5,67,34,56,12,23,87,67}, 7) == 193)){ tests_passed++; } total_tests++;

    if((add_elements({100,199,300,400,500,600}, 1) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,199,400,9,500,600}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,199,299,400,500,600}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({5,21,10,15,20,-2,25,30,35,40,45,50}, 10) == 199)){ tests_passed++; } total_tests++;

    if((add_elements({5,21,10,15,20,-2,25,30,35,40,45,50,5}, 10) == 199)){ tests_passed++; } total_tests++;

    if((add_elements({100,199,300,400,500,600,300}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-1,-2,-3,-4,-5,-6,-7,99,-10}, 2) == -3)){ tests_passed++; } total_tests++;

    if((add_elements({100,199,300,399,500,600,50,300}, 1) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({9,10,11,100,200,300}, 4) == 30)){ tests_passed++; } total_tests++;

    if((add_elements({101,23}, 2) == 23)){ tests_passed++; } total_tests++;

    if((add_elements({-7,-1,-2,-3,-4,-5,-6,-7,99,-10}, 2) == -8)){ tests_passed++; } total_tests++;

    if((add_elements({-1,-2,-3,-4,-5,-6,-7,-8}, 5) == -15)){ tests_passed++; } total_tests++;

    if((add_elements({-1,-2,-3,-4,-5,-6,-7,99,-10}, 4) == -10)){ tests_passed++; } total_tests++;

    if((add_elements({-4,5,67,34,56,12,89,23,11,45}, 7) == 259)){ tests_passed++; } total_tests++;

    if((add_elements({100,199,300,400,500,600,300}, 7) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({90,80,60,50,40,51,30}, 3) == 230)){ tests_passed++; } total_tests++;

    if((add_elements({-1,-2,-3,-4,-5,-6,35,-8}, 5) == -15)){ tests_passed++; } total_tests++;

    if((add_elements({304,101,303}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({98,87,65,54,43,32,21,10,87,21}, 6) == 379)){ tests_passed++; } total_tests++;

    if((add_elements({9,10,100,200,10,300,10}, 5) == 29)){ tests_passed++; } total_tests++;

    if((add_elements({5,21,10,15,20,-2,25,30,35,40,45,50,5,10}, 11) == 244)){ tests_passed++; } total_tests++;

    if((add_elements({23,101,23}, 2) == 23)){ tests_passed++; } total_tests++;

    if((add_elements({90,80,70,60,50,40,30}, 2) == 170)){ tests_passed++; } total_tests++;

    if((add_elements({-1,-2,-3,12,-5,-6,35,-8}, 5) == 1)){ tests_passed++; } total_tests++;

    if((add_elements({-4,5,67,34,56,12,89,23,11,45}, 8) == 282)){ tests_passed++; } total_tests++;

    if((add_elements({-4,5,67,34,56,12,23,87}, 6) == 170)){ tests_passed++; } total_tests++;

    if((add_elements({101,23}, 1) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({202,101,202,303}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-4,5,67,34,56,12,23,87,67,-4}, 7) == 193)){ tests_passed++; } total_tests++;

    if((add_elements({-1,-2,-3,-4,-5,-6,-7,-8,-9,-8}, 3) == -6)){ tests_passed++; } total_tests++;

    if((add_elements({5,21,10,20,-2,25,30,35,40,45,50}, 9) == 184)){ tests_passed++; } total_tests++;

    if((add_elements({-5,5,67,34,56,12,23,87,67,34}, 7) == 192)){ tests_passed++; } total_tests++;

    if((add_elements({5,21,10,15,20,-2,25,30,35,40,45,50}, 12) == 294)){ tests_passed++; } total_tests++;

    if((add_elements({90,80,70,60,50,40,30,90,70}, 3) == 240)){ tests_passed++; } total_tests++;

    if((add_elements({100,300,400,500,600,600}, 1) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({5,10,15,20,24,30,35,40,45,50}, 10) == 274)){ tests_passed++; } total_tests++;

    if((add_elements({100,199,400,9,600}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({98,87,76,20,-6,65,54,43,32,21,10,87}, 5) == 275)){ tests_passed++; } total_tests++;

    if((add_elements({90,23,70,60,50,40,30}, 3) == 183)){ tests_passed++; } total_tests++;

    if((add_elements({100,35,199,400,500,600,300}, 2) == 35)){ tests_passed++; } total_tests++;

    if((add_elements({5,21,10,15,20,-2,25,30,35,40,45,49}, 11) == 244)){ tests_passed++; } total_tests++;

    if((add_elements({5,10,15,20,-2,25,30,35,40,16,45,50}, 11) == 239)){ tests_passed++; } total_tests++;

    if((add_elements({100,199,300,400,500,600,600,199}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-1,-2,-3,-4,-6,-7,-8,-9}, 4) == -10)){ tests_passed++; } total_tests++;

    if((add_elements({-1,-2,-3,-4,-6,16,-8,-9}, 4) == -10)){ tests_passed++; } total_tests++;

    if((add_elements({60,101,303}, 2) == 60)){ tests_passed++; } total_tests++;

    if((add_elements({-1,-2,-3,-4,-5,-6,-7,99,-10}, 5) == -15)){ tests_passed++; } total_tests++;

    if((add_elements({98,87,76,20,-6,65,43,32,21,10,87}, 5) == 275)){ tests_passed++; } total_tests++;

    if((add_elements({100,199,300,400,500,600,300}, 1) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({98,87,76,20,-6,54,43,32,21,10,87}, 5) == 275)){ tests_passed++; } total_tests++;

    if((add_elements({100,35,199,400,500,600,300,199}, 5) == 35)){ tests_passed++; } total_tests++;

    if((add_elements({5,21,10,20,-2,25,30,35,40,45,50}, 10) == 229)){ tests_passed++; } total_tests++;

    if((add_elements({100,35,199,501,400,500,600,300}, 1) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({50,9,100,200,10,300,10}, 5) == 69)){ tests_passed++; } total_tests++;

    if((add_elements({100,35,199,400,500,600,500,300,199}, 2) == 35)){ tests_passed++; } total_tests++;

    if((add_elements({5,21,10,15,20,70,25,30,35,40,45,50}, 10) == 271)){ tests_passed++; } total_tests++;

    if((add_elements({-5,5,67,34,56,12,23,87,67,34,12}, 6) == 169)){ tests_passed++; } total_tests++;

    if((add_elements({5,21,10,15,20,-2,25,30,35,40,45,50}, 11) == 244)){ tests_passed++; } total_tests++;

    if((add_elements({23,100,101,23}, 2) == 23)){ tests_passed++; } total_tests++;

    if((add_elements({98,87,76,20,65,54,43,32,21,10,87,87,54}, 5) == 346)){ tests_passed++; } total_tests++;

    if((add_elements({-2,-3,-4,-5,-6,-7,99,-10}, 4) == -14)){ tests_passed++; } total_tests++;

    if((add_elements({5,21,10,15,20,70,25,30,35,40,45,50,40}, 10) == 271)){ tests_passed++; } total_tests++;

    if((add_elements({100,199,300,400,-7,600,300}, 7) == -7)){ tests_passed++; } total_tests++;

    if((add_elements({-4,5,67,56,12,23,87,67}, 7) == 246)){ tests_passed++; } total_tests++;

    if((add_elements({200,301,400,500,600}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-1,-2,-3,-4,-5,-6,8,99,-10}, 3) == -6)){ tests_passed++; } total_tests++;

    if((add_elements({100,199,300,32,400,500,600}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({90,80,70,60,50,40,31}, 3) == 240)){ tests_passed++; } total_tests++;

    if((add_elements({5,21,10,15,20,-2,25,30,35,40,45,5}, 10) == 199)){ tests_passed++; } total_tests++;

    if((add_elements({5,21,10,15,20,-2,25,30,35,40,45,50,5,25}, 11) == 244)){ tests_passed++; } total_tests++;

    if((add_elements({9,10,11,100,12,200}, 4) == 30)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,3,40,5000000,60,7,8000,9,10}, 8) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11}, 5) == -385)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,40,50,60,70,80,90,100,110}, 7) == 280)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,400,600,700}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,6000,70,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({11,22,33,44,55,66,77,88,99}, 9) == 495)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11,0,11,22,33,44,55,66,77,88,99}, 10) == -495)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,4040,5050,6000,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,20,300,40000,100,500,10000,6000,70,800}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,31,40,50,60,70,80,90,100,110}, 7) == 281)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,3,40,5000000,60,7,8000,9,10,7}, 8) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,3,40,5000000,60,7,8000,9,33,10}, 9) == 119)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,3,200,3,40,5000000,60,7,8000,9,10,7}, 8) == 113)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,8000,4040,5050,6000,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,445,555,666,777,888,999,1000,2000,8000,4040,5050,6000,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,5050,6000,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-89,-77,-66,-55,-44,-33,-22,-11}, 5) == -386)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,3,40,5000000,60,7,4999999,8000,9,10,7}, 8) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({10,200,300,400,500,600,700,800,900,1000}, 3) == 10)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,222,333,444,555,666,777,888,999,1000,2000,8000,4040,5050,6000,7000,8000,9000}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-89,-77,-55,900,-44,-33,-22,-11}, 5) == -320)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,5050,6000,7000,8000,9000,111}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,6000,70,40000,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({8000,1000000,200,3,40,5000000,60,7,8000,9,10}, 8) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({10,200,300,400,600,700,800,900,1000}, 3) == 10)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,222,333,444,555,666,777,888,999,1000,2000,8000,4040,5050,6000,7000,8000,9000,7000}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,300,444,555,666,777,888,999,1000,2000,3030,5050,6000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({10,200,300,400,700,800,900,200,1000}, 3) == 10)){ tests_passed++; } total_tests++;

    if((add_elements({3,200,3,40,5000000,7,8000,9,10,7}, 8) == 62)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,31,40,50,60,70,1000000,80,90,100,110}, 6) == 211)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-78,-66,-55,-44,-33,-22,-11,0,11,22,33,44,55,66,77,88,99}, 10) == -496)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,4039,5050,6000,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-89,-77,-55,900,-44,-33,-22,-11}, 6) == -364)){ tests_passed++; } total_tests++;

    if((add_elements({2,200,3,40,5000000,7,8000,9,10,7}, 8) == 61)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,445,555,777,888,999,1000,2000,8000,4040,5050,6000,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,5050,6000,7000,-55,8000,9000,555}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,4040,5050,6000,7000,8000,9000}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,445,555,777,888,999,1000,2000,8000,4040,-78,5050,6000,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,200}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,40000,100,500,10000,6000,70,40000,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,3,40,5000000,60,7,8000,10,10}, 8) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,40000,100,500,10000,6000,70,40000,333}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,39999,100,500,10000,6000,70,40000,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,20,5000000,40000,100,500,10000,6000,70,800}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({100,100,201,300,400,500,600,700,800,900,1000,200}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,300,444,555,666,777,888,999,1000,2000,3030,5050,6000,8000,9000}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,1000}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,1000,2000,3030,5050,6000,7000,8000,9000,111}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,20,5000000,40000,100,500,9999,6000,70,801}, 3) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,39999,100,500,10000,6000,70,40000,800}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({80,8,200,3,40,5000000,60,7,4999999,8000,9,10,7}, 8) == 198)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,4039,5050,6000,4039,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,2000,40,5000000,60,7,8000,9,10}, 8) == 107)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,0,555,666,888,999,1000,2000,3030,5050,6000,7001,8000,9000,111}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-89,-77,-55,900,-44,-22,-11}, 7) == -386)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-99,-89,-77,-55,900,-44,-33,-22,-11}, 5) == -419)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,1000,2000,3030,5050,6000,444,7000,8000,9000,111}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,301,100,500,10000,6000,70,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,222,333,445,555,777,888,999,1000,2000,8000,4040,-78,5050,6000,7000,8000,9000}, 12) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,40000,100,500,10000,6000,70,800}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({3,201,3,40,5000000,7,8000,9,10,7}, 8) == 62)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,301,100,500,10000,6000,70,800,500,20}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,50,20,101,300,39999,100,500,10000,6000,70,40000,800}, 4) == 70)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,40000,100,500,10000,501,6000,70,40000,333}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({-100,-89,-77,-55,900,-44,-22,-11}, 7) == -287)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,3,40,60,7,4999999,8000,9,10,7}, 8) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,300,100,500,10000,6000,70}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,31,40,50,60,70,80,90,100,111}, 7) == 281)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,333,444,555,666,777,888,999,1000,2000,8000,4040,5050,6000,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({10,901,200,300,400,500,600,700,800,900,1000}, 3) == 10)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,555,666,777,888,1000,2000,3030,5050,6000,7000,8000,9000,111}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,301,100,500,10000,6000,70,800,10000}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,39999,100,500,6000,40000,800}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,31,40,50,60,71,1000000,80,90,100,110}, 6) == 211)){ tests_passed++; } total_tests++;

    if((add_elements({1000001,200,3,40,5000000,7,8000,9,10}, 8) == 59)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-55,900,-44,-22,-11}, 8) == -396)){ tests_passed++; } total_tests++;

    if((add_elements({10,200,300,400,700,800,900,200,1000}, 2) == 10)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,300,444,555,666,777,888,999,1000,2000,3030,5050,6000,8000,9000,8000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-99,-89,-77,-55,900,-44,-33,-22,-11}, 6) == -419)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,5050,6000,7000,8000,9000,1111}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({100,100,201,99,300,400,500,600,700,800,900,1000,200}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,300,444,555,666,777,888,999,1000,2000,3030,5050,6000,8000,9000,444,1000}, 10) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,500,600,700,800,900,1000}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,40000,100,500,10000,6000,70,40000,333}, 7) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,101,300,39999,100,500,6000,40000,800,20}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,40,50,60,70,80,90,100,110,90}, 7) == 280)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,0,222,333,300,444,666,777,888,999,1000,2000,3030,5050,6000,8000,9000,8000}, 12) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,400,600,700,200}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,40000,100,500,500,10000,501,6000,70,40000,333}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,500,600,700,800,900,1000,600}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,445,555,777,888,999,1000,2000,8000,4040,-78,5050,7000,8000,9000}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,20,5000000,40000,100,500,10000,6000,70,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-99,-89,7001,-55,900,-44,-33,-22,-11}, 6) == -342)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,1000,2000,3030,5050,6000,444,7000,8000,9000,111}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,333,444,555,666,777,888,999,1000,2000,3030,4040,5050,6000,7000,8000,9000,4040}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,3,40,5000000,60,7,11,8001,8000,9,10,5000000}, 8) == 121)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,31,40,50,60,70,80,90,100,111}, 3) == 61)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,333,444,555,71,666,777,888,999,1000,2000,8000,4040,5050,6000,7000,8000,9000}, 12) == 93)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,3,40,5000000,60,7,8000,10,10,10}, 8) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-89,-77,-55,900,-44,-33,-22,-11,-99}, 6) == -364)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,333,444,555,666,777,888,999,1000,2000,3030,4040,5050,6000,7000,8000,9000,4040}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-78,-66,-55,-44,-33,10000,600,-11,0,11,22,33,44,55,66,77,88,99}, 10) == -474)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,3,200,3,40,5000000,60,7,8000,9,10,7}, 7) == 106)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,501,600,700,800,900,1000,200}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,55,333,444,555,666,777,888,999,1000,2000,3030,5050,6000,7000,8000,9000,1111}, 12) == 77)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,20,300,40000,100,40001,500,10000,6000,70,800}, 3) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,400,500,600,700,800,900,1000,200}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,100,6000,70,800}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,555,101,300,-89,100,500,10000,6000,70,40000,800}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({20,200,3,40,5000000,60,7,8000,10}, 8) == 130)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,222,333,444,555,666,777,888,999,1000,2000,8000,4040,6000,7000,8000,9000,7000}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,20,5000000,40000,100,500,10000,6000,70,800}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-78,-66,-55,-44,-33,-22,-11,0,11,22,33,44,4,55,66,77,88,99}, 10) == -496)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,2,200,3,40,5000000,60,7,8000,9,10,7}, 8) == 112)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,2,200,3,5000000,60,7,8000,9,10,7}, 8) == 72)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,333,444,555,666,777,888,999,1000,2000,3030,4040,5050,6000,7000,8000,9000,4040,22}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,4039,5050,6000,4039,7000,8000,8999}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,555,666,777,888,999,1000,2000,3030,4040,5050,5999,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({200,3,40,60,7,8000,9,10,7}, 8) == 129)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,31,40,50,60,71,1000000,80,90,100,110,100}, 6) == 211)){ tests_passed++; } total_tests++;

    if((add_elements({200,3,40,60,7,9,10,7}, 8) == 136)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,333,444,555,666,777,888,999,1000,2000,8000,4040,5050,6000,7000,8000,9000}, 13) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,5050,6000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-99,-89,-77,-55,900,-44,-33,-21,-22,-11}, 5) == -419)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,300,100,100,500,10000,6000,70}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-99,-89,-77,-55,900,-44,-21,-22,-11}, 4) == -364)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,3,40,5000000,60,7,8000,9,7,10,7,3}, 9) == 119)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-89,-77,-55,900,-44,-21,-22,-11}, 4) == -320)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,222,333,444,555,666,777,888,999,1000,2000,8000,4040,6000,7000,8000,9000,7000,111}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,111,555,666,777,888,1000,2000,3030,5050,6000,7000,8000,9000,111}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({20,301,40000,100,500,10000,6000,70,40000,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,39999,100,500,10000,6000,445,70,40000,800,445}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({100,100,201,99,300,400,500,600,700,800,900,1000,200,201}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,6000,70,40000,800}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,222,333,445,555,777,888,999,1000,2000,8000,4040,-78,5050,6000,7000,8000,9000}, 13) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,1000,100}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,100,6000,70,800,40000}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,555,666,777,888,999,1000,2000,3030,4040,5050,5999,7000,8000,9000,7000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,6000,500,10000,6000,70,40000,799}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,334,444,555,666,777,888,999,1000,2000,3030,5050,6000,7000,8000,9000,111}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,1000,2000,3030,5050,6000,444,6999,8000,9000,111}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,501,39999,100,500,10000,6000,70,40000,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,5050,6000,7000,8000,9000,1111}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,111,555,666,777,888,1000,2000,3030,5050,6000,7000,8000,9000,111}, 10) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000001,200,3,40,5000000,7,8000,9,10}, 9) == 69)){ tests_passed++; } total_tests++;

    if((add_elements({1000001,200,3,40,5000000,40,8000,9,10,8000}, 9) == 102)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,40000,100,500,500,10000,501,6000,70,40000,333,333}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,3,40,5000000,60,7,8000,10,10}, 7) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-89,-66,-55,-44,-33,-22,-11}, 5) == -353)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,39999,100,5,6000,40000,800}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,40000,99,500,10000,6000,70,40000,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,400,99,700}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,445,555,888,999,1000,2000,8000,4040,-78,5050,7000,8000,9000}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,333,444,555,666,777,888,999,1000,2000,3030,5050,6000,7000,8000,9000,4040}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,555,666,777,888,999,1000,2000,3030,4040,5050,5999,7000,8000,9000,7000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,555,101,300,-89,100,500,10000,6000,70,40000,800}, 12) == -19)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-99,-89,7001,-55,-44,-33,-22,-11}, 6) == -386)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,300,444,555,666,777,888,999,1000,2000,110,3030,5050,6000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,40000,9999,100,500,10000,6000,70,800}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,0,222,333,300,444,666,777,888,999,1000,2000,3030,5050,6000,8000,9000,8000}, 11) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,300,100,500,10000,6000,70,300}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({200,3,40,60,7,8000,9,10,7}, 3) == 43)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,0,555,666,888,1000,2000,3030,5050,6000,7001,8000,9000,111}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,4039,300,40000,100,500,10000,6000,70,40000,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,40000,100,500,10000,6000,70,40000,800,101}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,555,666,777,888,800,1000,2000,3030,5050,6000,7000,8000,9000,111}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,8999,666,777,888,999,1000,2000,201,4040,5050,6000,7000,8000,9000}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,400,500,600,700,800,900,1000,101,200}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,7999,222,333,445,555,777,888,999,1000,2000,8000,4040,-78,5050,6000,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,20,6000,500,10000,6000,70,40000,799}, 6) == 40)){ tests_passed++; } total_tests++;

    if((add_elements({1000,555,101,300,-89,101,500,10000,6000,70,40000,800}, 12) == -19)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,555,666,777,888,999,1000,2000,3030,4040,5050,5999,7000,8000,9000}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,2,40,5000000,60,7,8000,10,10}, 7) == 109)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,333,444,555,666,777,888,999,1000,2000,8000,4040,5050,6000,7000,8000,9000}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,31,40,50,60,70,1000000,80,90,110}, 6) == 211)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,333,444,555,666,777,888,999,112,1000,2000,8000,4040,5050,6000,7000,8000,9000}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,1000001,500,10000,6000,70,40000,799}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({10,200,300,400,700,800,900,200,1000,900}, 9) == 10)){ tests_passed++; } total_tests++;

    if((add_elements({111,799,22,222,333,300,444,555,666,777,888,999,1000,2000,3030,5050,6000,8000,9000,444,1000}, 10) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-89,-77,-55,112,900,-44,-33,-22}, 6) == -320)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-78,-66,-55,-44,-33,-22,-11,0,11,22,34,44,55,66,77,88,99}, 10) == -496)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,3,200,3,40,5000000,60,7,6,8000,9,10,7}, 7) == 106)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,12,3,40,5000000,60,7,8000,9,7,10,7,3}, 9) == 122)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,88,777,888,999,1000,2000,3030,5050,6000,8000,9000}, 12) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-78,-66,-55,-44,-33,-22,-11,0,11,22,33,44,4,66,77,88,99}, 10) == -496)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,20,6000,500,10000,6000,70,40000,799}, 5) == 40)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-89,-77,-55,900,-44,-22,-11}, 4) == -320)){ tests_passed++; } total_tests++;

    if((add_elements({11,22,33,44,55,66,77,88,99}, 8) == 396)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,111,555,666,777,888,1000,2000,3030,5050,6000,7000,8000,9000,111}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,112,222,333,300,444,555,666,777,888,999,1000,2000,3030,5050,6000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({20,71,301,40000,100,500,10000,6000,70,40000,800,100}, 5) == 91)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,31,40,50,60,70,1000000,80,90,100,110,1000000}, 6) == 211)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,34,100,500,10000,6000,70,-100,40000,800}, 5) == 54)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,400,500,600,700,800,900,1000}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,40000,100,500,10000,6000,70,40000,800}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,39999,100,5,6000,40000,800,20}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({3,201,3,40,5000000,7,8000,9,10,7}, 7) == 53)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,3,200,3,40,5000000,39,60,7,6,8000,9,10,7}, 4) == 6)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,301,100,500,10000,6000,70,800,10000}, 2) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,500,600,700,800,900,1000,600}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,3,200,3,40,5000000,39,60,7,6,8000,9,10,39,7}, 4) == 6)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,111,555,666,777,888,1000,2000,2000,3030,5050,6000,7000,8000,9000,111}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-78,-66,-55,-44,-33,-22,-11,0,11,22,34,44,55,66,77,88,99}, 9) == -496)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,301,100,500,10000,6000,70,800,10000}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-78,-66,-55,-44,-33,10000,600,-11,0,11,22,33,44,55,66,77,88,99,300,-88}, 10) == -474)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,300,444,555,666,777,888,999,1000,2000,110,5050,6000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,222,3,40,5000000,60,7,11,8001,8000,9,10,5000000}, 8) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,3,200,3,5000000,39,60,7,6,8000,9,10,39,5000000}, 4) == 6)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,88,777,888,999,1000,2000,3030,5050,6000,8000,9000}, 13) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,111,555,666,777,888,1000,2000,2000,3030,5050,6000,7000,8000,9000,111,333}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,333,555,666,777,888,999,1000,2000,3030,4040,5050,6000,7000,8000,4040}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,8000,4040,5050,6000,7000,8000,9000}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-78,-66,-55,-44,-33,-22,-11,0,11,22,33,44,4,66,77,88,99}, 11) == -485)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,999,1000,2000,3030,5050,6000,7000,8000,9000,1111}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({3,200,3,5000000,7,8000,9,10,7}, 8) == 32)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,333,444,2000,555,666,777,888,667,999,1000,2000,8000,4040,5050,6000,7000,8000,9000}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({2,9999,200,3,40,5000000,7,8000,9,10,7,7}, 8) == 52)){ tests_passed++; } total_tests++;

    if((add_elements({200,3,40,60,7,8000,9,10,7}, 9) == 136)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,20,5000000,40000,100,500,9999,7000,6000,70,801}, 3) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,40,50,60,70,80,90,100,110,90,90}, 7) == 280)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,39999,1111,100,500,10000,6000,445,70,40000,800,445}, 3) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,2000,40,5000000,60,7,8000,9,10}, 9) == 116)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,111,555,666,777,888,1000,2000,3030,5050,6000,7000,8000,9000,111}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,6999,22,333,444,555,666,777,888,999,1000,2000,8000,4040,5050,6000,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,8999,666,777,888,999,1000,2000,202,4040,5050,6000,7000,8000,9000}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,66,4040,5050,6000,7000,8000,9000}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,40000,9999,100,500,10000,6000,70,800,10000}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,445,555,888,10000,999,1000,2000,8000,4040,-78,5050,7000,8000,9000}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,222,333,444,555,666,777,888,999,1000,2000,8000,4040,5050,6000,7000,8000,9000,7000}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-99,-89,-78,-55,900,-44,-22,-22,-11}, 4) == -365)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,301,100,500,10000,6000,666,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000001,200,3,40,5000000,7,8000,9}, 8) == 59)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-78,-66,-55,-44,-33,-22,-11,0,22,33,44,4,66,77,88,99}, 11) == -474)){ tests_passed++; } total_tests++;

    if((add_elements({1000,6000,19,300,40000,100,500,6000,70,800}, 7) == 19)){ tests_passed++; } total_tests++;

    if((add_elements({9,20,31,40,50,60,70,80,90,100,111,40}, 7) == 280)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-89,-77,-55,900,-44,-33,-22,-11,-99}, 7) == -397)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,400,500,599,600,700,800,900,1000,101,200}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,2,200,3,5000000,10,60,7,8000,9,10,7}, 8) == 82)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,7,444,555,666,777,888,999,1000,2000,8000,4040,5050,23,6000,7000,8000,9000}, 13) == 29)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,0,222,333,301,444,666,777,888,999,1000,2000,3030,5050,6000,8000,9000,8000}, 10) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({200,3,40,60,999,7,8000,9,10,7}, 9) == 129)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,445,555,888,10000,23,999,1000,2000,8000,4040,-78,5050,7000,8000,9000}, 13) == 45)){ tests_passed++; } total_tests++;

    if((add_elements({9,7,31,40,50,60,70,80,90,100,111,40}, 7) == 267)){ tests_passed++; } total_tests++;

    if((add_elements({111,444,1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,5050,6000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-89,-77,-55,-44,-21,-22,-11}, 4) == -320)){ tests_passed++; } total_tests++;

    if((add_elements({1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,5050,6000,7000,-55,8000,9000,555}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({200,3,40,60,7,8000,9,8,10,7}, 4) == 103)){ tests_passed++; } total_tests++;

    if((add_elements({41,1000000,3,200,3,40,5000000,39,60,7,6,8000,9,10,7}, 4) == 44)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,5050,6000,8000,9000,1111}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,1000}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,40000,9999,100,500,10000,6000,70,800,70}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,31,50,60,70,1000000,80,90,100,110,1000000}, 5) == 171)){ tests_passed++; } total_tests++;

    if((add_elements({90,1000,20,300,40000,100,500,10000,6000,70,800}, 5) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,20,6000,500,10000,6000,70,40000,799,799}, 5) == 40)){ tests_passed++; } total_tests++;

    if((add_elements({10,901,200,300,400,500,600,700,800,900,1000}, 4) == 10)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,301,100,500,10000,6000,70,800,10000}, 3) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,555,101,300,-89,100,500,10000,6000,70,-89,800}, 12) == -108)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,40,50,60,70,80,90,100,110,90,90,30}, 7) == 280)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,55,1000,200}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,555,666,777,888,999,1000,2000,3030,4040,5050,5999,7000,555,8000,9000}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,222,333,444,555,666,777,887,999,1000,2000,8000,4040,6000,7000,8000,9000,7000,111}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,300,100,500,10000,6000,70}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-78,-66,-55,-44,-33,333,-11,0,22,33,44,4,66,77,88,99}, 11) == -452)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,20,6000,500,10000,6000,40000}, 6) == 40)){ tests_passed++; } total_tests++;

    if((add_elements({100,100,201,300,400,500,600,700,900,1000,200}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,55,1000,200}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,40000,100,500,500,10000,501,6000,70,40000,333,333}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,300,444,555,666,777,39999,888,999,1000,2000,110,3030,5050,6000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,301,100,500,10000,6000,70,800,500,20}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,300,444,555,666,777,888,999,1000,2000,3030,5050,6000,8000,9000,444,1000,999}, 10) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-78,-66,-55,-44,-33,-22,-11,0,11,22,33,44,4,66,77,88,99,99}, 10) == -496)){ tests_passed++; } total_tests++;

    if((add_elements({1000,8,20,300,40000,301,100,500,10000,6000,70,800,10000,10000}, 3) == 28)){ tests_passed++; } total_tests++;

    if((add_elements({1000,555,9999,101,300,-89,100,500,10000,6000,70,40000,800}, 12) == -19)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,2,200,3,40,5000000,60,7,8000,9,10,7}, 7) == 105)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-89,-77,-55,222,900,-44,-33,-22,-11}, 6) == -320)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,2,7999,40,5000000,60,7,8000,10,10}, 7) == 102)){ tests_passed++; } total_tests++;

    if((add_elements({111,799,22,222,333,300,444,555,666,777,888,999,1000,2000,3030,5050,6000,8000,9000,444,1000,2000,2000}, 10) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,20,5000000,40000,100,500,10000,6000,70,800,70}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,101,200,300,400,600,700}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,300,444,555,666,777,888,999,1000,2000,3030,5050,6000,8000,9000,444,1000,999}, 9) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,112,222,333,300,444,555,666,777,888,999,1000,2000,3030,5050,6000,8000,9000,2000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-89,-77,-66,-55,-44,-10,-33,-22,-11,-11}, 5) == -386)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,2000,40,5000000,60,7,8000,9,10,9}, 8) == 107)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,445,555,666,777,888,999,1000,2000,8000,4040,5050,6000,7000,8000,9000,777}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,444,555,666,777,888,999,1000,2000,3030,5050,6000,8000,9000,1111}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,40000,9999,100,500,10000,6000,70,800,70}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000001,200,3,39,5000000,40,8000,9,10,8000}, 9) == 101)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,3,200,3,5000000,60,7,8000,9,10,7}, 8) == 73)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,4039,5050,6000,4039,7000,8000,8999,8999}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,500,600,700,800,900,1000,600}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,500,10000,6000,70,40000,799,40000}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({3,200,3,40,5000000,7,8000,12,10,7,3}, 8) == 65)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,2000,40,5000000,60,7,8000,9}, 8) == 107)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,2000,41,5000000,60,8000,9,10}, 8) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({10,200,300,400,700,800,900,200,1000,900}, 8) == 10)){ tests_passed++; } total_tests++;

    if((add_elements({3,40,60,7,8000,9,8,10,7}, 4) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,40000,9999,100,500,10000,9999,6000,70,800,70}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,40000,202,100,500,10000,9999,6000,70,800,70}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,8,20,300,40000,301,100,500,10000,6000,70,800,10000,10000,70}, 3) == 28)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,66,4040,5050,6000,7000,8000,9000,6000}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,8,20,-66,40000,301,100,500,10000,6000,70,800,10000,10000}, 3) == 28)){ tests_passed++; } total_tests++;

    if((add_elements({111,4999999,321,500,101,200,300,400,600,700}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,555,666,777,888,999,1000,2000,3030,4040,5050,5999,7000,8000,9000,7000}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,1000,2000,3030,5050,6000,444,6999,8000,9000,111,8000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({20,301,40000,100,500,10000,6000,70,40000,800}, 3) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,20,5000000,40000,100,500,9999,7000,6000,70,801}, 2) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,101,200,400,600,700}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({299,1000,101,300,39999,100,500,6000,40000,800,20,500}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,2,200,3,5000000,60,7,8000,9,10,5000000,10}, 9) == 81)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,333,555,666,777,888,999,1000,2000,3030,8,5050,6000,7000,8000,4040}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,3,40,5000000,60,7,8000,10,10,1000000,1000000}, 8) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({4,201,3,40,5000000,7,8000,9,10,7}, 8) == 63)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-78,-66,-55,-44,-33,10000,600,-11,0,11,22,33,44,55,66,77,88,99,-33}, 10) == -474)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,555,666,888,999,1000,2000,3030,4040,5050,7000,8000,9000}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-99,-89,-77,-55,900,-44,-33,-21,-22}, 5) == -419)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-99,-89,7001,-55,-44,7001,-33,-22,-11}, 6) == -386)){ tests_passed++; } total_tests++;

    if((add_elements({20,100,301,40000,100,500,10000,6000,70,40000,800}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,444,1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,5050,6000,8000,9000,6000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,555,666,777,888,999,1000,2000,3030,4040,5050,5999,41,8000,9000,4040}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,333,444,555,71,666,777,888,999,1000,2000,8000,666,4040,5050,6000,7000,8000,9000}, 12) == 93)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,299,20,6000,500,10000,6000,40000}, 6) == 40)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,3,40,5000000,60,7,8000,10,10}, 9) == 120)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,8000,4040,5050,6000,7000,8000,9000,8000}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({11,22,4,44,55,66,77,88,99}, 8) == 367)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-99,-89,-78,-55,900,-44,-22,-22,-11,-89}, 4) == -365)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,2000,41,5000000,8000,9,10}, 7) == 50)){ tests_passed++; } total_tests++;

    if((add_elements({20,200,3,40,5000000,667,7,6,8000,10}, 8) == 76)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,900,222,333,445,555,666,777,888,999,1000,2000,8000,4040,5050,6000,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,300,100,500,10000,6001,70}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({11,22,33,44,55,66,88,1000,99}, 8) == 319)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,500,600,700,800,900,1000,1000}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,4040,6000,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,7,444,555,666,777,888,5050,999,1000,2000,8000,4040,5050,23,6000,7000,8000,9000}, 13) == 29)){ tests_passed++; } total_tests++;

    if((add_elements({111,22,222,333,444,555,666,777,888,999,1000,2000,66,4040,5050,6000,7000,8000,9000}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,40000,301,100,500,10000,6000,70,800,10000}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,88,777,888,999,2000,3030,5050,6000,8000,9000}, 12) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,66,4040,5050,6000,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({200,3,40,60,999,7,8000,9,10,7,7}, 9) == 129)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,500,600,700,799,800,900,1000}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,223,333,555,666,777,888,1000,2000,3030,5050,6000,7000,8000,9000,111}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,8000,4040,5050,6000,7000,8000,9000,8000}, 14) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,90,40,5000000,60,7,8000,10,10}, 7) == 197)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,20,5000000,40000,100,500,9999,6000,70,801}, 2) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,6999,22,333,444,555,666,777,888,999,1000,2000,8000,1999,4040,5050,6000,7000,8000,9000}, 9) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,7,444,555,666,777,888,5050,999,1000,2000,8000,4039,5050,23,1000000,7000,8000,9000}, 13) == 29)){ tests_passed++; } total_tests++;

    if((add_elements({99,1000000,20,5000000,40000,100,500,9999,6000,70,801}, 2) == 99)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,301,100,500,10000,6000,70,800,500,20}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,20,6000,500,10000,6000,70,40000,799,799}, 4) == 40)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,333,444,555,666,777,888,999,1000,2000,3030,5050,6000,7000,8000,3030,4040}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,77,444,111,555,666,777,888,1000,2000,3030,5050,6000,7000,8000,9000,111}, 13) == 99)){ tests_passed++; } total_tests++;

    if((add_elements({1000001,3,40,5000000,1000002,40,8000,9,10,8000}, 9) == 102)){ tests_passed++; } total_tests++;

    if((add_elements({999,20,300,6000,500,10000,6000,70,40000,799}, 7) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,31,40,50,71,1000000,80,90,100,110}, 6) == 222)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,8999,666,777,888,999,1000,2000,201,4040,5050,5999,7000,8000,9000}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,554,8999,666,777,888,999,1000,2000,4040,5050,6000,7000,8000,9000}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({100,1000,300,40000,9999,100,500,10000,6000,70,800,70}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,222,333,444,555,666,777,888,999,1000,2000,-55,8000,4040,5050,6000,7000,8000,9000,7000}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({71,20,101,300,39999,100,500,10000,6000,70,40000,800}, 5) == 91)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,500,600,700,800,900,1000,600,600}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,300,100,500,10000,6000,70,300}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,301,100,500,10000,6000,70,800,10000,10000}, 3) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,5050,6000,7000,8000,9000,111}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,7,444,555,666,777,888,5050,1000,2000,8000,4039,5050,23,1000000,7000,8000,9000}, 13) == 29)){ tests_passed++; } total_tests++;

    if((add_elements({2000,111,1111,22,222,0,555,666,888,999,1000,2000,3030,5050,6000,7001,8000,9000,111}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,554,8999,666,777,888,999,1000,2000,4040,5050,6000,7000,9000}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000001,200,3,40,5000001,5000000,7,8000,9}, 8) == 50)){ tests_passed++; } total_tests++;

    if((add_elements({80,8,200,3,40,5000000,7,4999999,8000,9,10,7}, 8) == 138)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,555,666,777,888,999,1000,334,3030,4040,5050,5999,41,8000,9000,4040}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({200,400,500,600,700,800,900,1000,101,200}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1112,22,222,333,444,555,666,777,888,999,1000,2000,3030,4040,5050,6000,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,555,14,101,300,-89,100,500,10000,6000,70,-89,800}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,3,40,5000000,60,7,8000,10,10,60}, 6) == 103)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,40000,100,10000,6000,70,40000,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,40000,9999,100,500,10000,6000,70,800}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({90,1000,20,300,40000,100,500,10000,6000,70,7000,800}, 5) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({20,101,300,39999,100,5,6000,40000,800,20}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,9000,100,500,10000,6000,70,40000,333}, 7) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,8,20,-66,40000,301,100,500,10000,6000,70,10000,10000}, 3) == 28)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,39999,19,100,5,6000,40000,800,20}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,40000,500,10000,6000,70,40000,333}, 7) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,1000,2000,3030,5050,6000,444,6999,8000,9000,8000,444}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,3,40,5000000,60,-89,7,8000,10,10,1000000,1000000}, 8) == 21)){ tests_passed++; } total_tests++;

    if((add_elements({901,200,300,400,500,600,700,800,900,1000}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,501,600,700,800,900,1000,1000}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11,0,11,22,33,44,5,55,66,77,88,99}, 10) == -495)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,6999,22,333,444,555,666,777,888,999,2000,8000,1999,4040,5050,6000,7000,8000,9000}, 8) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,55,333,444,555,666,777,888,999,1000,2000,3030,5050,6000,7000,8000,9000,1111}, 13) == 77)){ tests_passed++; } total_tests++;

    if((add_elements({20,31,40,50,71,1000000,80,90,100,110,10}, 6) == 212)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,0,222,333,300,444,666,776,888,999,1000,2000,3030,5050,6000,8000,9000,8000}, 12) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({3,200,3,40,5000000,39,60,7,6,8000,9,10,7}, 4) == 46)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,1000,2000,3030,5050,6000,444,7000,8000,9000,111}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,5000000,101,300,40000,500,10000,6000,70,40000,333}, 7) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({5000001,1000,20,5000000,101,300,40000,500,10000,6000,70,40000,333,20}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({20,71,301,40000,100,69,500,10000,6000,70,40000,800,100}, 5) == 91)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,222,333,444,555,666,777,888,999,1000,2000,8000,4040,6000,7000,8000,9000,7000}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({3,200,3,40,5000000,39,60,7,6,8000,9,10,7}, 5) == 46)){ tests_passed++; } total_tests++;

    if((add_elements({3,200,3,40,5000000,7,444,8000,9,7}, 8) == 53)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,111,200,3,40,60,7,8000,9,10,7,3}, 8) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({11,22,4,44,55,66,77,88,887,99}, 8) == 367)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,3,200,3,5000000,60,7,8000,8,10,7,200}, 8) == 73)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,20,40000,100,500,9999,6000,70,801}, 2) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,20,5000000,40000,100,500,10000,6000,70,800,70}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,300,444,555,666,777,888,6999,999,1000,2000,3030,5050,6000,8000,9000}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,333,555,666,777,888,999,1000,2000,3030,8,5050,6000,7000,8000,4040}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({99,1000,20,300,40000,100,500,10000,6000,70,7000,800,300}, 5) == 119)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,222,333,321,444,555,666,777,887,999,1000,2000,8000,4040,6000,7000,8000,9000,7000,111}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,20,301,5000000,40000,100,500,6000,70,800,70}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,300,100,299,500,10000,6000,70}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,3,40,5000000,60,7,4999999,9,10,7}, 8) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({99,2,1000000,5000000,40000,100,500,9999,6000,70,801}, 2) == 101)){ tests_passed++; } total_tests++;

    if((add_elements({901,200,300,400,500,555,700,800,900,1000}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,40000,500,10000,6000,70,40000,333,40000}, 7) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,1000,1000}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,20,300,40000,100,500,10000,6000,300,70,800}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({10,200,400,700,800,900,200,1000}, 2) == 10)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,400,500,599,600,700,800,900,1000,101,200,400}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-99,-89,-77,900,-44,-33,-21,-22}, 5) == -364)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,12,3,40,5000000,60,7,8000,8,7,10,7,3}, 9) == 122)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,222,333,444,555,666,777,888,999,-33,1000,2000,8000,4040,6000,7000,8000,9000,7000}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({10,200,300,400,700,800,900,1000,900}, 9) == 10)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,33,22,222,333,444,555,666,777,888,999,2000,3030,5050,6000,8000,9000}, 12) == 55)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11,-1,11,22,33,44,5,55,66,77,88,99}, 10) == -496)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,40000,100,500,10000,6000,70,40000,39999,800,101}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,300,444,555,666,777,888,999,1000,2000,3030,5050,6000,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-99,-89,-78,-55,900,-44,-22,-22,-11,-89}, 5) == -420)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,301,100,500,10000,6000,-1,800,500,20}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({202,1111,22,222,333,444,555,666,88,777,888,999,2000,3030,5050,6000,8000,9000}, 12) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,5050,6000,7000,-55,8000,9000,555}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,39999,100,500,10000,6000,70,40000,800}, 3) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,300,444,555,666,777,888,999,1000,2000,110,3030,5050,6000,8000,9000,222}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({3,201,3,40,5000000,7,8000,9,11,7}, 8) == 62)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,5050,6000,8000,9000}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,40000,9999,100,500,10000,6000,70,800,9999}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,20,6000,500,10000,6000,-22}, 6) == 40)){ tests_passed++; } total_tests++;

    if((add_elements({111,799,22,222,333,300,444,555,666,777,888,999,1000,2000,3030,5050,6000,8000,9000,444,1000}, 9) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,90,40,5000000,60,7,10,8000,10,10}, 7) == 197)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-99,-89,-77,-56,900,-44,-33,-21,-22,-11}, 5) == -420)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,40000,9999,100,500,10000,6000,70,800,9999}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,301,100,500,10000,6000,-1,800,500,20,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,0,555,666,888,1000,2000,3030,5050,6000,8000,9000,111}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,2000,41,5000000,60,8000,4999999,9,10}, 8) == 101)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,40000,100,500,10000,6000,299,70,40000,800}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({201,-88,-78,-66,-55,-44,-33,-22,-11,0,11,22,34,44,55,66,77,88,99}, 9) == -397)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,6000,-1,800,500,20}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,301,100,500,10000,6000,70,800,10000,10000,6000}, 3) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,300,444,555,666,777,888,999,1000,2000,3030,5050,12,8000,9000,8000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,7,444,555,80,777,888,5050,1000,2000,8000,4039,5050,23,1000000,7000,8000,9000}, 13) == 109)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,3,40,5000000,112,7,8000,10,10}, 7) == 50)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,6000,70,40000,333}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,333,444,555,666,888,999,1000,2000,3030,5050,6000,7000,8000,3030,4040,3030}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({3,200,3,40,39,60,7,6,8000,9,10,7}, 5) == 85)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,222,333,444,555,776,666,777,888,999,1000,2000,8000,4040,6000,7000,8000,9000,7000,111,6000}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,40000,100,13,500,10000,6000,70,800}, 5) == 13)){ tests_passed++; } total_tests++;

    if((add_elements({10,901,200,300,400,500,600,700,800,900,1000,800}, 4) == 10)){ tests_passed++; } total_tests++;

    if((add_elements({111,799,22,222,333,300,555,666,777,888,3030,999,1000,2000,3030,5050,6000,8000,9000,444}, 9) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-78,-66,-55,-44,9000,-33,-22,-11,0,22,33,44,4,66,77,88,99,0}, 11) == -496)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,4039,222,333,445,555,777,888,999,1000,2000,8000,4040,-78,5050,6000,7000,8000,9000,445,111}, 12) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,-33,1111,22,222,333,300,444,555,666,777,888,999,1000,2000,110,3030,5050,6000,8000,9000,5050}, 13) == -11)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,3,40,5000000,60,7,4999999,8000,9,10,7,200}, 8) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,554,8999,666,777,888,999,1000,2000,4040,5050,6000,7000,8999,9000}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,40001,22,222,333,444,554,8999,666,777,888,70,1000,2000,4040,5050,6000,7000,8000,9000}, 13) == 92)){ tests_passed++; } total_tests++;

    if((add_elements({9,7,31,101,50,60,70,80,90,100,111,40}, 6) == 157)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,301,100,500,10000,6000,70,800,500,20}, 7) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-33,-22,-11,-1,11,22,33,44,5,55,66,77,88,99}, 10) == -441)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,500,600,700,999,799,800,900,1000}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-89,-77,-55,900,-44,-22,-11,-77}, 7) == -386)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,20,301,5000000,40000,100,500,6000,70,7,70}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({200,3,40,5000000,7,8000,9,10,2,7}, 8) == 69)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,31,40,50,60,70,1000000,80,90,100,110,1000000,1000000}, 6) == 211)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,299,20,6000,39999,500,10000,6000,40000}, 6) == 40)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,101,200,400,600,700}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({299,1000,101,300,39999,100,500,6000,40000,800,20,500}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,0,555,666,888,1000,2000,3030,5050,6000,44,8000,9000,111}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-44,-89,-77,-55,900,-44,-33,-22,-11}, 6) == -364)){ tests_passed++; } total_tests++;

    if((add_elements({200,2,40,60,7,8000,9,10,7}, 3) == 42)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,4039,300,40000,100,500,10000,70,40000,800,40000}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,666,777,888,999,1000,2000,3030,4040,5050,6000,7000,8000,9000,8000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({100,8999,200,300,400,501,600,700,800,900,1000,1000}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,222,333,444,555,666,777,888,999,1000,2000,8000,4040,6000,7000,8000,9000,7000,9000}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-33,-99,-99,-89,7001,-55,-44,-33,-22,-11}, 6) == -375)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,600,700,800,1000,1000}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-89,-77,-55,900,-44,-33,-22,-11,-77}, 5) == -320)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,300,444,555,666,777,40,999,1000,2000,3030,5050,12,8000,9000,8000}, 12) == 62)){ tests_passed++; } total_tests++;

    if((add_elements({71,20,31,40,50,60,70,80,90,100,111,100}, 6) == 272)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,31,50,71,1000000,80,90,100,110}, 7) == 262)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,200,100}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,2000,40,5000000,60,8000,9,10,9}, 8) == 109)){ tests_passed++; } total_tests++;

    if((add_elements({200,12,40,60,999,7,8000,9,7}, 7) == 119)){ tests_passed++; } total_tests++;

    if((add_elements({10,200,300,400,700,800,900,1000,900}, 8) == 10)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,300,6000,444,555,666,777,39999,888,999,1000,2000,110,3030,5050,6000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,1000,1000}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,444,555,8999,666,777,888,999,4039,1000,2000,202,4040,5050,6000,7000,8000,9000}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,101,300,40000,500,10000,6000,70,40000,40000,300}, 7) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,222,333,444,555,776,666,777,888,999,1000,2000,8000,4040,6000,7000,8000,9000,7000,111,6000}, 7) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-99,-89,-77,-78,-55,900,-44,-33,-21,-22}, 5) == -442)){ tests_passed++; } total_tests++;

    if((add_elements({299,1000,999,101,300,39999,100,500,6000,20,500}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000001,200,3,40,5000001,-78,5000000,7,8000,9,7}, 8) == -28)){ tests_passed++; } total_tests++;

    if((add_elements({9,7,6000,31,40,50,60,70,80,90,100,111,40}, 7) == 197)){ tests_passed++; } total_tests++;

    if((add_elements({11,22,33,44,55,66,88,1000,99}, 9) == 418)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-99,-90,7001,-55,-44,-33,-22,-11}, 6) == -387)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,112,222,333,300,444,555,666,777,888,999,1000,2000,3030,5050,999,6000,8000,9000,2000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,500,600,700,799,800,899,1000}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,333,445,555,888,10000,23,999,1000,2000,8000,4040,-78,5050,7000,8000,9000,8000}, 13) == 45)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,100,6000,1000001,70,800}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({445,1000,300,40000,9999,100,500,10000,6000,70,800,70}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,333,444,555,666,777,888,10000,1000,2000,3030,4040,5050,6000,7000,8000,9000,4040,22}, 11) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-77,-55,112,900,-44,-33,-22}, 6) == -275)){ tests_passed++; } total_tests++;

    if((add_elements({599,1000,20,101,300,40000,100,500,10000,501,6000,70,40000,333}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({100,2000,30000,400000}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1,22,333,4444,55555}, 4) == 23)){ tests_passed++; } total_tests++;

    if((add_elements({1,2,3,4,5}, 5) == 15)){ tests_passed++; } total_tests++;

    if((add_elements({1234,5678,9012,3456}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({99}, 1) == 99)){ tests_passed++; } total_tests++;

    if((add_elements({1,2,3,4,5,6,7,8,9}, 5) == 15)){ tests_passed++; } total_tests++;

    if((add_elements({12345,6789,101112,131415,161718}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-1,-22,-333,-4444}, 2) == -23)){ tests_passed++; } total_tests++;

    if((add_elements({-1,2,-3,4,-5}, 3) == -2)){ tests_passed++; } total_tests++;

    if((add_elements({55}, 1) == 55)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,400,600}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,40,50,60,70,80,90,100,110}, 6) == 210)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,40,50,60,70,80,90,100,110,100}, 6) == 210)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,500}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({11,22,33,44,55,66,77,88,99}, 4) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,40,60,70,80,90,100,110,90}, 5) == 160)){ tests_passed++; } total_tests++;

    if((add_elements({20,300,40000,100,-66,10000,6000,70,800}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,500}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11}, 6) == -429)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,5000000,700,800,900,1000}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11,0,11,22,33,44,55,20,66,77,88,99}, 10) == -495)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,6000,80,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,6000,80,800,6000}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,40,50,60,70,80,90,100,110}, 5) == 150)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,3031,333,444,555,666,777,888,999,1000,2000,3030,4040,5050,6000,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11,0,11,22,33,44,55,66,77,88,99}, 9) == -495)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11,-44}, 6) == -429)){ tests_passed++; } total_tests++;

    if((add_elements({20,300,40000,5999,100,500,10000,6000,80,800,6000}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({112,321,500,100,200,300,400}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,3031,333,444,555,666,777,888,999,1000,2000,3030,4040,5050,6000,7000,8000,9000,2000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,6000,80,800,6000,10000}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,199,800,900,90}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-99,-88,-77,-66,-55,-44,-33,-22,-11}, 5) == -429)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,100,6000,70,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({200,3,40,5000000,60,7,8000,9,10}, 8) == 119)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,44,-11,0,11,22,33,44,55,77,88,99}, 10) == -429)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,40,50,60,70,90,100,6000,110}, 6) == 210)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,30,-77,-66,-55,-44,-33,-22,-11,0,11,22,33,44,55,20,66,77,88,99}, 9) == -454)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,400,600,100}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,500,900}, 7) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,300,400,600,700}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,50,60,70,80,100,110,100}, 6) == 240)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11,0,11,22,33,55,66,77,88,99}, 9) == -495)){ tests_passed++; } total_tests++;

    if((add_elements({1111,22,222,3031,333,444,555,666,777,888,999,1000,2000,3030,4040,5050,6000,7000,8000,9000,999}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,600,700}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,-88,700,800,1000}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22}, 5) == -385)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,600,222,700}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,400,600,700,400}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-21,-11,0,11,22,33,44,55,66,77,88,99}, 10) == -494)){ tests_passed++; } total_tests++;

    if((add_elements({112,321,500,100,200,300,400,321}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,70,1000,500}, 9) == 70)){ tests_passed++; } total_tests++;

    if((add_elements({112,321,500,100,200,300,400}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,30,-77,-66,-55,-33,-22,-11,0,11,22,33,44,55,20,66,88,99}, 9) == -421)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,1000}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,1000}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,101,1000,500}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1111,22,222,3031,333,444,555,666,778,888,999,1000,2000,3030,4040,5050,6000,7000,8000,9000,999}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-77,-66,-55,-44,-33,-22,-22}, 4) == -297)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11}, 7) == -462)){ tests_passed++; } total_tests++;

    if((add_elements({111,500,100,200,300,600,700,200}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,320,500,100,200,300,600,222,700}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,600,700,800,900,1000,500}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,500,800,900,1000,1000,900}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({101,200,300,400,500,600,700,800,900,1000,500}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,21,100,500,10000,100,6000,70,800}, 5) == 41)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,400,600,700}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,5050,-11,-44,-44}, 6) == -429)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,666,100,500,10000,6000,80,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,600,700,800,1000,500}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,199,800,900,90}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,3031,333,444,555,600,777,888,999,1000,2000,3030,4040,5050,6000,7000,8000,9000,2000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,1000,300}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({999,200,300,400,500,600,700,800,900,1000,500}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,10000,600,700,800,900,1000,1000}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,600,222,700}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({321,500,100,200,300,600,700}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,1000,500}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,101,1000,100,500}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,70,5,101,1000,500}, 9) == 70)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,40,50,60,70,80,90,100,110}, 6) == 250)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,600,700,800,1000,1111}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,1000}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({200,2,40,5000000,60,7,8000,9,10}, 8) == 118)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,3031,444,555,600,777,888,999,1000,2000,3030,4040,8000,5050,6000,7000,8000,9000,2000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22}, 7) == -462)){ tests_passed++; } total_tests++;

    if((add_elements({112,321,500,100,199,300,400}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,600,700}, 7) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({999,200,300,400,500,600,700,800,900,1000,500}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({321,500,100,200,300,600,700}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11,0,11,22,33,44,55,20,66,77,88,99}, 9) == -495)){ tests_passed++; } total_tests++;

    if((add_elements({321,77,100,300,66,600,700}, 2) == 77)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,70,1000,500}, 10) == 70)){ tests_passed++; } total_tests++;

    if((add_elements({112,321,500,100,200,300,400,321,321,321}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,320,500,100,200,300,600,222,700,320}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({321,500,100,200,300,600,700,100}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({20,300,40000,5999,100,500,10000,80,800,6000}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,666,100,500,10000,6000,80,800}, 8) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,70,1000,500,70}, 9) == 70)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,20,300,40000,100,500,10000,6000,70,800}, 3) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,299,666,100,500,10000,6000,80,800,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,40,60,70,80,90,100,110}, 6) == 230)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,5050,-11,-44,-44,5050}, 6) == -429)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,1000,400,600,700}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22}, 6) == -429)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,5000000,700,800,900,1000}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({200,3,40,5000000,60,7,8000,9,10}, 9) == 129)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-54,-44,-33,-22}, 7) == -461)){ tests_passed++; } total_tests++;

    if((add_elements({112,321,500,100,200,300,400}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,500,600,700,800,900,101,1000,100,500,300}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-44}, 6) == -429)){ tests_passed++; } total_tests++;

    if((add_elements({2000,-88,-77,-66,-55,-44,-33,-22,-11}, 7) == -363)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,500,800,900,1000,1000,900}, 11) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11,3030,11,22,33,44,55,66,77,88,99}, 9) == -495)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,300,600,222,600}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({400,100,200,300,400,500,600,700,800,900,1000,500}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,200}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({999,200,300,400,800,500,600,700,800,900,1000,500}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-11,-88}, 5) == -385)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,6000,80,800,6000,10000}, 3) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,40,50,333,70,80,90,100,110}, 7) == 220)){ tests_passed++; } total_tests++;

    if((add_elements({111,320,500,100,200,300,600,222,700}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,700,800,900,1000,200}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,100,500,100,300,600,222,600}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({321,77,100,300,66,321,600,700}, 2) == 77)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,1000,400,600,700}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,300,400,700,800,900,1000,200}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,49,60,70,80,100,110,100}, 6) == 239)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,5050,-11,-44,-44}, 3) == -264)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,80,800,6000,10000}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,10000,100,500,10000,6000,80,800,6000}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,500,100,200,300,600,222,700}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,11,80,800,6000,10000}, 3) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,400,500,600,700,199,800,900,90}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({800,500,100,200,300,600,700}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,6,200,300,400,500,600,700,800,900,1000,1000,300}, 3) == 6)){ tests_passed++; } total_tests++;

    if((add_elements({-88,-77,-66,-55,-44,-33,-22,-11}, 6) == -363)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,44,6000,80,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,6000,80,800,101,6000,10000}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,5050,-12,-44,-44,5050}, 5) == -385)){ tests_passed++; } total_tests++;

    if((add_elements({1111,22,222,3031,333,444,555,666,778,888,999,1000,2000,3030,4040,5050,6000,7000,8000,9000,999,5050}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,3031,444,555,600,776,775,888,999,1000,2000,3030,4040,321,8000,5050,6000,7000,8000,9000,2000}, 22) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({20,300,40000,5999,100,500,10000,6000,80,800,6000}, 9) == 100)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,500,600,700,800,900,101,1000,100,500,111}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,900,299,300,400,500,600,700,800,900,1000,1000}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,320,800,70,1000,500}, 9) == 70)){ tests_passed++; } total_tests++;

    if((add_elements({111,500,100,200,300,600,222,112,700}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-11,-44}, 6) == -429)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,-88,400,500,600,700,800,900,1000,1000}, 4) == -88)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11,0,11,22,33,55,66,77,88,99}, 10) == -495)){ tests_passed++; } total_tests++;

    if((add_elements({-88,2000,-77,-66,-55,-44,-22,-11}, 7) == -352)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,500,600,700,800,900,1000,500}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,500,800,900,1000,1000,900,800}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-21,-11,0,11,22,33,44,55,66,77,88,99}, 11) == -483)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-88,-55,-44,-33,-22,-11,-44}, 6) == -473)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,600,700,800,900,1000,500,700}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({112,321,500,100,199,299,300,400}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11,0,11,22,33,44,55,66,77,88,99,-22}, 12) == -462)){ tests_passed++; } total_tests++;

    if((add_elements({999,200,300,400,500,600,899,700,800,900,1000,500}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,400,600}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,400,600,700,400,111}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,111,500,10000,6000,80,800,6000}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,7000,600,700,800,900,101,1000,100,500,300}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,500,100,200,300,600,222,700}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,500,600,700,800,900,101,1000,100,500,111}, 7) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({500,100,200,300,600,222,700}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({3,20,30,40,50,60,70,80,90,100,110}, 7) == 273)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,40,50,60,70,80,90,110,100}, 6) == 210)){ tests_passed++; } total_tests++;

    if((add_elements({321,100,200,300,600,700,100}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,320,800,70,1000,500,70}, 9) == 70)){ tests_passed++; } total_tests++;

    if((add_elements({20,300,40000,5999,100,500,10000,6000,80,800,6000}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,6000,80,800,101,6000,10000}, 3) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,21,888,500,10000,100,6000,70,800}, 5) == 41)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,3031,444,555,600,776,775,888,999,1000,2000,3030,4040,321,8000,5050,6000,7000,8000,9000,2000}, 23) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,5050,-11,-44,-44,5050,-99}, 6) == -429)){ tests_passed++; } total_tests++;

    if((add_elements({500,100,200,222,700,600}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({200,3,40,5000000,60,7,8000,10,10}, 8) == 120)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,5000000,700,50,800,900,1000}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,-88,400,500,600,66,700,800,900,1000,1000}, 4) == -88)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,-88,400,500,600,700,800,801,900,1000,1000}, 4) == -88)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11,0,11,22,33,44,55,20,66,77,88,99,11}, 10) == -495)){ tests_passed++; } total_tests++;

    if((add_elements({999,200,1001,300,400,800,500,600,700,800,900,1000,500}, 7) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,500}, 7) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,199,800,900,90,300}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,555,800,70,1000,500,320}, 9) == 70)){ tests_passed++; } total_tests++;

    if((add_elements({111,-66,500,100,200,300,600,222,700,320}, 4) == -66)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,200,3,40,5000000,60,7,8000,9,10}, 7) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,600,222,700,300}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,500,100,200,300,600,222,700,222}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-55,-44,-33,5050,-12,-44,-44,5050}, 5) == -363)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,1000,500}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,67,-55,-44,-33,-22,-11,3030,11,22,33,44,55,66,77,88,99}, 9) == -417)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,6000,80,800,101,6000,10000}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-77,-66,-55,-44,-33,-22,-11,0,11,22,33,55,66,77,88,99}, 10) == -396)){ tests_passed++; } total_tests++;

    if((add_elements({111,500,100,200,300,600,700,200,600}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,40,50,60,70,80,90,100,110,110}, 6) == 250)){ tests_passed++; } total_tests++;

    if((add_elements({200,3,40,5000000,8,60,7,8000,9,10}, 9) == 127)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,5000000,700,800,900,5000000}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,40,50,60,70,90,100,110}, 7) == 280)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,776,1000,500}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,500,100,200,300,600,222,112,700,200}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11,0,11,22,33,44,55,66,77,88,99,-22,88}, 12) == -462)){ tests_passed++; } total_tests++;

    if((add_elements({112,321,500,100,200,300,400,321,321,321}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({999,200,300,400,500,600,1000,899,700,800,900,1000,500}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,3031,444,555,600,77,775,888,999,1000,2000,3030,4040,321,8000,5050,6000,7000,8000,9000,2000,999}, 23) == 99)){ tests_passed++; } total_tests++;

    if((add_elements({-88,-77,-66,-55,-44,-33,-22,-11,-77,-11}, 6) == -363)){ tests_passed++; } total_tests++;

    if((add_elements({100,499,300,400,500,600,700,800,900,101,1000,100,500}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({500,100,200,300,600,222,700}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,3,321,500,21,300,600,222,600}, 3) == 3)){ tests_passed++; } total_tests++;

    if((add_elements({111,320,500,100,200,300,600,222,112,700}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,500,100,200,300,600,700,200,200}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({999,200,300,400,500,600,700,800,900,1000,500,1000}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,3031,333,444,555,666,777,888,999,1000,2000,3030,4040,5050,6001,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11,0,11,22,33,55,66,77,88,99,-99}, 10) == -495)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,40,50,60,70,80,90,110,100}, 7) == 280)){ tests_passed++; } total_tests++;

    if((add_elements({321,200,300,600,700,100}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,67,-55,-44,-33,-22,-11,3030,11,22,33,44,55,66,77,88,99}, 10) == -362)){ tests_passed++; } total_tests++;

    if((add_elements({111,100,500,100,300,222,600}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1111,22,222,3031,333,444,555,666,778,888,999,1000,2001,3030,4040,5050,6000,7000,8000,9000,999}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,5000000,700,800,900,5000000}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,500}, 6) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,500,100,200,300,600,222,700}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({999,200,1001,300,400,800,500,600,700,800,900,500}, 7) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-33,-22,-11,3030,11,22,33,44,55,66,77,88,99}, 9) == -451)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,500,800,900,1000,1000,900,800,100}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,600,700,800,7000,500}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,3031,23,444,555,666,777,888,999,1000,2000,3030,4040,5050,6001,7000,8000,9000}, 12) == 45)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,67,-55,-44,-33,-22,-11,3030,-88,22,33,44,55,66,77,88,99}, 10) == -362)){ tests_passed++; } total_tests++;

    if((add_elements({3,20,30,40,50,60,70,80,90,100,110,80}, 7) == 273)){ tests_passed++; } total_tests++;

    if((add_elements({200,3,40,5000000,8,60,7,8000,9,10,60}, 9) == 127)){ tests_passed++; } total_tests++;

    if((add_elements({1000,-89,300,40000,666,100,500,10000,6000,80,800,6000}, 9) == -89)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,3031,333,444,555,666,777,888,999,1000,2000,3030,4040,5050,6000,7000,8000,334,9000,2000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,40,50,60,70,80,90,100,110,100}, 7) == 280)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,500,600,700,800,900,101,1000,100,500,6001}, 7) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-100,-22}, 7) == -462)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,45,6000,80,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,10000,600,700,800,900,1000,1000}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,-54,500,100,200,300,600,222,700,222}, 3) == -54)){ tests_passed++; } total_tests++;

    if((add_elements({999,200,300,400,500,600,700,800,900,1000,500,1000,1000}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-99,-88,-66,-55,-44,-33,-22,-11}, 5) == -407)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,199,800,900,90,600}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,400,444,600,700,400}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,101,200,300,400,600,700,200}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,100,400,500,600,700,199,800,900,90}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,400,600,700,400,111}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-87,-66,-55,-44,-33,-22,-11,0,11,22,33,55,66,77,88,99}, 10) == -582)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-88,-55,-44,-33,-22,777,-44}, 5) == -418)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,100,400,500,600,700,199,800,900,90,100}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-88,-55,-44,-33,-22,777,-44,-44}, 5) == -418)){ tests_passed++; } total_tests++;

    if((add_elements({111,320,500,100,200,300,600,222,700,320}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11,0,11,22,33,55,66,88,99}, 9) == -495)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,499,300,400,500,600,700,800,70,1000,500,499}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,3,321,500,21,300,600,222,600,222}, 3) == 3)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,600,700,800,900,1000,500}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,801,10000,100,6000,70,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,199,800,900,5999,90,300}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,3031,444,555,666,777,888,999,1000,2000,3030,4040,5050,6000,7000,8000,9000,22}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,500,1000}, 6) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,499,300,400,500,600,700,66,900,101,1000,100,500}, 9) == 66)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,40,60,80,90,100,110}, 6) == 240)){ tests_passed++; } total_tests++;

    if((add_elements({999,200,300,400,500,600,700,900,1000,500,1000}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,111,600,700,800,900,500,500}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,-11,100,500,10000,6000,80,800,6000}, 5) == 9)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,100,400,500,600,700,199,800,900,90,100}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,1000,500}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,200,300,400,600,700,9000,111}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({112,-88,-77,-66,67,-55,-44,-33,-22,-11,3030,11,22,33,44,55,66,77,88,99}, 8) == -296)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,400,600,700,400,100}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1111,22,222,889,3031,333,444,555,666,778,888,999,1000,2000,400,3030,4040,5050,6000,7000,8000,9000,999,3031}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,45,6000,80,800}, 6) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,600,700,800,1000}, 7) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,11,-77,-66,-55,-44,-33,-22,-11,3030,11,22,33,44,55,66,77,88,99}, 9) == -473)){ tests_passed++; } total_tests++;

    if((add_elements({112,321,500,100,200,300,400,321,321}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,5000000,700,50,800,900,301,1000}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({200,3,40,5000000,60,7,8000,10,10,40}, 9) == 130)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,40000,666,100,500,10000,6000,80,800}, 6) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,320,500,100,200,300,600,222,700,320,100,600}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,300,400,700,800,900,1000,200}, 6) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,5000000,700,50,800,900,1000}, 5) == 50)){ tests_passed++; } total_tests++;

    if((add_elements({1000000,20,300,40000,100,500,10000,6000,70,800}, 2) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,900,1000,1000}, 11) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,7000,40000,21,888,500,10000,100,6000,70,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({999,200,300,400,500,600,700,800,900,1000,500}, 10) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,200,300,400,778,600,700,9000,111}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,-54,-21,500,100,200,300,600,222,700,-89}, 3) == -75)){ tests_passed++; } total_tests++;

    if((add_elements({101,200,2000,300,400,500,600,700,800,900,1000,500}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,-88,40000,100,500,10000,6000,80,800}, 5) == -68)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,100,6000,70,800,300}, 9) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,10000,100,500,10000,6000,80,800,6000}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-77,-66,-55,-44,-33,-22,-22}, 3) == -242)){ tests_passed++; } total_tests++;

    if((add_elements({20,300,40000,5999,20,100,500,10000,6000,80,800,6000}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({11,22,33,44,55,66,77,88,99,99}, 4) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,6000,80,800,101,6000,10000,10000}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,23,500,600,700,199,800,900,90,300}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,3031,333,444,555,666,777,888,999,1000,3030,4040,5050,6000,7000,8000,334,9000,2000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,30,-55,-44,-33,-22}, 5) == -289)){ tests_passed++; } total_tests++;

    if((add_elements({111,500,100,300,600,222,600}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({300,100,200,300,400,500,900,600,700,800,900,1000,1000,500}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-77,-66,-55,-44,-33,-22,-11,0,11,22,33,55,66,77,88,99,-22}, 10) == -396)){ tests_passed++; } total_tests++;

    if((add_elements({999,200,300,400,500,899,700,800,900,1000,500}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-88,-77,-66,45,-55,-44,-33,-22,9000,-55}, 6) == -285)){ tests_passed++; } total_tests++;

    if((add_elements({20,30,40,50,60,70,80,90,100,110}, 6) == 270)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,401,700,800,900,1000,1000}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,401,700,800,900,1000,1000}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({11,22,33,44,55,66,77,88,5050,99,99}, 4) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11,0,11,22,33,55,66,77,88,99}, 3) == -264)){ tests_passed++; } total_tests++;

    if((add_elements({112,321,500,100,200,300,400,321,321,321}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,5050,-11,-44,-44,5050,-99}, 7) == -462)){ tests_passed++; } total_tests++;

    if((add_elements({999,200,300,400,500,600,199,700,800,900,1000,500,1000,1000}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-88,2000,-77,-66,-55,-44,-22,-11}, 8) == -363)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,500,700,800,900,101,1000,100,500,111}, 7) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,70,5,101,1000,500}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({400,100,200,300,400,500,600,700,800,900,1000,500,800}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({999,200,300,400,800,500,600,700,800,900,1000,500}, 11) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,320,500,100,200,300,222,600,222,112,700}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,199,800,900,90,300}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,499,300,400,500,600,700,800,101,1000,500}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({999,200,300,400,500,600,700,800,900,1000}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,600,700,800,7000,500,800}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,7000,40000,21,888,500,10000,100,6000,70,800}, 9) == 41)){ tests_passed++; } total_tests++;

    if((add_elements({200,400,5000000,700,301,800,900,301,1000}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,699,800,900,1000,500}, 7) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,-11,100,500,10000,6000,800,6000}, 5) == 9)){ tests_passed++; } total_tests++;

    if((add_elements({111,320,500,100,200,300,600,222,4,320,100,600}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,-54,500,100,200,300,600,222,700,-89}, 3) == -54)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,600,700,800,7000,500,800}, 7) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,3031,333,444,555,666,777,888,999,1000,2000,3030,4040,5050,3030,6001,7000,8000,9000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({100,70,300,400,500,600,700,800,900,1000,500}, 6) == 70)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,40,50,60,70,80,90,100,110,100}, 6) == 250)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,199,800,900,90}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,5000000,700,800,900,1001,1000}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({20,30,40,50,60,70,80,90,100,110,50}, 6) == 270)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-77,-66,-55,-44,-33,-22,-11,0,11,22,33,55,66,77,88,99,-88}, 10) == -396)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-88,-55,-44,-33,-22,777,-44}, 4) == -330)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,320,800,70,1000,500,70}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-77,-66,-55,-33,-22,-11,0,11,22,33,55,66,77,88,99,-88}, 11) == -297)){ tests_passed++; } total_tests++;

    if((add_elements({1111,22,222,889,3031,333,444,555,666,778,888,999,1000,2000,400,3031,4040,5050,6000,7000,8000,9000,999,3031}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-66,-54,-44,-33,-22}, 7) == -406)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,11,-77,-66,-55,-44,-33,-22,-11,3030,11,22,33,44,55,66,77,88,99}, 10) == -484)){ tests_passed++; } total_tests++;

    if((add_elements({321,200,300,600,1000000,700,100}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({999,200,300,-22,500,600,700,800,900,1000}, 8) == -22)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,-88,1001,500,600,700,800,801,900,1000,1000,1000}, 4) == -88)){ tests_passed++; } total_tests++;

    if((add_elements({-88,-77,-66,45,-54,-44,-33,-22,9000,-55}, 6) == -284)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,200,400,600,700,9000,111}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({10,20,30,-89,40,60,80,90,100,110}, 6) == 71)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,3031,444,555,600,777,888,999,1000,2000,3030,4040,0,5050,6000,7000,8000,9000,2000}, 12) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,400,5000000,700,800,900,1000}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({20,300,40000,5999,100,501,10000,5999,6000,80,800,6000}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({111,1111,22,222,3031,444,555,600,777,888,999,1000,2000,3030,4040,0,5050,6000,7000,8000,9000,2000,1000}, 13) == 22)){ tests_passed++; } total_tests++;

    if((add_elements({112,555,500,100,201,300,400}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({999,200,1001,300,400,800,-88,600,700,800,900,1000,500}, 7) == -88)){ tests_passed++; } total_tests++;

    if((add_elements({111,500,200,300,600,222,700,222}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({11,22,33,44,55,66,77,88,3030,5050,99,99}, 4) == 110)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-11,-89}, 4) == -330)){ tests_passed++; } total_tests++;

    if((add_elements({1000,300,40000,100,500,10000,11,80,800,6000,10000}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-55,-33,5050,-11,-44,-44}, 3) == -264)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,800,70,-21,500}, 11) == 49)){ tests_passed++; } total_tests++;

    if((add_elements({100,499,200,300,400,500,600,700,800,900,1000,500,900}, 7) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({800,500,100,200,300,600,700,100}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,10000,100,6000,99,70,800}, 5) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,10000,6000,80,800,6000,10000}, 3) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,700,199,800,900,90}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-11}, 6) == -429)){ tests_passed++; } total_tests++;

    if((add_elements({100,499,300,400,500,600,700,800,101,1000,500,100,100}, 8) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,500,100,200,100,300,600,222,112,700,200}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,100,400,500,599,700,199,800,900,90,100}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,599,500,600,320,800,70,1000,500}, 9) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,400,600,700,100}, 5) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({112,321,500,100,200,300,400,321,321,321,112}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({200,300,5000000,700,50,800,900,1000,900}, 5) == 50)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-22}, 6) == -429)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,200,300,400,600,700,9000,111}, 4) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,800,70,1000,500}, 9) == 70)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,666,100,500,10000,6000,80,800}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({321,77,100,300,66,600,700}, 1) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({20,70,30,40,50,60,70,80,90,100,110,50}, 6) == 270)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,600,700,800,1000}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({500,100,222,700,600}, 2) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,321,500,100,200,300,600,222,700,321}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,-11,100,500,10000,6000,800,6000}, 4) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,-88,1001,500,600,700,800,801,900,1000,1000,1000,1000}, 4) == -88)){ tests_passed++; } total_tests++;

    if((add_elements({1000,20,300,40000,100,500,6000,80,800,6000,10000,10000}, 3) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-33,-22,-11,3030,11,22,33,44,55,66,77,88,99,66}, 9) == -451)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,67,-55,-44,-33,-22,-11,3030,-88,78,22,33,44,55,66,77,88,99}, 10) == -362)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,888,44,-11,0,11,22,33,-12,44,55,77,88,99}, 11) == -429)){ tests_passed++; } total_tests++;

    if((add_elements({799,1000000,20,300,40000,100,500,10000,6000,70,800}, 3) == 20)){ tests_passed++; } total_tests++;

    if((add_elements({-99,-88,-77,-66,-55,-44,-33,-22,-11,0,11,22,33,44,55,20,66,77,88,99,-44}, 10) == -495)){ tests_passed++; } total_tests++;

    if((add_elements({100,200,300,400,500,600,-54,700,800,1000}, 3) == 0)){ tests_passed++; } total_tests++;

    if((add_elements({111,320,500,100,200,300,222,600,222,112,319,700}, 3) == 0)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


