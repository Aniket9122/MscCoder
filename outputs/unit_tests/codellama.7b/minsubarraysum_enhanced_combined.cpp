#include <iostream>
#include <vector>

long long minSubArraySum(std::vector<int> arr) {
    int n = arr.size();
    if (n == 0) return 0;

    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
        if (sum < 0) break;
    }

    if (sum < 0) {
        std::cout << "The array contains all negative numbers" << std::endl;
        return sum;
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

    if((minSubArraySum({2, 3, 4, 1, 2, 4}) == 1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1, -2, -3}) == -6)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1, -2, -3, 2, -10}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-9999999999999999}) == -9999999999999999)){ tests_passed++; } total_tests++;

    if((minSubArraySum({0, 10, 20, 1000000}) == 0)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1, -2, -3, 10, -5}) == -6)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100, -1, -2, -3, 10, -5}) == -6)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10, 11, 13, 8, 3, 4}) == 3)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100, -33, 32, -1, 0, -2}) == -33)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({7}) == 7)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1, -1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({2,3,4,1,2,4}) == 1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-2,-3}) == -6)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-2,-3,2,-10}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-9999999999999999LL}) == -9999999999999999LL)){ tests_passed++; } total_tests++;

    if((minSubArraySum({0,10,20,1000000}) == 0)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-2,-3,10,-5}) == -6)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100,-1,-2,-3,10,-5}) == -6)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,11,13,8,3,4}) == 3)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100,-33,32,-1,0,-2}) == -33)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({7}) == 7)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({2,4,-1,3,5,-4,1,-2}) == -5)){ tests_passed++; } total_tests++;

    if((minSubArraySum({4,-4,-5,-3,5,-1,6}) == -12)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,5,3,-2,0,4,-8}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({2,1,-3,4,-1,2,1,-5,4}) == -5)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,-5,-8,-3,-1,-2,-4}) == -25)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,2,-5,4,1,-3,2,-2,5}) == -5)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,2,-3,-4,7,-6,8,-10}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-2,-3,-4}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,3,-1,-4,6,-7,8,-5}) == -7)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-15,-20,-25,-30}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,-1,-4,6,-7,8,-5}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,-1,-4,6,-7,8,-4,-5}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,4,-4,-5,-3,5,-1,6}) == -13)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,2,-3,-4,7,-6,8,-10,-6}) == -16)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,1,-4,6,-7,-4,-5}) == -16)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,3,-1,-4,-2,6,8,-5,8}) == -7)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,1,-4,6,-7,-4,-5,1}) == -16)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,-5,-8,-3,-1,5,-4}) == -19)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,2,-5,4,2,-3,2,-2,5}) == -5)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,2,-5,4,2,-3,2,5}) == -5)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,4,5,3,-2,0,4,-8}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,-8,-3,-1,-2,-4,6,-1}) == -23)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,1,2,6,-7,-3,-5,1,-2}) == -16)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,-5,-8,-3,-1,-2,-4,-3}) == -28)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,4,-3,-5,-3,5,-1,6}) == -12)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,-1,-4,6,7,-7,8,-6}) == -7)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,1,-4,6,-7,-4,-5,1,-4}) == -19)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,2,-3,7,-6,8,-10}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,-8,-3,-2,-4,6,-1}) == -22)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,3,-1,-4,6,8,-5,-2}) == -7)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-6,-5,4,-3,-5,-3,5,-1,6}) == -18)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,2,7,-6,8}) == -6)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,2,4,-1,3,3,5,-4,1,-2}) == -5)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-3,4,-1,2,1,-5,4}) == -5)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,-1,-4,8,-5,-2,6}) == -7)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,-2,-3,-4}) == -12)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,-5,8,-8,-3,-1,-2,0,-4}) == -18)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,-5,8,-8,-3,-1,-2,-2,-4}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,1,-4,-7,-4,-5,1,-4}) == -24)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-3,-2,-4,6,-1}) == -17)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,2,-5,4,2,-3,2,-1}) == -5)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,-1,-2,-4,6,-1,-1}) == -12)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,2,-6,8}) == -6)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,-1,-2,-2,-4,6,-1,-1}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,-8,-3,-2,-3,6,-1}) == -21)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,-1,3,-2,-4,6,-1,-1}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,2,-5,4,1,-3,1,-2,5}) == -5)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,1,-4,6,-7,0,-4,-5,1}) == -16)){ tests_passed++; } total_tests++;

    if((minSubArraySum({2,1,-3,-1,2,1,-5,5}) == -6)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,-5,-8,-3,-1,-2,-4,-10,-3}) == -38)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,4,-4,-5,-3,5,-30,6}) == -38)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-15,2,-3,-4,7,8,-10}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,-4,-1,-2,-4,6,-1,-1}) == -16)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,1,-4,6,-10,0,-4,-5,1}) == -19)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,3,-4,-2,6,8,-5,9,-1}) == -6)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,-4}) == -7)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,1,-4,6,-7,2,-4,-5,1,-4,-4}) == -21)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,1,2,6,-7,-4,-3,-5,1,-2,2}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,-2,-3,4,-4}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,2,-5,4,2,-3,2,5,4}) == -5)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,-8,-3,-1,-2,-4,-1}) == -24)){ tests_passed++; } total_tests++;

    if((minSubArraySum({2,1,-3,-1,2,1,-5,5,-1}) == -6)){ tests_passed++; } total_tests++;

    if((minSubArraySum({2,1,2,-3,-1,1,-5,5}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,-1,-2,-4,6,9,-1}) == -12)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-6,6,5,3,-2,0,4,-8}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,4,-30,-3,5,-1,6}) == -34)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-3,-2,-4,6,-1,-8}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,1,2,6,-7,-4,-3,-5,1,-2,2,1}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,-4,6,-7,-25,-5,1,-4}) == -40)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-6,6,5,3,-2,-3,0,4,3,-8}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,2,-3,7,-6,8,-10,1}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,-5,-8,-3,-1,-2,-4,-4}) == -29)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,-8,-3,-2,-3,6,-3,-1}) == -21)){ tests_passed++; } total_tests++;

    if((minSubArraySum({0,-3,-2,-4,6,-1,-8,-8}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,2,-3,-4,7,-6,8,-10,-6,-6}) == -22)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,-1,-4,6,-7,8,-5,-2}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({0,-7,-2,-3,-4}) == -16)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-4,6,-7,-4,-5}) == -16)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,-5,-8,-3,-2,-4,-10,-3}) == -38)){ tests_passed++; } total_tests++;

    if((minSubArraySum({5,-1,-2,-2,-4,6,-1,-1}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({2,4,-1,3,5,-4,1,5,-2}) == -4)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,2,-5,3,2,-3,2,-1}) == -5)){ tests_passed++; } total_tests++;

    if((minSubArraySum({2,1,2,-3,-1,1,-5,5,5}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,3,-4,-2,6,8,-5,9,-1,-2}) == -6)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-15,2,-3,-4,7,8,-10,-10,2}) == -25)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,3,-1,-4,6,8,-5,-2,3}) == -7)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,-1,-2,-4,6,-1,-1,-1}) == -12)){ tests_passed++; } total_tests++;

    if((minSubArraySum({2,-5,4,-1,3,5,-4,1,-2}) == -5)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,-5,-8,-3,-2,-4,-10}) == -35)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,3,-4,6,-5,9,-6,-2,3}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,2,-5,4,0,1,-3,2,-2,5}) == -5)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,-5,-8,-3,-2,-4,-3}) == -28)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-7,-8,-3,-2,-4,6,-1,-8,-3}) == -30)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,3,-2,-4,6,-7,8,-5}) == -7)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,3,2,-3,7,-6,8,-10,1,1}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-5,-1,-2,-2,-4,6,-1,-1}) == -15)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,-4,-1,-2,-4,6,-1,-1,-4}) == -16)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,-4,-1,-2,-4,6,-3,-1,-1}) == -16)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,3,-2,-4,6,-7,8,-5,-7}) == -12)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-5,2,4,-1,3,3,5,-15,-4,1,-2}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000}) == -100000)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,4,-3,2,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,20,-30,40,-50,60,-70,80,-90,100}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,-5,6,-7,8,-9,10}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,-60,70,-80,90,-100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,-10}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-4,-3,-2,-1}) == -55)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,-60,70,-80,60,90,-100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,-1,1,-1,1,-1,1,-1,1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-39,10,-20,30,-40,50,-60,-80,60,90,-100}) == -149)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-51,100}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-1,2,-3,4,-5,6,-7,8,-9,10}) == -13)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,9,-50,100,50}) == -141)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,2,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,-39}) == -40)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,50,-50,100,-100,-50,100,-100,50,-50,100,-100,50,-51,100}) == -151)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,100,-100,-50,100,-100,50,-50,100,-100,-100000,50,-51,100}) == -100151)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,4,1,2,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,50,-50,100,-100,-50,100,-100,50,-50,100,-100,50,-51,100,-100}) == -151)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,-3,4,-5,6,-7,8,-9,10}) == -13)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-100,-9,9,-10}) == -110)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,50,-50,100,-100,-50,100,-3,-100,50,-50,70,-100,50,-51,100,-100}) == -184)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,-3,4,-5,-7,8,-9,10}) == -19)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,4,1,6,2,-1,-6}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,-100,50,-50,100,-100,-100000,50,-51,100}) == -100211)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,-10,-4}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,-1,1,-1,1,-9,-1,1,-1}) == -11)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,1,-1,1,-1,1,-1,1,-1,1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-39,10,-20,30,-40,50,-60,-80,4,90,-100}) == -155)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,4,4,1,6,2,-1,-6}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,6,-7,8,-9,10}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,-100,50,-50,100,-100,-100000,-51,100}) == -100261)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-100,-1,1,1,-1,1,-1}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-51,100,100}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,4,1,2,70,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,-10,-10}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,-10,7}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-5,5,-6,7,-8,9,4,2,2,70,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-6,9,4,1,6,2,-1,-6}) == -7)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-100,-1,1,0,1,-1,1,-1}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,-100,50,-50,100,-100,-100000,-51,100,50}) == -100261)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,-4,5,-6,8,-8,9,4,-3,2,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,1,-1,-1,1,-1,1,-1,1,-1,1,-1}) == -3)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-50,100,-100,49,-50,100,-100,50,-50,100,-100,50,-51,100}) == -102)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,-100,-50,100,-100,-100000,50,-51,100}) == -100261)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,-99,7,-100,-9,9,-10,7}) == -208)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,-3,2,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,-100,50,-50,100,-100,-100000,-51}) == -100261)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-2,3,-4,5,-6,7,-8,4,4,1,6,2,-1,-6}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,-100000,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-51,-7}) == -100158)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-90,-6,9,4,1,6,2,-1,-6}) == -96)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-100,-1,1,1,-1,1,-1,1}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,6,5,-6,7,-8,9,4,1,2,70,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,1,70,-80,60,90,-100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,-8,9,-2,-10}) == -17)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,-10,-10,-10}) == -30)){ tests_passed++; } total_tests++;

    if((minSubArraySum({8,-2,3,-4,5,-6,7,-90,-6,9,4,1,6,2,-1,-6}) == -96)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,4,5,-6,7,-8,9,-10,-4}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-2,3,-4,5,-6,7,-8,9,4,-3,2,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,-4,-6,8,-8,9,4,-3,2,-1}) == -12)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,100,-100,50,-50,100,-100,-100000,-51,100}) == -100211)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-30,5,-6,7,-8,9,4,4,1,6,2,-1,-6}) == -32)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,4,4,-5,6,-7,8,-9,10}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,-100,-50,100,-100,-100000,50,-51,100,50}) == -100261)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,10,4,1,2,70,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-4,-3,-1}) == -53)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,-100,-50,-100,-100000,50,-51,100}) == -100361)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,-100000}) == -200000)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,-100000,-100000}) == -300000)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,0,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,50,-50,100,-100,-50,100,-100,50,-50,100,-100,50,-51,100,-100,100}) == -151)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,-2,3,-4,5,-6,-8,9,-2,-10}) == -17)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,-3,4,-5,6,5,-4,-7,-8,8,-9,10}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,-10,-10,-8}) == -28)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,100,-100,50,-50,100,-100,-100000,-51,100,-100}) == -100211)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,-10,-10,3}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,49999,50000,-100000,100000,-50000,100,50000,-100000,100000,-50000,50000,-100000,-100000,-100000}) == -300000)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,4,4,-5,6,-7,8,-9,0,10}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,0,1,-1,1,-1,1,-1,1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,100,-100,-50,100,99,-100,50,-50,100,-100,-100000,50,-51,100}) == -100101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,100,50}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-1,2,-3,4,6,-7,8,-9,10}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({2,-2,3,-4,5,-6,-99,7,-100,-9,9,-10,7}) == -208)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,20,-50,100,-100,-100000,50,-51,101,50}) == -100141)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,2,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,-39,-1}) == -41)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,0,1,-1,1,1,-1,1,-1,1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,9,-4,5,-6,-8,9,-2,-10}) == -17)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,6,5,-6,2,7,-8,9,4,1,2,70,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-99999,-100000,-100000}) == -299999)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,-100000,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50000,-7}) == -150107)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,8,-7,-6,-5,-4,-3,-1,-1}) == -38)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-20,-5,2,4,-5,-7,8,-9,10}) == -33)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,-60,70,-80,60,-100}) == -120)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,50000,-100000,100000,-50000,50000,-100000,-100000,-100000}) == -300000)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1,-1,30,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1,-1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,4,-8,9,4,1,6,2,-1,-6}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,99,-100,-50,100,-100,-100000,50,-51,100,50,-50}) == -100262)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-100,-1,1,0,1,-1,1,-1,1,1}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,4,1,6,1,-1,-6}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-7,-4,-3,-2,-1}) == -62)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,3,-30,5,-6,7,-8,9,4,4,1,6,2,-1,-6}) == -32)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,8,-50,50,-50,100,-100,-50,100,-100,50,-50,100,-100,50,-51,100}) == -151)){ tests_passed++; } total_tests++;

    if((minSubArraySum({70,-2,-4,5,-100000,8,-8,9,4,2,-1}) == -100001)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,-3,2,-1,5}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,-1,1,-1,1,-1,1,-1,1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-100,-1,1,2,1,-1,1,-1,1}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,-3,4,-5,6,-7,8,-9,10,8}) == -13)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-101,-50,100,-100,49,-50,100,-100,50,-50,100,-100,50,-51,100}) == -203)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,100,-100,-50,100,60,99,-100,50,-50,100,-100,-100000,50,-51,100}) == -100101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,-1,1,-1,1,-1,1,-1,1,60}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,5,-6,7,-8,9,4,4,1,6,2,-1,-6}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,4,-8,9,1,4,1,6,2,-1,-6}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,20,-50,100,-51,-100,-100000,50,-51,101,50}) == -100192)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,4,5,-6,7,-8,9,-10,-4,1,7}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-100,-1,1,-50,1,-1,1,-1}) == -150)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,-2,1,-1,1,-1,1,-1,1,-1,-40,1,-1,1}) == -42)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,1,-1,-3,-1,1,-1,1,-1,1,-1,1,-1,1}) == -6)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,1,-1,1,-99,-1,1,-1,1,0,1,-1}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-2,3,-4,5,-6,7,-8,4,4,1,6,2,-1,-6,7}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,-3,4,-5,6,49,-7,8,-9,10}) == -11)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,49,-10,-50,100,50,-50,-100,-50,100,-100,50,-50,100,-100,-100000,-51,100}) == -100251)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,0,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,0,1,-1,1,-1,1,1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-100,-1,1,-50,1,-1,-3,1,-1,-1}) == -154)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,-90,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,-100000}) == -200090)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,20,-50,100,-100,-100000,50,-51,101,50}) == -100241)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,0,9,-10,-10}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,-2,3,-4,5,50,7,-8,-3,-10}) == -21)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,100,-100,50,-50,100,-100,-100000,-51,100,50}) == -100211)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,0,1,-1,1,1,-1,1,-1,1,30,-1,1,-1,1,-1,1,-1,1,-1,1,1,-1,1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,4,5,-6,7,-8,10,9,-10,-4}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,0,1,-1,1,-1,-6,1,-1,1,-1,1,1,-1,30,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,1,-1}) == -7)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,4,1,6,1,-6}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,100,-100,50,-50,100,-100,-100000,-51,100,-100,100}) == -100211)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-51,100,50,-50,-100,100,-100,50,-50,100,-100,-100000,-51,100,-100,100}) == -100212)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,1,-1,1,-1,1,1,-1,1,1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-50000,-8,9,10,4,1,2,70,-1}) == -50008)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50001,100000,-50000,50000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,-100000,-100000}) == -300000)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,-3,2,-1,5,-3}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,100,-100,-50,100,99,-100,50,-50,100,-100,-100000,50,-51,100,-100}) == -100101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-5,5,-6,7,5,-8,9,4,2,2,70,-1,5}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,4,5,-6,7,49,10,9,-10,-4,-6}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,10,4,1,2,70,-1,9}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-50000,-10,-50,100,50,-50,-100,100,-100,50,-50,100,-100,-100000,-51,100,50}) == -150211)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,99,-50,100,-100,-100000,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-51,-7}) == -100158)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,-50,100,100}) == -150)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-90,-6,9,4,1,6,2,-7,-1,-6}) == -96)){ tests_passed++; } total_tests++;

    if((minSubArraySum({2,-2,1,-1,1,-99,-1,1,1,0,1,-1}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-100,-1,2,-50,1,-1,-3,1,-1,-1}) == -153)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,-3,3,-4,5,-6,7,-8,9,-10,-10,-8}) == -28)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,-1,-2,1,-1,1,-9,-1,1,-1}) == -13)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,-2,3,-4,5,50,7,-8,-50000,-10,50,7}) == -50018)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,0,3,-4,5,-6,7,-8,9,-3,2,-1,5,-3}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-7,7,-8,9,-3,2,-1,-4}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-100,-1,1,-50,1,-1,0,-3,1,-1,-1}) == -154)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,-2,1,-1,1,-1,1,-1,-1,-40,1,-1,1}) == -43)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,49999,50000,-100000,100000,-50000,100,50000,-100000,100000,-50000,50000,-100000,-100000,-100000,-100000}) == -400000)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,99,1,-1,-1,1,-1,1,-9,-1,1,-1}) == -11)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-50000,-8,9,10,4,1,2,70,-1,7}) == -50008)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-100,-1,1,-50,1,-1,1,-1,1}) == -150)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,8,-7,-6,-5,-4,-3,-1,-6,-1}) == -44)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,1,70,-80,60,90,-100,10}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,-2,3,-4,5,-6,-8,-1,9,-2,4,-10}) == -15)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,100,-100,100,99,-100,50,-50,100,-100,-100000,50,-51,100,-100}) == -100101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-100,-1,1,1,-1,-3,1,-1,-1}) == -104)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,1,-1,1,-1,1,-1,1,-1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-39,10,-20,30,-40,50,-80,4,90,-100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-50,100,-99,50,-50,100,-100,50,100,-100,9,-50,50001,100,50}) == -141)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,-3,4,-5,6,-7,8,-1,-9,10,8}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,69,-80,60,-100,90,-100,60}) == -130)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100,-10,-50,100,50,-50,-100,100,-100,50,-50,100,-100,-100000,-51,100,-100,100}) == -100201)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,-100,-50,100,-100,-100000,50,30,-51,100,50,-50}) == -100260)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,-10,-10,5}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-99999,100,50,-50,-100,100,-100,50,-50,100,-100,-100000,-51,100,-100}) == -200160)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,-1,5,-6,7,-8,9,-10,-10}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,-4,5,-6,7,-8,9,4,1,2,70,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,0,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,2,-1,1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,100,-100,-50,-99,100,60,99,50,-50,100,-100,-100000,50,-51,100}) == -100101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,-9,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,-100000}) == -300009)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,6,5,-6,2,7,-8,9,4,-10,2,70,-1}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,0,-1,1,-1,1,-1,1,-100,-1,1,-50,1,-1,1,-1,1}) == -150)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,4,5,2,7,49,10,9,-10,-4,-6}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,99,-50,-99,100,-100,-100000,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-51,-7}) == -100207)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,49,-100,-50,100,-100,50,100,-100,-100000,-51,100}) == -100162)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,-2,3,-4,5,50,7,-8,-50000,-10,7}) == -50018)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,-100,50,-50,100,-100,-100000,-52,100,50}) == -100262)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,6,5,-6,7,-8,9,-3,2,-1,5}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,0,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,1,-1,1,-1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,100,50,-50,-100,100,-100,50,-50,100,-100,-100000,-51,100,-100}) == -100201)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,0,1,-1,1,-1,-6,1,40,-1,1,-1,1,1,-1,30,-1,-51,-1,1,-1,1,1,-1,1,-1,1,-1,1,-1}) == -53)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,1,-2,3,-4,5,-6,6,-8,-1,9,-10,-10,-10}) == -37)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,9,-4,5,-6,9,-2,-10}) == -12)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,-1,1,-1,1,-1,1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-39,50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100}) == -139)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,-100,-50,100,-100,99,50,-51,100,-50}) == -260)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,5,-6,7,-8,9,4,4,6,2,-1,-6}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,9,-50,100,50,100,50}) == -141)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,-1,5,-6,7,-8,9,-10,-10,-10}) == -30)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,-99,7,-100,-9,9,-10}) == -208)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,-2,3,-4,4,50,7,-8,-3,-10}) == -21)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,-100,50,100,-100,-100000,-51,100}) == -100211)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,4,-3,2,-1,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,9,-4,5,9,-2,-10}) == -12)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,69,-80,60,-100,-100,60}) == -220)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,30,4,4,-5,6,-7,8,-1,-9,10}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,4,4,-5,6,-7,8,-9,10,4}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,-1,1,-1,1,-1,1,-1,1,-1,-1}) == -3)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-100,-1,1,2,1,-1,1,-1,1,-1,-1}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({50,-50,100,-100,50,-50,100,-99,50,-50,100,-100,50,100,-100,9,-50,50001,100,50}) == -141)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,-2,3,-4,5,-6,-8,-2,9,-2,4,-10,9}) == -16)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,-8,1,-1,-3,-1,1,-1,1,-1,1,-1,1,-1,1}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,1,-1,0,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,-3,4,-5,6,-7,8,-9,10,-1}) == -13)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-7,7,-8,9,-3,2,-1,6,-4}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,-7,-3,4,-5,6,5,-4,-7,-8,8,-9,10}) == -27)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,30,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-39,10,-20,30,-40,50,-60,4,90,-100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50001,100000,-50000,50000,-50000,50000,-100000,100000,-50000,50000,-100000,-100000,-100000}) == -300000)){ tests_passed++; } total_tests++;

    if((minSubArraySum({0,-2,3,-4,4,5,-6,7,49,10,9,-10,-4,-6}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,-9,2,-3,4,-5,6,-7,8,-9,10}) == -22)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,-10,-10,-10,-4,7}) == -34)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,99,1,-1,1,-1,1,-7,-9,-1,1,-1}) == -17)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,1,-1,1,-1,-1,1,-1,1,-1}) == -3)){ tests_passed++; } total_tests++;

    if((minSubArraySum({0,-2,3,-4,4,5,-6,7,49,10,9,-10,-4,-6,4}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,-2,3,-4,5,-6,7,-8,9,-10,7,-2,7,7}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,-3,4,-5,6,5,-4,-7,-8,8,10,8}) == -19)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,100,-100,-50,101,99,-100,100,50,-50,100,-100,-100000,50,-51,100,-100,-50}) == -100151)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,50001,-2,3,-4,5,-6,-99,7,-100,-9,9,-10}) == -208)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-2,-4,5,-6,7,1,4,4,1,6,2,-1,-6,7}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,1,-1,1,-1,1,-1,1,-1,20,1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-20,-1,1,-100,-1,1,0,1,-1,1,-1}) == -121)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,-3,3,0,-7,-4,5,-6,7,-8,10,-10,-10,-8}) == -33)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,50001,-2,3,-4,5,-6,7,-8,9,-10,7,-2,7}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1,-1,30,-1,1,-1,1,-1,1,1,-1,1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-90,-6,2,9,4,1,6,2,-7,-1,-6}) == -96)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,-6,7,-50000,-8,9,10,4,1,2,70,-1,7}) == -50011)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,8,-7,-6,-5,-4,-3,-1,-6,-1,-9}) == -53)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,-8,0,1,-1,-3,-1,1,-1,1,-1,1,-1,1,-1,2,1}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,1,-1,1,-100,-1,1,-50,1,-1,-3,1,-1,-1}) == -154)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-39,50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-50}) == -139)){ tests_passed++; } total_tests++;

    if((minSubArraySum({0,-2,3,-4,4,5,-6,7,99,10,9,-10,-4,-6,4}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,-3,3,0,-7,-4,5,-6,6,-8,10,-10,-10,-8}) == -34)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,-20,-100,-1,1,-50,1,-1,1,-1,1}) == -171)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,-100,-50,100,-100,-100000,50,30,-51,100,50,-50,-100}) == -100260)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,-2,1,-1,1,-1,1,-1,-1,-40,1,1,1}) == -43)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,-3,-8,9,-10,-10,-8,-8}) == -44)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,9,-1,1,-1,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,-8,1,1}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,-99,0,1,-1,1,-1,-6,1,-2,1,-1,1,1,-80,30,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,1,-1}) == -185)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100001,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,50000,-100000,100000,-50000,50000,-100000,-100000,-100000}) == -300000)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,1,70,-80,60,90,-100,10,-20}) == -110)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100,-10,-50,100,50,-50,-100,100,-100,49,-50,100,-100,-100000,-51,100,-100,100}) == -100202)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-50}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({0,-2,3,-4,4,5,-6,7,49,10,9,-10,-4,-6,10}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-100,-1,-50,1,-1,1,-1,1}) == -151)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,4,5,-6,7,-8,9,-10,-4,3}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,-100,-50,100,-40,-100000,50,30,-51,100,50,-50,-100,-50}) == -100221)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,-6,7,-50000,-8,9,10,70,4,1,2,70,-1,7}) == -50011)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,99,-100,-50,100,-100,-100000,50,-51,100,50,-50,-50}) == -100262)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,1,-1,0,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,-6,7,-8,9,4,4,1,6,5,2,-1,-6}) == -11)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,5,-6,7,9,4,4,6,2,-1,-6}) == -7)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,-2,3,-4,4,50,7,-8,50,-3,-10}) == -13)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,-2,3,-4,-4,5,50,7,-8,-50000,-10,7}) == -50018)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-90,-7,-6,9,4,1,6,2,-7,-1,-6,-6}) == -103)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,1,1,-1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,-2,3,-4,5,-6,-8,-1,-2,4}) == -17)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,1,70,-80,60,90,-100,10,-20,70}) == -110)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,-1,-2,1,-1,1,-1,1,-1}) == -4)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,-2,-4,4,50,7,-8,50,-3,-10,-99999}) == -100012)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-9,-4,-1,5,-6,7,-8,9,-10,-10,-10}) == -37)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-51,100,100,-100}) == -151)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-5,5,-6,7,5,-8,9,4,2,70,-1,5,-2}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,100,-100,-50,100,-100,50,-50,100000,100,-100,-100000,50,-51,100}) == -100101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,100,-100,100,99,-100,50,-50,100,9,-100,-100000,50,-51,100,-100}) == -100101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,0,1,-1,1,-1,-6,1,40,1,-1,1,1,-1,30,-1,-51,-1,1,-1,1,1,-1,1,-1,1,-1,1,-1}) == -53)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-5,5,-6,7,5,9,4,2,2,70,-1,5}) == -6)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-1,2,-3,4,6,-7,8,-9}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,20,99,-50,-99,100,-100,-100000,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-51,-7,-100}) == -100307)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,0,1,0,-1,0,1,-1,1,1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,2,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-90,-6,2,9,4,1,6,2,-7,-1,-6,6}) == -96)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,9,101,5,-6,9,-2,-10}) == -12)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,-1,1,-99,-1,1,-1,1,0,1,-1}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,-40,50,-60,70,-80,60,90,-100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-50,100,50,-50,-100,100,-100,49,-50,100,-100,-100000,-51,100,-100,100}) == -100202)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,4,-6,7,49,10,9,-10,-4,-6}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-4,-3,-1,-1}) == -54)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-51,100,50,100}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,9,-1,1,-1,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,-9,-50000,50000,-100000,100000,-50000,50000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,-100000}) == -200009)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-99999,100,50,-50,-100,100,-100,50,-50,100,-100,-100000,-51,-100}) == -200260)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-50,100,50,-50,-100,101,100,-100,49,-50,100,-100,-100000,-51,100,-100,100}) == -100152)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,49999,50000,-100000,100000,-50000,100,50000,-100000,-50000,50000,-100000,-100000,-100000,-100000}) == -500000)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,-99,7,-100,9,-10,7}) == -199)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-2,1,-1,1,-1,0,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100,-50,50,-50,-100,100,-100,50,-50,100,-100,-100000,-51,100,-100,100}) == -100201)){ tests_passed++; } total_tests++;

    if((minSubArraySum({0,-2,3,-4,4,-5,5,-6,7,49,99,9,-10,-4,-6,4}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-20,30,-40,50,1,70,-80,50,90,10,-20}) == -80)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1,-1,30,-1,1,-1,-1,1,1,-1,1,-1,1,-1,1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1,-1,30,-1,1,-1,1,-1,1,1,-39,1,1,-1,1,-1,1}) == -39)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,1,101,70,-80,3,90,-100,50}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,1,-1,1,-1,1,1,-1,1,1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({50,-100,-10,-50,100,50,-50,-100,-50,100,-100,-50,100,-100,-100000,50,-51,100,50}) == -100261)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-39,50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,100}) == -139)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,-2,3,-4,60,5,50,7,-8,-3,-10,-8}) == -29)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,-99,0,1,1,-1,-6,1,-2,1,-1,1,1,-80,30,1,-1,1,-1,1,1,-1,1,-1,1,-1,1,-1}) == -184)){ tests_passed++; } total_tests++;

    if((minSubArraySum({true,true,true,false,true,true}) == false)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-30,5,-6,-8,9,4,4,1,6,2,-1,-6}) == -39)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,5,-6,7,9,4,4,-7,6,2,-1,-6}) == -7)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-6,7,-8,9,4,4,1,6,7,2,-1,-6}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({99,1,-1,-1,1,-1,1,-9,-1,-1}) == -12)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-5,5,-6,7,-8,9,4,2,2,70,-1,5,-5}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-9,-4,-1,5,-6,7,-8,9,-10,20,-10,2,-10}) == -18)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,99999,100000,-50000,-90,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,-100000}) == -250090)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-50,100,-100,50,-50,100,-100,-100000,-51,100,50,100}) == -100161)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,50,-99999,-50,100,-100,-50,100,-2,-100,50,-50,70,-100,50,100,-100}) == -100131)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,1,1,-1,1,1,-1,1,1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-4,-3,-1,-9}) == -62)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,50,-50,100,-100,-50,100,100}) == -150)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,-90,-6,9,4,1,6,2,-7,-1,-6}) == -102)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,100,-50,100,-100,50,-50,100000,100,-100,-100000,50,-51,100}) == -100101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,-4,5,-6,-8,9,-10,-10,5}) == -26)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,1,70,-80,60,90,-100,10,-20,70,70}) == -110)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-2,3,7,5,-6,8,90,-8,9,4,-3,2,-1,9}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-100,-1,1,-50,1,-1,50001,-1}) == -150)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,0,1,-1,1,-1,-6,1,40,1,-1,1,1,-1,30,-1,-51,-1,1,-1,1,1,-1,1,-1,1,-1,1,-1,-1}) == -53)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,101,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-51,80,100}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,50,-50,100,-100,-50,100,-3,-100,50,-50,70,-100,50,-51,100,-100,-100}) == -284)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,-1,-2,1,-1,1,-9,-1,1,-1,-2}) == -15)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,0,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,1,-1,1,-1,-39,1,-1,1,-1,1}) == -40)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-39,10,-20,30,50,-60,-3,90,-100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,-100,-100,50,100,-100,-100000,-51,100}) == -100311)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,0,1,-1,1,1,-1,1,-1,1,30,-1,1,1,-1,1,-1,1,-1,1,1,-1,1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,50001,-2,3,-4,5,-6,-99,7,-100,-9,9,-10,50001}) == -208)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-90,-6,2,9,4,1,6,2,-101,-1,-6}) == -180)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,9,-2,-10}) == -12)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,70,-7,60,90,-100,10}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,-6,6,-7,8,-9,10}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-100,-1,1,-50,1,-1,0,50001,-1}) == -150)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,-2,3,-4,5,50,7,-8,-10,7}) == -18)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,-100000,-50,101,-100,50,-50,100,-100,50,-50,100,-100,50,-51,-7}) == -100157)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-7,7,-8,9,-3,2,-1,6,-4,1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,100,-100,50,-50,100,-100,-100000,-51,100,100}) == -100211)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,1,-1,1,-1,1,-1,-1,1,-1,-1}) == -3)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,99,1,-1,100,-1,1,-7,-9,-1,1,-1}) == -17)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-80,1,-2,3,-4,5,-6,7,-50000,-8,9,10,4,1,2,70,-99999,7}) == -149987)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-2,3,-4,5,-6,7,-8,9,4,-3,-1,4}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,4,-5,6,5,-4,-7,8,10,8}) == -11)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,-2,3,-4,5,50,7,-8,-50000,-4,-10,7,-3}) == -50022)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,9,-50,100,50,-50,-100,100,-100,50,-50,100,-100,-100000,-51,100,-100,-50}) == -100251)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,1,-1,1,-1,1,-1,1,-1,1,1,-1,30,-1,1,-1,1,-1,1,1,-39,-2,1,1,-1,1,-1,1}) == -41)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,1,70,-80,60,90,-100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-30,-100,-39,50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,100}) == -169)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,0,1,-1,1,1,-1,1,-1,1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1,-1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,-4,5,-6,7,-8,0,9,-10,-10}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,11,50,-60,70,-80,90,-100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({99,-1,-39,50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,100,-100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,2,1,-1,30,-1,1,-1,1,-1,1,-1,1,1,-1,1,-1,-39}) == -40)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,0,1,-1,1,1,-1,1,-1,1,30,-1,1,1,-1,1,-1,-60,1,-1,1,1,-1,1,1,-1}) == -61)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,4,4,-5,6,-7,8,8,-9,0,10}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-50,100,-100,-50,100,-100,50,-50,100,-50,100,100}) == -150)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-2,-4,5,-6,7,1,-100,4,4,1,6,2,-1,-6,7}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,4,-6,7,49,10,9,-10,-4,-6,49}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,-2,3,5,-6,7,-8,9,-10,7,-2,7,7}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,4,1,6,1,-7,-6}) == -13)){ tests_passed++; } total_tests++;

    if((minSubArraySum({0,-1,1,-1,1,-1,1,-100,-1,2,-50,1,-1,-3,-1,-50}) == -203)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,-2,3,-4,4,50,7,-8,7,-10}) == -11)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,1,-80,60,90,-100,10,-20,70,70}) == -110)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-50,-1,1,-50,1,-1,0,1,-1,-1}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-20,30,-40,50,1,70,-80,50,90,10,3,-20}) == -80)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,1,-1,1,-1,-1,1,-1,1,-1,-2}) == -5)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,-1,-1,1,-1,1,-1,1,-1,1,60,1}) == -3)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-100,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,-50,100,100}) == -250)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,-2,3,-4,5,-6,-8,-1,-2,4,4}) == -17)){ tests_passed++; } total_tests++;

    if((minSubArraySum({61,10,-20,30,-40,50,70,-7,60,90,-100,10}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,69,3,-4,6,5,-6,2,7,-8,9,4,1,2,70,-50000}) == -50000)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-9,-7,-6,-5,-4,-3,-2,-1}) == -64)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100,-10,-50,100,50,-50,-100,100,-100,50,-50,100,-100,-100000,-51,100,-100,100,-51}) == -100201)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,-1,1,-1,1,-1,30,-1,1,-1,-1,1,-1,1,-1,1,-1,1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,1,-1,-1,1,-1,-99999,1,-1,1,-1,1,-1}) == -100002)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,-3,4,-5,6,5,-4,-7,69,-8,8,-9,10,10}) == -11)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,6,5,-6,7,-8,9,4,1,2,70,-1,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,69,-80,60,-100,-100,60,-100}) == -260)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-39,-2,3,-4,5,-6,7,-90,-6,9,4,1,6,2,-1,-6}) == -132)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,-1,1,-1,1,-9,-1,1,-1}) == -12)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-50,100,50,-50,-100,100,-100,50,-50,100,-100,-100000,50,-51,100,-100}) == -100151)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,0,9,-10,-10,-6}) == -26)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,1,-1,1,-1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,1,-1,49999,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,100,-100,100,99,-100,50,-50,100,-100,-100000,50,-51,100,-100,100}) == -100101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,99,-50,-99,100,-100,-100000,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-51,-7,-100,-50,-7}) == -100364)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,9,-10,-10,5,-2}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-101,-10,100,50,-50,49,-100,-50,100,-100,50,100,-100,-100000,-51,100,100,100}) == -100152)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,-99,-100,9,7}) == -205)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,0,1,-2,1,-1,1,1,30,-1,1,-1,1,-1,1,-1,1,1,-1,1,-1,1,1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({99999,3,-2,3,-4,5,-6,-8,9,-2,-10}) == -17)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,4,-6,6,-7,8,-9,10}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-50,100,50,-50,-100,100,-100,7,50,-50,100,-100,-100000,50,-51,100,-100}) == -100144)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,-3,4,6,5,-4,-7,69,-8,8,-9,10,10,10}) == -11)){ tests_passed++; } total_tests++;

    if((minSubArraySum({99,1,-1,-1,1,-1,0,-9,-1,-1}) == -13)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,2,1,-1,30,-1,1,-1,1,-1,-1,1,-1,1,-1,1,-1,-39,-1}) == -42)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,4,5,-6,7,-8,9,-10,-4,1,-4,7}) == -17)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,0,-90,1,-1,1,-1,-6,1,40,1,-1,1,1,-1,30,-1,-60,-1,1,-1,1,1,-1,1,-1,1,-1,-1,-1}) == -97)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,-50,100,100}) == -150)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,1,-1,-1,100000,1,-1,1,0,30,-1,1,-1,-1,1,-1,1,-1,1,-1,1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,-6,7,-8,9,4,49999,1,6,5,2,-1,-6}) == -11)){ tests_passed++; } total_tests++;

    if((minSubArraySum({40,-2,3,-5,5,-6,7,5,-8,9,4,2,70,-1,5,-2}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,-3,4,-5,-7,8,-8,10}) == -18)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,50001,4,5,-6,7,-8,9,-10,-4,1,7}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-39,50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,100,100}) == -139)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,-20,-100,-1,1,-50,1,-1,1,-1,0,1}) == -171)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,9,-1,1,-1,30,-1,1,-1,-1,1,-1,1,-1,1,-1,1,-1,-1}) == -3)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,-100000,100000,-50000,50000,-100000,-100000,50000}) == -250000)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,4,4,-5,6,-7,8,-9,9,4}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,-60,70,11,-80,60,90,-100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,-51,-9,-4,-1,5,-6,7,-8,9,-10,20,-10,2,-10}) == -70)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,0,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,0,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,1,-1,1,-1,-40,1,-1,1,-1,1}) == -41)){ tests_passed++; } total_tests++;

    if((minSubArraySum({2,-2,3,-4,5,-6,7,-8,9,-10,-10,-8}) == -28)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-1,2,-3,4,-5,3,6,8,-9,10}) == -11)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,0,-1,1,-1,1,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-2,-4,5,-6,7,1,4,4,1,6,2,-1,-6,7,5}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-100,-1,60,1,1,-1,1,-1}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-99,-10,-50,100,50,-50,100,-100,-50,100,60,99,-100,50,-50,100,-100,-100000,50,-51,100}) == -100101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({0,-2,3,-4,4,5,-6,7,49,10,9,-10,-4,-6,9}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,1,-1,-1,1,-1,-1,1,-1,1,-1}) == -4)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,-3,3,-4,5,-4,-6,7,-8,9,-10,-10,-8}) == -31)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-50000,-10,-50,100,50,-50,-100,-100,50,100,-100,-100000,-51,100,50}) == -150261)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,100,50,-50,-100,100,-100,50,-50,100,-100,-100000,-51,100,-100}) == -100201)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,4,-5,6,5,-4,-7,8,10,8,-1}) == -11)){ tests_passed++; } total_tests++;

    if((minSubArraySum({2,-2,3,1,5,-6,7,-8,9,-10,-10,-8}) == -28)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-6,9,4,1,6,2,-1,-6,9}) == -7)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,4,-5,6,5,-4,-7,-8,8,10,8}) == -19)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,3,50,-50,100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-101,-50,100,-100,49,-50,100,-100,50,-50,100,-100,-51,100}) == -253)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,30,-39,50,1,70,-80,60,90,-100,10}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,6,5,-6,2,7,-8,9,1,4,1,2,70,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,-100,50,-50,100,-100,-100000,-51,-100}) == -100361)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,-9,-50000,50000,-100000,100000,-50000,-50001,50000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,-100000}) == -250010)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,3,100,-100,50,-101,-50,100,49,-50,100,-100,50,-50,100,-100,4,-51,100}) == -201)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1,-1,-1,-1}) == -3)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-5,7,-8,9,-10,-10,50000,5,3}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,49,-100,-50,100,-100,-100,-100000,-51,100}) == -100312)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-60,-50,100,50,-50,-100,-100,99,-100,-50,100,-100,-100000,50,-51,100,-50}) == -100372)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,-3,-8,9,-10,-10,-8,-8,-6}) == -50)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,-60,70,11,-80,60,90,-100,90}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,4,5,-6,-8,9,-10,-4,1,-4,7}) == -22)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,3,-4,5,-7,7,-8,9,-3,2,-1,-4}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,-2,1,-1,1,-1,1,-1,-1,-60,-40,1,-1,1}) == -103)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-50000,-100,-50,100,-100,50,-50,100,-100,-100000,-51,-100,100}) == -150361)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,-1,5,-6,7,-8,9,-10,-10,-10,-10}) == -40)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-2,3,7,5,8,90,-8,9,4,-3,2,-1,9}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,6,5,-6,2,7,-8,9,4,-10,2,69,-1}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,-1,1,-1,1,-9,-1,1,-1,-1}) == -13)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-100,-1,0,1,-1,1,-1}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,-70,4,5,-6,7,-8,9,-10,-4,1,7}) == -77)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,100,-100,-50,-99,100,60,99,50,-50,100,-100,-100000,50,-51,100,99}) == -100101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,-90,-50,-100,100,-100,50,-50,100,-100,-100000,-51,101,100,100}) == -100351)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,0,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,50,-1,1,-1,1,-1,1,2,-1,1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,100,-100,80,-99,99,-100,50,-50,100,-100,-100000,50,-51,100,-100}) == -100121)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,1,-1,0,1,-1,1,-1,1,-1,1,-1,30,-1,1,-1,1,1,-1,1,-1,1,-1,1,-1,1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,4,-5,6,5,-4,-10,8,10,8,-1}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({11,2,-2,3,1,5,-6,7,-8,9,-10,-10,-8}) == -28)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-7,-99,-100,9,7}) == -206)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,100,5,-6,7,-8,9,-3,2,20,-1,5,-3,-2}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,50,-50,100,-100,-50,-99,100,60,99,50,-50,100,-100,-100000,50,-51,100,99}) == -100101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,4,-8,9,-10}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,0,1,-1,1,-1,1,-1,1,-8,-1,30,-1,1,-1,50,-1,1,-1,1,-1,1,2,-1,1,1}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-5,5,-6,7,5,-8,9,4,2,70,-1,5,-2,-2}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,-2,1,-30,-1,1,-1,2,-1,-1,1,1,1}) == -32)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,-60,-4,70,-80,60,-100}) == -120)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-100,-50000,-10,-50,100,50,-50,-100,-100,50,100,-100,-100000,-51,100,50}) == -150361)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,-3,4,-5,6,5,-4,-4,-7,-8,8,10,8}) == -23)){ tests_passed++; } total_tests++;

    if((minSubArraySum({0,-1,1,-1,1,1,-100,-1,2,-50,1,-1,-3,-1,-50}) == -203)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,99,1,-1,1,-1,1,-9,-1,1,-2,-1}) == -12)){ tests_passed++; } total_tests++;

    if((minSubArraySum({101,-100,-10,-50,100,50,49,-100,-50,100,-100,50,100,-100,-100000,-51,100,-10}) == -100151)){ tests_passed++; } total_tests++;

    if((minSubArraySum({49,-100,50,-50,100,-100,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-51,100,100,-100}) == -151)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,50000,-1,1,-1,1,-9,-1,1,-1,-1}) == -11)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,9,-2,3,5,-6,7,-8,9,4,4,6,2,-6}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,-9,-50000,50000,-100000,100000,-50000,-50001,50000,99999,100000,-50000,50000,-100000,100000,-50000,50000,-100000,-100000}) == -200010)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,100,-50,100,-100,50,-50,100000,100,-100,-100000,50,-51,100,-50}) == -100101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-7,-4,-3,-2,-1,-1}) == -63)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-5,5,-6,7,-8,9,4,2,2,70,-1,2}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-39,10,-19,30,-40,50,-80,4,90,-100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-8,2,-3,4,-7,8,-8,10}) == -13)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,-100,-50,100,-100,-100000,50,-51,100,-20,50}) == -100261)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,-10,-50,100,50,-50,-100,-50,100,-100,-50,100,-40,-100000,50,30,-51,100,50,-50,-100,-50,-50}) == -100271)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-1,2,-3,4,6,-7,-9}) == -16)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,9,-4,5,-6,9,-10}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,-4,-9,5,-6,7,-8,9,-10,-10,-10,-10}) == -48)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-30,-100,-39,50,100,-100,50,-50,100,-100,-50,100,-100,50,-50,100,-100,50,-50,100,100,-39,50}) == -169)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-5,2,4,-5,-7,8,-9,10}) == -13)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,50,-99999,-50,100,-100,-19,-2,-100,50,-50,70,-100,50,100,-100,-100}) == -100250)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,5,-6,7,9,4,4,-7,-80,6,2,-1,-6}) == -87)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,-40,50,-60,70,-80,60,90,-100,-40}) == -140)){ tests_passed++; } total_tests++;

    if((minSubArraySum({0}) == 0)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,0}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,2}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,-1}) == -3)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,2}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,3,-4,5,-6,7,-8,9,4,-2,2}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-100000,-4,-3,-2,-2}) == -100056)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,70,-80,90,-100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-4,-3,-9,-2,-1}) == -64)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-30,-30,40,-50,60,-70,80,-90,100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-30,-30,40,-50,60,-70,81,-90,100}) == -99)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-7,-6,-5,-3,-9,-100,-2,-1,-5}) == -157)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-80,-6,7,-8,9,-10}) == -88)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-9,20,-30,40,-50,60,-70,80,-90,100}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,-10}) == -65)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,-5,6,-7,8,-9,10,-7}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,0,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,0,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,0,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-9,-10,-30,-30,40,-50,60,81,-90,100}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,4,-6,7,-8,9,4,-3,2,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-9,20,-30,40,-50,60,80,-70,80,-90,100}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,1,-1,1,-1,1,-1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100,-10,-30,-50000,-30,40,-50,60,-70,80,-90,100}) == -50100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-9,20,-30,40,-50,60,-70,80,-90,100,-30,-30}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,0,1,-1,1,-1,-70,-1,1,-1,1,-1,1,-1,1,-1,1,0,1}) == -72)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,0,1,-1,90,0,1,-1,1,-1,-70,-1,1,-1,1,-1,1,-1,1,-1,1,0,1,-1}) == -72)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,1,-1,1,-1,1,-1,2,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000}) == -100000)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,-10,-8}) == -73)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-6,-3,-4,5,-6,7,-8,9,4,8,-2,2}) == -15)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-7,-6,-5,-3,-9,-100,-2,-1,-5,-7}) == -164)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,1,-2,3,-4,5,-6,7,-8,9,4,-3,2,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,4,-3,2,-1,4}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,2,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,20,-30,40,-50,60,5,80,-90,100,80,80}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({50,-50,100,-100,50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-4,5,-6,7,-8,9,4,-2,2}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-30,40,-50,60,-70,80,-90,100}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,0,1,-1,1,0,-1,-70,-1,1,-1,1,-1,1,-1,1,-1,1,0,1}) == -72)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,0,1,-1,1,-1,-70,-1,1,-1,1,-1,1,-1,1,-1,1,0,1,1}) == -72)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-6,-5,-4,-3,-2,-8,-1,-10}) == -66)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-9,20,-30,40,-50,60,80,-70,80,-90,100,20}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,0,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({50,-50,100,-100,50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,3,-4,5,-6,7,-8,-3,2,-1,4}) == -11)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-30,1,-1,1,-1,1,-1,1,-1,0,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1}) == -30)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-4,-10,-30,40,-50,60,-70,-70,80,-89,100}) == -149)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,-1,1,-1,1,-1,1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-9,-9,20,-30,40,-50,60,-70,80,-90,100}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,4,-5,6,-7,8,-9,10}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,3,50,-60,70,-80,90,-100,10}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-4,30,5,-6,7,-8,9,4,-2,2}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-29,-30,-50000,-30,40,-50,60,-70,80,-90,100}) == -50129)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-5,-60,-3,-9,-2,-1,-5}) == -119)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,1,-2,3,-4,5,-6,7,-8,4,-3,2,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-100000,-4,-3,-2,-2,-9}) == -100065)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,-1,1,-1,1,-1,1,-20,1,-1,1,-1,1,-1}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,3,-4,50000,5,-6,7,-8,-3,2,-1,4}) == -11)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,-10,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000}) == -150010)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,70,-80,90,-100,50}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-4,-3,-9,-2,-2,-1}) == -66)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-7,-6,-5,-4,-3,-2,-1}) == -47)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-70,-1,1,1,-1,1,-1,1,-1,2,-1}) == -71)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,10,-20,30,-40,50,-60,70,-80,90,-100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,-8,-9,-8,-7,-5,-60,-3,-9,-2,-1,-5,-8}) == -125)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-30,-50,60,-70,80,-90,100}) == -110)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,1,-1,1,-1,1,7,2,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,0,0,1,-1,1,-1,-70,-1,1,-1,1,-1,1,-1,1,-1,1,0,1,1,-1}) == -72)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-7,-10,-9,-8,-7,-6,-5,-4,-9,-2,-1,-8}) == -76)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,-5,6,-7,8,-9,10,-7,10}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-29,3,-4,5,-6,7,-8,9,-10}) == -33)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-9,20,-30,40,-50,60,80,-70,80,-90,100,80,20,-50}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,1,-1,1,-1,0,-1,1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-8,-9,20,-30,40,-50,60,80,-70,80,-90,100}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,0,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,49,-50,100,-100,50,-50,100,100}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,-8}) == -63)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-9,20,-30,21,40,-50,80,80,-90,100,20,80}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-4,6,5,-6,7,-8,9,4,-2,2}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,-8,-8}) == -71)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,-1,1,-1,1,-1,0,1,-1,1,-1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-1,-7,-6,-5,-4,-3,-2,-1,-9}) == -65)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-9,-10,-30,-30,40,-50,0,60,81,-90,100}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,3,50,-60,70,-21,-80,90,-100,10}) == -111)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-28,-30,-50000,-30,40,-50,60,-70,80,-90}) == -50128)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,-5,6,-7,8,-7,-9,10,-7}) == -16)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,2,1,-2,3,-4,5,-6,7,-8,9,4,-3,2,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-30,-29,3,-4,5,-6,7,-8,9,-10}) == -63)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,-3,-4,50000,5,-6,7,-8,-3,2,-1,4,-8}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-4,-3,-9,-2,-2,-1,-6,-5}) == -77)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,1,-2,3,-4,5,-6,7,-8,4,-3,2,-1,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,30,1,-1,1,-1,-1,0,-1,1,-1,1,-1}) == -3)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,0,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,0}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({30,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,49,-50,100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,-1,1,1,-1,1,-1,1,-1,90,0,1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,0}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,0,0,1,-1,1,-1,-70,-1,1,-1,1,-1,1,-1,1,-1,1,0,1,1,-1,0}) == -72)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,0,1,-1,1,-1,1,-1,1,-1,2,-1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({2,1,-1,1,1,-1,1,-1,1,-1,-1,1,-1,1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,6,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000}) == -100000)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-29,3,4,-4,5,-6,7,-8,9,-10}) == -29)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,-10,100000,-50000,50000,-100000}) == -100010)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-7,-6,-5,-3,-9,-100,-1,-1,-5}) == -156)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-9,20,-30,40,-50,-9,60,-70,80,-90,100}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-10,-9,-7,-6,-5,-3,-9,-100,-2,-1,-5}) == -167)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,50,3,-4,5,-6,7,-8,9,-10}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,1,-2,3,5,-6,-8,4,-3,2,-1}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,-100000,-100000}) == -250000)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-9,-10,-30,-30,40,-90,-50,0,81,-90,100}) == -188)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,4,-6,7,-8,4,-3,2,-1,-8}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,-10,100000,-50000,50000,-100000,-50000}) == -150010)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,-1,1,-1,1,-1,-30,-1}) == -33)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-1,-7,-6,-5,-4,-3,-2,100000,-1,-9}) == -55)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,3,-4,5,-6,7,-8,-3,-3,2,-1,4}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-9,20,-30,40,-50,60,-70,80,100}) == -70)){ tests_passed++; } total_tests++;

    if((minSubArraySum({0,-1,1,1,-2,-1,-1,1,-1,1,-1}) == -4)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-4,-3,-29,-2,-1,-8,-8}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-70,-1,1,1,0,-1,1,-1,0,-1,2,-1}) == -71)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-9,20,-30,40,-50,60,80,-70,80,-90,100,100}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,0,1,-1,1,-1,1,-1,1,-1,0,-1,1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-1,-7,-6,-5,49,-3,50000,-2,100000,-1,-9}) == -46)){ tests_passed++; } total_tests++;

    if((minSubArraySum({20,-30,40,-50,-9,60,-70,80,-90,100}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({60,3,-4,50000,5,-6,7,-8,-3,2,-1,60}) == -11)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-30,-9,20,-30,40,-50,80,-70,80,-90,100,20}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-7,-6,-5,-3,-9,6,-2,-1,-5}) == -51)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-9,-10,-30,40,-90,-50,0,81,-90,-30}) == -188)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,50,70,-80,90,-100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,1,-1,0,-1,1,-1,1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,-5,6,-7,8,10,-7}) == -7)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,3,-4,50000,5,-6,7,-8,-3,2,-1,4,-6}) == -12)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,0,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,-1,1,-1,1,-1,1,-1,0,1,-1,1,-1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,-1,1,1,-1,1,-20,1,-1,1,-1,1,-1}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-9,-9,20,-30,40,-50,60,-70,-50000,-90,100,40}) == -50160)){ tests_passed++; } total_tests++;

    if((minSubArraySum({50,-50,100,-100,-99,50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100}) == -199)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,-10,100000,-50000,50000,-100000,-50000,-50000}) == -200010)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-30,-30,40,-50,60,-70,-90,100,-10}) == -180)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,-1,1,-1,1,-1,-30,-1,-1}) == -34)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-89,-9,-8,-7,-6,-5,-100000,-4,-3,-2,-2,-9}) == -100154)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-4,-99,-3,-2,-1,-8}) == -162)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,2,1,-2,3,-4,-50,-6,7,-8,9,4,-3,2,-1}) == -61)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,-5,6,-7,8,-7,-9,10,-7,-9}) == -22)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,-30,1,-1,90,0,0,1,-1,1,-1,-70,-1,1,-1,1,-1,1,-1,1,-1,1,0,1,1,-1,0}) == -72)){ tests_passed++; } total_tests++;

    if((minSubArraySum({30,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-101,50,49,-50,100}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,-8,-9,-8,-7,-5,-3,-9,-2,-1,-5,-8}) == -65)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,3,50,21,70,-80,90,-100,10}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,70,-80,-29,-100}) == -209)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,3,50,-60,70,-80,90,10,-100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,-8,-9,-9,-7,-5,-60,-3,-9,-2,-1,-5,-8}) == -126)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,-1,1,-1,1,-1,0,-1,1,-1,1,-1,1,-1,-1,1}) == -3)){ tests_passed++; } total_tests++;

    if((minSubArraySum({50,-50,100,-100,-99,50,100,-100,50,-50,100,-100,50,-50,100,50,-50,100}) == -199)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-2,-8,-7,-6,-5,-4,-3,-9,-2,-1,-2,-1}) == -60)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,0,0,1,-1,1,-1,-70,-1,1,-1,1,1,-1,1,-1,1,-1,1,0,1,1,-1}) == -72)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,-60,70,-80,90,10}) == -80)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,-8,-9,-9,-7,-5,-60,-9,-2,-1,-5,-8}) == -123)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,1,-1,1,-1,1,-1,1,-1,1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,-5,6,-7,8,-9,10,8}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,0,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,-1,-2,1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,1}) == -3)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,1,-1,1,-1,1,-1,1,2,1,-1,1,-1,1,-1,90,0,1,-1,1,-1,1,-1,1,-1,2,-1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({2,-1,0,1,1,-1,1,-100,1,-1,1,-1}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,1,-2,3,-4,5,-6,7,-8,9,4,-3,2,-1,9}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-4,-3,-2,-8,-1,-10}) == -73)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,1,-1,1,-1,1,-6,2,-1}) == -6)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,-1,1,-1,0,1,-1,1,-1,1,-1,1,-1,0,-1,1,-1}) == -3)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,-8,-9,-7,-5,-60,-9,-2,-1,-5,-8}) == -114)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-7,-6,-5,-9,-9,-100,-2,-1,-5}) == -163)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,50}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-8,-7,-6,-5,-4,-3,-2,50,-1,-8}) == -45)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,-1,1,-1,1,-1,1,49,-20,1,-1,1,-1,1,-1}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-9,20,-30,40,-50,60,80,-70,80,-90,100,-50}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,5,-6,7,-8,4,-3,2,-1,4}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,3,-4,4,-6,7,-8,9,4,-3,2,3,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,-6,-5,6,-7,8,-9,10}) == -13)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,1,-2,3,-4,5,-6,7,-8,5,2,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-7,-6,-5,-4,-3,-2,50,-1,-8}) == -46)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,50,-30,-5,40,-50,60,-70,81,-90,100}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-9,20,40,-50,60,-70,80,100}) == -70)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-21,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,50}) == -121)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,1,-1,0,-99,-1,1,-1,1}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-10,-9,-7,-6,-5,-3,-9,-100,-2,-1,-4}) == -166)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-9,20,-30,40,-50,60,-70,80,-90,100,-30,-30,-30}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-7,-6,-5,-4,-3,-9,-2,-1}) == -56)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-30,-50,60,-70,-7,-90,100}) == -197)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,70,-79,90,-100,50}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,2,2,5,-80,-6,7,-8,9,-10}) == -88)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-4,6,5,-6,6,-8,9,4,-2,2,-4}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({50,-50,100,-100,50,100,-100,50,-50,100,50,-50,49,100,-100,50,-50}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,-1,-89,-1,1,-1,0,-1,1,-1,1,-1,1,-1,-1,1}) == -93)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-70,-1,1,0,-1,1,-1,1,-1,2,-1}) == -71)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,1,-2,5,-6,4,-3,2,-1,-1}) == -6)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-7,-6,-5,-4,-3,-2,50,-1,9,9}) == -46)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,1,-1,1,-1,1,-1,-1,1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,1,-1,1,-1,1,-6,2,-1,-1}) == -6)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-9,-30,40,-50,60,80,-70,80,-90,100,100}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-89,-9,-8,-7,-6,-5,-100000,-4,-3,-2,-2,-9,-9}) == -100163)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-21,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,51}) == -121)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,-8,-9,-8,-7,-5,-60,-3,-2,-1,-5,-8,-8}) == -124)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,0,1,-1,1,-1,1,-1,-2,1,-1,0,-1,1,-1}) == -4)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,3,-4,5,-6,7,-6,-8,9,4,-2,2,5}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,70,-80,90,-100,50,50}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-30,-50,60,-70,-7,-90,100,-70}) == -197)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-7,-6,-5,-3,-70,-100,-2,-1,-5,-7}) == -225)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-9,20,40,-50,60,-70,80,100,-9}) == -70)){ tests_passed++; } total_tests++;

    if((minSubArraySum({50,-50,100,-100,50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,99,50}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,0,-99,-1,90,0,1,-1,1,-1,-70,-1,1,-1,1,-1,1,-1,1,-1,1,0,1,-1,1}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,1,-1,-1,1,-1,1,-1,1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,90,0,1,-7,-1,1,-1,1,0,1,-1,2,-1,1,-1,1,-1,1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,-1,1,-50000,-1,1,-1,1,0,-1,1,-1,1,-1,1,-1,1}) == -50001)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-7,-6,-3,-70,-2,-1,-5,-7}) == -120)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,1,-1,1,1,-1,1,0,-99,-1,90,0,1,-1,1,-1,-70,-1,1,-1,1,-1,1,-1,1,-1,1,0,1,-1,1}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,50000,100000,-50000,-10,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000}) == -150010)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,0,1,-1,1,-1,1,-1,-2,1,-1,0,-1,1,-79,-1}) == -83)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-21,-100000,100000,-50000,-100000,-100000}) == -250021)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,-5,6,-7,8,-7,-9,10,-7,4,10}) == -16)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-21,-40,50,-60,70,-21,-80,90,-100,10}) == -112)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-4,30,5,-6,7,-8,9,4,-2,50}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,4,100,7,-8,4,-3,2,-1,-8}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-21,-40,-60,70,-21,-80,90,-100,10}) == -162)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,20,40,-50,60,-70,80,100}) == -70)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100,-10,-30,-50000,-30,40,-50,60,-70,-2,80,39,-90,100,100}) == -50092)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,-1,1,-1,1,-1,1,-20,1,-1,1,-1,-4,1,-1}) == -24)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,-8,-9,-9,-7,-5,-90,-60,-3,-9,-2,-1,-5,-8}) == -216)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-4,-99,-3,-2,-1,30,-8}) == -154)){ tests_passed++; } total_tests++;

    if((minSubArraySum({60,3,-4,5,-6,7,-5,-8,-3,2,-1,60}) == -16)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-7,-7,-6,-5,-4,-50000,-2,-2,-8}) == -50060)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-7,-6,-5,-9,-9,-100,-2,-1,-5,-5,-9}) == -177)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,4,-5,6,39,-7,8,-9,10}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,0,-70,-1,1,1,0,1,-1,100000,-1,2,-1}) == -71)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-30,-30,40,-50,60,-70,-89,-90,100,-10}) == -269)){ tests_passed++; } total_tests++;

    if((minSubArraySum({30,-100,50,-50,100,-100,50,100,-100,50,-50,100,51,-100,50,-50,100,-101,50,49,-50,100,30}) == -101)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,-5,6,-7,8,-9,10,-70}) == -70)){ tests_passed++; } total_tests++;

    if((minSubArraySum({20,-30,40,-9,60,-70,80,-90,100,100}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,0,1,-1,1,-1,-70,-1,1,-1,-1,1,-1,1,-1,1,0,1}) == -73)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-6,-3,-4,5,-6,7,-8,9,4,8,-2,2,-6}) == -15)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,50,-30,-5,40,-50,60,50,-70,81,-90,100}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-7,-6,-5,5,-3,-2,50,-1,-8}) == -37)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,-4,5,-6,7,-8,4,-3,2,4}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,49,-9,-9,-7,-5,-90,-60,-3,-9,-2,-1,-7,-8}) == -210)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,-5,6,-50,8,-7,-9,10,-7}) == -58)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-4,30,5,-6,7,-8,9,4,-2,50,1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,0,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,0,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-30,-50,60,-70,-7,-90,100,100}) == -197)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,1,-1,1,-1,1,1,2,-1,1,-1,1,-1,90,-1,-89,-1,1,-1,0,-1,1,-1,1,-1,1,-1,-1,1,1}) == -93)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,70,-78,90,-100,50}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-70,-1,1,0,-1,-8,1,-1,1,-1,2,-1}) == -79)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,1,-2,3,-4,5,-6,7,-8,9,4,-3,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,-1,1,1,-1,1,-1,1,-1,90,0,1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,0,0}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({20,-30,40,-9,60,-70,39,80,-90,100,100,-90}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,0,-1,0,1,-1,1,-1,1,-1,-2,1,-1,0,-1,1,-1}) == -5)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,1,-2,-4,5,-6,7,-8,4,-3,2,-1}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,1,-1,1,-2,-1,1,-1,1,-1,1,-1,1,-1,90,0,1,-7,-1,-70,1,-1,1,0,1,-1,2,-1,1,-1,1,-1,1}) == -78)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,1,-1,1,1,-1,1,2,1,-1,1,-1,1,-1,90,0,1,-1,1,-1,1,-1,1,-1,2,-1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-4,30,5,100000,-6,7,-8,9,4,-2,50}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,-5,6,-7,-90,-9,10}) == -106)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100,-10,-30,-50000,-30,40,-50,60,-70,-2,80,39,100,100}) == -50092)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,-10,100000,-50000,50000,-100000,-50000,-50000,50000}) == -200010)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-9,20,-30,40,-50,60,80,-9,-70,80,-90,100}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,1,70,-78,90,-100,50}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,1,-1,1,-20,1,-1,21,1,-1,1,-1}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-7,-6,-5,-9,-9,-100,-2,-1}) == -158)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-9,-7,-6,-5,5,-2,50,-1,-8}) == -27)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,-1,-1,1,-1,1,-1,-1}) == -4)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-5,-60,-3,1,-2,-1,-5}) == -109)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,1,-1,1,-1,1,-1,1,-1,1,1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-4,-20,30,-40,50,70,-80,90,-100,50}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-9,40,-50,60,-70,100,-50}) == -70)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-6,-3,-4,5,-6,7,-8,9,4,8,-2,2,9}) == -15)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,4,-5,6,-7,8,-7,-9,10,-7,4,10,2}) == -16)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,1,-1,1,-1,1,-1,1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-20,30,50,70,-80,90,-100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,1,-1,1,-2,-1,1,-1,1,-1,1,-1,1,-1,90,0,1,-7,-1,-70,1,-1,1,100000,0,1,-1,2,-1,1,-1,1,-1,1}) == -78)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-21,-50,100,-100,50,-50,-99,-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,50}) == -320)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,1,-1,1,99,-1,1,2,1,-1,1,-1,1,-1,90,0,1,-1,1,-1,1,1,-1,2,-1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,100000,-50000,50000,-100000,100000,-50000,50,50000,-100000,100000,-50000,50000,-100000,100000,-50000,-100000,-100000}) == -250000)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,-10,100000,-3,-50000,50000,-100000,-50000,-50000}) == -200013)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,-1,1,1,-1,1,-20,1,-1,1,-1,1,1,-1}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-6,-5,-4,-3,-2,-1,-10,-8,-10}) == -76)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,3,5,-6,7,-8,4,-3,2,-1,4,-2,4}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,50,70,-80,-29,-100,50,-29}) == -209)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,-5,6,-7,8,-9,10,-7,10,2}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,0,1,-1,90,0,1,-1,1,-1,-70,-1,-101,-1,1,-1,1,-1,1,-1,1,0,1,-1}) == -174)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,1,-1,1,-20,1,-1,21,1,-1,1,-1}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,-5,6,-7,8,-9,10,6,4}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,-1,1,-1,1,-1,1,1,-1,1,-1,-4,1,-1}) == -5)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,0,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,0,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,50,-30,-5,40,-50,60,-70,81,-2,100}) == -70)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-7,-6,-5,-3,-9,-100,-2,-1,-7}) == -159)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,-10,-3}) == -68)){ tests_passed++; } total_tests++;

    if((minSubArraySum({50,-50,100,-100,-99,50,100,-100,50,-50,100,-100,50,-50,100,50,-50,100,-100}) == -199)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,50,-60,70,-80,90,10}) == -80)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,-8,-9,-8,-7,-5,-60,-3,-9,-2,-1,-5,-8,-5,-5}) == -135)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,0,1,-1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,-1,1,-1,1,-1,1,-1,1,1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,-5,6,-7,8,-9,10,-7,10,2,10}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-9,-9,20,-30,40,-50,60,-70,-8,-50000,-90,100,40,-8}) == -50168)){ tests_passed++; } total_tests++;

    if((minSubArraySum({40,50,-30,-5,40,60,-70,-71,81,-90,100}) == -150)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,4,-50,-5,6,-7,8,-9,10,-7,10,2}) == -57)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-30,40,-50,60,-70,-70,80,-89,60}) == -149)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100,-10,-30,-30,-50,60,-70,-2,80,39,100,100,-30}) == -132)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-101,-20,30,1,70,-100000,90,-100,50}) == -100030)){ tests_passed++; } total_tests++;

    if((minSubArraySum({60,3,-4,50000,5,-6,7,-8,-3,2,-1,60,2}) == -11)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,1,-1,1,-1,1,-1,1,-1,1,-1,0,-1,0,-1}) == -3)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-9,-9,20,-30,40,-50,60,-70,80,-90,100,-30}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-21,-40,50,-60,70,-21,-80,90,-100,10,10}) == -112)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-1,1,-2,-1,1,-1,1,-1,1,-1,1,-1,90,0,1,-7,-1,-70,1,-1,1,0,1,-1,2,-1,1,-1,1,-1,1}) == -78)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,50,3,-4,-10,5,-6,7,-8,9,-10}) == -17)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-49,-9,-30,40,-50,60,80,-70,80,-90,100,100}) == -106)){ tests_passed++; } total_tests++;

    if((minSubArraySum({30,-100,50,-50,100,-100,50,-50,100,-100,80,50,-50,100,-100,50,-50,100,-100,50,49,-50,100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({50,-50,100,-100,50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,99,50,-50}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-3,-4,5,1,-6,7,-8,9,4,-2,2,9}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-9,40,-50,60,-70,-50}) == -120)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-4,6,5,-6,-8,9,4,-2,2}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,100000,-50000,50000,-100000,100000,-50000,50,50000,-100000,50000,100000,-50000,50000,-100000,100000,-50000,-100000,-100000}) == -250000)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-7,-6,-5,-4,-3,-2,50,-1,-8,-6}) == -46)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,21,1,-1,1,-1,1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-70,-1,1,0,-1,-8,1,-1,1,-1,2,-1,-1}) == -79)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,1,-1,1,-1,1,-1,90,0,0,1,-1,1,-1,-70,-1,1,-1,1,-1,1,-2,-1,1,-1,1,0,1,1,-1}) == -74)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,1,-1,1,-20,1,-1,21,10,-1,1,-1}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-3,4,-5,6,-7,10,-7}) == -7)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,30,5,-6,7,-8,9,4,-2,50}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-29,3,-4,5,-6,7,-8,9,-10,-10}) == -43)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,-1,1,-1,1,-1,1,1,2,-1,1,-1,1,-1,90,-1,-89,0,1,-1,0,0,1,-1,1,-1,1,-1,-1,1,1}) == -91)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,-21,-40,50,-60,70,-21,-21,-80,90,-100,10}) == -153)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,1,-1,-1,1,-1,1,-1,1,1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({2,1,-1,1,1,-1,-8,1,-1,-1,1,-1,1,-1}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-1,-1,-5,49,-3,50000,-9,-2,100000,-1,-9}) == -34)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,20,-30,40,-50,60,-70,80,100}) == -70)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-21,-39,50,-60,70,-21,-80,90,-100,10,-100}) == -201)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,-1,1,2,-1,1,-1,1,-1,1,-1,1,-1,1,-1,1,81,1,-1,1,-1,1,-1,1,-1,-1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({50,-50,100,-100,-99,50,100,-100,50,-50,100,-100,50,-50,100,50,-50,100,50}) == -199)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,-1,1,-1,1,0,-1,-7,-1,1,-1,1}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({60,3,-4,50000,5,-6,7,-8,-3,2,-1,60,2,-6}) == -11)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-10,-9,-7,-6,-5,-3,-8,-100,-2,-1,-4}) == -165)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,0,-1,1,1,-1,1,-1,1,-1,90,0,1,1,-1,1,-1,1,-1,1,-1,1,-1,1,-1,89,1,0}) == -1)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-2,-4,5,-6,7,-8,9,-10}) == -10)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100,-10,-30,-50000,-30,40,-50,60,-70,-2,80,39,100,100,-50000}) == -99773)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-4,6,5,-6,7,-8,9,4,-2,2,-6}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,-71,4,-5,6,-50,8,-7,-9,-71,10,-7}) == -195)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,101,-8,20,40,-50,60,80,100,-9}) == -50)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-30,-9,20,-30,40,-50,80,80,-90,100,20}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,-8,-9,-9,-7,-5,-60,-3,-9,-2,-1,-5,-8,3,-9,-2,-8}) == -142)){ tests_passed++; } total_tests++;

    if((minSubArraySum({89,-10,-9,-7,-6,-3,-70,-2,49,-5,-7}) == -107)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,1,-1,1,-1,1,-1,1,-1,1,-1,1,-2,-1,90,0,1,-7,-1,1,-1,1,0,1,-1,2,-1,1,-1,1,-1,0,100000}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-5,-60,-3,-9,-2,30,-5}) == -113)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,-1,1,-1,1,-1,1,-20,1,-1,-19,1,-1,1,-1}) == -39)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-8,-7,-6,-5,-4,-3,-2,-8,-1,-10,-6}) == -79)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,3,50,-60,70,-80,-100,10}) == -180)){ tests_passed++; } total_tests++;

    if((minSubArraySum({20,-30,-50,60,-70,80,-90,100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,80,-3,4,-5,6,-7,8,-9,10,8,-7}) == -9)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-9,-7,-7,-6,-5,-50000,-2,-2,-8}) == -50056)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-10,-6,-5,-3,-9,-100,-2,-1,-4}) == -150)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,-8,-9,-9,-7,-5,-60,-9,-2,-1,-5,-8,-60}) == -183)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-30,-30,40,-50,60,-70,81,-90}) == -99)){ tests_passed++; } total_tests++;

    if((minSubArraySum({20,-50,60,-70,80,-90,100,20}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,1,-1,1,-1,1,-1,1,49,-20,1,-1,1,-1,1,-1,1}) == -20)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-21,-39,50,70,-21,-80,90,-100,10,-100,90}) == -201)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-1,2,80,-3,4,-5,6,-7,8,-9,10,8,-7,-9}) == -16)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-4,6,-6,7,-8,9,4,-2,2}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,50,70,-80,90,90}) == -80)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,21,1,-2,3,5,-6,7,-8,4,-3,2,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({60,3,-4,5,-6,7,-5,-8,-3,2,-1,60,-6,3}) == -16)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-40,3,50,21,70,-80,89,-100,10}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,50,70,90,-100}) == -100)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,1,-2,3,-4,5,-6,7,-8,5,2,-1,-1}) == -8)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-100,50,-50,100,-100,50,-50,100,-100,50,-50,100,-100,50,-50,-50,100,-100,50,-50,100,50}) == -150)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-10,-10,-9,-7,-6,-5,-3,-9,-100,7,-1,-5}) == -159)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-8,-9,20,-30,40,-9,60,89,-70,80,-90,100}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({1,-1,1,1,-1,80,1,-1,1,-49,2,-1}) == -49)){ tests_passed++; } total_tests++;

    if((minSubArraySum({21,-1,1,1,-1,0,-1,1,-1,1}) == -2)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-3,21,1,-2,3,5,-8,-6,7,-8,4,-3,2,-1}) == -15)){ tests_passed++; } total_tests++;

    if((minSubArraySum({3,-8,-9,-8,-7,-5,-60,-3,-9,-2,-1,-5,-8,-60}) == -185)){ tests_passed++; } total_tests++;

    if((minSubArraySum({20,-31,40,-9,60,-70,80,-90,100,100,-90}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-2,6,-4,5,-6,7,-8,-3,-3,2,-1,4}) == -14)){ tests_passed++; } total_tests++;

    if((minSubArraySum({20,-8,-10,20,-30,40,-50,60,80,-70,80,-90,100,80,20,-50}) == -90)){ tests_passed++; } total_tests++;

    if((minSubArraySum({100000,-50000,50000,-100000,100000,-50000,50000,-100000,50000,100000,-50000,-10,-100000,100000,-50000,50000,-100000,100000,-50000,50000,-100000,100000}) == -150010)){ tests_passed++; } total_tests++;

    if((minSubArraySum({-40,-10,-9,-7,-7,-6,-5,-50000,-2,-2,-8}) == -50096)){ tests_passed++; } total_tests++;

    if((minSubArraySum({10,-20,30,-21,-40,50,-60,50000,70,-21,-80,90,-100,10,10}) == -111)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


