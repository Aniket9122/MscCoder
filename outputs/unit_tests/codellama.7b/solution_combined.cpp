#include <iostream>
#include <vector>
using namespace std;

int solution(const vector<int>& lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i += 2) {
        if (lst[i] % 2 != 0) {
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

    if((solutions({5, 8, 7, 1})    == 12)){ tests_passed++; } total_tests++;

    if((solutions({3, 3, 3, 3, 3}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({30, 13, 24, 321}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({5, 9}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({2, 4, 8}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({30, 13, 23, 32}) == 23)){ tests_passed++; } total_tests++;

    if((solutions({3, 13, 2, 9}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({5,8,7,1}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({3,3,3,3,3}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({30,13,24,321}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({5,9}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({2,4,8}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({30,13,23,32}) == 23)){ tests_passed++; } total_tests++;

    if((solutions({3,13,2,9}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({1,2,3,4,5,6}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,5,10,11,18}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({1,3,5,7}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({2,3,5,8,13}) == 18)){ tests_passed++; } total_tests++;

    if((solutions({2,4,6,8,10}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({7}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({2,1,2,1,2,1}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({0,0,0,0,1}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({2,5,10,11,11}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({2,4,0,6,8,1}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,10,11,18}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({2,1,2,1,2,2,1}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({2,7,1,2,1,2,1}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({1,2,3,4,5}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({2,5,10,11,2,11,11}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,3,4,5,5,7}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({4,10,11,18}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({1,2,3,13,5,6}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({2,1,2,1,2,2,1,2}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,5}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({13,5,10,11,2,11,11}) == 24)){ tests_passed++; } total_tests++;

    if((solutions({2,5,11,2,11,11}) == 22)){ tests_passed++; } total_tests++;

    if((solutions({2,1,2,6,2,1}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({0,1,3,5,7,5}) == 10)){ tests_passed++; } total_tests++;

    if((solutions({2,7,1,2,3,1,2,1,2}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({1,3,2,7}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({2,7,1,2,3,1,2,1,2,2}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({2,1,2,2,1,2}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({2,4,8,10}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,5,6,7,2}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,2,1,2,2,1,2}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({2,5,10,11,2,11}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,3,5,13,5}) == 10)){ tests_passed++; } total_tests++;

    if((solutions({6,10,11,18}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({0,0,10,0,1}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({2,7,4,8,10}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({7,2,10,11,10,18}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({2,3,5,8,12}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({2,7,1,2,3,1,11,13,2,1,2,2}) == 15)){ tests_passed++; } total_tests++;

    if((solutions({2,3,5,13,13}) == 18)){ tests_passed++; } total_tests++;

    if((solutions({2,1,2,1,2,1,1}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7,6}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({4,10,11,18,18}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({12,13}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,5,10,11,11,2,11}) == 22)){ tests_passed++; } total_tests++;

    if((solutions({2,3,5,8,13,13}) == 18)){ tests_passed++; } total_tests++;

    if((solutions({2,5,6,11,2,11,11,2}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({2,1,3,1,2}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({7,1,2,3,1,2,1,2}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({2,5,10,11,11,2,11,2}) == 22)){ tests_passed++; } total_tests++;

    if((solutions({0,3,5,7,5,7}) == 10)){ tests_passed++; } total_tests++;

    if((solutions({2,1,2,6,2,1,1,1}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({1,2,4,5,6}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({1,3,13,14,5,6}) == 19)){ tests_passed++; } total_tests++;

    if((solutions({10,2,3,13,5,6,2}) == 8)){ tests_passed++; } total_tests++;

    if((solutions({10,2,14,3,13,5,6}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({0,5,2,7,5,7,2}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({2,5,10,11,11,2,11,2,11}) == 33)){ tests_passed++; } total_tests++;

    if((solutions({3,2,7}) == 10)){ tests_passed++; } total_tests++;

    if((solutions({2,5,10,11,2,11,11,2}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({0,1,0,0,0,1}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({1,3,3,13,14,5,18}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({0,1,3,7,5}) == 8)){ tests_passed++; } total_tests++;

    if((solutions({2,4,5,13,5,5}) == 10)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,10,3,4,5,5,7}) == 17)){ tests_passed++; } total_tests++;

    if((solutions({4,10,11,18,10}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({0,3,5,7,5}) == 10)){ tests_passed++; } total_tests++;

    if((solutions({2,8,10,10}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,11,4,5,6,7}) == 23)){ tests_passed++; } total_tests++;

    if((solutions({2,2,5,10,11,11}) == 16)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,10,3,4,5,5,7,4}) == 17)){ tests_passed++; } total_tests++;

    if((solutions({2,4,7,8,10}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({2,1,2,0,1,2,12,1}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,2,2,1,2}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({1,2,10,2,2}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({2,7,4,8,10,10}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({5,3,4,5}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({0,1,3,2,7}) == 10)){ tests_passed++; } total_tests++;

    if((solutions({5,3,5,4,5}) == 15)){ tests_passed++; } total_tests++;

    if((solutions({2,6,1,2,6,2,1,1,1,1}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({1,2,3,4,5,6,7,6}) == 16)){ tests_passed++; } total_tests++;

    if((solutions({6,12,13}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({1,4,7,8,10}) == 8)){ tests_passed++; } total_tests++;

    if((solutions({2,5,10,11,11,11}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({5,11,10,11,2,11}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({2,5,10,12,11,11,11,11}) == 22)){ tests_passed++; } total_tests++;

    if((solutions({0,10,0,1,0}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({13,5,10,11,2,11,11,10}) == 24)){ tests_passed++; } total_tests++;

    if((solutions({1,2,3,4,5,6,5}) == 14)){ tests_passed++; } total_tests++;

    if((solutions({0,10,0,1,0,1}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({1,3,2,1,2,2,1,2}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({1,2,4,5,6,1,6}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({2,5,10,11,2,11,11,10,5,5}) == 16)){ tests_passed++; } total_tests++;

    if((solutions({2,1,3,2}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({2,5,10,11,11,2}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({0,0,0,13}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,5,6,7,8,9,10}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({1,4,1,4,1,4,1,4}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,1,1,5,5,5}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({0,0,0,0,0,0,0,0}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,55,66,77,88,99}) == 275)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7,8}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,5,6,9,8,11,10}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,64,75,86,97,108,119}) == 375)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7,8,9,10}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({65,11,22,33,44,55,66,77,88,99}) == 65)){ tests_passed++; } total_tests++;

    if((solutions({0,2,3,4,5,6,7,8,9,10}) == 24)){ tests_passed++; } total_tests++;

    if((solutions({2,5,2,2,1,1,1,5,5,5,1}) == 8)){ tests_passed++; } total_tests++;

    if((solutions({65,22,33,44,55,66,77,88}) == 230)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({2,2,1,1,1,5,5,5}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,6,9,8,11,10}) == 20)){ tests_passed++; } total_tests++;

    if((solutions({2,2,1,1,1,5,5,5,5}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7,9,2}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7,8,9,2}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,5,6,7,8,9,31,10}) == 31)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,55,66,88,99}) == 99)){ tests_passed++; } total_tests++;

    if((solutions({2,1,1,1,5,5,5}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,1,1,5,5}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,9,8,11,10}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,4,6,9,8,11,10}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,5,6,8,9,31,10}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({65,22,44,55,66,77}) == 65)){ tests_passed++; } total_tests++;

    if((solutions({1,4,1,1,4,1,4}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({65,11,22,33,44,55,66,77,88,77,99}) == 164)){ tests_passed++; } total_tests++;

    if((solutions({2,11,3,4,5,88,6,9,8,11,10,8}) == 8)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,4,6,9,8,11,10,8}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({12,22,33,44,55,66,77,88,99}) == 264)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,9,8,11}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,11,3,4,4,6,9,8,11,10,8}) == 23)){ tests_passed++; } total_tests++;

    if((solutions({0,0,0,0,0,0,0,0,0}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,6,9,8,11,10,8}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({1,2,2,1,1,1,5,5}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({86,2,3,4,5,6,7,8,9,10}) == 24)){ tests_passed++; } total_tests++;

    if((solutions({65,22,33,55,66,77,88}) == 98)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,1,1,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({1,11,1,1,4,1,4,1}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,6,9,12,8,11,10,8}) == 14)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,65,55,66,88,99,22}) == 208)){ tests_passed++; } total_tests++;

    if((solutions({3,1,1,1,5,5,5}) == 14)){ tests_passed++; } total_tests++;

    if((solutions({2,5,2,2,1,1,1,5,5,5,1,1,5}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({75,1,2,3,4,5,6,7,9,2}) == 84)){ tests_passed++; } total_tests++;

    if((solutions({1,55,2,2,1,1,1,5,5,1}) == 8)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,44,1,1,5,5,5}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({99,1,4,1,4,1,4,1,4}) == 99)){ tests_passed++; } total_tests++;

    if((solutions({0,0,0,0,0,0,0}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({86,2,3,4,4,5,6,7,8,9,10}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({11,12,22,33,44,55,66,77,88,99}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,6,9,12,8,11,33,8}) == 14)){ tests_passed++; } total_tests++;

    if((solutions({75,1,2,3,4,5,6,7,9,2,4}) == 84)){ tests_passed++; } total_tests++;

    if((solutions({86,2,3,4,4,6,7,8,9,10}) == 19)){ tests_passed++; } total_tests++;

    if((solutions({75,1,2,4,4,5,6,7,9,2,4}) == 84)){ tests_passed++; } total_tests++;

    if((solutions({12,22,33,44,55,44,77,88,99,77}) == 264)){ tests_passed++; } total_tests++;

    if((solutions({2,11,3,4,5,88,6,9,8,55,11,10,8,8}) == 19)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,56,44,65,55,66,88,99,22,22}) == 99)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({1,2,2,6,1,77,1,1,5,1,5}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,6,9,12,8,11,10,8,9}) == 14)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,1,97,1,1,1}) == 102)){ tests_passed++; } total_tests++;

    if((solutions({3,4,4,6,9,12,8,11,33,8}) == 45)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,6,9,12,8,11,10,9,8,10}) == 23)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,5,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({11,12,22,33,44,55,66,77,0,88,99}) == 110)){ tests_passed++; } total_tests++;

    if((solutions({86,2,3,4,5,6,7,8,53,9,10}) == 68)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,5,6,9,9,31,10,2}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({33,1,1,1,1,1,1,1,5,1,1,1}) == 42)){ tests_passed++; } total_tests++;

    if((solutions({0,1,1,1,1,1,1,97,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({2,1,4,1,4,5,1,5}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({2,11,3,3,4,6,9,8,11,10,8}) == 23)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,6,9,7,11,10,44}) == 10)){ tests_passed++; } total_tests++;

    if((solutions({3,4,6,9,8,11,10}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({2,5,2,2,1,1,1,5,5,5,1,1,5,5}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,1,55,5}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,5,6,7,8,9,10}) == 21)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,9,9,11,2,10}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,65,55,66,88,99,22,22}) == 208)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,55,66,88,99}) == 143)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,6,9,12,8,11,10,9,8,10}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({1,11,1,1,4,1,4,1,1}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({11,12,22,33,44,55,66,77,88,99,55}) == 66)){ tests_passed++; } total_tests++;

    if((solutions({75,1,2,3,4,5,6,7,9,2,4,1}) == 84)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,1,97,1,1,1,1}) == 103)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,3,4,5,6,7,9,2}) == 15)){ tests_passed++; } total_tests++;

    if((solutions({75,1,2,3,4,6,7,9,2,4}) == 82)){ tests_passed++; } total_tests++;

    if((solutions({76,1,2,4,4,5,6,7,9,2,4}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,6,8,9,31}) == 31)){ tests_passed++; } total_tests++;

    if((solutions({1,0,1,1,1,1,1,1,1,1,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,2,1,1,1,1,97,1,1,1}) == 102)){ tests_passed++; } total_tests++;

    if((solutions({2,5,6,2,2,1,1,1,5,5,5,1,1,5}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({3,3,3,4,4,6,9,12,8,11,10,8,9,11}) == 24)){ tests_passed++; } total_tests++;

    if((solutions({1,55,2,2,1,1,1,5,5,33,1}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({75,1,2,4,5,6,7,9,2,4}) == 87)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,4,6,9,8,11,10,8,4,6}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,2,1,1,1,1,1,97,1,1,1}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({86,2,2,4,4,5,6,7,8,9,10}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,2,1,1,1,0,5,5,5}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({2,11,3,4,5,88,9,8,11,10}) == 28)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,1,97,1,1,0,1,1}) == 103)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,6,65,55,66,88,99,22,22}) == 99)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,6,65,55,66,88,99,22,22,65}) == 208)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7,8,9,10,4,9}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({56,11,3,4,5,88,9,8,55,11,10,8,8}) == 72)){ tests_passed++; } total_tests++;

    if((solutions({0,53,2,3,5,6,7,8,9,10}) == 21)){ tests_passed++; } total_tests++;

    if((solutions({3,3,3,4,4,6,9,3,12,8,11,10,8,9,11}) == 37)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,64,5,76,86,97,108,119}) == 89)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,6,9,12,8,11,10,10,8,10,12}) == 14)){ tests_passed++; } total_tests++;

    if((solutions({2,11,0,4,4,6,9,8,11,10,8}) == 20)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,55,66,88,99,22}) == 99)){ tests_passed++; } total_tests++;

    if((solutions({3,3,3,4,4,6,9,12,8,12,10,8,9,11}) == 24)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,5,1,8,1,1,1}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({1,55,2,2,1,1,1,5,5,1,1}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({2,11,3,4,5,88,5,9,8,55,11,8,8}) == 24)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,1,1,5,5,5,1}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,4,6,9,44,11,10}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,5,6,7,8,9,10,4,9}) == 21)){ tests_passed++; } total_tests++;

    if((solutions({12,22,33,44,55,44,77,88,99,77,77}) == 341)){ tests_passed++; } total_tests++;

    if((solutions({75,119,2,3,64,6,7,9,2,4}) == 82)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,0,4,5,6,7,8,0}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({99,1,4,1,1,4,1,4}) == 101)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,4,12,8,33,8}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,4,6,9,11,10,8,4,6}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({2,1,1,1,4,5,5,5,5}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({2,11,3,3,88,6,9,8,11,10,8,3}) == 23)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,1,5,5,1,5}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,6,65,8,11,10,8,4,6}) == 76)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,108,1,1,1,1,1,97,1,1,1}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({2,10,3,4,5,6,7,8,9,31,10}) == 24)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,2,1,1,1,1,22,1,1,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,4,12,8,33,9}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,77,12,1,1,1,1,97,1,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,65,55,66,88,99,22,22,33}) == 208)){ tests_passed++; } total_tests++;

    if((solutions({2,5,2,2,1,1,1,5,5,5,6,1,5}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({0,2,3,4,5,6,7,8,77,10}) == 92)){ tests_passed++; } total_tests++;

    if((solutions({99,1,4,1,4,1,4,22,1,4}) == 100)){ tests_passed++; } total_tests++;

    if((solutions({2,1,1,1,1,4,5,5,5,5}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({1,4,1,4,1,4,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,9,5,6,7,8,9,10}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,1,2,5,5,5}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({2,11,3,4,5,88,5,9,8,11,8,66}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({10,12,22,33,44,55,66,77,88,99}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,4,2,4,5,1,5}) == 10)){ tests_passed++; } total_tests++;

    if((solutions({3,4,4,6,9,12,8,11,32,8,8}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({65,56,22,33,44,55,66,77,88}) == 65)){ tests_passed++; } total_tests++;

    if((solutions({65,11,65,22,33,44,55,66,77,88,77,99,10}) == 372)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,6,7,8,9,10}) == 16)){ tests_passed++; } total_tests++;

    if((solutions({99,1,4,1,1,4,1,4,1}) == 102)){ tests_passed++; } total_tests++;

    if((solutions({2,11,3,4,5,88,5,76,55,11,8,8}) == 68)){ tests_passed++; } total_tests++;

    if((solutions({2,2,1,1,1,5,5,5,5,5}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7,8,9}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({12,22,33,86,55,44,32,76,88,99,77,77}) == 165)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,6,9,12,8,11,10,8,9,6}) == 14)){ tests_passed++; } total_tests++;

    if((solutions({0,1,1,1,1,1,97,1,1,1,1}) == 101)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,65,55,66,88,99,22,65}) == 273)){ tests_passed++; } total_tests++;

    if((solutions({1,55,2,2,1,1,1,1,5,5,33,1}) == 41)){ tests_passed++; } total_tests++;

    if((solutions({2,1,1,1,2,1,1,1,1,22,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({2,5,2,2,33,1,1,5,5,5,42,1,1,5,5}) == 45)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,9,9,11,2,2,10}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({1,0,1,1,1,1,1,1,1,0,1,1,1,0}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({0,0,0,0,0,0}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({1,4,1,1,4,1,4,1}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,22,1,1,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,3,6,44,11,10,44}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,1,1,5,5,5,1,1,5}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({1,1,44,1,44,1,1,1,1,1,97,1,1,1}) == 101)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,65,55,66,88,99,0,22,33,88}) == 208)){ tests_passed++; } total_tests++;

    if((solutions({2,4,2,4,5,1,5,2}) == 10)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,108,1,1,1,1,1,97,1,1,119,1}) == 125)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,6,7,8,9,10,5,2}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,4,3,4,6,1,5,2}) == 8)){ tests_passed++; } total_tests++;

    if((solutions({75,119,2,3,64,6,9,7,9,2,4}) == 93)){ tests_passed++; } total_tests++;

    if((solutions({65,10,22,33,44,55,76,66,77,88,22,33}) == 142)){ tests_passed++; } total_tests++;

    if((solutions({11,22,32,44,6,65,55,66,88,99,64,22,22}) == 66)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,42,7,11,10,32,44}) == 14)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,1,97,1,1,0,1,1,1}) == 104)){ tests_passed++; } total_tests++;

    if((solutions({1,0,1,1,1,1,1,1,1,0,1,1,1,0,0}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({86,2,3,4,5,6,6,7,8,53,10}) == 8)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,1,1,32,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({11,21,33,44,65,55,89,66,88,99,22,65}) == 198)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,5,76,86,97,108,119}) == 300)){ tests_passed++; } total_tests++;

    if((solutions({12,11,22,33,6,65,55,66,88,99,22,22,65,88}) == 120)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,22,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({2,4,5,6,7,8,9,31,10}) == 21)){ tests_passed++; } total_tests++;

    if((solutions({2,4,2,4,6,1,5,2}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({75,1,2,4,5,6,7,9,2,4,1}) == 88)){ tests_passed++; } total_tests++;

    if((solutions({2,5,2,2,1,1,1,5,21,5,5,1}) == 28)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,5,86,97,108}) == 84)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,42,7,10,32,44}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({2,11,3,4,5,88,5,76,55,11,8,8,8}) == 68)){ tests_passed++; } total_tests++;

    if((solutions({1,4,1,4,2,1,4,1,4,4,4}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({86,2,21,4,4,6,7,8,9,10,7}) == 44)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,6,9,12,11,10,8,9}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({4,4,77,4,6,9,12,8,11,33,8,33,9}) == 97)){ tests_passed++; } total_tests++;

    if((solutions({33,11,2,33,44,65,55,66,88,99,0,22,33,88}) == 121)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,65,54,66,88,99,22,22,33,22}) == 208)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,6,44,11,10,44}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7,97,9,2}) == 97)){ tests_passed++; } total_tests++;

    if((solutions({0,1,1,1,1,1,1,64,97,1,1,1,1}) == 102)){ tests_passed++; } total_tests++;

    if((solutions({0,53,2,3,6,5,75,7,8,9,10}) == 75)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,65,55,66,88,99,77,22,22,99}) == 307)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,55,32,66,77,88,99}) == 99)){ tests_passed++; } total_tests++;

    if((solutions({65,11,65,22,33,44,55,66,77,88,77,99,10,77,88}) == 372)){ tests_passed++; } total_tests++;

    if((solutions({76,22,33,100,44,65,55,66,88,99,0,22,33,88}) == 121)){ tests_passed++; } total_tests++;

    if((solutions({1,3,4,2,4,5,1,5}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({22,33,100,65,55,66,56,99,21,0,22,33,88}) == 76)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,2,1,1,1,1,22,1,1,1,1,2}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,65,55,66,88,56,99,0,22,33,88}) == 142)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,5,1,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,5,7,7,8,9,10}) == 21)){ tests_passed++; } total_tests++;

    if((solutions({86,2,2,4,4,5,6,7,8,9,10,9}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({0,53,2,3,5,6,8,9,10}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,5,1,8,108,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({0,1,1,1,1,1,97,1,1,0,1}) == 101)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,1,1,5,5,2}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,100,5,6,7,8,9,10,4,9,7}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({31,11,53,64,5,76,86,97,108,119}) == 89)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,1,98,1,1,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,1,97,1,1,1,1,1}) == 103)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,5,6,7,8,9,10,4}) == 21)){ tests_passed++; } total_tests++;

    if((solutions({100,2,3,3,6,44,11,10,44,100}) == 14)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,54,66,88,99,22,22,33,22,22}) == 77)){ tests_passed++; } total_tests++;

    if((solutions({2,11,3,4,9,8,11,10}) == 23)){ tests_passed++; } total_tests++;

    if((solutions({86,2,3,65,5,6,42,53,77,9,10}) == 85)){ tests_passed++; } total_tests++;

    if((solutions({2,11,0,4,10,4,6,9,8,11,10,8}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({75,75,2,3,4,5,6,7,9,2}) == 84)){ tests_passed++; } total_tests++;

    if((solutions({76,3,1,2,4,4,5,6,10,9,1,4}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,54,3,4,5,6,7,9,10}) == 15)){ tests_passed++; } total_tests++;

    if((solutions({2,11,0,4,10,4,4,6,9,8,11,10,8}) == 20)){ tests_passed++; } total_tests++;

    if((solutions({0,2,3,4,5,6,7,8,10}) == 15)){ tests_passed++; } total_tests++;

    if((solutions({2,2,44,1,1,5,5,5}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,5,6,7,8,9,10,9}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,2,1,31,2,5,5,5}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({86,2,2,4,4,5,6,7,8,9,10,5}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({99,1,4,1,4,1,4,1,4,1}) == 99)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,6,6,7,8,9,10,6}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,6,9,8,11,10,8,9}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,54,66,88,99,22,22,66,33,22,22,22,33}) == 44)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,55,66,77,88,99,77}) == 275)){ tests_passed++; } total_tests++;

    if((solutions({5,3,3,4,4,4,12,8,33,8,4}) == 41)){ tests_passed++; } total_tests++;

    if((solutions({2,66,3,4,6,65,8,11,10,8,4,6,8}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,4,45,6,9,44,11,10}) == 65)){ tests_passed++; } total_tests++;

    if((solutions({9,3,3,4,33,4,42,7,10,32,44}) == 45)){ tests_passed++; } total_tests++;

    if((solutions({1,100,1,56,1,1,1,1,1,99,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({11,21,33,44,65,89,66,88,86,99,22,65}) == 109)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,54,66,88,99,22,22,33,22,22,22}) == 77)){ tests_passed++; } total_tests++;

    if((solutions({2,11,0,4,10,4,4,6,9,8,11,10,6,10}) == 20)){ tests_passed++; } total_tests++;

    if((solutions({3,1,1,1,5,100,5,5}) == 14)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7,8,9,2,2}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,6,9,8,11,10,8,9}) == 23)){ tests_passed++; } total_tests++;

    if((solutions({2,11,3,4,5,88,6,9,8,11,10,8,4}) == 8)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,6,65,55,66,99,22,22,22}) == 198)){ tests_passed++; } total_tests++;

    if((solutions({3,4,6,9,12,8,11,33,8,8}) == 14)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,6,9,12,8,11,33,8,12}) == 14)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,1,1,1,22,1,1,1,1,2,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({3,4,6,21,12,8,11,100,8,8,9}) == 23)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,5,4,6,8,9,31,10}) == 31)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,53,1,1,1,1,32,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({99,1,4,1,4,0,1,4,22,1,4}) == 100)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,11,6,44,11,10,44}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,4,6,9,8,11,10,2}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({3,0,1,2,3,5,6,7,8,9,10,4,2}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({2,1,1,1,2,1,1,1,97,1,1,1}) == 100)){ tests_passed++; } total_tests++;

    if((solutions({86,2,3,4,4,6,7,8,9,31,10}) == 19)){ tests_passed++; } total_tests++;

    if((solutions({98,1,2,4,5,6,7,9,2,4,1}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({2,1,1,1,1,4,5,5,5,5,1}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,3,4,5,7,9,2,7}) == 24)){ tests_passed++; } total_tests++;

    if((solutions({2,11,3,3,88,6,9,8,11,10,8,3,2,2}) == 23)){ tests_passed++; } total_tests++;

    if((solutions({2,1,1,1,2,1,1,1,97,1,1,1,1}) == 101)){ tests_passed++; } total_tests++;

    if((solutions({2,11,4,10,4,6,9,8,11,10,8,8}) == 20)){ tests_passed++; } total_tests++;

    if((solutions({31,11,53,64,5,76,86,97,108,119,31}) == 120)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,98,0,1,1,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({12,22,34,86,55,44,32,76,99,77,77}) == 231)){ tests_passed++; } total_tests++;

    if((solutions({3,4,4,6,9,108,8,11,33,8}) == 45)){ tests_passed++; } total_tests++;

    if((solutions({75,1,2,11,5,6,7,9,2,4,1}) == 88)){ tests_passed++; } total_tests++;

    if((solutions({0,1,1,1,1,1,1,1,97,1,1,1}) == 101)){ tests_passed++; } total_tests++;

    if((solutions({86,2,3,4,5,6,7,9,10}) == 15)){ tests_passed++; } total_tests++;

    if((solutions({2,1,3,1,1,5,5,5}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,1,2,5,5,6,5}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({65,1,4,1,4,0,1,4,22,1,4,1}) == 66)){ tests_passed++; } total_tests++;

    if((solutions({3,4,6,8,9,31}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({2,2,1,1,5,5,5,2}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({11,22,32,44,6,64,55,66,88,99,64,22,22}) == 66)){ tests_passed++; } total_tests++;

    if((solutions({2,2,1,31,2,6,5,5,5}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,2,1,1,1,32,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,4,6,7,8}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({1,0,1,2,54,3,4,5,6,7,9,10}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({74,1,2,11,5,6,7,9,2,4,1}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({2,10,3,4,5,6,7,8,9,31,10,2}) == 24)){ tests_passed++; } total_tests++;

    if((solutions({12,11,22,33,6,65,55,98,66,88,22,22,65,88}) == 120)){ tests_passed++; } total_tests++;

    if((solutions({12,22,32,44,55,66,77,88,99}) == 231)){ tests_passed++; } total_tests++;

    if((solutions({10,22,34,33,44,54,66,99,22,22,66,33,22,22,22,33}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,1,2,5,5,5,2}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({3,3,9,4,4,6,9,12,8,11,10,10,8,10,12}) == 21)){ tests_passed++; } total_tests++;

    if((solutions({1,0,1,1,1,1,1,1,5,1,8,1,1,1}) == 10)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,6,7,97,9,2}) == 16)){ tests_passed++; } total_tests++;

    if((solutions({45,22,33,44,65,55,66,88,99,22,65}) == 307)){ tests_passed++; } total_tests++;

    if((solutions({11,33,44,55,66,88,99,0,22,33,88}) == 110)){ tests_passed++; } total_tests++;

    if((solutions({0,2,3,0,6,8,9,10}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,6,6,9,7,11,10,44}) == 23)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,1,0,1,1,1,0,0,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,1,2,5,5,6,5,2,5}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({3,3,3,4,6,9,12,8,12,10,8,9,11}) == 17)){ tests_passed++; } total_tests++;

    if((solutions({9,65,22,33,44,66,77,88}) == 86)){ tests_passed++; } total_tests++;

    if((solutions({2,5,2,2,1,1,1,5,5,6,1,1,5}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({2,2,1,1,5,5,5,2,1}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({12,22,33,44,55,44,77,88,99,77,77,44}) == 341)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,9,9,11,2}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({2,11,3,4,5,88,6,9,8,11,10,8,4,8}) == 8)){ tests_passed++; } total_tests++;

    if((solutions({2,11,3,4,9,8,11,10,3}) == 26)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,100,55,66,77,88,99}) == 275)){ tests_passed++; } total_tests++;

    if((solutions({55,0,1,2,3,4,4,5,6,7,8,9,10,4,9}) == 68)){ tests_passed++; } total_tests++;

    if((solutions({4,4,77,4,6,9,12,8,11,33,8,33,9,4,11}) == 108)){ tests_passed++; } total_tests++;

    if((solutions({2,11,3,4,5,88,6,9,77,8,55,11,10,8,9}) == 149)){ tests_passed++; } total_tests++;

    if((solutions({4,4,77,4,6,9,12,8,11,33,8,33,33,9}) == 121)){ tests_passed++; } total_tests++;

    if((solutions({2,4,1,4,5,1,5,2,2}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7,8,9,10,32,9}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,5,86,97}) == 84)){ tests_passed++; } total_tests++;

    if((solutions({2,11,0,10,4,4,6,9,8,11,10,8}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({12,11,22,65,6,65,55,66,88,99,22,22,65,88}) == 120)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,54,66,88,99,22,22,4,22,22}) == 44)){ tests_passed++; } total_tests++;

    if((solutions({33,1,1,1,1,1,1,1,1,1,1}) == 38)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,2,1,1,1,1,1,97,1,97,1,1}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,10,4,42,7,11,10,32,44}) == 10)){ tests_passed++; } total_tests++;

    if((solutions({22,33,44,66,88,99}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,6,9,12,8,11,34,8}) == 14)){ tests_passed++; } total_tests++;

    if((solutions({2,4,3,4,4,6,9,8,11,10,2,11}) == 23)){ tests_passed++; } total_tests++;

    if((solutions({1,55,2,2,1,1,1,119,5,33,1,1}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,1,1,5,45,2}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({65,67,11,23,98,33,44,55,66,77,88,77,99}) == 175)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,65,55,66,3,88,99,22,22}) == 109)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,5,87,97}) == 171)){ tests_passed++; } total_tests++;

    if((solutions({2,11,0,4,10,4,4,6,9,77,11,10,6,10}) == 20)){ tests_passed++; } total_tests++;

    if((solutions({45,21,33,65,55,64,88,99,22,65}) == 133)){ tests_passed++; } total_tests++;

    if((solutions({2,2,31,2,5,5,5,5}) == 41)){ tests_passed++; } total_tests++;

    if((solutions({75,1,2,3,4,5,22,6,7,9,2}) == 82)){ tests_passed++; } total_tests++;

    if((solutions({4,1,55,2,2,1,0,1,1,5,5,33,1}) == 62)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,1,97,1,1,1,1,1,1}) == 104)){ tests_passed++; } total_tests++;

    if((solutions({65,67,11,23,98,33,44,55,66,77,88,77,99,67}) == 175)){ tests_passed++; } total_tests++;

    if((solutions({4,3,4,4,6,9,12,6,8,11,10,8,9,6}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({2,11,0,4,10,4,4,6,9,11,10,8}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({12,11,22,33,6,65,55,98,66,89,88,22,23,65,88,88}) == 78)){ tests_passed++; } total_tests++;

    if((solutions({99,4,1,4,1,4,1,4}) == 102)){ tests_passed++; } total_tests++;

    if((solutions({4,2,4,4,6,9,12,8,11,12,10,8}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({11,12,32,56,44,6,64,55,66,88,99,64,22,22}) == 110)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,22,1,5,5}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,2,1,1,22,1,1,1,1,22}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({1,11,1,1,4,1,4,1,1,1,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,119,12,33,9}) == 155)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,5,1,1,1,5,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({3,4,4,6,9,8,11,10,8,9}) == 23)){ tests_passed++; } total_tests++;

    if((solutions({1,0,1,1,1,1,1,1,5,1,8,1,1,1,1}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,97,1,1,1}) == 101)){ tests_passed++; } total_tests++;

    if((solutions({86,2,3,65,5,6,42,53,77,2,9,10}) == 94)){ tests_passed++; } total_tests++;

    if((solutions({11,12,32,56,44,6,64,55,66,88,99,22,22,22}) == 110)){ tests_passed++; } total_tests++;

    if((solutions({89,2,4,2,4,5,1,6,2}) == 90)){ tests_passed++; } total_tests++;

    if((solutions({2,1,3,1,119,5,5,5}) == 127)){ tests_passed++; } total_tests++;

    if((solutions({2,5,2,2,33,1,1,5,5,5,42,1,1,5,5,1,2,1}) == 45)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,100,55,66,77,88,99,66}) == 275)){ tests_passed++; } total_tests++;

    if((solutions({2,5,2,2,33,1,5,5,5,42,1,1,5,5}) == 49)){ tests_passed++; } total_tests++;

    if((solutions({2,3,5,6,9,8,11,10}) == 25)){ tests_passed++; } total_tests++;

    if((solutions({1,2,3,4,5,6,7,2}) == 16)){ tests_passed++; } total_tests++;

    if((solutions({2,2,1,1,1,5,5,98,2}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,2,1,1,8,1,1,22,1,1,1,2}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({2,5,2,2,33,1,1,5,5,5,42,1,5,5}) == 44)){ tests_passed++; } total_tests++;

    if((solutions({23,2,3,65,5,6,42,53,77,2,9,10}) == 117)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,75,6,7,8}) == 82)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,5,88,6,9,8,11,10,86}) == 20)){ tests_passed++; } total_tests++;

    if((solutions({11,22,9,33,100,55,66,77,88,99,66}) == 20)){ tests_passed++; } total_tests++;

    if((solutions({2,4,3,4,7,1,5,2}) == 15)){ tests_passed++; } total_tests++;

    if((solutions({2,4,2,4,5,1,4,2,4}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,2,3,4,5,6,7,9,2}) == 15)){ tests_passed++; } total_tests++;

    if((solutions({2,2,1,1,1,5,56,2}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({2,2,1,30,2,5,5,5}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({2,2,1,1,1,5,5,98,2,2}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,1,5,5,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,2,1,1,56,1,1,22,1,1,1,1,2}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({2,1,3,1,119,5,5,23,5}) == 132)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,1,97,1,1,0,1,1,1,1}) == 104)){ tests_passed++; } total_tests++;

    if((solutions({2,1,1,1,2,1,1,1,97,1,1,97}) == 100)){ tests_passed++; } total_tests++;

    if((solutions({65,11,22,33,44,65,55,66,77,88,77,99}) == 274)){ tests_passed++; } total_tests++;

    if((solutions({33,1,1,1,1,1,1,1,1,1,99,1}) == 136)){ tests_passed++; } total_tests++;

    if((solutions({0,2,3,77,67,6,8,9,10}) == 70)){ tests_passed++; } total_tests++;

    if((solutions({11,12,32,56,6,64,55,66,88,99,64,22,22}) == 66)){ tests_passed++; } total_tests++;

    if((solutions({108,0,1,2,3,3,4,5,6,7,9,2}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({2,2,34,1,1,1,5,5,5,5,5,5}) == 16)){ tests_passed++; } total_tests++;

    if((solutions({3,3,9,4,4,6,8,9,12,8,11,10,10,8,10,12}) == 23)){ tests_passed++; } total_tests++;

    if((solutions({2,11,0,4,10,56,4,6,8,11,10,8}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,64,5,76,86,97,108,119,86}) == 89)){ tests_passed++; } total_tests++;

    if((solutions({2,1,1,1,1,4,6,5,5,5,5,1}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,2,1,1,1,1,1,86,1,0,1}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({2,2,31,2,4,5,5,5,5}) == 41)){ tests_passed++; } total_tests++;

    if((solutions({2,11,0,4,4,6,9,8,11,10,8,8,0,2}) == 20)){ tests_passed++; } total_tests++;

    if((solutions({2,75,56,4,11,6,44,11,10,44}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({2,5,2,2,1,1,5,21,5,5,1}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({3,3,9,4,4,6,8,9,12,8,11,10,10,8,10,12,3}) == 26)){ tests_passed++; } total_tests++;

    if((solutions({2,1,3,1,1,5,5,5,1}) == 10)){ tests_passed++; } total_tests++;

    if((solutions({11,22,44,54,66,88,99,22,22,33,22,22}) == 110)){ tests_passed++; } total_tests++;

    if((solutions({4,4,77,4,6,9,12,8,11,33,8,33,9,11}) == 97)){ tests_passed++; } total_tests++;

    if((solutions({55,3,4,4,6,9,12,8,11,10,10,8,10,12,3}) == 69)){ tests_passed++; } total_tests++;

    if((solutions({22,33,100,65,55,66,56,99,21,0,22,100,33,88}) == 109)){ tests_passed++; } total_tests++;

    if((solutions({2,1,3,1,77,3,5,5}) == 85)){ tests_passed++; } total_tests++;

    if((solutions({1,0,1,108,1,1,1,1,5,1,8,1,1,1,1,1}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({11,12,22,33,44,55,66,77,88,99,54,55}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({2,10,3,5,5,6,7,8,9,31,10}) == 24)){ tests_passed++; } total_tests++;

    if((solutions({33,1,1,1,1,0,1,1,1,1,99,1}) == 136)){ tests_passed++; } total_tests++;

    if((solutions({65,11,22,33,44,65,55,66,76,88,78,99}) == 120)){ tests_passed++; } total_tests++;

    if((solutions({11,33,44,55,66,88,99,0,22,33,88,33}) == 110)){ tests_passed++; } total_tests++;

    if((solutions({12,22,34,86,55,44,32,76,99,77,77,55}) == 231)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,6,55,66,99,22,22,22,6}) == 44)){ tests_passed++; } total_tests++;

    if((solutions({2,11,3,5,88,9,8,1,10}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({33,1,2,3,4,5,6,7,9,2}) == 42)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,0,4,5,6,7,8,0}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7,8,9,1,10}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,86,97,108}) == 181)){ tests_passed++; } total_tests++;

    if((solutions({3,3,3,4,4,6,9,12,8,12,10,8,9,11,9,8}) == 33)){ tests_passed++; } total_tests++;

    if((solutions({11,11,22,33,44,55,66,77,88,99}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,1,1,1,22,1,1,1,1,2,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({75,1,2,4,6,7,9,2,4}) == 84)){ tests_passed++; } total_tests++;

    if((solutions({2,65,4,6,44,11,10,44}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,7,11,4,4,6,9,7,8,11,10,8}) == 20)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,44,1,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,2,1,1,1,1,55,1,97,1,1,1}) == 157)){ tests_passed++; } total_tests++;

    if((solutions({3,4,6,8,11,10}) == 14)){ tests_passed++; } total_tests++;

    if((solutions({3,4,6,9,108,5,8,11,33,8}) == 36)){ tests_passed++; } total_tests++;

    if((solutions({65,89,11,65,22,33,44,55,66,77,77,99,10,77,88}) == 153)){ tests_passed++; } total_tests++;

    if((solutions({99,1,4,1,1,5,4,99}) == 100)){ tests_passed++; } total_tests++;

    if((solutions({2,2,44,1,1,5,86,5,5}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({11,12,22,33,44,55,66,77,88,66,99,54,55}) == 165)){ tests_passed++; } total_tests++;

    if((solutions({11,53,22,33,44,65,55,66,88,56,99,0,22,33,88}) == 165)){ tests_passed++; } total_tests++;

    if((solutions({55,3,4,4,6,9,12,8,11,10,10,8,10,12,3,11}) == 69)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,4,12,8,33,33,8}) == 36)){ tests_passed++; } total_tests++;

    if((solutions({2,5,2,2,1,1,1,5,5,5,1,1,5,5,5}) == 18)){ tests_passed++; } total_tests++;

    if((solutions({2,4,2,4,5,1,5,30}) == 10)){ tests_passed++; } total_tests++;

    if((solutions({2,2,1,1,1,5,5,98,2,98}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({2,4,77,76,5,5,1,4,2,4}) == 83)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,2,1,1,1,32,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({22,33,44,88,99,33}) == 99)){ tests_passed++; } total_tests++;

    if((solutions({22,33,88,5,33,33}) == 33)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,54,66,88,99,22,22,66,33,22,22,22,33,99}) == 143)){ tests_passed++; } total_tests++;

    if((solutions({3,3,3,4,4,6,9,12,8,11,10,8,9,12}) == 24)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,5,6,9,8,11}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,4,3,2,4,5,1,4,2,4}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({1,55,2,86,1,1,1,5,5,1,1}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,1,5,5,5,1,1,5,1}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,0,4,5,5,7,8,0}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({3,3,9,4,4,6,7,9,12,8,11,10,10,10,8,10,12,8}) == 30)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,65,55,66,88,99,0,22,31,33,88}) == 241)){ tests_passed++; } total_tests++;

    if((solutions({2,1,1,1,2,1,1,1,97,87,1,1,97}) == 197)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,1,1,2,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({86,2,21,4,65,6,7,8,9,10,7,10}) == 109)){ tests_passed++; } total_tests++;

    if((solutions({65,22,33,55,66,77,88,65}) == 98)){ tests_passed++; } total_tests++;

    if((solutions({2,2,1,1,1,1,5,5,98,2}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,2,2,1,1,1,97,1,1,1}) == 101)){ tests_passed++; } total_tests++;

    if((solutions({65,10,22,4,33,44,55,76,66,77,88,22,33}) == 186)){ tests_passed++; } total_tests++;

    if((solutions({55,3,4,4,6,9,12,8,11,10,8,10,12,3,55}) == 121)){ tests_passed++; } total_tests++;

    if((solutions({1,0,0,108,1,1,1,1,5,1,8,1,1,1,1,1}) == 10)){ tests_passed++; } total_tests++;

    if((solutions({11,12,22,33,44,55,66,77,89,99,55,22}) == 155)){ tests_passed++; } total_tests++;

    if((solutions({2,11,0,4,10,4,6,9,8,11,10,8,8}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,1,44,65,55,66,88,56,99,0,22,33,88}) == 198)){ tests_passed++; } total_tests++;

    if((solutions({2,2,1,2,1,5,5,5,5}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,8}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({0,1,3,4,5,6,7,8,10,1}) == 15)){ tests_passed++; } total_tests++;

    if((solutions({0,1,1,4,1,4,1,1,1,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({1,4,1,4,2,1,4,1,4,4,4,1}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,5,87,97,87,53}) == 258)){ tests_passed++; } total_tests++;

    if((solutions({99,1,4,1,4,1,4,10,1,4}) == 100)){ tests_passed++; } total_tests++;

    if((solutions({3,3,3,5,4,6,9,12,8,12,10,8,9,11}) == 24)){ tests_passed++; } total_tests++;

    if((solutions({1,3,4,2,4,5,1,5,4}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({2,64,5,2,2,1,1,1,5,21,5,5,1}) == 17)){ tests_passed++; } total_tests++;

    if((solutions({12,33,1,2,4,3,5,6,7,9,2}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({2,1,1,5,5,5}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,44,6,65,55,66,88,99,22}) == 99)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,31,76,86,97,108,119}) == 300)){ tests_passed++; } total_tests++;

    if((solutions({75,1,2,4,5,6,7,9,2,4,1,2,7}) == 95)){ tests_passed++; } total_tests++;

    if((solutions({1,1,3,1,2,1,1,1,1,1,97,1,1,1}) == 104)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({3,1,1,1,5,5,5,1}) == 14)){ tests_passed++; } total_tests++;

    if((solutions({11,22,33,100,55,66,77,88}) == 176)){ tests_passed++; } total_tests++;

    if((solutions({2,10,3,5,5,6,7,8,9,31,10,31}) == 24)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,6,8,9,31,9}) == 31)){ tests_passed++; } total_tests++;

    if((solutions({2,2,1,1,1,5,5,5,5,5,5,5}) == 17)){ tests_passed++; } total_tests++;

    if((solutions({0,74,53,2,3,5,6,8,9,10}) == 65)){ tests_passed++; } total_tests++;

    if((solutions({2,2,44,1,1,5,5}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({2,1,4,1,4,5,1,108}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,6,9,75,12,8,11,34,8,3}) == 81)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,1,97,108,1,1,0,1,1,1}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({3,5,4,6,9,119,8,12,10,8,11}) == 23)){ tests_passed++; } total_tests++;

    if((solutions({65,11,22,33,65,44,65,55,66,77,88,77,99,77,66}) == 294)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,5,6,8,9,31,98}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({3,4,4,6,1,9,8,11,10,8,9}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({33,31,42,53,5,86,97}) == 135)){ tests_passed++; } total_tests++;

    if((solutions({2,1,1,1,4,6,5,5,5,5,1}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({11,22,32,44,65,55,66,3,88,99,22,22}) == 76)){ tests_passed++; } total_tests++;

    if((solutions({12,33,44,55,66,77,88,99}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7,8,9,10,32,9,9}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,5,6,8,9,31,10,31}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({86,2,3,119,4,4,5,6,7,8,9,10}) == 24)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,7,6,6,9,11,10,44,44}) == 21)){ tests_passed++; } total_tests++;

    if((solutions({33,1,1,1,1,0,1,1,1,1,99,1,1}) == 137)){ tests_passed++; } total_tests++;

    if((solutions({2,1,4,4,5,1,108,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({86,33,1,2,4,3,5,6,7,9,2}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({3,3,4,4,6,9,12,8,11,33,8,12,33}) == 47)){ tests_passed++; } total_tests++;

    if((solutions({22,33,44,88,99,32}) == 99)){ tests_passed++; } total_tests++;

    if((solutions({3,3,3,4,6,9,12,8,12,10,8,9,9,11}) == 15)){ tests_passed++; } total_tests++;

    if((solutions({1}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({2,4,6}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,4,6,1,3,5}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({3,5,7,9,11}) == 21)){ tests_passed++; } total_tests++;

    if((solutions({1,-2,5,0,-3}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({2,5,4,6,8}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,1,1,1,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({11,89,22,33,44,55,66,77,88,99}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({11,89,22,33,44,55,66,88,99}) == 110)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,75,86,97,119,75}) == 203)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,5,6,7,8,9,5}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,64,76,75,86,97,108,119}) == 84)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,1,1,1,1,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,6,9,8,11,10,11}) == 31)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,75,86,97,120,75}) == 84)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,1,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,1,1,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({2,3,5,6,6,44,8,8,5}) == 10)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,1,1,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,75,97,120,75}) == 256)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,2,1,1,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,2,1,0,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,75,86,97,120,75,75}) == 159)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,2,1,0,1,1,1,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,1,1,1,1,1,9,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7,8,1,2}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({31,42,3,64,75,86,97,108,119}) == 325)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,2,2,1,1,1,2}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,1,99,1,1,1,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({0,1,44,3,4,5,6,7,43,8}) == 43)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,86,97,118,75}) == 256)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,75,86,97,52,119,75}) == 159)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,87,97,118,75}) == 256)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,75,86,97,52,119,75,75}) == 159)){ tests_passed++; } total_tests++;

    if((solutions({0,1,44,3,4,5,6,7,43}) == 43)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,64,76,75,86,97,7,108,119}) == 210)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,86,97,118}) == 181)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,1,99,1,1,1,0}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({100,1,2,1,1,1,99,1,1,1,0}) == 101)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,87,97,118}) == 181)){ tests_passed++; } total_tests++;

    if((solutions({2,3,5,6,6,44,8,5}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,5,6,9,8,11,10,11}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({31,120,42,53,75,86,97,52,119,75,75}) == 397)){ tests_passed++; } total_tests++;

    if((solutions({100,52,1,2,1,1,1,99,1,1,1,0}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({100,52,1,2,1,1,1,99,1,1,1,0,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({3,3,5,6,6,44,8,8,5}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({31,120,42,53,75,86,97,52,119,75,75,75}) == 397)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7,42,1,2}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({31,120,42,55,53,75,86,97,52,119,75,75}) == 159)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,75,86,97,120,76,75,120}) == 159)){ tests_passed++; } total_tests++;

    if((solutions({31,42,42,53,75,86,97,120,75}) == 278)){ tests_passed++; } total_tests++;

    if((solutions({31,42,3,64,87,75,86,97,108,119}) == 121)){ tests_passed++; } total_tests++;

    if((solutions({100,1,2,1,1,1,99,1,1,1,0,88}) == 101)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,1,99,1,66,1,0}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({31,120,42,53,75,86,97,52,119,75,75,120,53}) == 450)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,2,1,0,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,75,86,96,120,76,75,120,75}) == 234)){ tests_passed++; } total_tests++;

    if((solutions({100,1,2,2,1,1,1,99,1,1,1,0,88}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({100,52,1,2,1,1,1,99,100,1,1,0,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({0,1,3,4,5,6,7,43,8}) == 15)){ tests_passed++; } total_tests++;

    if((solutions({1,31,2,1,1,1,99,1,1,1,1,1}) == 103)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,2,1,1,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7,8,1,2,2}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({31,4,42,42,53,75,97,120,75}) == 256)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,2,1,0,1,1,1,1,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({100,2,3,5,6,6,44,8,8,5}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,89,1,99,1,1,1,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({31,75,42,53,87,97,118,75}) == 118)){ tests_passed++; } total_tests++;

    if((solutions({31,42,75,86,32,97,120,76,75,120}) == 181)){ tests_passed++; } total_tests++;

    if((solutions({4,2,3,4,6,7,8,9,5}) == 8)){ tests_passed++; } total_tests++;

    if((solutions({31,42,3,64,75,86,97,108,119,97}) == 325)){ tests_passed++; } total_tests++;

    if((solutions({31,43,53,75,97,120,75}) == 256)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,75,97,120,75,75}) == 256)){ tests_passed++; } total_tests++;

    if((solutions({3,3,5,6,6,44,8,5}) == 8)){ tests_passed++; } total_tests++;

    if((solutions({31,42,87,53,75,86,97,120,75,75}) == 365)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,1,88,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,1,1,1,1,1,44,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,64,75,86,97,108,119,53}) == 375)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,2,3,4,5,6,7,8,1,2}) == 16)){ tests_passed++; } total_tests++;

    if((solutions({31,96,3,120,42,53,75,86,97,52,119,75,75,75}) == 400)){ tests_passed++; } total_tests++;

    if((solutions({0,0,0,0,0,75}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({2,4,3,4,5,7,8,9,10}) == 8)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,5,6,7,7,9,5}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,75,86,97,75}) == 159)){ tests_passed++; } total_tests++;

    if((solutions({31,42,42,53,75,86,97,120,75,42}) == 278)){ tests_passed++; } total_tests++;

    if((solutions({0,1,118,2,3,4,5,6,7,8}) == 15)){ tests_passed++; } total_tests++;

    if((solutions({2,3,5,75,32,9,8,11,10,11}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7,8,9,10,6}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,119,1,1,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,119,88,1,1}) == 122)){ tests_passed++; } total_tests++;

    if((solutions({31,120,42,55,53,75,86,108,52,119,75,75}) == 159)){ tests_passed++; } total_tests++;

    if((solutions({31,120,42,55,53,75,86,52,119,75,75}) == 278)){ tests_passed++; } total_tests++;

    if((solutions({100,2,3,5,6,6,53,44,8,8,53,5,44,44}) == 109)){ tests_passed++; } total_tests++;

    if((solutions({89,1,2,3,4,5,6,7}) == 89)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,2,1,0,1,1,1,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,97,120,75,75}) == 159)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,0,1,1,1,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,-1,1,1,1,1,1,1}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({31,42,42,53,75,86,97,97,119,75}) == 322)){ tests_passed++; } total_tests++;

    if((solutions({0,0,0,0,-1,75}) == -1)){ tests_passed++; } total_tests++;

    if((solutions({1,2,0,1,89,1,99,1,1,1,1,1,1}) == 192)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,119,88,1,1,119}) == 241)){ tests_passed++; } total_tests++;

    if((solutions({89,3,64,75,86,97,108,119,97}) == 186)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,76,1,1,1,5,5,5,5}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({1,1,10,1,1,1,1,1,0}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({31,42,3,64,75,86,97,119,86}) == 206)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,1,1,1,0,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,10,4,5,6,7,8,1,2,2}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,44,2,1,0,1,1,1,1,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,1,2,1,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({31,42,118,53,75,86,96,120,76,75,22,120,75,120}) == 181)){ tests_passed++; } total_tests++;

    if((solutions({0,1,118,2,3,4,5,10,8}) == 8)){ tests_passed++; } total_tests++;

    if((solutions({11,89,22,33,44,55,66,10,77,88,99,66}) == 187)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,-1,1,6,1,1,1,1}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({0,1,118,2,3,4,5,10,8,1}) == 8)){ tests_passed++; } total_tests++;

    if((solutions({30,31,54,42,53,86,97,118,75,97}) == 225)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,5,6,9,8,11,10,8}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,75,86,43,97,120,75}) == 256)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,119,2,88,1,1}) == 122)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,2,1,1,1,1,1,9,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({31,42,42,53,75,86,98,120,75,42}) == 181)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,7,7,8,9,10}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,89,1,99,1,1,1,1,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({89,1,2,3,4,6,7}) == 96)){ tests_passed++; } total_tests++;

    if((solutions({31,120,42,53,75,86,97,52,89,119,75,75}) == 367)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7,8,1,2,0}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({11,32,89,22,33,44,55,66,77,77,88,99,11}) == 276)){ tests_passed++; } total_tests++;

    if((solutions({86,42,3,64,75,86,97,108,66,97}) == 175)){ tests_passed++; } total_tests++;

    if((solutions({0,1,3,4,5,7,7,43,8}) == 15)){ tests_passed++; } total_tests++;

    if((solutions({31,4,42,42,53,75,97,120,75,75}) == 256)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,0,1,0}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({1,1,96,55,1,1,1,1,2,1,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({1,1,10,1,1,1,1,1,0,1}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,0,1,1,1,0,1,1}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({31,4,42,42,22,53,75,97,120,75,22,22}) == 106)){ tests_passed++; } total_tests++;

    if((solutions({31,42,3,64,87,75,86,97,108,119,31}) == 152)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,5,6,7}) == 12)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,2,1,0,22,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,10,42,1,2}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,0,1,89,1,1,0,1,1}) == 92)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,120,119,88,1,1,119}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({1,1,119,88,1,1}) == 121)){ tests_passed++; } total_tests++;

    if((solutions({31,43,7,53,75,86,97,120,75,75}) == 285)){ tests_passed++; } total_tests++;

    if((solutions({100,52,1,2,1,1,1,99,1,1,1,0,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({31,75,10,53,87,97,118,75}) == 118)){ tests_passed++; } total_tests++;

    if((solutions({89,1,2,4,5,6,7}) == 101)){ tests_passed++; } total_tests++;

    if((solutions({31,42,3,64,87,75,97,108,119}) == 337)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,44,2,1,0,1,1,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,120,119,1,1,119}) == 122)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,75,86,97,120,76,75,119}) == 159)){ tests_passed++; } total_tests++;

    if((solutions({3,3,5,6,7,44,8,5}) == 15)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,0,1,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({86,2,1,1,1,1,1,1,66,1,44,1,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({0,0,0,0,0,32,0}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({31,120,2,42,55,54,53,75,86,52,119,75,75}) == 333)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,75,86,97,76,75,120}) == 84)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,2,2,75,1,1,2}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({2,31,42,53,75,86,97}) == 172)){ tests_passed++; } total_tests++;

    if((solutions({31,4,42,42,22,53,75,97,120,75,22,22,31}) == 137)){ tests_passed++; } total_tests++;

    if((solutions({30,2,4,6,7}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({65,89,3,64,75,86,97,108,119,98,97,75}) == 456)){ tests_passed++; } total_tests++;

    if((solutions({2,44,4,3,4,5,7,8,9,10}) == 16)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,120,119,1,1,119,1}) == 122)){ tests_passed++; } total_tests++;

    if((solutions({100,1,2,2,1,1,1,99,1,1,1,0}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({76,31,42,53,75,86,97,120,76,75,120}) == 172)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,86,97,87,118}) == 181)){ tests_passed++; } total_tests++;

    if((solutions({89,2,3,4,5,6,7}) == 104)){ tests_passed++; } total_tests++;

    if((solutions({86,2,1,1,1,1,1,1,4,1,44,1,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({1,43,1,44,2,1,0,1,1,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({31,64,42,43,53,75,97,120,75}) == 256)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,1,0,5,5}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({3,3,5,6,6,44,8,8,5,3}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({1,99,31,2,1,1,1,99,1,1,108,1,1}) == 36)){ tests_passed++; } total_tests++;

    if((solutions({89,3,33,64,75,86,97,108,119,97,75}) == 488)){ tests_passed++; } total_tests++;

    if((solutions({31,120,42,55,53,75,86,108,52,119,75,108,42,75}) == 159)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,119,0,1,1,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({30,42,3,64,87,75,86,97,108,119}) == 90)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,10,4,5,7,8,1,2,2}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,64,76,75,86,97,7,108,119,75}) == 210)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,75,86,97,76,75,120,31}) == 84)){ tests_passed++; } total_tests++;

    if((solutions({1,31,2,1,1,1,99,1,1,1,1,119}) == 103)){ tests_passed++; } total_tests++;

    if((solutions({100,2,3,5,6,6,53,44,8,53,5,44,44}) == 61)){ tests_passed++; } total_tests++;

    if((solutions({0,7,1,2,4,5,6,7,8,1,2,0}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,1,1,77,5,5,5}) == 83)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,53,87,97,118,53}) == 171)){ tests_passed++; } total_tests++;

    if((solutions({89,1,1,3,4,5,6,7}) == 90)){ tests_passed++; } total_tests++;

    if((solutions({76,89,31,42,53,30,75,86,97,120,76,75,120,97}) == 256)){ tests_passed++; } total_tests++;

    if((solutions({31,53,64,76,75,86,97,7,107,119,75,75}) == 385)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,120,119,1,1,119}) == 122)){ tests_passed++; } total_tests++;

    if((solutions({0,1,118,2,3,4,5,6,7,8,7}) == 22)){ tests_passed++; } total_tests++;

    if((solutions({31,42,55,75,86,97,77,120,42}) == 163)){ tests_passed++; } total_tests++;

    if((solutions({86,42,118,53,75,86,96,120,76,75,22,120,75,120}) == 150)){ tests_passed++; } total_tests++;

    if((solutions({31,76,42,55,75,86,97,77,120,42,86}) == 203)){ tests_passed++; } total_tests++;

    if((solutions({100,1,2,2,1,1,1,99,1,1,1,0,88,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({1,1,119,88,1,0,1}) == 122)){ tests_passed++; } total_tests++;

    if((solutions({1,2,0,1,89,1,99,1,2,1,1,1,1}) == 191)){ tests_passed++; } total_tests++;

    if((solutions({31,43,7,53,75,75,86,6,120,75,75}) == 188)){ tests_passed++; } total_tests++;

    if((solutions({31,75,10,53,87,97,118,75,31}) == 149)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,31,7,8,1,2,2}) == 8)){ tests_passed++; } total_tests++;

    if((solutions({2,3,65,4,6,7,7,9,5}) == 77)){ tests_passed++; } total_tests++;

    if((solutions({77,52,1,2,1,1,1,99,33,1,1,1,0,1}) == 114)){ tests_passed++; } total_tests++;

    if((solutions({11,1,2,1,1,1,99,1,1,1,0}) == 112)){ tests_passed++; } total_tests++;

    if((solutions({42,53,75,86,97,76,75,120}) == 247)){ tests_passed++; } total_tests++;

    if((solutions({3,3,6,44,8,22,5,3}) == 8)){ tests_passed++; } total_tests++;

    if((solutions({89,1,1,3,4,5,6,7,1,7}) == 91)){ tests_passed++; } total_tests++;

    if((solutions({42,96,53,97,120,75,75,120}) == 128)){ tests_passed++; } total_tests++;

    if((solutions({31,120,42,53,75,86,97,76,75,75}) == 278)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,1,1}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,-1,1,6,1,1,1,1,2}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({100,1,2,2,1,1,1,99,1,1,1,0,88,1,2}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({31,66,120,42,55,53,75,86,108,52,119,75,108,42,75}) == 355)){ tests_passed++; } total_tests++;

    if((solutions({1,119,88,1,1}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,1,1,1,1,1,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,1,1,5,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,119,1,1,1,1,1,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,119,88,1,1,119,1}) == 241)){ tests_passed++; } total_tests++;

    if((solutions({31,42,3,87,31,86,97,108,119}) == 281)){ tests_passed++; } total_tests++;

    if((solutions({1,1,96,55,1,1,1,22,2,1,1,1,1,1,55}) == 60)){ tests_passed++; } total_tests++;

    if((solutions({31,42,75,86,32,97,120,76,99,120}) == 205)){ tests_passed++; } total_tests++;

    if((solutions({31,42,3,64,87,75,86,97,119}) == 240)){ tests_passed++; } total_tests++;

    if((solutions({1,2,0,1,89,1,99,1,2,1,1,1,1,98}) == 191)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,119,2,1,119}) == 121)){ tests_passed++; } total_tests++;

    if((solutions({119,31,42,53,64,75,86,97,108,1,119}) == 238)){ tests_passed++; } total_tests++;

    if((solutions({11,32,89,22,33,44,55,66,77,77,88,11}) == 265)){ tests_passed++; } total_tests++;

    if((solutions({97,52,1,2,1,0,1,0}) == 100)){ tests_passed++; } total_tests++;

    if((solutions({2,4,3,4,5,7,8,9}) == 8)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,120,119,1,1,119,1}) == 123)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,0,1,1,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,1,5,5,5}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({1,2,9,2,1,0,1,1,1,1,1,1}) == 14)){ tests_passed++; } total_tests++;

    if((solutions({0,0,0,0,0,32,-1,0}) == -1)){ tests_passed++; } total_tests++;

    if((solutions({2,42,2,1,1,0,5,5}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,1,-1,1,1,1,1,1,1,1}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({1,31,2,1,1,1,99,1,1,1,1,53,1}) == 104)){ tests_passed++; } total_tests++;

    if((solutions({2,31,42,22,53,75,86,97}) == 53)){ tests_passed++; } total_tests++;

    if((solutions({11,31,2,1,1,1,99,1,1,1,1,53,1}) == 114)){ tests_passed++; } total_tests++;

    if((solutions({42,53,75,86,119,97,76,75,120,120}) == 194)){ tests_passed++; } total_tests++;

    if((solutions({0,4,1,118,2,3,4,5,10,8}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({89,1,2,3,4,6,7,4}) == 96)){ tests_passed++; } total_tests++;

    if((solutions({2,42,42,1,1,0,5,5}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({31,42,5,97,120,75,75,97}) == 111)){ tests_passed++; } total_tests++;

    if((solutions({31,41,3,87,31,86,97,108,119}) == 281)){ tests_passed++; } total_tests++;

    if((solutions({100,1,2,1,1,1,1,0}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({100,1,2,1,1,1,99,1,1,1,0,88,1}) == 102)){ tests_passed++; } total_tests++;

    if((solutions({0,1,118,2,3,4,5,6,7,8,8,118,1}) == 16)){ tests_passed++; } total_tests++;

    if((solutions({31,42,42,53,75,86,97,97,119,75,97}) == 419)){ tests_passed++; } total_tests++;

    if((solutions({22,42,53,75,86,97,120,75}) == 53)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,120,64,88,1,1,119}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({1,2,42,1,89,66,99,1,1,1,1,1,1}) == 192)){ tests_passed++; } total_tests++;

    if((solutions({2,1,1,88,1,1,1}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({100,2,3,5,6,6,44,8,75,5}) == 78)){ tests_passed++; } total_tests++;

    if((solutions({100,1,2,1,1,1,99,1,1,1,0,88,99}) == 200)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,7,8,9,9,6}) == 9)){ tests_passed++; } total_tests++;

    if((solutions({89,1,2,3,4,5,7}) == 96)){ tests_passed++; } total_tests++;

    if((solutions({1,1,96,55,1,1,1,22,2,1,1,1,1,1,55,2}) == 60)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,86,1,1,0,77,1,1}) == 80)){ tests_passed++; } total_tests++;

    if((solutions({42,53,75,86,97,120,75,75}) == 247)){ tests_passed++; } total_tests++;

    if((solutions({1,1,96,55,1,0,1,22,2,1,1,1,1,1,55,2}) == 60)){ tests_passed++; } total_tests++;

    if((solutions({4,41,2,3,4,6,7,8,9,5}) == 16)){ tests_passed++; } total_tests++;

    if((solutions({30,31,54,42,53,86,97,118,75,97,118}) == 225)){ tests_passed++; } total_tests++;

    if((solutions({0,1,44,3,4,5,6,7,66,3}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,2,2,75,0,1,2}) == 78)){ tests_passed++; } total_tests++;

    if((solutions({42,3,64,75,86,97,119,86}) == 119)){ tests_passed++; } total_tests++;

    if((solutions({76,31,42,53,75,53,97,120,76,75,120}) == 172)){ tests_passed++; } total_tests++;

    if((solutions({31,4,42,42,53,75,5,97,120,75,75}) == 164)){ tests_passed++; } total_tests++;

    if((solutions({31,75,10,52,87,97,118,3,75}) == 193)){ tests_passed++; } total_tests++;

    if((solutions({3,3,5,6,6,44,8,88,5}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,44,2,1,0,1,1,1,2,1}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,3,4,5,6,1,10,42,1,2}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({30,31,54,42,53,86,97,118,97}) == 247)){ tests_passed++; } total_tests++;

    if((solutions({30,31,54,42,53,86,97,118,75,118}) == 225)){ tests_passed++; } total_tests++;

    if((solutions({31,42,32,75,86,32,97,120,76,75,120,42,76}) == 128)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,2,1,0,1,1,1,1,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({31,120,42,55,53,75,86,52,22,30,75,75}) == 159)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,-1,1,6,1,1,1}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({11,89,22,33,44,66,88,99}) == 11)){ tests_passed++; } total_tests++;

    if((solutions({31,42,87,22,53,75,86,97}) == 171)){ tests_passed++; } total_tests++;

    if((solutions({42,53,75,86,119,97,76,75,120}) == 194)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,86,97,87,118,42}) == 181)){ tests_passed++; } total_tests++;

    if((solutions({31,120,42,55,53,75,86,52,22,30,75,87,75}) == 234)){ tests_passed++; } total_tests++;

    if((solutions({31,120,42,41,53,75,86,97,52,119,75,75,75}) == 234)){ tests_passed++; } total_tests++;

    if((solutions({0,1,118,2,117,3,4,5,10,8,1}) == 118)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,2,1,1,119,1,1,1,1,1}) == 124)){ tests_passed++; } total_tests++;

    if((solutions({0,1,4,5,7,7,43,8,8}) == 50)){ tests_passed++; } total_tests++;

    if((solutions({1,1,10,1,2,1,1,1,1}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,44,2,1,0,1,1,1,2,1,0}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({11,1,2,1,1,1,99,1,1,1,0,2}) == 112)){ tests_passed++; } total_tests++;

    if((solutions({31,42,42,53,75,86,97,97,119,75,97,53}) == 419)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,75,86,97,52,119,75,75,75}) == 234)){ tests_passed++; } total_tests++;

    if((solutions({31,42,3,64,88,75,97,108,119}) == 250)){ tests_passed++; } total_tests++;

    if((solutions({0,43,0,0,0,43,0,75}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({89,1,2,4,4,6,7,1}) == 96)){ tests_passed++; } total_tests++;

    if((solutions({2,4,3,44,4,5,7,8,8}) == 10)){ tests_passed++; } total_tests++;

    if((solutions({31,4,41,42,22,53,75,97,120,75,22}) == 147)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,-1,1,6,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,0,1,0,1}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,89,1,2,98,1,1,1,1,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({1,31,2,1,1,1,99,1,1,41,1,1,53,1,2}) == 156)){ tests_passed++; } total_tests++;

    if((solutions({0,1,8,3,4,5,6,7,43}) == 43)){ tests_passed++; } total_tests++;

    if((solutions({0,7,1,2,4,5,86,7,8,1,2,0}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,2,4,5,6,7,8,1,2,0}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({30,42,5,97,120,75,75,97}) == 80)){ tests_passed++; } total_tests++;

    if((solutions({30,31,54,42,53,97,118,97}) == 53)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,1,0}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({31,120,42,55,53,75,86,52,23,30,75,75,75}) == 257)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,2,1,-1,1,6,1,1,1,1,2,2}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,75,86,97,52,119}) == 84)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,-1,1,1,1,1,1,1,1}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({65,89,3,64,75,86,97,108,119,98,97,75,3,3}) == 459)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,1,1,1,1,1,44,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({31,42,87,53,75,86,97,120,75,53}) == 365)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,120,119,119,1,1,119,1}) == 241)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,44,2,1,0,119,1,1,9,1,1}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,2,4,5,31,7,8,1,2,0}) == 31)){ tests_passed++; } total_tests++;

    if((solutions({30,65,31,54,42,53,86,97,118,75,97}) == 128)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,0,99,1,1,1,0}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({1,1,119,44,1,1}) == 121)){ tests_passed++; } total_tests++;

    if((solutions({42,96,97,120,75,75,120}) == 172)){ tests_passed++; } total_tests++;

    if((solutions({2,3,4,5,6,9,8,11,10,8,6}) == 0)){ tests_passed++; } total_tests++;

    if((solutions({1,2,42,1,100,89,66,99,1,1,1,1,1,1,1,99}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({1,1,96,55,1,0,1,22,2,1,1,1,1,1,55,2,1}) == 61)){ tests_passed++; } total_tests++;

    if((solutions({31,120,42,41,53,75,86,97,52,119,75,75,51,75}) == 210)){ tests_passed++; } total_tests++;

    if((solutions({1,30,1,2,1,0,22,76,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({0,2,3,4,6,7,8,9,10}) == 3)){ tests_passed++; } total_tests++;

    if((solutions({1,31,2,1,1,1,99,1,1,1,1,119,1}) == 104)){ tests_passed++; } total_tests++;

    if((solutions({3,2,2,2,1,1,1,5,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({76,89,31,42,53,30,75,86,97,120,76,75,120,97,120}) == 256)){ tests_passed++; } total_tests++;

    if((solutions({75,120,42,53,75,86,97,52,119,75,75,75}) == 441)){ tests_passed++; } total_tests++;

    if((solutions({100,1,2,1,1,99,1,1,1,0,88,99,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,-1,1,1,1,1,1,1,1,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({2,42,2,1,1,0,5}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({2,2,1,1,1,5,2,5}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,120,119,119,1,2,1,119,1}) == 124)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,64,76,75,86,97,7,108,118,119}) == 91)){ tests_passed++; } total_tests++;

    if((solutions({86,42,118,53,75,86,96,31,76,75,22,120,75,120}) == 150)){ tests_passed++; } total_tests++;

    if((solutions({30,2,4,6,7,4}) == 7)){ tests_passed++; } total_tests++;

    if((solutions({120,31,42,53,87,97,118,87}) == 87)){ tests_passed++; } total_tests++;

    if((solutions({31,120,42,55,53,75,86,52,52,30,75,87,75,87}) == 234)){ tests_passed++; } total_tests++;

    if((solutions({30,65,31,54,64,42,53,86,97,118,75,97,75}) == 331)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,1,2,2,75,1,1,2,76,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({31,42,66,53,10,87,97,118,53}) == 181)){ tests_passed++; } total_tests++;

    if((solutions({1,0,2,1,1,1,99,1,1,1,0}) == 102)){ tests_passed++; } total_tests++;

    if((solutions({42,3,64,87,75,86,97,108}) == 172)){ tests_passed++; } total_tests++;

    if((solutions({2,2,2,1,0,1,5,5}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,1,1,1,0,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({41,1,3,4,5,7,7,43,8}) == 56)){ tests_passed++; } total_tests++;

    if((solutions({1,31,2,5,1,1,99,1,1,1,1,119,1}) == 104)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,120,119,1,1,89,1}) == 92)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,44,120,119,1,1,119,1}) == 122)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,22,2,1,0,119,1,1,9,1,1}) == 13)){ tests_passed++; } total_tests++;

    if((solutions({31,42,5,97,120,75,75,88}) == 111)){ tests_passed++; } total_tests++;

    if((solutions({31,42,3,64,88,75,97,108,31}) == 162)){ tests_passed++; } total_tests++;

    if((solutions({89,2,3,119,1,5,6,7}) == 93)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,1,2,2,74,75,0,1,2}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({118,96,53,97,120,75,75,120}) == 128)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,-1,1,6,1,66,1,1,1}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({42,53,86,119,97,76,75,120}) == 172)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,86,1,1,0,77,1,1,86}) == 80)){ tests_passed++; } total_tests++;

    if((solutions({0,1,44,4,5,6,7,66,3}) == 15)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,43,1,1,88,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({31,120,42,41,53,75,86,97,52,119,75,75,75,53}) == 234)){ tests_passed++; } total_tests++;

    if((solutions({31,120,42,53,75,86,97,52,89,119,90,75,75}) == 367)){ tests_passed++; } total_tests++;

    if((solutions({31,4,42,42,53,75,97,120,75,75,53}) == 309)){ tests_passed++; } total_tests++;

    if((solutions({30,42,3,64,87,75,86,97,119}) == 209)){ tests_passed++; } total_tests++;

    if((solutions({1,2,42,1,6,66,99,1,1,1,1,1,1}) == 103)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,120,76,119,1,1,119,1}) == 123)){ tests_passed++; } total_tests++;

    if((solutions({0,1,2,2,3,4,5,6,7,31,8,1,2,8}) == 15)){ tests_passed++; } total_tests++;

    if((solutions({89,4,5,6,7,6}) == 101)){ tests_passed++; } total_tests++;

    if((solutions({89,3,52,64,75,86,97,108,119,97,75,89}) == 455)){ tests_passed++; } total_tests++;

    if((solutions({30,31,54,42,53,86,97,118,75,97,118,54}) == 225)){ tests_passed++; } total_tests++;

    if((solutions({100,1,2,1,1,1,1,0,0}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({100,52,1,2,1,1,1,99,1,2,1,1,0,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({100,52,1,2,1,1,1,31,99,1,1,1,0,1}) == 103)){ tests_passed++; } total_tests++;

    if((solutions({1,1,1,2,1,1,1,1,1,1,1}) == 6)){ tests_passed++; } total_tests++;

    if((solutions({31,42,3,64,87,75,64,86,97,108,119,31}) == 337)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,1,1,88,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({1,1,2,1,0,1,0,97}) == 1)){ tests_passed++; } total_tests++;

    if((solutions({30,42,3,64,87,2,75,86,97,119,3}) == 265)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,89,1,99,10,1,1,1,1,1}) == 5)){ tests_passed++; } total_tests++;

    if((solutions({31,120,2,42,55,54,53,75,119,75,75,120}) == 333)){ tests_passed++; } total_tests++;

    if((solutions({1,1,119,0,1,1,1,1,1,1}) == 123)){ tests_passed++; } total_tests++;

    if((solutions({4,3,4,5,7,8,9}) == 16)){ tests_passed++; } total_tests++;

    if((solutions({31,120,42,75,120,41,53,75,86,97,52,119,75,75,75,53}) == 234)){ tests_passed++; } total_tests++;

    if((solutions({1,2,1,43,1,1,88,1,1,1}) == 4)){ tests_passed++; } total_tests++;

    if((solutions({31,42,53,75,86,97,52,75,53}) == 137)){ tests_passed++; } total_tests++;

    if((solutions({4,41,2,3,4,6,7,8,9,5,9}) == 25)){ tests_passed++; } total_tests++;

    if((solutions({1,119,88,1,1,1}) == 2)){ tests_passed++; } total_tests++;

    if((solutions({31,120,76,42,41,53,75,86,97,52,119,75,75,51,75}) == 513)){ tests_passed++; } total_tests++;

    if((solutions({30,42,3,64,87,75,86,108,119}) == 209)){ tests_passed++; } total_tests++;

    if((solutions({86,2,2,1,1,1,1,1,1,4,107,44,1,1}) == 111)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


