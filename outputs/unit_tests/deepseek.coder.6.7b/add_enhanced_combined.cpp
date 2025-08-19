#include<iostream>
#include<vector>
using namespace std;
int add(vector<int> lst){
    int sum = 0;
    for (size_t i = 1; i < lst.size(); i += 2) {
        if (lst[i] % 2 == 0) {
            sum += lst[i];
        }
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

    if((add({4, 88}) == 88)){ tests_passed++; } total_tests++;

    if((add({4, 5, 6, 7, 2, 122}) == 122)){ tests_passed++; } total_tests++;

    if((add({4, 0, 6, 7}) == 0)){ tests_passed++; } total_tests++;

    if((add({4, 4, 6, 8}) == 12)){ tests_passed++; } total_tests++;

    if((add({4,88}) == 88)){ tests_passed++; } total_tests++;

    if((add({4,5,6,7,2,122}) == 122)){ tests_passed++; } total_tests++;

    if((add({4,0,6,7}) == 0)){ tests_passed++; } total_tests++;

    if((add({4,4,6,8}) == 12)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9}) == 0)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8}) == 12)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4}) == 6)){ tests_passed++; } total_tests++;

    if((add({5,4,7,2,1}) == 6)){ tests_passed++; } total_tests++;

    if((add({0,0,0,0,0}) == 0)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7}) == 0)){ tests_passed++; } total_tests++;

    if((add({2,3,4,5}) == 0)){ tests_passed++; } total_tests++;

    if((add({0}) == 0)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6}) == 12)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10}) == 12)){ tests_passed++; } total_tests++;

    if((add({2,4,0,8}) == 12)){ tests_passed++; } total_tests++;

    if((add({2,3,6,8}) == 8)){ tests_passed++; } total_tests++;

    if((add({2,3,5,4}) == 4)){ tests_passed++; } total_tests++;

    if((add({2,3,4,5,2}) == 0)){ tests_passed++; } total_tests++;

    if((add({8}) == 0)){ tests_passed++; } total_tests++;

    if((add({10,2,3,5,4}) == 2)){ tests_passed++; } total_tests++;

    if((add({10,4,3,5,4}) == 4)){ tests_passed++; } total_tests++;

    if((add({9,9,5,7}) == 0)){ tests_passed++; } total_tests++;

    if((add({1,3,4}) == 0)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,2}) == 6)){ tests_passed++; } total_tests++;

    if((add({6,2,3,5,4}) == 2)){ tests_passed++; } total_tests++;

    if((add({5,3,21,64,3,1,1}) == 64)){ tests_passed++; } total_tests++;

    if((add({2,3,5,2}) == 2)){ tests_passed++; } total_tests++;

    if((add({2,3,2,6,8}) == 6)){ tests_passed++; } total_tests++;

    if((add({2,3,4,5,5}) == 0)){ tests_passed++; } total_tests++;

    if((add({10,4,3,3,5,4}) == 8)){ tests_passed++; } total_tests++;

    if((add({0,0,0,0}) == 0)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,2,1,3}) == 6)){ tests_passed++; } total_tests++;

    if((add({8,3,5,2}) == 2)){ tests_passed++; } total_tests++;

    if((add({0,0,0,0,21,0}) == 0)){ tests_passed++; } total_tests++;

    if((add({21,3,64,5,2}) == 0)){ tests_passed++; } total_tests++;

    if((add({2,4,5,2}) == 6)){ tests_passed++; } total_tests++;

    if((add({5,3,21,64,3,2,64,1,1}) == 66)){ tests_passed++; } total_tests++;

    if((add({1,3,4,4}) == 4)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,10}) == 22)){ tests_passed++; } total_tests++;

    if((add({1,3,4,5}) == 0)){ tests_passed++; } total_tests++;

    if((add({3,2,3,5,4}) == 2)){ tests_passed++; } total_tests++;

    if((add({1,3,4,4,3}) == 4)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,2,1,3,3}) == 6)){ tests_passed++; } total_tests++;

    if((add({1,2,2,4,3,2,1,3}) == 8)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,3,2,1,3,1}) == 8)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,64,10,10}) == 22)){ tests_passed++; } total_tests++;

    if((add({4,4,7,2,1}) == 6)){ tests_passed++; } total_tests++;

    if((add({1,21,2,3,4}) == 0)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,3,2,1,2}) == 10)){ tests_passed++; } total_tests++;

    if((add({2,0,2,5,2}) == 0)){ tests_passed++; } total_tests++;

    if((add({0,0,0,6,0}) == 6)){ tests_passed++; } total_tests++;

    if((add({1,2,2,4,3,5,2,1,3}) == 6)){ tests_passed++; } total_tests++;

    if((add({5,21,64,3,1,1,3}) == 0)){ tests_passed++; } total_tests++;

    if((add({1,2,2,4,3,5,2,1,3,2}) == 8)){ tests_passed++; } total_tests++;

    if((add({6,2,3,5,4,4,4}) == 6)){ tests_passed++; } total_tests++;

    if((add({21,5,3,64,5,2}) == 66)){ tests_passed++; } total_tests++;

    if((add({2,3,4}) == 0)){ tests_passed++; } total_tests++;

    if((add({4,2,3,5,2}) == 2)){ tests_passed++; } total_tests++;

    if((add({1,3,3,4}) == 4)){ tests_passed++; } total_tests++;

    if((add({2,3,4,5,2,4}) == 4)){ tests_passed++; } total_tests++;

    if((add({21,5,3,6,64,5,2}) == 6)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,2,1,3,2}) == 8)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,64,3,10,3}) == 12)){ tests_passed++; } total_tests++;

    if((add({1,2,3,7,4,2,1,3,1}) == 4)){ tests_passed++; } total_tests++;

    if((add({0,0}) == 0)){ tests_passed++; } total_tests++;

    if((add({21,3,64,2}) == 2)){ tests_passed++; } total_tests++;

    if((add({1,3,4,4,1}) == 4)){ tests_passed++; } total_tests++;

    if((add({6,2,3,5,4,4,4,2}) == 8)){ tests_passed++; } total_tests++;

    if((add({1,2,2,4,3,3,2,1,3}) == 6)){ tests_passed++; } total_tests++;

    if((add({8,3,5,2,8,2}) == 4)){ tests_passed++; } total_tests++;

    if((add({8,1,2,3,3,2}) == 2)){ tests_passed++; } total_tests++;

    if((add({2,3,4,5,2,4,4}) == 4)){ tests_passed++; } total_tests++;

    if((add({7,2,3,5,4,4,9,4,2}) == 10)){ tests_passed++; } total_tests++;

    if((add({5,21,64,3,1,1,3,21}) == 0)){ tests_passed++; } total_tests++;

    if((add({3,4}) == 4)){ tests_passed++; } total_tests++;

    if((add({5,3,21,64,3,1,1,1}) == 64)){ tests_passed++; } total_tests++;

    if((add({1,3,4,4,3,4}) == 8)){ tests_passed++; } total_tests++;

    if((add({21,5,3,6,20,64,5,2}) == 72)){ tests_passed++; } total_tests++;

    if((add({2,3,4,8,2}) == 8)){ tests_passed++; } total_tests++;

    if((add({8,3,5,2,8,3}) == 2)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,1}) == 0)){ tests_passed++; } total_tests++;

    if((add({8,8}) == 8)){ tests_passed++; } total_tests++;

    if((add({6,2,3,5,5}) == 2)){ tests_passed++; } total_tests++;

    if((add({9,9,5,64}) == 64)){ tests_passed++; } total_tests++;

    if((add({2,21,3,64,2,21}) == 64)){ tests_passed++; } total_tests++;

    if((add({1,3,5}) == 0)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,1,7}) == 0)){ tests_passed++; } total_tests++;

    if((add({5,3,21,64,3,1,2,1}) == 64)){ tests_passed++; } total_tests++;

    if((add({0,8,5,2,8,2}) == 12)){ tests_passed++; } total_tests++;

    if((add({0,8,5,2,2,8,2}) == 18)){ tests_passed++; } total_tests++;

    if((add({21,3,64,8,2}) == 8)){ tests_passed++; } total_tests++;

    if((add({2,4,6,64,10,10}) == 78)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,3,2,1,3,1,3}) == 8)){ tests_passed++; } total_tests++;

    if((add({20,21,64,3,1,1,3,21}) == 0)){ tests_passed++; } total_tests++;

    if((add({21,3,10,64,5,2}) == 66)){ tests_passed++; } total_tests++;

    if((add({2,3,2,6,8,8}) == 14)){ tests_passed++; } total_tests++;

    if((add({2,3,2,6,8,1,8}) == 6)){ tests_passed++; } total_tests++;

    if((add({0,0,0,21,0}) == 0)){ tests_passed++; } total_tests++;

    if((add({6,2,3,5}) == 2)){ tests_passed++; } total_tests++;

    if((add({-64,-4,5,-78}) == -82)){ tests_passed++; } total_tests++;

    if((add({1,5,3,8,7,10,6,9,23,2}) == 20)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,12,14,16,18,20,22,24,26,28,30}) == 112)){ tests_passed++; } total_tests++;

    if((add({3,6,2,7,4,8,1,9,10,5}) == 14)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,55,66,77,88,99,100}) == 320)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}) == 110)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,12,15,18}) == 30)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,11,13,15}) == 12)){ tests_passed++; } total_tests++;

    if((add({1,4,3,8,7,10,14}) == 22)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,8,10,556,100,187,920,42,37,29}) == 728)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,11,13,2,4,6,8,10,12,14}) == 32)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,10}) == 110)){ tests_passed++; } total_tests++;

    if((add({9,4,6,10,11,13,15}) == 14)){ tests_passed++; } total_tests++;

    if((add({122,9,4,6,10,11,13,15}) == 6)){ tests_passed++; } total_tests++;

    if((add({122,9,4,6,10,11,13,15,13}) == 6)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,55,66,77,88,99,100,99}) == 320)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,11,12,13,14,15,16,17,18,19,20,10}) == 98)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,10,11,12,42,13,14,15,16,17,18,19,20,10}) == 52)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,11,13,14,15,16,17,18,19,20}) == 18)){ tests_passed++; } total_tests++;

    if((add({1,4,3,8,7,10}) == 22)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,11,12,13,14,15,16,99,18,19,20,10}) == 98)){ tests_passed++; } total_tests++;

    if((add({3,6,7,4,8,1,9,10,5}) == 20)){ tests_passed++; } total_tests++;

    if((add({1,5,3,8,7,1,10,6,9,23,2}) == 14)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,11,12,14,15,16,9,17,18,19,20}) == 68)){ tests_passed++; } total_tests++;

    if((add({3,6,7,4,8,1,9,10,5,10}) == 30)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,556,100,187,920,42,37,29,7,8}) == 1036)){ tests_passed++; } total_tests++;

    if((add({122,9,4,6,10,11,13,15,13,10}) == 16)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,10,17}) == 110)){ tests_passed++; } total_tests++;

    if((add({3,6,7,4,8,1,9,10,5,8}) == 28)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,55,66,77,88,99,100,100,55}) == 320)){ tests_passed++; } total_tests++;

    if((add({3,920,7,4,8,0,9,10,5}) == 934)){ tests_passed++; } total_tests++;

    if((add({16,15,4,6,26,10,11,13,15}) == 16)){ tests_passed++; } total_tests++;

    if((add({16,15,4,6,26,10,11,13,15,13}) == 16)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,556,100,187,920,42,37,29,7,8,187}) == 1036)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,3,8,10,556,100,187,920,42,37,29,7,8}) == 620)){ tests_passed++; } total_tests++;

    if((add({1,5,8,7,10,6,9,23,2,7}) == 6)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,556,100,187,920,42,37,29,7,8,6,100}) == 1042)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,6,8,10,556,100,187,920,42,37,29,7,8,6,100}) == 720)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,920,12,15,18}) == 920)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,556,3,187,920,42,37,29,7,8,187}) == 936)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,3,8,10,556,100,187,42,37,29,7,8}) == 570)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,16,9,0,12,15,18}) == 30)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,55,66,77,88,99,55,99}) == 220)){ tests_passed++; } total_tests++;

    if((add({1,5,3,8,1,1,26,10,44,9,2}) == 18)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,3,8,10,556,100,187,42,37,29,7,8,187}) == 570)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,14,9,10,11,12,13,14,15,16,17,18,19,20,10,16}) == 18)){ tests_passed++; } total_tests++;

    if((add({1,5,3,8,8,1,1,26,10,44,9,2}) == 80)){ tests_passed++; } total_tests++;

    if((add({1,5,3,8,7,10,6,9,23,2,9}) == 20)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,10,11,12,42,13,14,15,16,17,18,19,10}) == 42)){ tests_passed++; } total_tests++;

    if((add({1,5,3,8,7,6,9,23,2}) == 14)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,556,100,187,920,42,37,28,7,8,187}) == 1036)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,556,100,187,920,42,37,28,6,8,187,9}) == 1042)){ tests_passed++; } total_tests++;

    if((add({16,44,15,4,6,26,11,13,15}) == 74)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,11,13,14,15,17,18,19,20}) == 56)){ tests_passed++; } total_tests++;

    if((add({2,4,8,10,11,13,15}) == 14)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,10,12,13,14,15,16,99,18,19,20,3,3}) == 98)){ tests_passed++; } total_tests++;

    if((add({1,5,11,3,8,7,10,6,9,23,2,9}) == 6)){ tests_passed++; } total_tests++;

    if((add({1,29,5,8,7,10,6,9,23,2}) == 20)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,11,12,17,14,15,16,9,17,18,20,20}) == 80)){ tests_passed++; } total_tests++;

    if((add({12,22,33,44,55,66,77,88,99,100,100}) == 320)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,12,15,18,15,15}) == 30)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,55,66,77,88,66,99,100}) == 220)){ tests_passed++; } total_tests++;

    if((add({3,6,4,8,1,9,10,5}) == 14)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,11,12,42,13,14,15,17,18,19,10}) == 76)){ tests_passed++; } total_tests++;

    if((add({2,4,6,13,8,10,12,14,16,18,20,22,24,26,28,30}) == 124)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,10,11,42,13,14,15,16,17,18,19,20,10}) == 140)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,11,13,2,4,6,8,8,10,12,14}) == 28)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,187,8,10,556,3,187,920,42,37,29,7,8,187,7}) == 620)){ tests_passed++; } total_tests++;

    if((add({2,8,10,11,13,2}) == 10)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,6,10,11,12,12,13,14,15,16,17,18,19,20,10}) == 106)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,8,10,556,100,187,42,37,29}) == 686)){ tests_passed++; } total_tests++;

    if((add({1,3,7,10,1,1}) == 10)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,13,9,11,12,42,13,14,15,17,19,10}) == 78)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,8,10,556,100,66,187,920,42,37}) == 1672)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,3,8,10,556,100,187,42,37,7,8}) == 578)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,14,10,11,12,13,14,15,16,17,18,19,20,10,16}) == 114)){ tests_passed++; } total_tests++;

    if((add({11,22,33,54,44,55,66,77,88,66,99,100,44}) == 242)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,3,8,10,556,100,187,920,42,37,29,555,7,8}) == 612)){ tests_passed++; } total_tests++;

    if((add({16,15,4,6,26,10,26,13,15,13}) == 16)){ tests_passed++; } total_tests++;

    if((add({1,3,8,8,1,1,26,10,44,9,2}) == 18)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,16,9,29,12,15,18}) == 30)){ tests_passed++; } total_tests++;

    if((add({3,6,4,8,1,9,10,5,3}) == 14)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,12,15,15,1}) == 12)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,11,12,17,14,15,16,9,17,18,20,20,15}) == 80)){ tests_passed++; } total_tests++;

    if((add({9,4,5,10,11,555,13,15}) == 14)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,10,12,1,14,15,16,99,18,19,20,3,3,10}) == 98)){ tests_passed++; } total_tests++;

    if((add({19,1,4,3,8,7,10}) == 0)){ tests_passed++; } total_tests++;

    if((add({16,6,15,4,6,26,10,11,13,15}) == 36)){ tests_passed++; } total_tests++;

    if((add({3,3,6,7,4,8,1,9,10,5,8}) == 8)){ tests_passed++; } total_tests++;

    if((add({1,7,10,1,1}) == 0)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,556,101,187,920,42,37,29,7,8,6,100,8,5}) == 950)){ tests_passed++; } total_tests++;

    if((add({11,22,33,54,44,55,66,77,88,66,100,44}) == 186)){ tests_passed++; } total_tests++;

    if((add({16,3,5,7,187,11,13,2,4,6,8,10,12,14}) == 32)){ tests_passed++; } total_tests++;

    if((add({1,5,3,8,7,6,9,2}) == 16)){ tests_passed++; } total_tests++;

    if((add({11,67,22,33,44,55,66,88,99,100,100,55}) == 188)){ tests_passed++; } total_tests++;

    if((add({1,5,3,8,7,6,9,2,8}) == 16)){ tests_passed++; } total_tests++;

    if((add({16,15,6,26,10,11,13,15,11}) == 26)){ tests_passed++; } total_tests++;

    if((add({3,6,7,4,8,1,8,3,10,5,10,5}) == 10)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,6,10,11,12,12,3,13,14,15,16,17,18,19,20,10}) == 48)){ tests_passed++; } total_tests++;

    if((add({122,9,4,6,10,11,13,15,13,10,13}) == 16)){ tests_passed++; } total_tests++;

    if((add({1,7,10,2,1}) == 2)){ tests_passed++; } total_tests++;

    if((add({6,4,5,10,11,555,15}) == 14)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,26,556,100,187,920,42,37,29,7,8,6,100}) == 722)){ tests_passed++; } total_tests++;

    if((add({30,1,5,3,8,7,10,6,9,23,2}) == 6)){ tests_passed++; } total_tests++;

    if((add({8,1,5,3,8,7,6,9,2,8}) == 8)){ tests_passed++; } total_tests++;

    if((add({122,9,4,6,10,11,13,15,13,13}) == 6)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,556,100,920,42,37,28,7,8,187,37}) == 194)){ tests_passed++; } total_tests++;

    if((add({11,22,33,54,44,55,66,77,88,66,100,44,66}) == 186)){ tests_passed++; } total_tests++;

    if((add({16,1,15,6,26,10,11,13,11,15}) == 16)){ tests_passed++; } total_tests++;

    if((add({1,5,7,10,6,9,23,2,7}) == 12)){ tests_passed++; } total_tests++;

    if((add({2,8,10,11,13,7,2}) == 8)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,920,12,15,18,1}) == 920)){ tests_passed++; } total_tests++;

    if((add({3,556,6,7,4,8,1,9,10,5}) == 564)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,556,100,187,920,42,37,29,7,8,6,100,7,8}) == 1042)){ tests_passed++; } total_tests++;

    if((add({3,6,5,7,920,9,920,12,15,18}) == 36)){ tests_passed++; } total_tests++;

    if((add({9,4,5,6,10,11,555,13,15}) == 10)){ tests_passed++; } total_tests++;

    if((add({3,2,3,4,5,6,7,17,8,9,10,11,12,17,14,15,16,9,17,18,20,20,15}) == 50)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,8,10,556,100,66,187,920,42,37,66}) == 1672)){ tests_passed++; } total_tests++;

    if((add({1,5,8,7,10,6,100,9,23,2,7}) == 8)){ tests_passed++; } total_tests++;

    if((add({0,2,3,4,5,6,7,8,9,6,10,11,12,12,3,13,14,15,16,17,18,19,20,10}) == 48)){ tests_passed++; } total_tests++;

    if((add({16,6,26,10,11,13,15,11}) == 16)){ tests_passed++; } total_tests++;

    if((add({1,3,8,7,6,9,2}) == 0)){ tests_passed++; } total_tests++;

    if((add({1,5,3,8,7,10,20,9,23,2,9}) == 20)){ tests_passed++; } total_tests++;

    if((add({9,4,5,187,10,11,555,37,13,15}) == 4)){ tests_passed++; } total_tests++;

    if((add({1,5,3,8,1,1,26,10,44,9,556,2}) == 20)){ tests_passed++; } total_tests++;

    if((add({0,2,3,4,5,6,7,8,9,6,10,11,12,12,3,17,14,15,16,17,18,19,20,10}) == 48)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,11,12,13,14,15,16,7,17,18,19,20,10}) == 70)){ tests_passed++; } total_tests++;

    if((add({1,2,3,3,5,6,7,8,9,6,10,11,12,12,13,14,15,16,17,18,20,10}) == 92)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,12,15,15,1,15}) == 12)){ tests_passed++; } total_tests++;

    if((add({3,3,6,7,4,8,1,9,10,6,5,8,8}) == 22)){ tests_passed++; } total_tests++;

    if((add({1,5,8,7,10,8,6,100,9,23,2,7}) == 108)){ tests_passed++; } total_tests++;

    if((add({1,5,2,3,8,7,17,6,9,23,2,9,17,2}) == 8)){ tests_passed++; } total_tests++;

    if((add({3,22,1,6,7,4,8,1,9,10,5,8,8,1}) == 50)){ tests_passed++; } total_tests++;

    if((add({122,9,4,6,10,11,13,15,13,13,6}) == 6)){ tests_passed++; } total_tests++;

    if((add({16,122,5,7,187,11,13,2,4,6,8,10,12,14}) == 154)){ tests_passed++; } total_tests++;

    if((add({6,4,5,10,11,15}) == 14)){ tests_passed++; } total_tests++;

    if((add({9,4,5,5,10,11,555,13,15}) == 4)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,556,101,187,920,42,37,29,7,8,6,100,8,5,556}) == 1506)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,12,14,15,15}) == 12)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,10,11,13,2,4,6,8,8,10,12,14}) == 46)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,8,10,11,12,13,14,15,16,17,18,19,20,10,2}) == 100)){ tests_passed++; } total_tests++;

    if((add({3,6,2,7,6,4,8,1,9,10,5}) == 20)){ tests_passed++; } total_tests++;

    if((add({2,4,6,13,187,8,10,12,14,17,18,20,22,26,24,26,28,30}) == 126)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,8,10,556,100,66,187,920,42,37,66,10,9}) == 1682)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,8,556,100,187,42,37,99,29}) == 272)){ tests_passed++; } total_tests++;

    if((add({11,22,33,54,44,55,66,77,66,100,44,54}) == 230)){ tests_passed++; } total_tests++;

    if((add({11,67,22,33,44,55,66,88,99,100,100,55,88}) == 188)){ tests_passed++; } total_tests++;

    if((add({11,22,33,54,44,55,66,77,88,66,100,44,33,100}) == 286)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,11,12,42,13,14,15,19,18,19,10,4}) == 80)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,11,12,17,14,15,16,9,17,20,20,15}) == 80)){ tests_passed++; } total_tests++;

    if((add({3,4,2,3,4,5,6,7,17,8,9,10,11,12,10,17,14,15,16,9,17,18,20,20,15}) == 72)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,11,12,17,14,15,16,9,17,20,20,15,9}) == 80)){ tests_passed++; } total_tests++;

    if((add({16,15,4,26,10,11,13,15}) == 26)){ tests_passed++; } total_tests++;

    if((add({16,6,15,4,7,26,10,11,13,15}) == 36)){ tests_passed++; } total_tests++;

    if((add({16,15,4,6,26,10,11,13,15,11,13}) == 16)){ tests_passed++; } total_tests++;

    if((add({1,2,4,4,5,6,7,13,9,11,12,42,13,14,15,17,19,10}) == 78)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,8,556,100,187,42,37,99,29,5}) == 272)){ tests_passed++; } total_tests++;

    if((add({11,67,22,33,44,55,66,88,8,100,100,55,88}) == 188)){ tests_passed++; } total_tests++;

    if((add({1,3,5,12,7,9,920,12,15,18,920,920}) == 962)){ tests_passed++; } total_tests++;

    if((add({3,5,7,7,9,2,6,8,10,556,101,187,920,42,37,29,7,6,100,8,5,556}) == 1178)){ tests_passed++; } total_tests++;

    if((add({122,67,4,6,10,11,13,15,13,13,4}) == 6)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,10,17,7}) == 110)){ tests_passed++; } total_tests++;

    if((add({1,5,3,8,7,10,6,9,24,2}) == 20)){ tests_passed++; } total_tests++;

    if((add({2,6,13,187,8,10,12,14,17,18,20,22,26,24,26,28,30}) == 122)){ tests_passed++; } total_tests++;

    if((add({122,9,4,10,11,13,15,13,10,122}) == 132)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,3,5,6,7,17,8,9,10,11,12,13,15,16,17,18,19,20,10}) == 40)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,6,10,11,12,3,13,14,15,16,17,18,19,20,10}) == 94)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,26,556,100,187,920,42,37,29,7,8,6,100,2}) == 722)){ tests_passed++; } total_tests++;

    if((add({3,6,7,8,1,9,10,5,10}) == 14)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,1,7,17,8,8,10,11,12,13,14,15,16,17,18,19,20,10,2}) == 18)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,98,66,88,99,99}) == 132)){ tests_passed++; } total_tests++;

    if((add({2,8,10,12,11,13,7,2}) == 22)){ tests_passed++; } total_tests++;

    if((add({9,4,5,10,11,555,13,15,10}) == 14)){ tests_passed++; } total_tests++;

    if((add({2,8,10,11,7,2}) == 10)){ tests_passed++; } total_tests++;

    if((add({4,6,4,5,10,11,15}) == 6)){ tests_passed++; } total_tests++;

    if((add({122,9,4,6,10,11,15,13}) == 6)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,19,9,12,15,18,15,15}) == 0)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,54,7,17,8,9,10,11,12,17,14,15,16,9,17,20,20,15}) == 74)){ tests_passed++; } total_tests++;

    if((add({1,5,3,8,8,1,1,26,10,44,9,2,8}) == 80)){ tests_passed++; } total_tests++;

    if((add({2,8,10,11,7,1,2,2}) == 10)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,6,10,11,12,54,3,13,14,15,16,17,18,19,20,10}) == 90)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,8,10,556,1,100,66,187,920,42,37}) == 828)){ tests_passed++; } total_tests++;

    if((add({122,9,6,10,11,13,15,13,10}) == 10)){ tests_passed++; } total_tests++;

    if((add({3,1,101,3,4,5,6,7,17,8,14,10,11,12,13,14,15,16,17,18,19,20,10,16}) == 114)){ tests_passed++; } total_tests++;

    if((add({16,0,1,15,6,26,10,11,13,11,15}) == 26)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,16}) == 128)){ tests_passed++; } total_tests++;

    if((add({1,5,3,8,6,9,2}) == 8)){ tests_passed++; } total_tests++;

    if((add({6,4,5,10,11,15,6}) == 14)){ tests_passed++; } total_tests++;

    if((add({4,6,5,10,11,5,15}) == 16)){ tests_passed++; } total_tests++;

    if((add({2,8,10,2,11,13,2}) == 10)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,7,8,9,10,11,12,13,14,15,16,17,18,19,20,10,2}) == 16)){ tests_passed++; } total_tests++;

    if((add({9,4,6,10,11,13,15,13,13}) == 14)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,11,12,17,14,15,16,9,17,20,20,15,9,9}) == 80)){ tests_passed++; } total_tests++;

    if((add({11,22,32,54,44,55,66,77,88,66,99,100,44}) == 242)){ tests_passed++; } total_tests++;

    if((add({55,3,1,2,3,4,5,6,7,17,8,9,10,10,11,13,14,15,16,99,18,19,20,3,3,99}) == 22)){ tests_passed++; } total_tests++;

    if((add({11,22,32,54,44,55,66,77,88,66,99,100,44,100}) == 342)){ tests_passed++; } total_tests++;

    if((add({4,5,10,11,15}) == 0)){ tests_passed++; } total_tests++;

    if((add({122,9,5,6,10,11,13,15,13,13,6}) == 6)){ tests_passed++; } total_tests++;

    if((add({3,920,7,8,0,9,10,5}) == 928)){ tests_passed++; } total_tests++;

    if((add({19,1,4,8,7,10}) == 18)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,13,9,11,42,13,14,15,17,19,10}) == 12)){ tests_passed++; } total_tests++;

    if((add({9,4,6,10,11,13,15,13,4}) == 14)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,6,7,11,12,12,3,13,14,15,16,17,18,19,20,10,17}) == 48)){ tests_passed++; } total_tests++;

    if((add({3,22,1,6,7,4,8,1,9,9,5,23,8,1}) == 32)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,55,14,66,77,88,99,100,99}) == 80)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,77,11,12,5,17,14,15,16,9,17,20,20,15,9,9}) == 68)){ tests_passed++; } total_tests++;

    if((add({3,6,7,4,8,1,8,10,5,10,5,3}) == 30)){ tests_passed++; } total_tests++;

    if((add({11,33,54,44,55,66,77,88,66,100,44,33,100}) == 298)){ tests_passed++; } total_tests++;

    if((add({122,4,6,10,11,13,15,13,13,6}) == 20)){ tests_passed++; } total_tests++;

    if((add({2,4,6,13,8,10,14,16,18,20,22,24,26,28,30}) == 102)){ tests_passed++; } total_tests++;

    if((add({1,5,8,7,8,6,100,9,23,2,7}) == 8)){ tests_passed++; } total_tests++;

    if((add({3,1,3,3,4,5,6,7,17,8,9,10,11,12,17,14,15,16,9,17,20,20,15,9}) == 80)){ tests_passed++; } total_tests++;

    if((add({3,1,3,3,4,10,5,6,7,17,8,9,10,11,12,17,14,15,16,9,17,20,20,15,9}) == 36)){ tests_passed++; } total_tests++;

    if((add({2,4,5,8,13,15}) == 12)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,6,10,11,12,12,13,14,15,16,17,18,19,20,10,8,13}) == 114)){ tests_passed++; } total_tests++;

    if((add({9,4,5,5,11,555,12,13,15}) == 4)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,16,9,29,12,15,12}) == 24)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,3,5,6,98,7,17,8,9,10,11,12,13,15,16,17,5,19,20,10}) == 134)){ tests_passed++; } total_tests++;

    if((add({1,4,5,2,3,8,7,17,6,9,23,2,9,17,2,2}) == 18)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,920,12,15,18,9}) == 920)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,3,5,6,7,17,8,9,10,11,12,13,15,16,20,18,19,20,10}) == 60)){ tests_passed++; } total_tests++;

    if((add({6,3,6,4,8,1,9,10,5,3}) == 14)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,556,100,920,42,37,28,7,28,187,37}) == 214)){ tests_passed++; } total_tests++;

    if((add({1,5,3,8,1,5,555,26,10,44,9,1}) == 78)){ tests_passed++; } total_tests++;

    if((add({122,9,4,6,10,11,13,15,10}) == 6)){ tests_passed++; } total_tests++;

    if((add({6,4,5,10,15,6,6,6}) == 26)){ tests_passed++; } total_tests++;

    if((add({0,2,3,4,5,6,7,8,9,6,10,11,12,12,2,13,14,15,16,17,18,19,20,10}) == 48)){ tests_passed++; } total_tests++;

    if((add({3,22,1,6,7,4,8,1,9,9,5,23,8,1,3}) == 32)){ tests_passed++; } total_tests++;

    if((add({11,22,33,54,44,55,66,77,88,66,99,100,44,55}) == 242)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,920,12,4,14,18,9}) == 942)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,7,17,8,9,10,11,12,17,14,15,16,9,17,18,20,20}) == 38)){ tests_passed++; } total_tests++;

    if((add({122,9,4,6,10,11,32,15,13,10,9}) == 16)){ tests_passed++; } total_tests++;

    if((add({3,7,9,3,122,6,8,10,556,100,187,920,42,37,29}) == 1036)){ tests_passed++; } total_tests++;

    if((add({3,5,7,2,6,187,8,10,556,3,187,920,42,37,29,7,8,187,7}) == 932)){ tests_passed++; } total_tests++;

    if((add({5,7,9,2,6,8,10,556,101,187,920,42,37,29,7,8,6,100,8,5,556}) == 716)){ tests_passed++; } total_tests++;

    if((add({1,3,5,9,12,15,15,1,15}) == 0)){ tests_passed++; } total_tests++;

    if((add({0,2,4,5,6,7,2,9,6,10,11,12,3,17,14,15,16,17,18,19,20,10,17}) == 34)){ tests_passed++; } total_tests++;

    if((add({10,2,8,10,11,13,7,2,11}) == 14)){ tests_passed++; } total_tests++;

    if((add({16,15,6,26,10,11,13,15,11,67,13}) == 26)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,17,8,9,10,11,12,17,14,15,9,17,18,20,20,9}) == 32)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,556,100,920,42,37,27,7,8,187,37}) == 166)){ tests_passed++; } total_tests++;

    if((add({3,5,7,8,2,6,8,10,556,100,187,920,42,37,28,6,8,187,9}) == 1050)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,187,10,556,3,187,920,42,37,30,7,8,187,7,3}) == 936)){ tests_passed++; } total_tests++;

    if((add({0,5,7,9,2,6,8,10,556,101,187,920,42,37,29,7,8,6,100,8,5}) == 950)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,187,10,556,3,187,12,42,37,30,7,8,187,7,67}) == 28)){ tests_passed++; } total_tests++;

    if((add({8,1,5,3,8,7,6,9,12,8}) == 8)){ tests_passed++; } total_tests++;

    if((add({9,4,6,11,11,13,15,10}) == 14)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,100,5,6,7,17,8,9,10,11,12,17,14,15,16,9,17,18,20,20}) == 80)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,11,12,14,15,16,17,18,19,20}) == 30)){ tests_passed++; } total_tests++;

    if((add({3,5,4,8,1,9,10,5,10}) == 8)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,8,10,556,100,187,920,42,37,28,6,8,187,9}) == 642)){ tests_passed++; } total_tests++;

    if((add({2,4,6,13,23,187,8,10,0,14,17,18,20,22,26,24,26,28,30,8}) == 128)){ tests_passed++; } total_tests++;

    if((add({122,9,5,6,10,11,13,15,13,13,6,13}) == 6)){ tests_passed++; } total_tests++;

    if((add({11,22,33,54,32,44,55,66,77,66,100,44,54}) == 296)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,3,6,7,17,8,9,10,11,12,13,15,16,17,18,19,20,10}) == 60)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,7,17,8,9,10,11,12,17,15,16,9,17,187,20,20}) == 36)){ tests_passed++; } total_tests++;

    if((add({3,5,4,8,8,1,9,10,5,10}) == 28)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,3,8,10,556,100,187,920,42,37,29,555,7,8,100}) == 712)){ tests_passed++; } total_tests++;

    if((add({52,87,31,67,556,33,3,5,99,7,52}) == 0)){ tests_passed++; } total_tests++;

    if((add({9,4,5,7,10,11,555,13,15}) == 4)){ tests_passed++; } total_tests++;

    if((add({3,7,8,0,9,10,5,6,8}) == 16)){ tests_passed++; } total_tests++;

    if((add({2,8,10,11,7,1,2,9,2}) == 8)){ tests_passed++; } total_tests++;

    if((add({1,5,3,556,8,8,1,1,26,10,44,9,2,8}) == 582)){ tests_passed++; } total_tests++;

    if((add({3,2,557,4,5,6,7,17,8,9,10,11,12,17,15,16,9,17,18,20,20,15}) == 48)){ tests_passed++; } total_tests++;

    if((add({3,7,9,3,101,122,6,8,10,556,100,187,920,42,29,101}) == 728)){ tests_passed++; } total_tests++;

    if((add({3,6,4,8,1,9,5}) == 14)){ tests_passed++; } total_tests++;

    if((add({6,4,5,10,11,555,554,15}) == 14)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,11,12,17,14,15,16,9,17,18,20,20,15,16}) == 80)){ tests_passed++; } total_tests++;

    if((add({31,8,10,11,13,2,31}) == 10)){ tests_passed++; } total_tests++;

    if((add({4,5,4,5,10,11,15}) == 0)){ tests_passed++; } total_tests++;

    if((add({11,22,32,54,44,55,66,77,88,66,99,100,44,22}) == 264)){ tests_passed++; } total_tests++;

    if((add({11,24,32,54,44,55,66,77,88,66,28,89,100,44,22}) == 188)){ tests_passed++; } total_tests++;

    if((add({3,5,7,2,6,187,8,10,556,3,187,920,42,37,29,7,8,187,7,7}) == 932)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,187,10,20,556,3,187,12,42,37,30,7,8,187,7}) == 652)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,187,10,187,20,556,3,187,12,42,37,30,7,8,187,7}) == 48)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,19,9,12,15,54,15,15,7}) == 0)){ tests_passed++; } total_tests++;

    if((add({11,33,54,44,55,66,77,26,66,100,44,33,100,100}) == 336)){ tests_passed++; } total_tests++;

    if((add({1,3,3,7,10,1,1}) == 0)){ tests_passed++; } total_tests++;

    if((add({3,6,4,1,9,10,5,3}) == 16)){ tests_passed++; } total_tests++;

    if((add({6,15,4,7,26,10,11,13,15}) == 10)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,55,77,88,66,99,100}) == 232)){ tests_passed++; } total_tests++;

    if((add({5,7,9,2,6,8,10,556,101,187,920,42,18,29,7,8,6,100,8,5,556}) == 716)){ tests_passed++; } total_tests++;

    if((add({3,5,7,7,16,9,0,12,15,18}) == 30)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,3,8,10,556,100,187,920,42,37,29,7,8,42}) == 620)){ tests_passed++; } total_tests++;

    if((add({122,9,4,6,10,123,11,13,15,13,13}) == 6)){ tests_passed++; } total_tests++;

    if((add({16,15,6,26,10,11,13,15,10}) == 26)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,556,100,187,920,42,28,6,8,187,9}) == 1072)){ tests_passed++; } total_tests++;

    if((add({1,5,8,7,10,6,100,9,23,2,7,7}) == 8)){ tests_passed++; } total_tests++;

    if((add({9,4,6,11,23,13,15,10,15}) == 14)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,100,4,6,7,17,8,9,10,11,12,17,14,15,16,9,17,18,20,20,7}) == 84)){ tests_passed++; } total_tests++;

    if((add({2,8,10,2,11,13,2,8}) == 18)){ tests_passed++; } total_tests++;

    if((add({3,66,1,2,3,4,5,6,7,17,8,9,10,11,12,14,15,16,17,18,19,20}) == 146)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,6,10,11,12,12,13,14,15,16,17,18,19,20,10,2}) == 108)){ tests_passed++; } total_tests++;

    if((add({3,2,8,10,11,7,1,2,2}) == 14)){ tests_passed++; } total_tests++;

    if((add({1,7,10,1}) == 0)){ tests_passed++; } total_tests++;

    if((add({1,3,8,1,1,26,10,44,9,2,3}) == 72)){ tests_passed++; } total_tests++;

    if((add({122,4,6,10,11,13,15,13,6,15}) == 14)){ tests_passed++; } total_tests++;

    if((add({6,4,5,10,11,555,14,555}) == 14)){ tests_passed++; } total_tests++;

    if((add({9,4,5,6,9,10,11,555,13,15}) == 20)){ tests_passed++; } total_tests++;

    if((add({2,920,7,4,8,0,9,10,5}) == 934)){ tests_passed++; } total_tests++;

    if((add({9,4,6,11,23,13,15,10,15,11}) == 14)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,8,10,556,100,187,920,42,37,28,6,8,187,9,556,2}) == 644)){ tests_passed++; } total_tests++;

    if((add({2,10,2,11,13,2,6}) == 12)){ tests_passed++; } total_tests++;

    if((add({4,5,10,11,15,10}) == 10)){ tests_passed++; } total_tests++;

    if((add({9,4,5,187,10,11,555,37,13}) == 4)){ tests_passed++; } total_tests++;

    if((add({2,8,7,10,11,7,1,2,9,2}) == 22)){ tests_passed++; } total_tests++;

    if((add({3,5,9,2,6,3,8,10,556,100,187,920,42,37,29,7,8}) == 1032)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,28,14,4}) == 144)){ tests_passed++; } total_tests++;

    if((add({55,1,7,10,10,1,1,7}) == 10)){ tests_passed++; } total_tests++;

    if((add({9,4,6,11,23,13,15,15}) == 4)){ tests_passed++; } total_tests++;

    if((add({2,8,10,7,52,7}) == 8)){ tests_passed++; } total_tests++;

    if((add({16,6,26,42,11,13,15,11}) == 48)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,12,15,15,1,15,9}) == 12)){ tests_passed++; } total_tests++;

    if((add({9,4,6,10,11,13,15,10}) == 24)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,11,12,87,14,15,16,17,18,19,20,10}) == 98)){ tests_passed++; } total_tests++;

    if((add({3,22,1,6,7,8,1,9,9,6,23,8,1}) == 50)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,6,7,11,12,3,13,14,15,16,17,19,20,10,17}) == 66)){ tests_passed++; } total_tests++;

    if((add({11,22,33,54,44,55,66,77,42,66,99,100,44,55}) == 242)){ tests_passed++; } total_tests++;

    if((add({6,4,5,11,10,11,15}) == 4)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,10,17,4}) == 110)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,6,10,11,12,54,3,13,14,15,16,17,18,19,20,10,3}) == 90)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,77,11,12,5,17,14,15,16,9,17,20,20,15,9,9,1}) == 68)){ tests_passed++; } total_tests++;

    if((add({1,3,5,12,7,9,920,12,919,15,18,920,920}) == 944)){ tests_passed++; } total_tests++;

    if((add({3,55,1,2,3,4,5,6,7,17,8,9,10,77,11,12,5,17,14,15,16,9,17,20,20,15,9,9,1}) == 44)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,11,13,2,4,6,8,8,10,12,14,8}) == 36)){ tests_passed++; } total_tests++;

    if((add({1,7,10,9,1,1}) == 0)){ tests_passed++; } total_tests++;

    if((add({1,7,10,7}) == 0)){ tests_passed++; } total_tests++;

    if((add({52,87,31,67,556,33,5,99,7,52}) == 52)){ tests_passed++; } total_tests++;

    if((add({66,3,5,7,9,2,6,8,10,556,100,920,42,37,27,7,8,187,37}) == 1486)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,16,28}) == 128)){ tests_passed++; } total_tests++;

    if((add({11,22,33,54,44,55,66,77,66,100,44,54,55}) == 230)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,14,10,11,12,13,14,15,16,17,18,19,20,10,16,12}) == 114)){ tests_passed++; } total_tests++;

    if((add({5,9,2,6,3,8,10,556,100,187,920,9,42,37,29,7,8}) == 570)){ tests_passed++; } total_tests++;

    if((add({5,7,9,2,6,8,10,556,102,187,920,42,18,29,7,8,6,100,8,5,556,5}) == 716)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,11,12,6,42,13,14,15,17,18,19,10}) == 54)){ tests_passed++; } total_tests++;

    if((add({16,15,6,26,11,13,15,10,10}) == 36)){ tests_passed++; } total_tests++;

    if((add({12,22,33,44,55,66,87,99,100,100}) == 232)){ tests_passed++; } total_tests++;

    if((add({3,5,7,12,9,2,6,187,10,556,3,187,23,920,42,37,30,7,8,187,7,3}) == 1490)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,6,8,10,556,99,187,920,42,37,29,7,8,6,100}) == 720)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,8,10,100,1,187,42,37,29}) == 230)){ tests_passed++; } total_tests++;

    if((add({3,5,7,7,9,2,6,8,10,556,101,187,920,42,37,29,7,6,100,8,5,556,29}) == 1178)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,8,10,88,100,187,42,37,29,29}) == 218)){ tests_passed++; } total_tests++;

    if((add({6,15,4,7,26,10,11,15,4}) == 10)){ tests_passed++; } total_tests++;

    if((add({2,4,6,13,23,187,8,10,0,14,17,18,20,22,26,23,26,28,30,8}) == 104)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,122,17,8,9,10,11,13,14,15,16,17,18,19,20}) == 68)){ tests_passed++; } total_tests++;

    if((add({16,6,26,10,11,13,25,15,11}) == 16)){ tests_passed++; } total_tests++;

    if((add({9,3,6,7,4,8,1,9,5,8,6}) == 16)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,8,9,10,11,12,17,14,15,16,9,17,18,20,20,15,16}) == 54)){ tests_passed++; } total_tests++;

    if((add({3,2,3,4,5,6,7,17,8,9,10,11,12,17,14,15,16,9,17,18,20,20,15,15}) == 50)){ tests_passed++; } total_tests++;

    if((add({11,22,32,54,44,55,66,77,88,66,99,100,44,66}) == 308)){ tests_passed++; } total_tests++;

    if((add({1,5,3,8,1,26,10,44,9,2,44}) == 80)){ tests_passed++; } total_tests++;

    if((add({4,5,10,11,10}) == 0)){ tests_passed++; } total_tests++;

    if((add({1,3,3,7,10,1,1,3}) == 0)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,10,17,7,2}) == 112)){ tests_passed++; } total_tests++;

    if((add({5,7,9,2,6,8,10,556,101,187,920,42,37,29,7,8,6,100,8}) == 716)){ tests_passed++; } total_tests++;

    if((add({122,9,4,6,10,13,15,9}) == 6)){ tests_passed++; } total_tests++;

    if((add({55,3,1,2,3,55,4,5,7,17,8,18,10,10,11,13,14,15,16,99,18,19,20,8,3,3,99}) == 38)){ tests_passed++; } total_tests++;

    if((add({11,22,33,54,44,55,66,66,44,54,55,66}) == 262)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,1,7,17,8,8,10,11,12,13,14,15,16,17,18,19,187,10,2}) == 18)){ tests_passed++; } total_tests++;

    if((add({2,4,8,10,11,13,15,4}) == 18)){ tests_passed++; } total_tests++;

    if((add({1,2,3,5,6,7,8,9,6,10,11,12,12,13,14,15,16,17,18,19,20,10}) == 34)){ tests_passed++; } total_tests++;

    if((add({3,7,9,2,6,8,10,26,556,100,187,19,42,37,29,7,8,6,100,2}) == 144)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,556,100,187,920,42,37,29,7,8,6,100,7,8,6}) == 1048)){ tests_passed++; } total_tests++;

    if((add({122,9,4,6,557,13,15,13,10}) == 6)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,11,12,42,13,14,15,17,18,19,10,17}) == 76)){ tests_passed++; } total_tests++;

    if((add({3,6,557,4,8,1,9,10,5,10}) == 30)){ tests_passed++; } total_tests++;

    if((add({122,9,5,6,557,13,15,13,10}) == 6)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,55,77,88,66,99,100,44}) == 232)){ tests_passed++; } total_tests++;

    if((add({3,5,7,11,8,2,6,8,10,556,100,187,920,37,28,6,8,187,9}) == 572)){ tests_passed++; } total_tests++;

    if((add({122,9,4,6,10,11,15,10}) == 16)){ tests_passed++; } total_tests++;

    if((add({3,556,6,7,4,8,1,9,10,5,7}) == 564)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,14,16,18,20,22,24,26,28,30,28,14,4}) == 136)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,11,12,17,14,15,16,9,17,20,20,15,9,17}) == 80)){ tests_passed++; } total_tests++;

    if((add({16,15,4,6,26,11,13,15,11,13}) == 6)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,3,8,10,556,100,30,920,42,37,29,555,23,8,100}) == 742)){ tests_passed++; } total_tests++;

    if((add({16,122,5,7,187,11,13,2,4,6,8,12,14,12}) == 154)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,12,14,15,15,14}) == 26)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,3,8,10,556,100,187,42,37,29,7}) == 570)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,28,17,8,9,10,23,11,13,14,15,17,18,19,20}) == 38)){ tests_passed++; } total_tests++;

    if((add({3,3,123,7,4,8,1,9,10,5,8,4}) == 12)){ tests_passed++; } total_tests++;

    if((add({55,2,3,4,5,6,7,8,9,6,10,11,12,3,13,14,15,16,17,18,19,20,10}) == 94)){ tests_passed++; } total_tests++;

    if((add({9,4,5,6,10,11,555,13,15,9}) == 10)){ tests_passed++; } total_tests++;

    if((add({1,10,9,1,37}) == 10)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,556,100,187,920,42,37,29,7,8,6,100,920,67,920}) == 2882)){ tests_passed++; } total_tests++;

    if((add({3,22,1,6,7,4,8,9,9,5,23,8,1,3}) == 40)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,100,5,6,7,17,8,9,10,11,12,17,14,15,16,9,13,17,18,20}) == 78)){ tests_passed++; } total_tests++;

    if((add({30,1,5,3,8,7,10,6,9,23,2,9}) == 6)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,8,556,100,187,42,37,29,5,42}) == 314)){ tests_passed++; } total_tests++;

    if((add({16,44,15,4,6,26,11,13,15,16}) == 90)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,11,12,17,14,15,16,9,89,17,20,20,15,9,9,9}) == 80)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,920,12,15,18,1}) == 30)){ tests_passed++; } total_tests++;

    if((add({30,1,5,3,52,7,10,6,9,23,2,9}) == 6)){ tests_passed++; } total_tests++;

    if((add({1,5,8,7,10,919,100,9,23,2,7}) == 2)){ tests_passed++; } total_tests++;

    if((add({3,6,2,7,4,8,1,9,10,88}) == 102)){ tests_passed++; } total_tests++;

    if((add({8,122,9,4,6,10,13,15,9}) == 136)){ tests_passed++; } total_tests++;

    if((add({4,6,11,11,15,10}) == 16)){ tests_passed++; } total_tests++;

    if((add({11,1,2,3,4,5,6,7,8,9,6,10,11,12,3,13,14,15,16,17,18,19,20,10}) == 32)){ tests_passed++; } total_tests++;

    if((add({7,3,1,101,3,4,5,6,7,17,8,14,10,11,12,13,14,15,16,17,18,29,19,20,16}) == 44)){ tests_passed++; } total_tests++;

    if((add({8,1,5,6,3,8,7,6,9,2,8}) == 22)){ tests_passed++; } total_tests++;

    if((add({4,5,555,4,5,100,10,11,15}) == 104)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,12,14,16,20,22,24,26,28,30}) == 118)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,18,8,9,10,11,13,14,15,17,18,19,20}) == 56)){ tests_passed++; } total_tests++;

    if((add({5,6,4,5,7,10,11,15,5}) == 16)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,1,12,4,14,18,9}) == 22)){ tests_passed++; } total_tests++;

    if((add({3,8,2,557,4,5,6,7,17,8,9,10,11,12,17,15,16,10,17,18,20,20,15}) == 86)){ tests_passed++; } total_tests++;

    if((add({4,6,11,11,15,10,11,11}) == 16)){ tests_passed++; } total_tests++;

    if((add({9,4,5,5,12,11,555,10,13,15,5}) == 14)){ tests_passed++; } total_tests++;

    if((add({1,3,5,29,7,9,11,13,2,4,6,8,8,10,12,14}) == 36)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,6,7,11,12,12,3,13,14,15,16,17,18,19,20,10,17,18}) == 66)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,19,9,12,15,18,15,15,3}) == 0)){ tests_passed++; } total_tests++;

    if((add({3,6,7,4,8,1,9,10,5,3}) == 20)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,3,8,10,556,100,187,42,37,29,44,8,187}) == 614)){ tests_passed++; } total_tests++;

    if((add({1,3,5,4,7,19,9,12,15,54,15,15,7}) == 70)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,10,11,12,42,13,14,15,16,17,18,19,20,10,42}) == 52)){ tests_passed++; } total_tests++;

    if((add({27,11,22,33,44,55,14,66,77,88,99,100,99}) == 254)){ tests_passed++; } total_tests++;

    if((add({4,5,11,10,11,11}) == 10)){ tests_passed++; } total_tests++;

    if((add({3,5,7,6,187,8,10,556,3,187,920,42,37,29,7,8,187,7,7}) == 620)){ tests_passed++; } total_tests++;

    if((add({1,2,28,4,5,6,7,8,9,6,10,11,12,12,13,14,15,16,17,18,19,20,10,8,13}) == 114)){ tests_passed++; } total_tests++;

    if((add({3,22,6,7,4,8,9,9,5,23,8,9,3}) == 30)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,18,8,9,10,11,13,14,15,17,18,19,20,1}) == 56)){ tests_passed++; } total_tests++;

    if((add({3,22,1,6,7,4,8,1,9,9,5,23,8,0,1,3}) == 32)){ tests_passed++; } total_tests++;

    if((add({9,4,5,5,12,11,555,10,13,15,5,13}) == 14)){ tests_passed++; } total_tests++;

    if((add({5,6,4,5,7,10,11,5}) == 16)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,28,17,8,9,10,23,11,13,14,15,17,18,19,20,18}) == 38)){ tests_passed++; } total_tests++;

    if((add({3,1,2,8,3,4,5,6,7,17,8,9,10,18,12,17,14,15,16,9,17,20,20,15,9,17}) == 56)){ tests_passed++; } total_tests++;

    if((add({3,22,1,6,7,8,9,9,6,23,8,1}) == 36)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,3,5,6,98,7,17,8,9,10,11,12,13,15,16,17,5,19,20,10,20}) == 154)){ tests_passed++; } total_tests++;

    if((add({1,5,3,8,1,26,10,44,9,2,44,1,8}) == 80)){ tests_passed++; } total_tests++;

    if((add({5,7,9,2,6,3,8,10,556,100,187,42,37,29,7,8,3}) == 162)){ tests_passed++; } total_tests++;

    if((add({122,9,5,123,10,11,13,15,13,13,6,13}) == 0)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,556,101,187,920,42,29,7,8,6,100,8,5}) == 1044)){ tests_passed++; } total_tests++;

    if((add({6,4,5,15,10,11,14,555}) == 4)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,556,101,32,920,42,37,29,7,8,6,100,8,5,556}) == 1506)){ tests_passed++; } total_tests++;

    if((add({9,4,5,5,33,10,11,555,13,15}) == 14)){ tests_passed++; } total_tests++;

    if((add({22,33,44,55,66,77,88,99,100}) == 0)){ tests_passed++; } total_tests++;

    if((add({6,15,4,7,26,10,11,25,13,15}) == 10)){ tests_passed++; } total_tests++;

    if((add({3,8,557,4,5,6,7,17,8,9,10,11,12,17,15,16,20,10,17,18,20,20,15}) == 82)){ tests_passed++; } total_tests++;

    if((add({920,7,4,8,0,9,10,5}) == 8)){ tests_passed++; } total_tests++;

    if((add({3,1,101,3,4,5,6,7,17,8,14,11,11,12,13,14,15,919,17,18,19,20,10,16}) == 88)){ tests_passed++; } total_tests++;

    if((add({77,5,6,5,7,10,11}) == 10)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,920,12,18,1,7}) == 12)){ tests_passed++; } total_tests++;

    if((add({122,9,6,10,11,13,15,13,10,10}) == 20)){ tests_passed++; } total_tests++;

    if((add({1,30,1,5,3,8,7,10,6,9,23,2,9}) == 50)){ tests_passed++; } total_tests++;

    if((add({9,4,5,12,19,11,555,37,13,15}) == 16)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,6,7,11,12,12,3,13,14,15,16,17,18,19,20,10,17,1}) == 48)){ tests_passed++; } total_tests++;

    if((add({2,5,8,7,10,6,9,23,2,100}) == 106)){ tests_passed++; } total_tests++;

    if((add({122,9,6,10,11,13,15,10}) == 20)){ tests_passed++; } total_tests++;

    if((add({3,22,6,7,4,8,9,9,5,23,8,9,3,9}) == 30)){ tests_passed++; } total_tests++;

    if((add({16,6,15,26,4,7,26,10,11,13,15}) == 42)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,1,12,4,14,9}) == 4)){ tests_passed++; } total_tests++;

    if((add({2,4,6,13,187,919,8,10,12,14,17,18,44,20,22,26,24,26,28,30}) == 148)){ tests_passed++; } total_tests++;

    if((add({122,9,4,6,10,11,13,15,13,13,6,122}) == 128)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,12,15,15,1,15,19}) == 12)){ tests_passed++; } total_tests++;

    if((add({3,8,17,2,557,4,5,6,7,17,8,9,10,11,12,17,15,16,10,17,18,20,20,15,11}) == 56)){ tests_passed++; } total_tests++;

    if((add({5,3,8,7,10,6,9,24}) == 30)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,556,101,187,920,42,37,29,7,8,6,100,8,5,9,9}) == 950)){ tests_passed++; } total_tests++;

    if((add({2,10,2,11,13,54,2,6}) == 70)){ tests_passed++; } total_tests++;

    if((add({3,2,27,10,11,7,1,2,2}) == 14)){ tests_passed++; } total_tests++;

    if((add({11,33,54,44,55,77,88,66,100,44}) == 154)){ tests_passed++; } total_tests++;

    if((add({11,67,22,33,44,2,55,66,88,8,100,100,55,88,67}) == 264)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,6,10,11,12,12,13,14,15,16,17,18,33,20,10,8,13}) == 114)){ tests_passed++; } total_tests++;

    if((add({1,3,7,9,12,15,18}) == 0)){ tests_passed++; } total_tests++;

    if((add({3,6,7,4,8,1,8,3,10,5,10,102,5,5}) == 112)){ tests_passed++; } total_tests++;

    if((add({2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,10,17,4}) == 14)){ tests_passed++; } total_tests++;

    if((add({1,5,8,8,10,6,9,23,2,7}) == 14)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,9,9,10,11,12,13,14,15,16,17,18,19,20,10,17}) == 102)){ tests_passed++; } total_tests++;

    if((add({6,4,5,555,10,15,6,6,6,6}) == 16)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,67,6,7,8,9,10,11,12,17,14,15,16,9,17,18,20,20,15,16}) == 86)){ tests_passed++; } total_tests++;

    if((add({4,5,5,12,11,555,10,13,15,5}) == 12)){ tests_passed++; } total_tests++;

    if((add({16,0,1,15,11,6,26,10,13,11,15}) == 16)){ tests_passed++; } total_tests++;

    if((add({3,55,1,2,3,4,5,6,7,17,8,9,10,77,11,12,5,17,14,16,9,17,20,20,15,9,9,1}) == 60)){ tests_passed++; } total_tests++;

    if((add({16,44,16,4,6,26,11,13,15}) == 74)){ tests_passed++; } total_tests++;

    if((add({2,8,11,12,11,13,7,2}) == 22)){ tests_passed++; } total_tests++;

    if((add({55,2,3,4,5,6,7,8,9,6,10,11,12,5,3,13,15,16,17,18,19,20,10,18}) == 98)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,13,9,11,12,42,13,14,15,17,19,10,19}) == 78)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,6,8,10,26,556,100,187,920,42,37,29,7,8,6,100,187}) == 722)){ tests_passed++; } total_tests++;

    if((add({1,3,5,17,9,920,12,15,18}) == 920)){ tests_passed++; } total_tests++;

    if((add({1,3,8,8,1,1,26,10,45,9,2}) == 18)){ tests_passed++; } total_tests++;

    if((add({4,5,10,11,15,1,6}) == 0)){ tests_passed++; } total_tests++;

    if((add({11,24,32,54,44,55,66,77,43,88,66,28,89,100,44,22}) == 316)){ tests_passed++; } total_tests++;

    if((add({0,2,3,4,6,6,7,8,9,6,10,11,12,12,3,17,14,15,16,17,18,19,20,10}) == 48)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,100,5,6,7,17,8,9,10,11,12,17,14,14,16,9,17,18,20,20}) == 80)){ tests_passed++; } total_tests++;

    if((add({16,6,15,4,6,26,11,13,15}) == 36)){ tests_passed++; } total_tests++;

    if((add({2,3,4,7,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,10,17,4}) == 104)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,37,10,11,12,54,3,13,14,20,15,16,17,18,19,20,10,3}) == 148)){ tests_passed++; } total_tests++;

    if((add({3,1,2,7,3,4,5,6,7,17,8,9,10,10,12,13,14,15,16,99,18,19,20,3,3,12}) == 32)){ tests_passed++; } total_tests++;

    if((add({16,1,15,6,26,10,11,13,11}) == 16)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,3,6,7,17,8,9,10,11,12,13,15,16,17,18,19,20,10,3,2}) == 60)){ tests_passed++; } total_tests++;

    if((add({1,4,3,8,7}) == 12)){ tests_passed++; } total_tests++;

    if((add({1,45,8,7,6,26,9,2,26}) == 28)){ tests_passed++; } total_tests++;

    if((add({11,22,33,54,32,44,55,66,77,66,100,44,54,44}) == 340)){ tests_passed++; } total_tests++;

    if((add({3,5,9,2,6,3,8,10,556,100,187,37,29,7,8,6}) == 118)){ tests_passed++; } total_tests++;

    if((add({1,2,28,4,5,6,7,8,9,6,10,11,12,12,13,6,15,16,17,18,19,20,10,8,13,18}) == 124)){ tests_passed++; } total_tests++;

    if((add({3,5,99,9,2,122,6,8,10,556,100,187,920,42,37,9,29}) == 728)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,12,15,18,15,15,18}) == 30)){ tests_passed++; } total_tests++;

    if((add({3,8,2,557,4,5,6,43,17,8,9,10,11,12,17,15,16,10,17,18,20,20,15}) == 86)){ tests_passed++; } total_tests++;

    if((add({2,0,20,3,8,7,6,9,1,2}) == 2)){ tests_passed++; } total_tests++;

    if((add({3,1,2,3,4,5,6,7,17,8,9,10,77,11,12,5,17,14,15,16,9,17,20,20,15,9,9,1,9}) == 68)){ tests_passed++; } total_tests++;

    if((add({3,7,4,8,1,9,10,5,3}) == 8)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,12,15,15,15}) == 12)){ tests_passed++; } total_tests++;

    if((add({16,122,5,7,187,16,11,13,2,4,6,8,10,12,14}) == 162)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,11,15,15,1}) == 0)){ tests_passed++; } total_tests++;

    if((add({3,8,2,557,4,5,6,43,17,8,3,10,11,12,17,15,16,10,17,18,20,20,15,20}) == 106)){ tests_passed++; } total_tests++;

    if((add({16,14,4,6,26,10,11,122,15,26}) == 178)){ tests_passed++; } total_tests++;

    if((add({55,3,1,17,2,3,4,5,7,17,8,18,10,10,11,13,14,15,16,99,18,19,20,8,3,3,99,19}) == 36)){ tests_passed++; } total_tests++;

    if((add({6,15,4,7,37,26,10,11,25,13,15}) == 26)){ tests_passed++; } total_tests++;

    if((add({2,4,6,42,8,10,14,16,18,20,22,24,26,28,30,28,14,4}) == 176)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,7,8,9,6,7,11,12,12,3,13,14,15,16,17,18,19,20,10,17,7}) == 86)){ tests_passed++; } total_tests++;

    if((add({122,122,4,6,557,13,15,13,10}) == 128)){ tests_passed++; } total_tests++;

    if((add({12,22,33,44,55,66,43,87,99,100,100}) == 232)){ tests_passed++; } total_tests++;

    if((add({4}) == 0)){ tests_passed++; } total_tests++;

    if((add({1}) == 0)){ tests_passed++; } total_tests++;

    if((add({2,1}) == 0)){ tests_passed++; } total_tests++;

    if((add({1,2}) == 2)){ tests_passed++; } total_tests++;

    if((add({2,4,6}) == 4)){ tests_passed++; } total_tests++;

    if((add({3,7,9,11,15,23}) == 0)){ tests_passed++; } total_tests++;

    if((add({3,5,100,7,9,12,15,18}) == 30)){ tests_passed++; } total_tests++;

    if((add({11,22,33,66,44,67,77,88,99,100}) == 276)){ tests_passed++; } total_tests++;

    if((add({2,4,6,6,10,11,13}) == 10)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,13}) == 110)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,30}) == 142)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,30,16}) == 142)){ tests_passed++; } total_tests++;

    if((add({2,4,6,17,10,8,10,12,14,16,18,20,17,24,26,28,30}) == 112)){ tests_passed++; } total_tests++;

    if((add({2,4,6,19,8,10,11,13,15}) == 14)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,55,66,77,88,99,44}) == 264)){ tests_passed++; } total_tests++;

    if((add({3,6,2,7,4,8,1,9,10}) == 14)){ tests_passed++; } total_tests++;

    if((add({1,3,5,1,9,12,15,18}) == 30)){ tests_passed++; } total_tests++;

    if((add({13,3,5,1,9,12,15}) == 12)){ tests_passed++; } total_tests++;

    if((add({3,5,100,7,9,12,18}) == 12)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,55,66,77,88,99,99}) == 220)){ tests_passed++; } total_tests++;

    if((add({2,4,6,17,10,8,10,12,14,16,18,20,17,24,13,28,30,6}) == 118)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,66,67,77,88,99,100}) == 254)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,42,7,7,9,10,11,12,13,14,15,16,17,18,19,20}) == 138)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,11,13,2,4,6,8,10,14,11}) == 18)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,55,88,77,88,99,10,100}) == 252)){ tests_passed++; } total_tests++;

    if((add({11,22,33,66,67,77,88,99,100}) == 88)){ tests_passed++; } total_tests++;

    if((add({2,4,6,17,10,8,10,12,14,16,18,20,17,24,13,28,30,6,4}) == 118)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,12,14,16,18,37,22,24,26,28,30}) == 92)){ tests_passed++; } total_tests++;

    if((add({11,22,33,66,68,67,77,88,99,100}) == 276)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,12,16,18,20,22,24,26,28,30,30}) == 120)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,19,12,14,16,18,20,22,24,26,28,30,30,16}) == 138)){ tests_passed++; } total_tests++;

    if((add({11,22,33,66,68,67,77,88,98,100}) == 276)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,42,7,9,10,11,12,13,14,15,16,17,18,19,20}) == 48)){ tests_passed++; } total_tests++;

    if((add({11,22,33,66,44,67,77,88,37,100}) == 276)){ tests_passed++; } total_tests++;

    if((add({2,4,12,6,8,10,11,13,15}) == 20)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,55,65,77,88,99,99,11}) == 154)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,12,18}) == 18)){ tests_passed++; } total_tests++;

    if((add({3,5,100,7,8,101,12,15,18,15}) == 0)){ tests_passed++; } total_tests++;

    if((add({1,4,3,8,16,7,10,14}) == 26)){ tests_passed++; } total_tests++;

    if((add({11,22,33,66,68,67,77,98,100,98}) == 284)){ tests_passed++; } total_tests++;

    if((add({11,22,33,66,44,67,77,88,99}) == 176)){ tests_passed++; } total_tests++;

    if((add({23,11,22,33,66,68,67,77,88,98,100,100}) == 266)){ tests_passed++; } total_tests++;

    if((add({11,22,33,66,44,66,77,88,37,100}) == 342)){ tests_passed++; } total_tests++;

    if((add({11,22,33,66,68,67,77,99,100}) == 88)){ tests_passed++; } total_tests++;

    if((add({11,8,33,66,67,77,88,99,100}) == 74)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,7,10,556,100,187,920,42,37,29}) == 720)){ tests_passed++; } total_tests++;

    if((add({1,4,3,8,16,7,10,14,16}) == 26)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,8,11,13,4,6,8,9,12,14}) == 28)){ tests_passed++; } total_tests++;

    if((add({2,4,7,17,10,8,10,12,14,16,18,20,17,24,26,28,30}) == 112)){ tests_passed++; } total_tests++;

    if((add({1,4,3,8,16,7,10,14,1,16,1}) == 42)){ tests_passed++; } total_tests++;

    if((add({22,33,44,55,66,77,88,99,44,22}) == 22)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,42,7,7,9,10,11,12,13,14,15,16,17,18,19,20,1}) == 138)){ tests_passed++; } total_tests++;

    if((add({1,4,3,8,16,7,10,14,8,17}) == 26)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,8,11,13,4,6,8,9,12,14,9}) == 28)){ tests_passed++; } total_tests++;

    if((add({1,15,3,4,5,42,7,7,9,11,12,13,14,15,16,16,18,19,20}) == 62)){ tests_passed++; } total_tests++;

    if((add({2,4,7,17,10,8,10,12,14,42,18,20,17,24,26,28,30}) == 138)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,42,7,9,10,11,12,13,14,15,16,17,19,20}) == 68)){ tests_passed++; } total_tests++;

    if((add({1,4,3,8,1,16,7,9,14,8,17,7}) == 36)){ tests_passed++; } total_tests++;

    if((add({11,8,33,66,67,77,88,99,100,87}) == 74)){ tests_passed++; } total_tests++;

    if((add({3,6,2,7,4,8,1,9,5}) == 14)){ tests_passed++; } total_tests++;

    if((add({3,5,101,7,9,12,18}) == 12)){ tests_passed++; } total_tests++;

    if((add({11,22,33,10,66,67,77,88,99,100}) == 220)){ tests_passed++; } total_tests++;

    if((add({11,22,33,66,68,67,77,920,88,99,100}) == 1008)){ tests_passed++; } total_tests++;

    if((add({11,22,33,6,66,68,67,77,88,99,100}) == 96)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,30,16,4}) == 146)){ tests_passed++; } total_tests++;

    if((add({1,15,3,4,5,42,7,7,9,11,12,13,14,15,16,16,18,19,20,19}) == 62)){ tests_passed++; } total_tests++;

    if((add({3,6,2,7,8,1,9,10}) == 16)){ tests_passed++; } total_tests++;

    if((add({55,11,22,33,44,55,66,77,88,99,99}) == 0)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,8,11,13,4,6,8,9,19,12,14}) == 26)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,16,18,20,22,24,26,28,12,30,30}) == 130)){ tests_passed++; } total_tests++;

    if((add({11,22,33,10,44,55,88,77,88,99,10,100}) == 132)){ tests_passed++; } total_tests++;

    if((add({3,6,2,7,4,8,1,9,10,3}) == 14)){ tests_passed++; } total_tests++;

    if((add({3,5,100,7,9,12,6}) == 12)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,13,15}) == 12)){ tests_passed++; } total_tests++;

    if((add({2,4,6,17,10,8,10,12,14,16,18,20,17,24,13,28,30,6,4,2,4}) == 120)){ tests_passed++; } total_tests++;

    if((add({11,22,33,10,44,55,88,7,77,88,99,10,100}) == 130)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,30,12}) == 142)){ tests_passed++; } total_tests++;

    if((add({2,4,6,17,10,8,10,12,14,16,18,20,17,24,13,28,30,6,4,2,4,18}) == 138)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,30,6}) == 142)){ tests_passed++; } total_tests++;

    if((add({1,55,2,55,3,4,5,42,7,9,10,11,12,13,14,15,16,17,19,20,20,12}) == 78)){ tests_passed++; } total_tests++;

    if((add({11,8,33,66,67,77,88,99,100,77}) == 74)){ tests_passed++; } total_tests++;

    if((add({3,6,2,7,4,1,9,10}) == 16)){ tests_passed++; } total_tests++;

    if((add({11,22,33,67,77,88,99,100}) == 210)){ tests_passed++; } total_tests++;

    if((add({2,4,6,19,8,10,11,13,15,4,4}) == 18)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,8,5,10,11,12,13,14,15,16,17,18,19,12,20}) == 102)){ tests_passed++; } total_tests++;

    if((add({2,4,6,11,17,8,10,12,14,16,18,20,17,24,13,28,30,6}) == 118)){ tests_passed++; } total_tests++;

    if((add({65,3,5,7,9,2,122,6,8,10,556,100,187,920,42,37,29}) == 1038)){ tests_passed++; } total_tests++;

    if((add({11,33,66,67,77,88,99,100}) == 188)){ tests_passed++; } total_tests++;

    if((add({11,8,33,66,67,77,88,100,77}) == 174)){ tests_passed++; } total_tests++;

    if((add({23,11,22,33,66,37,12,67,77,88,98,100,100,11}) == 188)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,66,67,77,88,99,100,66}) == 254)){ tests_passed++; } total_tests++;

    if((add({11,22,2,33,67,77,88,99,100}) == 22)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,8,11,13,4,6,8,9,12,14,14}) == 28)){ tests_passed++; } total_tests++;

    if((add({65,3,5,7,9,2,122,6,8,556,100,187,920,42,37,29}) == 606)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,7,10,556,100,187,920,42,37,122,29}) == 842)){ tests_passed++; } total_tests++;

    if((add({3,5,28,101,23,7,9,12,18}) == 12)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,7,5,10,11,12,13,14,15,16,17,18,19,12,20}) == 32)){ tests_passed++; } total_tests++;

    if((add({3,6,2,7,4,8,1,10,3}) == 24)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,1,12,14,16,18,20,22,24,26,28,30,30,16,4}) == 146)){ tests_passed++; } total_tests++;

    if((add({22,33,69,66,68,67,77,920,99,100}) == 1086)){ tests_passed++; } total_tests++;

    if((add({11,22,44,55,66,77,88,99,100}) == 22)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,12,14,16,18,37,22,24,26,28,30,16,18}) == 108)){ tests_passed++; } total_tests++;

    if((add({3,5,100,6,9,12,6}) == 18)){ tests_passed++; } total_tests++;

    if((add({11,22,33,68,67,77,88,98,100}) == 188)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,6,3,26,9,10,11,12,13,14,15,16,17,18,19,20,13}) == 128)){ tests_passed++; } total_tests++;

    if((add({3,2,7,4,1,9,10}) == 6)){ tests_passed++; } total_tests++;

    if((add({11,22,33,12,44,55,14,66,77,88,2,99,44,99}) == 188)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,42,7,7,9,10,11,12,13,14,15,16,17,18,19,20,18}) == 138)){ tests_passed++; } total_tests++;

    if((add({1,4,3,8,16,7,10,14,8,7,67,8}) == 34)){ tests_passed++; } total_tests++;

    if((add({3,6,24,7,4,8,1,9,10}) == 14)){ tests_passed++; } total_tests++;

    if((add({2,4,6,17,10,8,10,12,14,16,18,20,17,23,13,28,30,6}) == 94)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,55,88,77,88,99,10,100,10}) == 262)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,42,67,7,7,9,10,11,12,13,14,15,16,17,18,19,20,18}) == 66)){ tests_passed++; } total_tests++;

    if((add({11,22,33,100,55,66,77,88,99,44}) == 320)){ tests_passed++; } total_tests++;

    if((add({3,5,100,77,9,12,18}) == 12)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,1,12,14,16,18,20,22,24,26,28,30,31,16,4}) == 116)){ tests_passed++; } total_tests++;

    if((add({2,4,556,6,8,10,11,13,15}) == 20)){ tests_passed++; } total_tests++;

    if((add({11,8,33,66,67,77,88,99,100,77,100}) == 74)){ tests_passed++; } total_tests++;

    if((add({3,6,4,2,7,4,8,1,9,5}) == 12)){ tests_passed++; } total_tests++;

    if((add({1,29,3,8,16,7,10,14}) == 22)){ tests_passed++; } total_tests++;

    if((add({11,22,33,12,44,54,14,66,77,88,2,99,44,99}) == 242)){ tests_passed++; } total_tests++;

    if((add({3,6,2,7,19,8,1,9,5}) == 14)){ tests_passed++; } total_tests++;

    if((add({1,4,3,8,16,7,10}) == 12)){ tests_passed++; } total_tests++;

    if((add({1,4,3,8,16,7,10,14,7,7,67,8}) == 34)){ tests_passed++; } total_tests++;

    if((add({11,22,33,78,44,55,66,77,88,99,44}) == 100)){ tests_passed++; } total_tests++;

    if((add({2,6,6,10,11,13}) == 16)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,66,67,77,99,100,66}) == 132)){ tests_passed++; } total_tests++;

    if((add({11,22,33,12,44,55,14,66,77,88,2,99,44}) == 188)){ tests_passed++; } total_tests++;

    if((add({11,22,33,6,66,68,67,77,88,99,100,67}) == 96)){ tests_passed++; } total_tests++;

    if((add({11,22,9,33,66,67,77,88,99,100}) == 210)){ tests_passed++; } total_tests++;

    if((add({11,22,33,68,67,77,88,99,100}) == 90)){ tests_passed++; } total_tests++;

    if((add({3,6,2,7,8,9,10}) == 6)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,12,18,12}) == 18)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,42,7,7,9,10,11,12,13,14,67,15,16,17,18,19,20,1,10}) == 84)){ tests_passed++; } total_tests++;

    if((add({11,22,33,55,65,88,99,99,11}) == 110)){ tests_passed++; } total_tests++;

    if((add({2,4,8,10,12,16,14,18,20,22,24,26,28,30,30,16,22}) == 142)){ tests_passed++; } total_tests++;

    if((add({11,22,33,10,44,55,88,77,88,24,10,100}) == 156)){ tests_passed++; } total_tests++;

    if((add({11,22,68,67,77,88,98,100}) == 210)){ tests_passed++; } total_tests++;

    if((add({187,1,2,3,4,24,5,42,7,9,10,11,12,13,14,15,16,17,18,19,20,3,2}) == 66)){ tests_passed++; } total_tests++;

    if((add({1,4,3,8,16,7,10,8,14,16}) == 36)){ tests_passed++; } total_tests++;

    if((add({78,11,22,33,66,68,67,77,98,100}) == 168)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,55,88,77,88,99,10,100,33}) == 252)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,55,77,88,99,10,100,33}) == 166)){ tests_passed++; } total_tests++;

    if((add({187,1,2,3,4,24,5,42,7,10,11,13,14,15,16,17,18,19,20,3,2}) == 76)){ tests_passed++; } total_tests++;

    if((add({13,3,5,1,9,1,12,15}) == 0)){ tests_passed++; } total_tests++;

    if((add({187,1,2,18,4,4,24,5,42,7,187,10,11,13,14,15,16,17,18,19,20,3,2}) == 32)){ tests_passed++; } total_tests++;

    if((add({11,22,33,10,44,55,88,7,77,88,99,100}) == 220)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,8,10,556,100,187,920,42,37,28}) == 756)){ tests_passed++; } total_tests++;

    if((add({3,7,4,1,9,10}) == 10)){ tests_passed++; } total_tests++;

    if((add({1,5,3,8,7,10,6,9,23}) == 18)){ tests_passed++; } total_tests++;

    if((add({11,22,44,55,66,77,88,99,100,77}) == 22)){ tests_passed++; } total_tests++;

    if((add({11,22,33,10,66,67,77,88,99,100,77}) == 220)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,8,10,556,100,187,920,42,37,29,5}) == 728)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,8,10,556,100,187,920,42,37,187,29}) == 728)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,12,14,16,18,20,22,24,28,30,16}) == 114)){ tests_passed++; } total_tests++;

    if((add({3,5,100,7,9,12,15,33}) == 12)){ tests_passed++; } total_tests++;

    if((add({3,6,2,6,7,4,8,1,10,3}) == 16)){ tests_passed++; } total_tests++;

    if((add({187,1,2,18,4,4,24,5,42,7,187,10,11,13,14,15,16,17,18,19,20,3,2,17,18}) == 32)){ tests_passed++; } total_tests++;

    if((add({11,8,33,66,66,77,67,88,99,100}) == 262)){ tests_passed++; } total_tests++;

    if((add({78,3,5,100,7,9,12,15,18}) == 100)){ tests_passed++; } total_tests++;

    if((add({2,7,17,10,8,10,12,14,42,18,20,17,24,26,28,30,17}) == 108)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,12,16,18,20,22,24,26,28,30,30,30}) == 150)){ tests_passed++; } total_tests++;

    if((add({3,69,2,7,4,8,1,9,10,3}) == 8)){ tests_passed++; } total_tests++;

    if((add({11,22,33,66,67,77,88,99,101}) == 88)){ tests_passed++; } total_tests++;

    if((add({3,6,2,7,8,920,9,10}) == 936)){ tests_passed++; } total_tests++;

    if((add({11,22,33,55,65,88,99,99,10}) == 110)){ tests_passed++; } total_tests++;

    if((add({11,22,33,10,44,55,88,7,77,99,10,100,100}) == 132)){ tests_passed++; } total_tests++;

    if((add({2,4,8,10,12,16,14,18,101,22,24,26,28,30,30,16,22}) == 142)){ tests_passed++; } total_tests++;

    if((add({2,6,17,10,8,10,12,14,16,18,20,17,23,13,28,6}) == 64)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,11,13,2,3,6,8,13,10,14,11}) == 22)){ tests_passed++; } total_tests++;

    if((add({88,6,2,7,19,8,1,9,5,9}) == 14)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,65,77,88,99,99,11}) == 66)){ tests_passed++; } total_tests++;

    if((add({22,11,22,33,10,44,55,88,77,88,99,10,100,100}) == 330)){ tests_passed++; } total_tests++;

    if((add({13,78,3,5,1,9,1,12,15}) == 90)){ tests_passed++; } total_tests++;

    if((add({3,5,100,55,98,7,9,12,6}) == 12)){ tests_passed++; } total_tests++;

    if((add({2,4,6,17,10,8,10,14,16,18,20,17,23,13,28,30,6}) == 74)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,8,10,556,100,187,920,42,37,29,2}) == 728)){ tests_passed++; } total_tests++;

    if((add({187,1,2,3,4,24,5,42,7,9,10,11,12,13,14,15,16,17,18,19,20,37,3,2}) == 68)){ tests_passed++; } total_tests++;

    if((add({78,67,11,22,33,66,68,67,77,98,100}) == 186)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,42,7,7,42,10,11,12,13,14,15,16,17,18,19,20}) == 138)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,12,15,18,15}) == 30)){ tests_passed++; } total_tests++;

    if((add({3,6,2,6,7,4,8,1,10,3,6}) == 16)){ tests_passed++; } total_tests++;

    if((add({11,22,33,12,44,55,14,66,77,88,3,99,44,5,88}) == 188)){ tests_passed++; } total_tests++;

    if((add({22,33,44,55,66,77,88,99,44,22,77}) == 22)){ tests_passed++; } total_tests++;

    if((add({13,5,8,9,12,15}) == 0)){ tests_passed++; } total_tests++;

    if((add({2,4,6,17,10,8,10,14,16,18,20,17,23,13,28,30,6,23,10,14}) == 88)){ tests_passed++; } total_tests++;

    if((add({11,22,44,55,66,77,88,99,100,77,77}) == 22)){ tests_passed++; } total_tests++;

    if((add({22,33,44,55,66,77,100,88,99,44,22,77}) == 132)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,68,77,99,100,66}) == 166)){ tests_passed++; } total_tests++;

    if((add({2,4,6,88,10,12,14,16,18,20,22,24,28,30,16}) == 194)){ tests_passed++; } total_tests++;

    if((add({2,4,8,10,12,16,14,18,101,22,24,26,28,30,16,22}) == 148)){ tests_passed++; } total_tests++;

    if((add({11,8,33,66,66,10,77,67,88,99,100}) == 84)){ tests_passed++; } total_tests++;

    if((add({1,15,4,4,5,42,7,7,9,11,12,13,14,15,16,16,18,13,20,19}) == 62)){ tests_passed++; } total_tests++;

    if((add({22,33,69,66,68,67,101,77,920,99,18,66,67}) == 132)){ tests_passed++; } total_tests++;

    if((add({11,8,33,66,67,77,88,99,100,77,76,100,66}) == 174)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,11,11,15}) == 12)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,66,8,67,4,77,88,99,100}) == 266)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,66,22,67,77,88,99,100,77}) == 88)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,8,11,13,4,6,8,12,14,9}) == 26)){ tests_passed++; } total_tests++;

    if((add({2,6,11,17,8,8,10,12,14,16,18,20,17,24,13,28,30,6}) == 120)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,55,88,77,88,99,10,100,10,88}) == 262)){ tests_passed++; } total_tests++;

    if((add({11,22,34,66,44,67,77,88,99,100}) == 276)){ tests_passed++; } total_tests++;

    if((add({11,33,2,66,1,88,99}) == 154)){ tests_passed++; } total_tests++;

    if((add({1,2,16,7,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,13}) == 110)){ tests_passed++; } total_tests++;

    if((add({11,8,89,33,66,67,77,88,99,100}) == 196)){ tests_passed++; } total_tests++;

    if((add({13,5,26,8,9,12,37}) == 20)){ tests_passed++; } total_tests++;

    if((add({1,5,1,9,12,15,18,5}) == 0)){ tests_passed++; } total_tests++;

    if((add({3,6,2,7,4,8,1,9,5,7}) == 14)){ tests_passed++; } total_tests++;

    if((add({11,22,33,12,44,54,14,66,77,88,99,44,99}) == 286)){ tests_passed++; } total_tests++;

    if((add({23,11,22,33,66,68,67,77,88,98,100,100,68,23}) == 266)){ tests_passed++; } total_tests++;

    if((add({11,8,89,33,66,67,88,99,100}) == 8)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,42,7,7,556,42,10,11,12,13,14,15,16,17,31,19,20}) == 90)){ tests_passed++; } total_tests++;

    if((add({5,1,2,3,4,5,42,7,7,9,11,12,13,14,15,16,17,18,19,20,18}) == 80)){ tests_passed++; } total_tests++;

    if((add({3,6,2,7,4,8,1,0,9,5}) == 14)){ tests_passed++; } total_tests++;

    if((add({1,3,8,7,10,23}) == 0)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,11,11,15,8,4}) == 16)){ tests_passed++; } total_tests++;

    if((add({88,6,2,7,19,1,67,9,5,9}) == 6)){ tests_passed++; } total_tests++;

    if((add({11,8,33,66,67,77,88,99,100,77,76,100,66,100,66}) == 274)){ tests_passed++; } total_tests++;

    if((add({8,4,12,6,13,8,10,12,13,15}) == 30)){ tests_passed++; } total_tests++;

    if((add({78,11,22,33,66,68,67,77,100}) == 68)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,7,8,9,10,11,12,13,14,15,16,17,18,19,20}) == 6)){ tests_passed++; } total_tests++;

    if((add({3,5,100,77,54,9,12,18}) == 18)){ tests_passed++; } total_tests++;

    if((add({11,8,66,67,77,88,99,100,77,76,100,66,100,66}) == 404)){ tests_passed++; } total_tests++;

    if((add({11,22,33,66,67,77,68,88,99,101}) == 176)){ tests_passed++; } total_tests++;

    if((add({2,6,10,11,13}) == 6)){ tests_passed++; } total_tests++;

    if((add({22,44,55,66,77,100,88,99,44,22,77}) == 232)){ tests_passed++; } total_tests++;

    if((add({11,22,32,68,67,77,88,98,100}) == 188)){ tests_passed++; } total_tests++;

    if((add({11,21,33,44,55,89,77,88,99,10,100}) == 142)){ tests_passed++; } total_tests++;

    if((add({11,8,76,33,66,67,88,99,100,77,76,100,66}) == 108)){ tests_passed++; } total_tests++;

    if((add({1,3,5,6,7,9,8,11,13,4,6,20,9,12,14,9}) == 42)){ tests_passed++; } total_tests++;

    if((add({5,7,9,2,122,6,8,10,556,100,187,920,42,37,29,2}) == 1040)){ tests_passed++; } total_tests++;

    if((add({187,1,2,3,4,24,5,42,7,9,10,11,12,13,14,15,16,17,18,19,20,37,3,2,5,20,18}) == 88)){ tests_passed++; } total_tests++;

    if((add({34,1,2,4,5,42,7,9,10,11,12,13,14,15,16,17,18,19,20,15}) == 46)){ tests_passed++; } total_tests++;

    if((add({22,44,55,66,77,100,88,99,44,22,37}) == 232)){ tests_passed++; } total_tests++;

    if((add({23,11,22,33,66,37,67,77,88,98,100,100,11,77}) == 198)){ tests_passed++; } total_tests++;

    if((add({11,22,21,33,68,67,77,88,98,100}) == 210)){ tests_passed++; } total_tests++;

    if((add({78,67,11,22,33,66,68,77,98,100}) == 188)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,54,66,68,88,99,44}) == 264)){ tests_passed++; } total_tests++;

    if((add({11,22,33,6,66,68,67,77,88,99,67,65}) == 96)){ tests_passed++; } total_tests++;

    if((add({11,8,89,33,66,67,77,88,99,100,33}) == 196)){ tests_passed++; } total_tests++;

    if((add({11,22,44,55,66,77,88,99,100,78,77,88,100}) == 188)){ tests_passed++; } total_tests++;

    if((add({2,4,6,88,10,12,14,16,15,20,22,24,28,30,16,16,24}) == 210)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,7,10,556,187,920,42,37,122,29}) == 296)){ tests_passed++; } total_tests++;

    if((add({11,22,33,10,44,55,88,21,7,77,88,99,100}) == 32)){ tests_passed++; } total_tests++;

    if((add({2,6,6,10,11,13,13}) == 16)){ tests_passed++; } total_tests++;

    if((add({11,11,22,33,66,67,77,68,88,99,101}) == 68)){ tests_passed++; } total_tests++;

    if((add({11,22,33,10,0,55,88,21,7,77,88,99,100}) == 32)){ tests_passed++; } total_tests++;

    if((add({11,68,34,66,44,67,77,88,99,100}) == 322)){ tests_passed++; } total_tests++;

    if((add({3,6,2,7,8,6,920,9,10}) == 12)){ tests_passed++; } total_tests++;

    if((add({2,6,5,10,11,13}) == 16)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,42,16,7,7,9,10,11,12,13,14,15,16,17,18,19,20}) == 48)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,12,14,16,18,37,22,37,24,26,28,30,16,18}) == 114)){ tests_passed++; } total_tests++;

    if((add({21,22,33,55,65,88,99,99,11}) == 110)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,8,10,556,3,100,187,920,42,37,29,2}) == 1708)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,42,7,7,42,10,11,12,13,14,15,16,18,19,20}) == 100)){ tests_passed++; } total_tests++;

    if((add({2,4,6,28,8,13,10,11,13,15}) == 32)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,54,14,66,77,88,99,44,99}) == 80)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,17,9,8,11,13,4,88,8,9,12,14,9}) == 24)){ tests_passed++; } total_tests++;

    if((add({11,8,30,66,67,77,88,99,100,77,76,100,66,66}) == 240)){ tests_passed++; } total_tests++;

    if((add({3,556,2,7,8,9,10,3}) == 556)){ tests_passed++; } total_tests++;

    if((add({11,22,33,66,68,67,77,920,88,99,100,99}) == 1008)){ tests_passed++; } total_tests++;

    if((add({11,22,44,55,66,77,88,99,100,77,77,77}) == 22)){ tests_passed++; } total_tests++;

    if((add({11,8,33,66,67,77,88,100,77,67}) == 174)){ tests_passed++; } total_tests++;

    if((add({11,22,44,55,66,77,88,99,100,11}) == 22)){ tests_passed++; } total_tests++;

    if((add({11,22,44,55,66,1,88,99,100,77}) == 22)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,42,7,7,42,10,11,11,13,14,16,18,19,20}) == 110)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,7,8,22,10,11,12,13,14,15,16,17,18,19,20}) == 28)){ tests_passed++; } total_tests++;

    if((add({1,4,3,8,16,7,10,14,16,7}) == 26)){ tests_passed++; } total_tests++;

    if((add({3,5,55,98,7,9,12,6,12}) == 104)){ tests_passed++; } total_tests++;

    if((add({101,11,8,33,66,66,10,77,67,88,99,100,66}) == 254)){ tests_passed++; } total_tests++;

    if((add({2,4,6,17,10,8,10,12,14,16,18,20,17,24,26,28,30,17}) == 112)){ tests_passed++; } total_tests++;

    if((add({3,100,55,98,7,9,12,6,3}) == 204)){ tests_passed++; } total_tests++;

    if((add({11,8,33,33,66,67,77,88,99,100,77,76,100,66}) == 338)){ tests_passed++; } total_tests++;

    if((add({11,22,33,6,66,68,67,77,88,100,67}) == 196)){ tests_passed++; } total_tests++;

    if((add({1,4,3,8,20,16,7,10,14,8,7,67,7}) == 46)){ tests_passed++; } total_tests++;

    if((add({11,8,89,33,66,67,77,88,99,100,8}) == 196)){ tests_passed++; } total_tests++;

    if((add({11,8,33,66,67,77,88,99,100,77,76,100,66,88}) == 262)){ tests_passed++; } total_tests++;

    if((add({55,11,22,68,33,45,66,77,88,99,99}) == 68)){ tests_passed++; } total_tests++;

    if((add({2,4,7,17,10,8,10,12,14,42,18,20,17,24,25,28,30}) == 138)){ tests_passed++; } total_tests++;

    if((add({3,33,5,7,9,122,6,19,7,10,556,100,187,920,42,37,29,10}) == 1162)){ tests_passed++; } total_tests++;

    if((add({1,4,3,8,16,7,10,14,8,17,8}) == 26)){ tests_passed++; } total_tests++;

    if((add({11,10,76,33,44,55,88,33,77,88,99,10,100}) == 108)){ tests_passed++; } total_tests++;

    if((add({11,22,33,6,66,68,67,77,88,99,65,100}) == 196)){ tests_passed++; } total_tests++;

    if((add({2,6,11,17,8,8,10,12,14,16,18,20,17,54,24,13,28,29,6}) == 116)){ tests_passed++; } total_tests++;

    if((add({78,11,22,34,66,68,67,77,98,100}) == 202)){ tests_passed++; } total_tests++;

    if((add({11,22,33,66,44,67,77,66,88,99}) == 154)){ tests_passed++; } total_tests++;

    if((add({1,4,3,8,16,7,10,14,16,7,16,8}) == 34)){ tests_passed++; } total_tests++;

    if((add({3,6,28,9,7,19,8,1,9,5}) == 6)){ tests_passed++; } total_tests++;

    if((add({3,5,28,101,23,7,9,12,18,28}) == 40)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,17,9,8,11,13,4,88,8,9,12,14,9,17}) == 24)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,30,16,12}) == 154)){ tests_passed++; } total_tests++;

    if((add({11,22,3,44,55,66,88,0,100,77}) == 132)){ tests_passed++; } total_tests++;

    if((add({11,22,33,10,44,55,88,21,7,77,88,100}) == 132)){ tests_passed++; } total_tests++;

    if((add({17,33,2,66,1,88}) == 154)){ tests_passed++; } total_tests++;

    if((add({8,4,12,6,13,8,10,8,13,15}) == 26)){ tests_passed++; } total_tests++;

    if((add({88,6,2,7,19,8,1,9,5,9,1}) == 14)){ tests_passed++; } total_tests++;

    if((add({11,8,33,66,66,77,88,99,100,66}) == 140)){ tests_passed++; } total_tests++;

    if((add({2,4,6,19,8,10,11,13,15,4,4,8,15}) == 26)){ tests_passed++; } total_tests++;

    if((add({11,22,44,55,66,77,87,99,100,77}) == 22)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,68,77,920,100,66}) == 166)){ tests_passed++; } total_tests++;

    if((add({1,4,3,8,16,7,10,16}) == 28)){ tests_passed++; } total_tests++;

    if((add({11,22,98,33,12,44,54,14,66,77,88,99,44,99}) == 80)){ tests_passed++; } total_tests++;

    if((add({3,556,2,7,8,9,31,10,3,556}) == 1122)){ tests_passed++; } total_tests++;

    if((add({3,28,5,7,9,2,122,6,8,10,556,3,100,187,920,42,37,29,2}) == 88)){ tests_passed++; } total_tests++;

    if((add({2,4,6,19,8,37,11,13,22}) == 4)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,10,8,12,14,16,18,20,22,24,26,28,30,30}) == 130)){ tests_passed++; } total_tests++;

    if((add({65,3,5,7,9,2,122,6,8,10,556,100,187,920,26,37,29}) == 1038)){ tests_passed++; } total_tests++;

    if((add({11,22,33,10,55,88,7,77,99,10,100,100}) == 230)){ tests_passed++; } total_tests++;

    if((add({11,22,16,55,66,77,88,99,100}) == 22)){ tests_passed++; } total_tests++;

    if((add({11,22,33,100,55,66,77,88,99,44,22}) == 320)){ tests_passed++; } total_tests++;

    if((add({11,8,33,66,77,88,99,100,87}) == 262)){ tests_passed++; } total_tests++;

    if((add({11,22,101,10,44,55,88,21,7,77,88,100}) == 132)){ tests_passed++; } total_tests++;

    if((add({11,22,33,78,44,55,66,77,88,99,44,55}) == 100)){ tests_passed++; } total_tests++;

    if((add({11,22,44,55,66,77,88,99,100,11,11}) == 22)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,7,10,556,187,920,42,122,29}) == 174)){ tests_passed++; } total_tests++;

    if((add({11,22,33,66,44,66,77,88,36,100}) == 342)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,68,77,921,100,66,100}) == 266)){ tests_passed++; } total_tests++;

    if((add({11,8,89,33,66,67,88,99,100,88,100}) == 96)){ tests_passed++; } total_tests++;

    if((add({3,6,2,7,7,19,8,1,9,5,6}) == 6)){ tests_passed++; } total_tests++;

    if((add({11,8,33,33,66,67,77,88,99,100,7,76,100,66,7}) == 338)){ tests_passed++; } total_tests++;

    if((add({3,6,2,7,4,8,1,9,10,3,3}) == 14)){ tests_passed++; } total_tests++;

    if((add({12,11,33,66,67,77,88,99,100}) == 66)){ tests_passed++; } total_tests++;

    if((add({8,33,66,66,77,67,88,22,100}) == 88)){ tests_passed++; } total_tests++;

    if((add({11,22,33,6,66,67,68,67,77,88,99,65,100}) == 116)){ tests_passed++; } total_tests++;

    if((add({11,22,101,10,44,55,88,21,7,77,88,100,7}) == 132)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,101,2,122,6,8,10,556,100,187,920,41,37,29,5}) == 1038)){ tests_passed++; } total_tests++;

    if((add({11,8,33,66,67,77,88,99,100,77,77,100,66,100,66}) == 274)){ tests_passed++; } total_tests++;

    if((add({2,4,55,88,10,12,14,16,18,20,22,24,28,30,16,28}) == 222)){ tests_passed++; } total_tests++;

    if((add({11,11,22,33,66,66,77,68,88,99,101}) == 134)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,101,2,122,6,8,10,556,100,187,920,41,37,29,5,187}) == 1038)){ tests_passed++; } total_tests++;

    if((add({3,6,24,7,4,8,0,9,10}) == 14)){ tests_passed++; } total_tests++;

    if((add({11,67,68,34,66,44,67,77,88,99}) == 78)){ tests_passed++; } total_tests++;

    if((add({3,6,2,7,4,8,1,9,10,2}) == 16)){ tests_passed++; } total_tests++;

    if((add({3,6,24,7,4,8,1,10,10,4}) == 28)){ tests_passed++; } total_tests++;

    if((add({11,22,44,55,66,77,88,99,100,77,77,77,44}) == 22)){ tests_passed++; } total_tests++;

    if((add({11,23,36,32,68,67,77,88,98,100}) == 220)){ tests_passed++; } total_tests++;

    if((add({3,101,7,9,12,18}) == 18)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,42,7,7,556,42,10,11,12,13,14,15,16,17,31,19,20,42}) == 132)){ tests_passed++; } total_tests++;

    if((add({11,22,33,44,68,77,100,66,100}) == 132)){ tests_passed++; } total_tests++;

    if((add({2,4,6,8,1,12,14,16,18,20,22,24,26,28,30,31,16,41}) == 112)){ tests_passed++; } total_tests++;

    if((add({11,8,30,66,67,77,88,77,99,100,77,76,100,66,66}) == 316)){ tests_passed++; } total_tests++;

    if((add({2,4,6,17,10,8,10,14,16,18,20,17,23,13,28,30,6,23,10,15}) == 74)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,42,7,7,42,29,10,11,11,13,14,16,18,19,20}) == 64)){ tests_passed++; } total_tests++;

    if((add({4,6,88,10,12,14,16,15,20,22,24,28,30,16,16,24}) == 120)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,42,7,7,42,10,11,12,13,14,15,16,17,18,19,17,20}) == 118)){ tests_passed++; } total_tests++;

    if((add({11,33,67,77,88,99,100}) == 0)){ tests_passed++; } total_tests++;

    if((add({1,4,3,8,7,10,14,16,7,16,8}) == 54)){ tests_passed++; } total_tests++;

    if((add({11,8,33,66,66,77,67,88,3,99,100}) == 162)){ tests_passed++; } total_tests++;

    if((add({11,22,33,10,32,0,55,88,21,7,77,88,99,12,100}) == 220)){ tests_passed++; } total_tests++;

    if((add({3,5,100,54,101,9,12,15,18}) == 54)){ tests_passed++; } total_tests++;

    if((add({23,11,22,33,100,55,66,77,88,99,44}) == 0)){ tests_passed++; } total_tests++;

    if((add({5,1,2,3,4,5,42,7,7,9,11,12,69,12,14,15,16,17,18,19,20,18}) == 42)){ tests_passed++; } total_tests++;

    if((add({11,22,98,33,12,44,54,14,66,77,88,99,44,66}) == 146)){ tests_passed++; } total_tests++;

    if((add({1,15,3,4,5,42,7,7,9,11,12,13,14,15,16,16,18,19}) == 62)){ tests_passed++; } total_tests++;

    if((add({22,3,5,28,101,23,7,9,12,18}) == 46)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,8,11,13,4,6,8,9,12,14,9,9}) == 28)){ tests_passed++; } total_tests++;

    if((add({1,2,34,3,4,5,42,7,7,42,10,11,12,13,14,15,16,17,18,19,99,17,20}) == 44)){ tests_passed++; } total_tests++;

    if((add({3,5,28,101,23,7,187,12,18}) == 12)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,7,8,9,10,11,12,13,14,15,16,17,18,19,20}) == 104)){ tests_passed++; } total_tests++;

    if((add({1,55,2,55,3,4,5,42,7,1,9,10,11,12,13,14,15,16,17,19,20,20,78}) == 118)){ tests_passed++; } total_tests++;

    if((add({3,6,1,7,4,8,1,0,9,5}) == 14)){ tests_passed++; } total_tests++;

    if((add({1,55,2,55,3,4,5,42,7,1,9,10,11,12,13,14,15,16,17,19,20,20,78,78}) == 196)){ tests_passed++; } total_tests++;

    if((add({3,6,1,7,4,8,1,0,9,5,0}) == 14)){ tests_passed++; } total_tests++;

    if((add({3,6,24,7,4,8,1,10,10,4,7,24}) == 52)){ tests_passed++; } total_tests++;

    if((add({100,1,29,3,8,16,7,10,14}) == 26)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,8,11,13,4,6,7,12,14,9}) == 26)){ tests_passed++; } total_tests++;

    if((add({13,5,26,8,9,12}) == 20)){ tests_passed++; } total_tests++;

    if((add({3,5,7,4,12,18,12}) == 22)){ tests_passed++; } total_tests++;

    if((add({65,11,8,33,33,66,67,77,88,99,100,7,76,100,66,7}) == 166)){ tests_passed++; } total_tests++;

    if((add({2,4,6,6,10,11,13,11}) == 10)){ tests_passed++; } total_tests++;

    if((add({12,8,33,66,67,77,99,100,77,100}) == 274)){ tests_passed++; } total_tests++;

    if((add({11,22,33,10,44,55,88,21,7,77,88,100,21}) == 132)){ tests_passed++; } total_tests++;

    if((add({65,3,5,7,9,2,122,6,8,556,100,187,920,42,37,29,42}) == 606)){ tests_passed++; } total_tests++;

    if((add({6,6,10,11,13,13}) == 6)){ tests_passed++; } total_tests++;

    if((add({3,5,7,9,2,122,6,8,10,556,100,187,920,42,37,29,5,187}) == 728)){ tests_passed++; } total_tests++;

    if((add({2,7,4,8,1,0,9,5}) == 8)){ tests_passed++; } total_tests++;

    if((add({23,11,22,33,66,37,67,77,88,98,100,100,11,77,98}) == 198)){ tests_passed++; } total_tests++;

    if((add({187,1,2,3,4,24,5,42,7,9,10,11,12,13,14,15,16,17,18,6,19,20,37,77,2,5,20,18,17,16}) == 126)){ tests_passed++; } total_tests++;

    if((add({1,3,5,7,9,8,11,13,4,4,6,8,9,12,14,11}) == 32)){ tests_passed++; } total_tests++;

    if((add({1,4,3,5,16,7,10,14,10}) == 18)){ tests_passed++; } total_tests++;

    if((add({11,8,89,33,67,77,88,99,100,37,33}) == 8)){ tests_passed++; } total_tests++;

    if((add({1,2,34,3,4,5,42,7,7,42,10,11,12,13,14,15,16,17,18,19,32,99,17,20,42,17}) == 64)){ tests_passed++; } total_tests++;

    if((add({13,5,8,12,15}) == 12)){ tests_passed++; } total_tests++;

    if((add({23,11,22,33,100,55,23,66,77,88,99,45}) == 154)){ tests_passed++; } total_tests++;

    if((add({1,2,3,4,5,42,7,7,9,10,11,12,13,14,15,16,4,17,18,19,20,1}) == 100)){ tests_passed++; } total_tests++;

    if((add({4,6,6,10,11,13}) == 16)){ tests_passed++; } total_tests++;

    if((add({11,22,33,10,44,55,88,7,77,99,10,100,55}) == 132)){ tests_passed++; } total_tests++;

    if((add({2,4,6,17,10,8,10,12,14,16,18,20,17,24,13,28,30,6,4,2,4,18,18}) == 138)){ tests_passed++; } total_tests++;

    if((add({33,5,100,77,54,9,18,3}) == 0)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


