#include <vector>
using namespace std;

int sum_squares(const vector<int>& lst){
    int sum = 0;
    for (size_t i = 0; i < lst.size(); ++i) {
        if ((i+1) % 3 == 0 && (i+1) % 4 != 0) // multiple of 3 but not 4
            sum += pow(lst[i], 3);  // cube the number
        else if((i+1)%3==0 && (i+1)%4==0)  // multiple of both 3 and 4, so square it.
             sum += pow(lst[i], 2);     // square the number
        else    // index is not a multiple of three or four, do nothing
            continue;
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

    if((sum_squares({1,2,3}) == 6)){ tests_passed++; } total_tests++;

    if((sum_squares({1,4,9}) == 14)){ tests_passed++; } total_tests++;

    if((sum_squares({}) == 0)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,1,1,1,1}) == 9)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-1,-1,-1,-1,-1,-1,-1,-1}) == -3)){ tests_passed++; } total_tests++;

    if((sum_squares({0}) == 0)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-5,2,-1,-5}) == -126)){ tests_passed++; } total_tests++;

    if((sum_squares({-56,-99,1,0,-2}) == 3030)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,0,0,0,0,0,0,0,-1}) == 0)){ tests_passed++; } total_tests++;

    if((sum_squares({-16, -9, -2, 36, 36, 26, -20, 25, -40, 20, -4, 12, -26, 35, 37}) == -14196)){ tests_passed++; } total_tests++;

    if((sum_squares({-1, -3, 17, -1, -15, 13, -1, 14, -14, -12, -5, 14, -14, 6, 13, 11, 16, 16, 4, 10}) == -1448)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,3}) == 6)){ tests_passed++; } total_tests++;

    if((sum_squares({1,4,9}) == 14)){ tests_passed++; } total_tests++;

    if((sum_squares({}) == 0)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,1,1,1,1}) == 9)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-1,-1,-1,-1,-1,-1,-1,-1}) == -3)){ tests_passed++; } total_tests++;

    if((sum_squares({0}) == 0)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-5,2,-1,-5}) == -126)){ tests_passed++; } total_tests++;

    if((sum_squares({-56,-99,1,0,-2}) == 3030)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,0,0,0,0,0,0,0,-1}) == 0)){ tests_passed++; } total_tests++;

    if((sum_squares({-16,-9,-2,36,36,26,-20,25,-40,20,-4,12,-26,35,37}) == -14196)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-3,17,-1,-15,13,-1,14,-14,-12,-5,14,-14,6,13,11,16,16,4,10}) == -1448)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,6,8,10,12}) == 1090)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,1,0,0,0,0}) == 1)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,3,4,5,6,7,8,9,10}) == 1039)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,9,12,15,18,21,24,27}) == 23709)){ tests_passed++; } total_tests++;

    if((sum_squares({-2,5,-6,7,-8}) == -460)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,6,8,10,12,14,16,18,20}) == 7534)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,9,-10}) == 1007)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,9,12,15,18,21,24,27,30}) == 24609)){ tests_passed++; } total_tests++;

    if((sum_squares({0,1,0,1,0,1,0,1,0,1}) == 5)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0}) == 0)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0}) == 0)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,9,-10,-8}) == 999)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,9,12,6,19,18,21,24,27}) == 15301)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,6,9,-10}) == 465)){ tests_passed++; } total_tests++;

    if((sum_squares({3,9,12,5,19,18,2,21,24,27}) == 21510)){ tests_passed++; } total_tests++;

    if((sum_squares({3,3,6,12,15,18,21,24,27}) == 23703)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,9,12,15,18,21,24,27,30,21}) == 24630)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0}) == 0)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,9,-10,-8,5}) == 1004)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,9,12,18,21,24,27}) == 6624)){ tests_passed++; } total_tests++;

    if((sum_squares({6,18,12,15,18,21,24,27,30}) == 33747)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,6,8,10,12,10,10}) == 1200)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,9,12,18,21,24,28}) == 6625)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,-8,6,-10}) == -793)){ tests_passed++; } total_tests++;

    if((sum_squares({3,3,-8,6,12,15,18,21,24,27}) == 16681)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,9,22,12,18,21,24}) == 2719)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,1,0,1,0,0,0,0}) == 2)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,3,0,0,0,0,0}) == 27)){ tests_passed++; } total_tests++;

    if((sum_squares({3,9,12,5,19,18,2,21,24}) == 20781)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,-9,7,-8,9,-10,-8}) == -224)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,9,12,15,18,21,24,27,30,21,24}) == 24654)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0}) == 0)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,9,12,15,21,24,27,30}) == 31167)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,4,-4,5,-6,7,18,9,-10,-8,5}) == 1031)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,9,12,15,18,21,24,27,12}) == 23853)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,9,22,12,18,21,25}) == 2720)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,2,-4,5,-6,7,-8,9,-10,-8}) == 998)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,6,10,12,10,10}) == 1952)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,14,10,15,21,24,27,23,30}) == 17195)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,2,-2,5,-6,7,-8,9,-10,-8}) == 986)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,-9,7,-8,9,7,-8}) == -207)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-6,7,-8,9,-10,-8,5}) == -1049)){ tests_passed++; } total_tests++;

    if((sum_squares({6,9,12,15,18,21,24,27,12}) == 8466)){ tests_passed++; } total_tests++;

    if((sum_squares({7,1,-2,3,-4,-6,7,-8,9,-10,5}) == 862)){ tests_passed++; } total_tests++;

    if((sum_squares({23,6,8,10,12,10,10}) == 2481)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,4,-4,5,-6,7,18,9,0,-8,5}) == 931)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,3,0,0,8,0,0}) == 35)){ tests_passed++; } total_tests++;

    if((sum_squares({9,12,15,18,21,24,27,12}) == 10458)){ tests_passed++; } total_tests++;

    if((sum_squares({21,6,22,12,18,21,12,24}) == 6634)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,3,0,23,0,8,0,-1,0}) == 1067)){ tests_passed++; } total_tests++;

    if((sum_squares({3,3,6,12,15,18,21,27}) == 4023)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0}) == 0)){ tests_passed++; } total_tests++;

    if((sum_squares({2,30,6,9,12,18,21,24,28,28}) == 25068)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,6,0,0,0,0,0}) == 6)){ tests_passed++; } total_tests++;

    if((sum_squares({2,30,6,12,18,21,24,0,28}) == 28565)){ tests_passed++; } total_tests++;

    if((sum_squares({1,19,3,-4,-6,7,-8,9,-10,-8,5}) == -1028)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,3,0,0,0}) == 9)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,-9,7,-8,9,7,-8,-6}) == -171)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,9,-10,-8,3}) == 1002)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,9,12,-6,15,18,21,24,27}) == 14865)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,3,14,0,0,3}) == 2756)){ tests_passed++; } total_tests++;

    if((sum_squares({2,30,6,13,18,21,24,0,28}) == 28590)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,12,15,18,21,24,27,30,21}) == 34149)){ tests_passed++; } total_tests++;

    if((sum_squares({9,14,15,18,21,24,27,12}) == 10460)){ tests_passed++; } total_tests++;

    if((sum_squares({-2,5,-6,-6,7,-8,-6}) == 410)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,-2,3,5,-7,7,-8,1,9,-10,-8,3,5}) == 247)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,4,-4,5,-6,7,18,9,0,5}) == 939)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,21,-10,-8,3}) == 9534)){ tests_passed++; } total_tests++;

    if((sum_squares({2,30,6,13,18,20,24,0,28}) == 28589)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,9,12,18,16,21,24,28}) == 28433)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,9,-10,-7,5}) == 1005)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,6,8,10,12,14,16,20}) == 9302)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,3,0,0,0,0,0,0}) == 27)){ tests_passed++; } total_tests++;

    if((sum_squares({30,6,13,18,21,24,0,28}) == 10556)){ tests_passed++; } total_tests++;

    if((sum_squares({2,30,6,12,18,21,24,28}) == 6641)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,24,0,0,0,0}) == 24)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,3,14,24,19,0,0,3}) == 3147)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,27,3,0,23,0,8,0,-1,0}) == 1796)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,-9,7,-8,9,7,-8,-6,3}) == -168)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,9,8,12,15,18,21,24,30,21}) == 16921)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,9,22,11,18,21,24}) == 2322)){ tests_passed++; } total_tests++;

    if((sum_squares({2,-9,6,8,12,18,21,24,28,28,12}) == 25024)){ tests_passed++; } total_tests++;

    if((sum_squares({3,10,6,9,8,12,15,18,21,24,30,21}) == 10761)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,2,22,12,18,21,25}) == 2713)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,2,-4,5,-6,7,9,-10,-8}) == -742)){ tests_passed++; } total_tests++;

    if((sum_squares({13,3,-8,6,12,15,18,21,24,27}) == 16841)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,21,-10,-8,8}) == 9539)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,-4,5,-6,7,9,-10,-8}) == -626)){ tests_passed++; } total_tests++;

    if((sum_squares({10,6,9,8,12,15,18,21,24,30,21}) == 17012)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,3,0,3,0,0,0}) == 30)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,4,-4,5,-6,7,18,9,5}) == 959)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,3,11,14,24,19,0,0,3,0}) == 1952)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-3,3,-4,5,-6,7,-8,9,-10,-7,5}) == 1004)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,6,0,0,0,0,0}) == 36)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,6,13,10,12}) == 1195)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,4,-4,5,-6,7,18,0,-8,5,0}) == 274)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-4,5,-6,7,-8,9,-10,-8}) == -1052)){ tests_passed++; } total_tests++;

    if((sum_squares({3,2,22,12,18,21}) == 6030)){ tests_passed++; } total_tests++;

    if((sum_squares({21,5,22,12,18,21,12,24}) == 6633)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,4,5,6,7,8,9,10,11,12,13,14}) == 1674)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,9,-10,11,-12,13,-14}) == 1161)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5}) == 288)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-15,-16,-17,18,19,20}) == -915)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5}) == 167)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,-4,11,12,13,14,15,16,17,18,19,20,-20,-19,-18,-17,-16,-15,-14,-13}) == -2851)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-9,-3,10,11}) == 1272)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,70,64,72,80,82,88,92,94}) == 722682)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11}) == -718)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}) == 5817)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,9,-10,11,-12,20,-14}) == 1392)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-15,-16,-17,-17,18,19,20}) == -552)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,0}) == 5817)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-5,-8,9,-10,11,-12,13,-14}) == -106)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-5,-8,9,-10,11,-12,13,-14,1}) == -105)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,-9,3,3,4,4,4,4,4,5,5,5,5,3}) == -451)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-2,5,-6,7,-5,-8,9,-10,11,-12,13,-14,1}) == 315)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,0,11,12,13,14,15,16,17,18,19,20,21,0}) == 4197)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,8,-9,-3,4,11}) == 1912)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,70,64,72,80,82,88,92,94,50}) == 847682)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,5,-6,7,-8,9,5,-10,11,-12,13,-14}) == -136)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,92,5,5,5,5,5}) == 263)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,18,19,20}) == -1492)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,-15,-3,-3,-3,-3,-3,-4,-4,-4,-4,92,5,5,5,5,5}) == 484)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,72,-3,-3,-3,-4,-4,-4,-4,92,5,5,5,5,1}) == 783899)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,70,64,72,80,82,88,-1,94,50}) == 839219)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5}) == 310)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,72,-3,-3,-3,-4,-4,-4,92,5,5,5,5,1}) == 5407)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-15,-16,-17,-17,18,19,-16,20}) == 7304)){ tests_passed++; } total_tests++;

    if((sum_squares({3,-16,6,19,7,-9,-3,4,11}) == 2038)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,49,19}) == 565)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,8,0,8,-9,-3,10,11}) == 1287)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5}) == 328)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,0}) == 7109)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,5,-6,7,-8,9,5,-10,-12,13,-14}) == -311)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,0,11,12,13,14,15,16,17,18,19,20,21,0,7}) == 4204)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-5,-8,9,-10,11,-12,13,-14,-12}) == 38)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,33,6,-4,50,-4,4,-4,11,12,13,14,15,16,17,18,19,20,-20,-19,-18,-17,-16,-15,-14,-13}) == 47449)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-2,5,-6,7,-5,-8,9,-10,11,-12,14,-14,1}) == 316)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,49,19,-16}) == 549)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,8,-9,-3,4,11,11}) == 2033)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,-11,5,6,7,8,0,9,10,11,12,13,14,15,16,17,18,19,20,21}) == 13374)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,49,19,49}) == 614)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,37,10,11,-13,-14,-15,-16,-17,49,19}) == 50771)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-15,-16,-17,-17,-15,18,19,-16,20,10}) == -4601)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,5,-6,7,-8,9,5,-10,-12,13,20,-6}) == -241)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,8,7,0,8,-9,-3,10,10}) == 561)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,-11,5,7,8,0,9,10,11,12,13,14,15,16,17,18,19,20,21}) == 55805)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,18,19,20,19}) == -1131)){ tests_passed++; } total_tests++;

    if((sum_squares({3,-16,6,19,7,-9,-3,4,11,4}) == 2054)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-2,5,7,-5,-8,9,-10,-12,14,-14,1}) == -211)){ tests_passed++; } total_tests++;

    if((sum_squares({7,8,9,10,11,-13,-14,-15,-16,-17,-17,49,19,49}) == -1700)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,3,-4,5,-6,7,-5,-8,9,11,-12,13,-14,1,-14}) == -2646)){ tests_passed++; } total_tests++;

    if((sum_squares({-2,-5,2,-4,5,-6,7,-8,9,5,-10,-12,13,20,-6}) == 1092)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,8,-9,-3,4,11,7}) == 1961)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,8,-9,-3,4,7}) == 924)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,49,49}) == 595)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-1,0,2,16,0}) == 6076)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,70,64,72,80,82,88,92,94,88}) == 1404154)){ tests_passed++; } total_tests++;

    if((sum_squares({37,3,-4,-2,5,7,-5,-8,9,-10,-12,14,-14,1}) == 2549)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,11,12,-13,-14,-15,-16,-17,-17,-15,18,19,-16,20,10}) == 7005)){ tests_passed++; } total_tests++;

    if((sum_squares({70,1,1,1,1,2,2,2,2,2,-3,-3,72,-3,-3,-3,-4,-4,-4,-4,92,5,5,5,5,1,1,72}) == 793983)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,5,5}) == 291)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,3,4,4,4,3,4,4,5,5,5,5,5}) == 288)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,9,-10,11,-12,13,-14,-12}) == 1149)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,8,21,8,-9,-3,10,11}) == 10548)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,49,40,45,48,49,50,58,70,64,72,80,82,88,92,94,50}) == 1494139)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,-4,11,12,13,14,15,17,18,19,20,-20,-19,-18,-17,-16,-15,-14,-13}) == -991)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-14,-15,-16,0,-17,18,19,-16,20}) == -5019)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,15,7,8,-9,-3,4,11,7}) == 1975)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-5,-8,9,-10,11,-12,13,-14,-4}) == -90)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-14,-15,12,-16,0,-17,18,19,-16,20}) == 6529)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-11,0,0,1,2,3,4,-11,5,7,8,0,9,10,11,12,13,14,15,16,17,18,19,20,21}) == 55926)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-14,5,-6,7,-5,-8,9,-10,11,-12,13,-14,-12}) == 218)){ tests_passed++; } total_tests++;

    if((sum_squares({-15,1,-2,3,-14,5,-6,7,-5,-8,9,-10,11,-12,13,-14,58,-15}) == 192890)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-9,0,2,16,0}) == 6156)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,18,19,-11,20}) == -1123)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,8,21,8,-9,-3,10,11,-9}) == 10539)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,5,5}) == 323)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-15,-16,-17,-17,49,-16,19}) == -595)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,5,-6,7,-8,9,5,-10,11,-12,13,-14,10}) == 864)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,-10,1,8,21,8,-9,-3,10,11}) == 678)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-3,-6,7,-8,9,-10,11,-12,20,-14}) == -800)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,72,-3,-3,-3,-4,-4,-4,92,5,5,5,5,1,1}) == 5408)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,4,5,6,7,8,9,10,11,13}) == 1466)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-1,0,2,16,0}) == 7129)){ tests_passed++; } total_tests++;

    if((sum_squares({3,94,6,1,-4,8,21,8,-9,-3,10,11,-9}) == -115)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,-15,49,19,49,-16}) == -3257)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,-4,11,12,13,14,15,16,17,3,18,19,20,-20,-19,-18,-17,-16,-15,-14,-13}) == 10994)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,20,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,0,0}) == 13790)){ tests_passed++; } total_tests++;

    if((sum_squares({40,-18,6,1,7,8,-9,-3,4,11,11,6}) == 2220)){ tests_passed++; } total_tests++;

    if((sum_squares({7,8,9,10,11,-13,-14,-15,-16,-17,-17,49,11,19,49}) == -1921)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-2,5,-5,-8,9,-10,-12,14,-14,1}) == 1060)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,2,1,7,8,-9,-3,4,11,11}) == 643)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-14,-15,-16,-17,-17,18,19,-11,20}) == -2112)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-2,9,-6,7,-5,-8,9,-10,11,-12,14,-14,1}) == 320)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,49,40,45,48,49,50,58,70,64,72,80,82,88,92,94,50,88}) == 1494227)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,49,39,45,48,49,50,58,70,64,72,80,82,88,92,94,50,88}) == 1494226)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,21,0}) == 5797)){ tests_passed++; } total_tests++;

    if((sum_squares({-13,-15,-17,20,33,73,37,40,45,48,49,50,58,70,64,72,80,82,88,92,94,50,45}) == 1493213)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,12,12,-13,-14,-15,-16,-17,-17,18,19,-16,20}) == 7305)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-17,20,33,37,40,45,48,49,50,58,70,64,72,80,82,88,92,94,50}) == 875701)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,70,64,72,80,82,88,-1,94,50,50}) == 841719)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,-4,11,12,13,14,15,17,17,18,19,20,-20,-19,-18,-17,-16,-15,-14,-13}) == -2818)){ tests_passed++; } total_tests++;

    if((sum_squares({3,-16,0,6,19,7,-9,-3,4,11,4}) == 7162)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,8,7,0,8,-9,-3,10,10,10}) == 1268)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-5,-8,9,-10,11,13,-14,1,-2}) == -89)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,72,-3,-3,-3,-4,-4,-4,92,5,5,5,5,1,1,-3}) == 5405)){ tests_passed++; } total_tests++;

    if((sum_squares({37,3,-4,-2,5,7,-5,-8,-7,9,-10,-12,14,-14,1}) == 1420)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-18,0,0,1,2,3,4,5,6,7,8,9,10,0,11,12,13,14,15,16,17,18,19,20,21,0,7}) == 7920)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-1,0,2,16,0,2}) == 12709)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,5,-6,7,-8,10,5,-10,11,-12,13,-14}) == -117)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,-3,10,11,12,-13,-14,-15,-16,-17,-17,-15,18,19,-16,20,10}) == -4673)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,5,-6,7,-8,10,5,-10,11,-12,13,-14,92,-10}) == 778561)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,5,-6,7,-8,10,5,-10,11,17,13,-14,92,-10}) == 778590)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,45,9,37,10,11,-13,-14,-16,-17,49,19,45}) == 48890)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,33,6,-4,50,-4,4,-4,4,11,12,13,14,16,16,17,18,19,20,-20,-19,51,-18,-17,-16,-15,-14,-13}) == 47553)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,70,64,72,80,82,88,9,92,94,50}) == 1547381)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-18,0,0,1,2,3,4,5,6,7,8,9,10,0,11,12,13,14,15,16,17,18,19,20,21,0,7,0}) == 7920)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-17,20,33,37,40,45,48,49,50,58,70,64,72,80,82,88,92,94,50,37}) == 926354)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-9,0,2,16,0,0}) == 6156)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,15,16,17,18,19,20,21,0}) == 6593)){ tests_passed++; } total_tests++;

    if((sum_squares({3,-16,0,6,7,-9,-3,4,11,4}) == 1723)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,5,-6,7,-8,9,-10,11,-12,20,-14}) == -784)){ tests_passed++; } total_tests++;

    if((sum_squares({-13,-15,-17,20,33,73,37,40,45,48,49,72,58,70,64,72,80,82,88,92,94,50,45}) == 1493235)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,-9,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,92,5,5,5,5,5,5}) == 778007)){ tests_passed++; } total_tests++;

    if((sum_squares({-17,20,33,37,40,45,48,49,50,58,70,64,72,80,82,88,92,94,50,37,50,50}) == 1118516)){ tests_passed++; } total_tests++;

    if((sum_squares({1,7,8,9,10,11,12,-13,-14,-15,-16,-17,-17,18,19,-16,20}) == 7269)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,-5,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-11,0,0,0,-11,0,0,1,2,3,4,-11,5,7,8,0,9,10,11,12,13,14,15,16,17,18,19,20,21}) == 10968)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,0}) == 9765)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,15,80,7,8,-9,-3,4,11,7}) == 7051)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}) == 5804)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,8,0,-9,-3,10,11}) == 1421)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,82,49,39,45,48,49,50,58,70,64,72,80,82,88,92,94,50,88}) == 1494271)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,45,9,37,10,11,-13,-14,-16,-17,49,19,45,45}) == 48935)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-2,9,-6,7,-5,-8,9,-10,11,-12,14,-14,1,-5}) == 315)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-5,-8,9,-12,-10,11,-12,13,-14,1}) == 47)){ tests_passed++; } total_tests++;

    if((sum_squares({7,8,9,10,11,48,-13,-14,-15,-16,-17,-17,49,-16,19}) == 951)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,5,5,2}) == 335)){ tests_passed++; } total_tests++;

    if((sum_squares({2,16,2,2,2,3,3,3,3,4,4,4,3,4,4,5,5,5,5,5}) == 302)){ tests_passed++; } total_tests++;

    if((sum_squares({1,7,8,9,10,11,12,-13,-14,-16,-17,-17,18,19,-16,20,7}) == -213)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,4,4,4,4,4,5,5,5,5,5}) == 304)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,18,19,20,19,-17,10}) == -6034)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,49,19,-16,-16,-13}) == -1392)){ tests_passed++; } total_tests++;

    if((sum_squares({1,6,1,1,1,1,2,2,2,2,2,-3,-3,72,-3,-3,-3,-4,-4,-4,92,5,5,5,5,1}) == 778845)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-14,-15,-16,20,0,-17,18,18,-16,20,-14,6}) == 5820)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,-15,-4,11,12,13,14,15,17,18,19,20,-20,-19,-18,-17,-16,-15,-14,-13}) == -2716)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,49,19,49,7}) == 663)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,49,40,45,48,49,58,70,64,72,80,82,88,92,94,50,88,58,33}) == 836748)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-1,0,2,16,0}) == 6077)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,18,19,-11,20,20}) == 6877)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-15,-16,-17,-17,94,49}) == -32)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,4,5,6,7,8,9,10,11,12,12,14,15,16,17,18,19,20,21,-9,0,2,16,0,0}) == 6132)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,0,70,64,72,80,82,88,92,94,50,88}) == 1509640)){ tests_passed++; } total_tests++;

    if((sum_squares({73,1,1,1,1,-9,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,92,5,5,5,5,5,5}) == 784094)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,-15,-3,-3,-3,-3,-3,-4,-4,-4,-4,92,5,5,5,5,5,5}) == 489)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-3,7,-8,9,-10,11,-12,20,-14}) == 1898)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,4,4,4,72,4,4,5,5,5,5,5}) == 396)){ tests_passed++; } total_tests++;

    if((sum_squares({1,6,1,1,1,1,2,2,2,2,2,-3,-3,72,-3,-3,-3,-4,-4,-4,92,5,5,5,1,-3}) == 778817)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,70,64,72,82,88,-1,33,94,50,50}) == 973146)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-5,-8,9,-10,11,-12,13,4,-14,-12}) == -1620)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,6,-6,7,-8,9,5,-10,11,-12,13,-14,10}) == 865)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,49,40,45,49,48,49,50,58,70,64,72,80,82,88,92,94,50}) == 1306988)){ tests_passed++; } total_tests++;

    if((sum_squares({1,7,-2,3,-4,-2,5,-6,7,-5,-8,9,-10,11,-12,14,-14,1}) == -2111)){ tests_passed++; } total_tests++;

    if((sum_squares({3,-16,0,6,19,7,-9,10,4,11,4}) == 7175)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,4,5,12,6,7,8,9,10,11,13,2}) == 2684)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,14,15,16,17,18,19,21,-1,0,2,16,0}) == 10740)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,49,40,45,49,48,49,-7,58,82,70,64,72,80,82,88,92,94,50}) == 1096417)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,-15,49,19,49,-16,8}) == -3249)){ tests_passed++; } total_tests++;

    if((sum_squares({13,-2,3,-4,5,-13,-6,7,-8,9,-10,11,-12,13,-14,-12,13}) == 2395)){ tests_passed++; } total_tests++;

    if((sum_squares({37,3,-4,-2,5,7,-5,-8,-7,9,-10,-13,14,-14,1}) == 1419)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,18,19,20,19}) == -1420)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,1,2,-15,-3,-3,-3,-3,-3,-4,-4,-4,-4,92,5,5,5,5,5}) == 483)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,-11,5,6,7,8,0,9,10,11,12,13,14,15,16,17,18,19,20,21,0}) == 13374)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,3,3,3,4,4,4,4,5,5,5,5,5}) == 204)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,5,-6,7,-8,9,-10,-13,11,-12,20,-14}) == -555)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,9,-10,11,-12,20,-14,11}) == 1403)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,3,-4,5,-6,6,-5,-8,9,11,-12,13,-14,1,-14}) == -2647)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,41,45,48,49,50,58,70,64,72,80,82,88,-1,94,50}) == 1493246)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,73,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,5}) == 57)){ tests_passed++; } total_tests++;

    if((sum_squares({73,6,1,7,8,-9,-3,4,11,7}) == 7281)){ tests_passed++; } total_tests++;

    if((sum_squares({1,6,1,1,1,1,2,2,2,2,2,-3,-3,72,-3,-3,-3,-4,-4,-4,92,11,5,5,5,1,-3}) == 778938)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-5,-8,9,-3,-10,11,-12,13,4,-14,-12}) == -2881)){ tests_passed++; } total_tests++;

    if((sum_squares({1,16,-5,2,-4,5,-6,7,-8,10,5,-10,10,11,17,13,92,-10}) == 778558)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,5,-6,7,-8,10,-4,-10,11,-12,13,-14,92,-10,-8}) == 778616)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,1,2,2,2,-3,-3,72,-3,-2,-3,-3,-4,-4,-4,92,5,5,5,1,1,-3}) == 783907)){ tests_passed++; } total_tests++;

    if((sum_squares({7,8,9,10,11,-13,-14,-15,-16,-17,49,11,19,49}) == -1672)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,49,40,45,49,48,49,50,58,64,82,72,80,82,88,92,94,50}) == 1519891)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,0,0}) == 8608)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,8,0,-9,-3,10,11,6,6}) == 1463)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,-13,-14,-15,-16,-17,18,19,-11,20}) == -2329)){ tests_passed++; } total_tests++;

    if((sum_squares({70,1,1,1,1,2,2,2,2,2,-3,-3,72,-3,-3,-3,-5,-4,-4,-4,92,5,5,5,5,1,1,72}) == 793922)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,15,16,17,18,19,20,21,0,6}) == 6629)){ tests_passed++; } total_tests++;

    if((sum_squares({-9,7,8,9,10,11,-13,-14,-15,-16,-17,-17,49,19,-16,-13}) == 763)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-14,1,1,1,2,2,2,2,2,-3,-3,72,-3,-3,-3,-4,-4,-4,92,5,5,5,5,1}) == 5392)){ tests_passed++; } total_tests++;

    if((sum_squares({-15,-17,20,33,37,40,45,48,49,50,58,70,-15,64,72,80,82,88,92,94,88,50}) == 1425107)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,49,10,11,-13,-14,-15,-16,-17,-17,49,49}) == 115734)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-1,0,2,17,0}) == 6110)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,-4,11,12,13,14,15,17,18,19,20,-20,-19,13,-18,-17,-16,-15,-14,-13}) == -950)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}) == 4756)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,18,19,20,-15}) == -1267)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,5,-6,7,-8,-7,9,-10,-13,11,-12,20,-14,11}) == 973)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,49,-13,10,11,-13,-14,-15,-16,-17,-17,49,49}) == 118569)){ tests_passed++; } total_tests++;

    if((sum_squares({-2,-3,-4,-5,-7,-8,-9,-10,-11}) == -1589)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,5,-6,7,-8,9,-10,-13,11,-12,20,-14,-2,-6,5}) == -396)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,8,0,8,-9,-3,10,11,1}) == 1288)){ tests_passed++; } total_tests++;

    if((sum_squares({7,8,9,10,11,-13,-14,-15,-16,-17,49,11,19,49,49}) == -1623)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,-9,1,2,2,2,2,2,-3,-3,-3,92,-3,-4,4,-4,-4,-4,92,5,5,5,5,5,5,5,92}) == 8039)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-2,5,7,-8,9,-10,-12,14,-14,1}) == 1084)){ tests_passed++; } total_tests++;

    if((sum_squares({1,6,1,1,1,1,1,2,2,2,2,-3,-3,72,-3,-3,-3,-4,-4,-5,92,11,5,5,5,1,-3,2}) == 778938)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,-1,0,2,16,0}) == 5819)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,8,7,0,8,-3,10,10,10}) == 1199)){ tests_passed++; } total_tests++;

    if((sum_squares({-15,1,-2,3,-14,5,-6,-8,9,-10,11,-12,13,-14,58}) == -1437)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,15,16,17,18,19,20,21,0,6}) == 6662)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,12,2,3,3,3,3,4,4,4,4,4,5,5,5,5,5}) == 431)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-14,-8,9,-10,11,-12,13,-14,13}) == 54)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-17,20,33,37,40,45,48,50,58,70,64,72,80,82,88,92,94,50,-17}) == 976855)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-2,9,-6,7,-5,-8,9,-10,12,-12,14,-14,1}) == 343)){ tests_passed++; } total_tests++;

    if((sum_squares({2,6,-10,1,8,21,-9,-3,10,11}) == 1733)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,-4,6,-6,7,-8,9,5,-10,11,-12,13,-14,10}) == 1259)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,-12,-4,11,12,13,14,15,17,18,19,20,-20,-19,13,-18,-17,-16,-15,-14,-13,-4}) == -4910)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-13,-17,20,33,82,49,39,45,48,49,50,58,70,64,72,80,82,88,92,94,88}) == 1251128)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-17,-17,-17,49,19,49,9}) == 728)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,50,58,70,64,72,80,82,88,92,94,88}) == 852811)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,70,64,72,80,82,88,-1,94,50,50,64}) == 841783)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,5,-6,7,-10,-8,9,5,-10,11,-12,13,-14}) == -3416)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,14,11,-13,-14,-15,-16,-17,-17,49,13,7}) == 2310)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,18,19,20,19,18}) == -1096)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,2,1,7,8,-9,-3,3,11,11}) == 606)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,4,5,12,6,7,8,10,11,13,2}) == 2963)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,49,40,45,49,48,49,50,58,21,82,72,80,82,88,94,50}) == 811766)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-18,0,0,1,2,3,4,5,6,7,8,9,10,0,11,12,13,14,15,16,17,18,19,20,21,0,7,0}) == 7960)){ tests_passed++; } total_tests++;

    if((sum_squares({94,6,1,-4,8,21,8,-9,-3,10,-9}) == 9511)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,11,-16,12,-13,-14,-15,-16,-17,-17,-15,18,19,-16,20,10}) == -4297)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,19,19,20,-15}) == -1230)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,-13,-14,-15,-16,-17,-17,49,19,-14}) == -2128)){ tests_passed++; } total_tests++;

    if((sum_squares({11,4,6,2,1,7,8,-9,-3,3,11,11,-9}) == 283)){ tests_passed++; } total_tests++;

    if((sum_squares({6,15,7,8,-9,-3,4,11,7}) == -240)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,2,48,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,92,5,5,5,5,5}) == 316)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,49,19,19,-15}) == 809)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,50,58,9,64,72,80,82,88,92,94,88}) == 852750)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-4,-2,5,-6,7,-5,-8,9,-10,11,-12,14,-14,1}) == 839)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,-10,1,8,21,8,-9,-3}) == 567)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,12,12,-14,-15,-16,-17,-17,18,19,-16,20,-16}) == -5248)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,-5,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-11,0,0,0,-11,0,0,1,2,3,4,-11,5,7,9,0,9,10,11,12,13,14,15,16,17,18,19,20,21,2}) == 10989)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-18,0,0,1,2,3,4,5,6,7,8,9,10,0,11,12,13,14,15,16,17,18,19,20,21,0,7,0}) == 4568)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,-4,5,-6,7,-8,9,5,-10,11,-12,13,-14,10,13}) == 3365)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,-9,-3,4,7}) == 123)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,50,9,64,72,80,82,88,92,94,88}) == 950912)){ tests_passed++; } total_tests++;

    if((sum_squares({40,-19,6,1,7,8,-9,-3,4,11,11,6}) == 2219)){ tests_passed++; } total_tests++;

    if((sum_squares({73,1,1,1,1,-9,1,2,2,2,2,45,2,-3,-3,-3,-3,-3,-4,-4,-4,92,5,5,5,5,5,5}) == 13845)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,1,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-1,0,2,16,0,0,19}) == 6437)){ tests_passed++; } total_tests++;

    if((sum_squares({73,1,1,1,1,-9,1,2,2,2,2,45,2,-3,-3,-3,-3,-3,-4,-4,-4,92,5,5,5,5,5,5,-3}) == 13818)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,-4,5,-6,7,-8,9,5,-10,11,-12,13,-14,10,13,13}) == 3378)){ tests_passed++; } total_tests++;

    if((sum_squares({3,7,8,7,0,8,-9,-3,10,10}) == 1259)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,5,-6,7,-8,10,5,-10,11,-12,11,13,-14,92,-10,13}) == -2685)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,70,64,9,72,80,82,88,9,92,94,50}) == 1468798)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,0,0,0,0,0,0,1,2,20,4,5,6,7,8,9,10,12,13,14,15,16,17,18,19,20,21,0,0}) == 6213)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,9,-10,11,-12,20,-14,-14}) == 1378)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,0,1}) == 7110)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,10,-13,-15,-16,-17,-17,94,49}) == -33)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-15,-16,-17,-17,18,19,-16,20,-16}) == 7288)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,-9,3,3,4,4,4,4,4,5,5,5,4,5,3}) == -345)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-14,1,1,1,2,2,2,2,1,-3,-3,72,-3,-3,-3,-4,-4,-4,92,5,5,5,5,1}) == 5389)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,5,11,12,-13,-14,-15,-16,-17,18,19,20}) == -1790)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,5,-6,7,-10,-8,9,5,-10,11,-12,13,-14,2}) == -3414)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}) == 5803)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,50,58,9,64,72,80,82,88,92,94,88,50}) == 977750)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,64,72,80,82,88,-1,94,50}) == 852561)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-2,5,7,-8,-10,-12,14,-14,1}) == -799)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-2,-5,-8,9,-10,-12,14,-14,1}) == -777)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,0,70,64,72,80,82,19,92,94,50,88}) == 1502257)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,15,16,17,18,19,20,21,0}) == 5395)){ tests_passed++; } total_tests++;

    if((sum_squares({-3,3,6,8,7,8,-3,10,10}) == 1452)){ tests_passed++; } total_tests++;

    if((sum_squares({-3,3,6,8,7,8,-3,10,10,10}) == 1552)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,92,5,5,5,5}) == 238)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-15,-16,-17,-17,18,19,20,-17}) == -5465)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,40,-6,7,-8,-7,9,-10,-13,11,-12,20,-14,11,-6}) == 2332)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,13,-17,20,33,37,49,40,45,49,48,49,50,58,70,64,72,80,82,88,92,94,50}) == 1307016)){ tests_passed++; } total_tests++;

    if((sum_squares({6,-10,1,8,21,8,-9,-3,8}) == 9950)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,0,11,12,13,14,15,16,17,18,19,20,21,0}) == 17078)){ tests_passed++; } total_tests++;

    if((sum_squares({3,-16,0,6,19,1,7,6,10,4,11,4}) == 7975)){ tests_passed++; } total_tests++;

    if((sum_squares({2,1,3,4,5,6,7,8,9,10,11,12,13,14}) == 1247)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-5,14,-1,-11,-15,-4,-4,-4,-4,-4,11,12,13,14,15,16,17,3,18,19,20,-20,-19,-18,-17,-16,-15,-14,-13,14}) == 8346)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,39,-8,9,-3,-10,11,-12,13,4,-14,-12,1}) == -2836)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,5,-6,7,-8,10,5,-10,11,17,13,-14,92,-10,-6}) == 778626)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,49,39,45,48,49,50,58,70,64,72,80,46,82,88,92,94,50,88}) == 1447656)){ tests_passed++; } total_tests++;

    if((sum_squares({1,16,3,-6,7,-8,9,-10,11,-12,20,-14}) == 1943)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-18,20,33,37,40,45,48,49,50,58,70,64,9,72,80,82,88,9,92,94,50,58}) == 1468855)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,50,58,9,64,72,80,82,88,92,94,88,50,88}) == 985494)){ tests_passed++; } total_tests++;

    if((sum_squares({1,6,1,1,-3,1,1,2,2,2,2,2,-3,72,20,-3,-3,-4,-4,-4,92,5,5,5,5,1}) == 778842)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-14,-15,-16,20,0,-17,18,18,-16,20,-14,6,-17}) == 6109)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-4,-2,5,-6,20,7,-5,-8,9,-10,11,-12,14,-14,1}) == -417)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,5,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-1,2,16,0,12}) == 13566)){ tests_passed++; } total_tests++;

    if((sum_squares({2,-9,2,2,12,2,4,3,3,3,4,4,4,4,4,5,5,5,5,5}) == 2003)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,-5,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-11,0,0,0,-11,0,0,1,2,3,4,-11,5,7,9,0,9,10,11,12,13,14,15,16,17,18,19,20,21,2,21}) == 11010)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,-15,49,19,49,-16,-16}) == -3273)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,0,-9,-3,10,11}) == -605)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-5,-8,9,-10,11,-12,13,4,-14,-12,-5}) == -1625)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-17,87,20,33,37,40,45,48,50,58,70,64,72,80,82,88,92,94,50,-17}) == 847962)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-14,-15,12,-16,0,-17,18,19,-16,20,8}) == 6537)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,-11,5,7,8,0,9,10,11,12,13,14,15,16,17,18,19,20,21,0}) == 55805)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,-1,33,49,40,45,49,48,49,50,58,64,82,72,80,82,88,92,94,50}) == 1273668)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,-15,9,10,11,12,-13,-14,-15,-16,-17,-17,49,-16,19}) == 6552)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-12,-6,7,-8,9,-10,11,-12,20,-14,11}) == 15)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,1,2,-15,-3,-3,-3,-3,-3,-4,-4,-3,-4,92,5,5,5,5,5}) == 484)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,-9,-3,4,6}) == 110)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,2,48,2,2,1,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,92,5,5,5,5,5}) == 309)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,9,11,-13,-14,-15,-16,-17,-17,18,19,20}) == -1763)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,2,1,2,14,48,2,2,1,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,92,5,5,5,5,5}) == 781050)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,-3,-18,10,11,12,-13,-14,-15,-16,-17,-17,-15,18,19,-16,20,10}) == 173)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,70,64,9,72,80,82,88,9,92,94,50,72}) == 1468870)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,71,64,72,80,82,88,92,93,50}) == 847822)){ tests_passed++; } total_tests++;

    if((sum_squares({-15,-17,20,33,37,41,40,45,48,50,58,70,-15,64,72,80,82,88,92,94,88,49}) == 1417524)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-17,20,33,37,40,45,48,50,58,-18,64,72,80,82,88,92,94,50,-17}) == 976767)){ tests_passed++; } total_tests++;

    if((sum_squares({3,0,6,19,7,-9,-3,-4,11,4}) == 2062)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-14,-17,20,33,37,40,45,48,49,50,58,70,64,72,82,88,-1,33,94,50,50}) == 973147)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,8,-9,-3,4,11,11,6}) == 2039)){ tests_passed++; } total_tests++;

    if((sum_squares({1,7,-2,3,-4,-2,5,-6,7,-5,-8,3,9,-10,11,-12,14,-14,1}) == 3288)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,11,-16,12,-13,-14,-15,-16,-17,-17,-15,18,19,-16,20,10,-16}) == -4313)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,2,1,7,8,-9,-3,4,11,11,3}) == 646)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,5,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,73,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-1,2,16,0,12}) == 18895)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,9,-10,11,-12,13,-14,-12,-2}) == 1153)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,-4}) == 163)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,5,5,5}) == 296)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}) == 5844)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,5,9,-10,11,-12,7,-14,-12}) == 666)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-2,9,-6,7,-5,-8,88,9,-10,11,-12,14,-14,1}) == -2350)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,49,18,19,-15}) == 808)){ tests_passed++; } total_tests++;

    if((sum_squares({13,-2,3,-4,5,7,-8,9,-10,11,-12,13,-14,-13,-12}) == -316)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,15,16,17,18,19,20,21,0,7,0}) == 6675)){ tests_passed++; } total_tests++;

    if((sum_squares({2,16,2,2,2,3,3,3,3,4,4,4,3,4,4,5,5,5,5,5,4}) == 366)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,14,16,17,18,19,20,21,0}) == 7108)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-6,7,-5,-8,9,-10,11,-12,13,-4}) == 819)){ tests_passed++; } total_tests++;

    if((sum_squares({5,-2,3,-9,-4,5,-6,7,-14,-8,9,-10,11,-12,13,-14,13}) == -75)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-14,-15,-16,20,-1,-17,18,18,-16,20,-14,6}) == 5819)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,-4,5,-6,7,-8,5,-10,11,-12,13,-14,10,13,13,7}) == 2932)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-17,20,33,37,40,45,48,50,58,-18,64,1,-4,80,82,88,92,94,50,-17}) == 874750)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,18,19}) == -1512)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,0,-15,64,72,80,82,19,92,94,50,88,70}) == 1502242)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,49,10,11,-13,-14,-15,-16,71,-17,49,49,-13}) == 115991)){ tests_passed++; } total_tests++;

    if((sum_squares({-2,-3,-4,-5,-7,-12,-8,-10,-10,-11}) == -1158)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-4,-2,5,-6,7,-5,-8,9,-10,11,-12,14,-14,1,11}) == 1103)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,-9,3,3,4,4,4,4,4,5,5,4,5,3}) == -460)){ tests_passed++; } total_tests++;

    if((sum_squares({3,46,94,6,1,-4,8,21,8,-9,-3,11,-9}) == 949)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,37,40,45,48,49,50,58,70,64,72,80,82,88,92,94}) == 874927)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,5,-6,7,-10,-8,9,5,48,11,-12,13,-14}) == -1212)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,15,16,-17,18,19,20,21,0}) == 9123)){ tests_passed++; } total_tests++;

    if((sum_squares({-13,-15,-17,20,33,73,37,40,45,48,49,50,58,70,64,72,80,82,88,94,50,45}) == 787111)){ tests_passed++; } total_tests++;

    if((sum_squares({6,8,8,9,10,11,-13,-14,-15,-16,-17,-17,18,19,-11,20,20}) == 6878)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-17,20,33,37,40,45,48,50,58,70,64,72,80,82,88,92,94,50,-17,72}) == 1350103)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,-17,50,8,9,10,11,12,-13,-14,-15,-16,-17,-17,49,-16,19}) == 3572)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,1,1,2,2,2,-3,-3,18,72,-3,-2,-3,-3,-4,-4,-4,92,5,5,5,1,1,-3,72}) == 382088)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,70,64,72,80,82,33,88,92,94,50}) == 1554989)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,36,49,39,45,48,49,50,58,70,64,-13,80,46,82,88,92,94,50,88,36}) == 1443936)){ tests_passed++; } total_tests++;

    if((sum_squares({3,-16,6,19,7,-9,-3,4,11,4,-16}) == 2038)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,70,64,72,82,87,-1,33,94,50,50,33}) == 950210)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,5,-5,-8,9,-10,11,-3,13,-14,-4}) == 392)){ tests_passed++; } total_tests++;

    if((sum_squares({-3,3,6,8,6,8,-3,10}) == 325)){ tests_passed++; } total_tests++;

    if((sum_squares({1,7,8,9,10,12,-13,-14,-16,-17,-17,18,19,-16,20,7}) == -2128)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,45,8,37,10,11,-13,-14,-16,-17,49,19,45}) == 48873)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,39,-9,9,-3,-10,11,-12,13,4,-14,-12,1}) == -3053)){ tests_passed++; } total_tests++;

    if((sum_squares({3,-16,6,-8,19,7,-9,-3,4,11,4,-16}) == 7180)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,-4,5,-6,7,-8,9,2,5,-10,11,-12,13,-14,10,13}) == 2229)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,8,21,8,-9,-3,10,11,1}) == 10549)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-15,-16,-17,-17,-15,18,19,-16,-20,20,10}) == -4331)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,11,12,-13,-14,-15,-16,-17,-17,-15,-15,18,19,-16,20,10}) == -4910)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,10,-13,-15,-16,-17,-17,49}) == -2479)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,70,64,72,81,82,88,92,94,50,-17}) == 848132)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,8,0,8,-9,-3,10,11,0}) == 1287)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,2,2,2,14,48,2,2,1,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,92,5,5,5,5,5,-3}) == 781050)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,-16,-4,11,12,13,14,15,17,18,19,20,-20,-14,-19,13,-18,-17,-16,-15,-14,-13,-4}) == -5442)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,6,-6,87,7,-8,9,5,-10,11,-12,-14,10}) == 1779)){ tests_passed++; } total_tests++;

    if((sum_squares({7,8,9,10,11,-14,-15,-16,-17,-17,49,19,49}) == -463)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,10,-13,-15,-16,-17,-17,94,-2,49}) == -2381)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,16,8,-9,-3,10,11}) == 5368)){ tests_passed++; } total_tests++;

    if((sum_squares({3,-16,0,6,40,19,7,-9,10,4,11,4}) == 65119)){ tests_passed++; } total_tests++;

    if((sum_squares({7,8,9,10,11,-13,-14,-15,-16,-17,-17,18,19,-11,20,20}) == -1371)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,21,0}) == 7128)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-15,-16,-17,-17,-15,18,19,-16,20,10,-13}) == -4614)){ tests_passed++; } total_tests++;

    if((sum_squares({-2,3,-3,7,-8,9,-10,11,-12,20,-14}) == -1681)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-2,9,-6,7,-5,-8,9,-10,12,-12,14,-14,1,12}) == 355)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,73,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-1,0,2,16,0,2}) == 7204)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-17,20,33,37,40,45,48,50,58,-18,-6,1,-4,-13,82,88,92,94,50,-17}) == 874587)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,37,11,11,-13,-14,-15,-16,-17,49,19}) == 50772)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,4,49,50,58,64,72,80,82,88,-1,94,50}) == 742033)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-7,-3,-3,-3,-3,-3,-4,-4,-4,-4,92,5,5,5,5,5}) == 778724)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,36,40,45,48,49,50,58,70,64,9,72,80,82,88,9,92,94,72,40}) == 1468859)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,5,-6,7,-8,10,5,-10,11,-12,13}) == -313)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,8,7,0,8,-9,-3,10,10,10,7}) == 1275)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,39,3,4,3,3,-9,3,3,4,4,4,4,4,5,5,5,5,3,4,3,5}) == 404)){ tests_passed++; } total_tests++;

    if((sum_squares({-15,-17,20,33,37,40,45,48,49,50,58,70,-15,64,72,80,82,88,94,88,50}) == 866501)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,49,40,45,49,48,49,-7,58,82,70,64,72,80,82,88,-8,92,94,50}) == 1090559)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,-9,2,3,4,4,4,4,4,5,5,4,5,3}) == -465)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-18,0,0,1,2,3,4,5,6,7,8,9,10,0,11,12,13,14,15,16,17,18,19,20,14,21,0,7,0}) == 1422)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,39,45,48,49,50,58,70,64,72,80,82,88,92,88}) == 722597)){ tests_passed++; } total_tests++;

    if((sum_squares({6,-12,7,8,9,10,11,-13,-14,-15,-16,-17,49,19,49}) == 859)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,21,-14,-14,-15,-16,20,0,-17,18,18,-16,20,-14,6,-17}) == 6143)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,5,-6,7,-8,9,-10,-13,11,20,-2,-6,5}) == -906)){ tests_passed++; } total_tests++;

    if((sum_squares({7,8,9,10,11,-13,-14,-15,-16,-17,-17,49,73,11,19,49}) == 5650)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,3,3,4,5,6,7,8,9,10,11,12,12,14,15,16,17,18,19,20,21,-9,0,2,16,0}) == 6132)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-6,3,-4,5,-6,7,-5,-8,9,-10,11,-12,13,4,-14,-12,-5,4,-12,-6}) == -4357)){ tests_passed++; } total_tests++;

    if((sum_squares({6,1,8,21,8,-9,-3,10,11}) == 2339)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,41,-13,-14,-15,-16,-17,18,19,20}) == 622)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,-10,21,8,-9,-3,6}) == 964)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,49,19,49,49}) == 3015)){ tests_passed++; } total_tests++;

    if((sum_squares({6,8,9,10,11,12,-13,-14,-15,-16,-17,-17,49,-16,19}) == 902)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,1,2,-4,-3,-3,-3,-2,-3,-4,-4,-4,-4,92,5,5,5,5,5}) == 275)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,-3,1,1,2,2,2,2,2,-7,-3,-3,-3,-3,-3,-4,-4,-4,-4,92,5,5,5,5,5}) == 8465)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,5,-5,7,-8,-7,9,-10,-13,11,20,-14,11,3}) == 1199)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,4,5,12,6,7,8,10,11,12,2}) == 2962)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,-3,2,-4,5,-6,7,-8,9,5,-10,-12,13,20,-6,-10}) == 722)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-4,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-9,0,2,16,0}) == 4420)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,7,-4,5,-6,7,-8,10,5,-10,11,-12,13,-14,92,-10}) == 778606)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-15,-16,-17,-17,18,19,-11,20,20}) == -1739)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,-3,-18,10,11,12,-13,-14,-15,-16,-17,-17,-15,18,19,-16,20,10,-16}) == -3923)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,49,40,45,48,49,48,49,50,58,64,82,72,80,82,88,92,94,50}) == 1328293)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,8,0,-1,8,-9,-3,10,11,0}) == 218)){ tests_passed++; } total_tests++;

    if((sum_squares({1,6,1,1,1,1,2,2,2,2,2,-3,-3,72,-3,-3,-3,-4,-4,-4,92,11,5,5,5,1,-3,71}) == 783979)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-12,-16,-17,-17,-15,49,19,49,-16,-16,-16}) == -1370)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,11,12,-13,-14,-15,-16,-17,-17,-15,-15,18,19,-16,20,10,-13}) == -4923)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-17,20,33,37,40,45,48,49,50,58,70,64,72,80,82,88,92,94,50,10}) == 876701)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,4,5,12,6,7,8,10,11,13}) == 2961)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-6,7,-8,9,-10,-13,11,-12,-4,-14,7}) == -1445)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,12,2,3,3,3,3,11,4,4,4,4,4,5,5,5,5}) == 535)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,19,19,20,-15,-15,7,-15}) == -4373)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-2,9,-6,7,-5,-8,-12,88,9,-10,11,-12,14,-14,1,9}) == 3043)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,4,5,12,6,7,8,10,11,12,2,5}) == 2987)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,3,3,3,-9,2,3,4,4,4,4,4,5,5,4,5,3}) == 273)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,7,0,8,-9,-3,10,11}) == 1875)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,5,6,7,8,-16,9,10,11,12,13,14,15,16,17,18,19,21,0}) == 7395)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,10,11,12,13,14,15,16,17,18,19,20,21}) == 7040)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-1,-1,2,17,0}) == 7135)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,11,4,5,12,6,7,8,10,11,12,2}) == 853)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,50,58,9,64,72,80,64,82,88,92,94,88,50,88}) == 1403708)){ tests_passed++; } total_tests++;

    if((sum_squares({1,14,1,1,1,2,2,2,2,2,-3,-3,-3,-2,-3,-4,-4,-14,-4,-4,-4,5,5,5,5,5}) == -13)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,-5,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-11,0,0,0,-11,0,0,1,2,3,4,-11,5,7,8,0,9,10,11,12,13,14,15,16,17,18,19,20,21,1}) == 10245)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-2,9,-6,7,-8,9,-10,12,-12,14,-14,1,12}) == 1506)){ tests_passed++; } total_tests++;

    if((sum_squares({-2,-3,-4,-5,-7,-8,-9,-9,-11}) == -1588)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,11,12,-13,-14,-15,-16,-17,-15,-15,18,19,-16,20,10,-13}) == 7176)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,37,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5}) == 203)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-2,9,-6,7,-8,9,-10,12,-12,14,9,-14,1,12}) == 9)){ tests_passed++; } total_tests++;

    if((sum_squares({70,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,73,10,11,12,13,15,16,17,18,19,20,21,0,7,0}) == 398574)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,0,0,0,0,0,1,2,20,4,5,6,7,8,9,10,12,13,14,15,16,17,18,19,20,21,0,0,0}) == 15391)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,5,-6,7,-8,9,5,-10,11,-12,13,-14,9,11}) == 604)){ tests_passed++; } total_tests++;

    if((sum_squares({1,7,8,9,10,7,12,-13,-16,-17,-17,18,19,-16,20,7}) == -2157)){ tests_passed++; } total_tests++;

    if((sum_squares({70,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,73,10,11,12,13,15,16,17,18,19,20,21,0,7,0}) == 18980)){ tests_passed++; } total_tests++;

    if((sum_squares({-15,1,-2,3,-14,5,-6,-8,9,11,-12,13,-14,58}) == -1373)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,4}) == 314)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,7,8,-9,-3,4,11}) == -619)){ tests_passed++; } total_tests++;

    if((sum_squares({19,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,20,0,0,0,0,0,0,1,2,20,4,5,6,7,8,9,10,12,13,14,15,16,17,18,19,20,21,0,0}) == 6575)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,19,-15,-16,-17,19,19,20,-15,-15,7,-15}) == -867)){ tests_passed++; } total_tests++;

    if((sum_squares({-13,-15,-17,20,33,73,37,40,45,48,49,50,70,64,72,80,82,88,94,50,45}) == 794387)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,1,2,2,2,-3,-3,72,-3,-2,-3,-3,-4,-4,-4,92,5,5,5,1,1,-3,1}) == 783908)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,3,-4,5,-6,7,-5,-8,9,11,-12,13,-14,1,-14,7}) == -2639)){ tests_passed++; } total_tests++;

    if((sum_squares({-15,-17,20,33,37,41,40,45,48,50,58,70,-15,64,72,80,82,88,92,94,88,80,49}) == 1421572)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,5,-6,7,-8,-8,9,5,-10,-12,13,-14}) == -155)){ tests_passed++; } total_tests++;

    if((sum_squares({1,6,1,1,1,1,1,2,2,2,2,-3,-3,72,-3,-3,-4,-4,-5,92,11,5,5,5,1,-3,2}) == 1527)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-2,9,-6,7,-8,9,-10,12,-12,14,9,-14,12}) == 1724)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-18,-1,0,1,2,3,4,5,6,7,8,9,10,0,11,12,13,14,15,16,17,18,19,20,21,0,7,0}) == 7919)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,-4,5,-6,7,-8,9,5,-10,11,-12,13,-14,10,13,13,5}) == 3403)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-12,-15,-17,20,33,36,40,45,48,49,50,58,70,64,9,72,80,82,88,9,92,94,72,40,49}) == 498030)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,2,-4,5,-6,7,-10,-8,9,5,48,11,-12,13,-14,-6}) == -1218)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,4,5,12,6,16,8,10,11,12,2,5}) == 3194)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-17,-17,18,19,-8,20,20}) == 6880)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,72,-3,-3,-3,-4,-4,-4,92,5,5,5,5,1,1,-3,-3}) == 8665)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,4,5,12,6,7,8,10,11,12,-16,5,12}) == 2981)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,-18,-13,19,-15,-16,-17,19,19,20,-15,-15,7,-15}) == -12092)){ tests_passed++; } total_tests++;

    if((sum_squares({6,15,7,8,-9,4,11,7}) == -475)){ tests_passed++; } total_tests++;

    if((sum_squares({-15,-17,20,33,37,40,45,48,49,50,58,70,-15,64,72,80,82,88,92,94,88,50,20}) == 1425127)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-2,9,-6,7,-5,-8,-10,-12,88,9,-10,11,-12,14,-14,1,9}) == 7055)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,49,40,45,48,50,58,70,64,72,80,82,88,92,94,50,88,58,33}) == 836749)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,10,-13,-14,-15,-16,-17,-17,49,19,-14}) == -6211)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-9,0,2,16,0,2}) == 6164)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,-5,0,37,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-11,0,0,0,-12,0,0,1,2,3,4,-11,5,7,9,0,9,10,11,12,13,14,15,16,17,18,19,20,21,2,16}) == 11004)){ tests_passed++; } total_tests++;

    if((sum_squares({7,8,9,10,11,-13,-14,-15,-16,-17,-17,49,73,11,19,49,11}) == 6981)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,5,-6,7,-8,-6,9,-10,-13,11,-12,20,-14,-2,-6,5}) == 646)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,49,40,44,49,48,49,50,58,64,82,72,80,82,88,92,94,50}) == 1519890)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,-9,0,2,16,0,0}) == 6157)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,18,19,20,19,18}) == -1347)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,49,40,44,49,48,49,50,58,82,64,82,72,80,82,88,92,94,50}) == 1336142)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,5,-6,7,-8,9,-10,-13,82,11,20,-2,-6,5}) == -430)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,3,-4,5,-6,7,-5,-8,9,11,-12,13,-14,1,-14,7,1}) == -2638)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-5,-8,-3,-10,11,-12,13,4,-14,-12}) == -1692)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,20,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,0,0}) == 14114)){ tests_passed++; } total_tests++;

    if((sum_squares({1,6,1,1,1,1,2,2,2,2,2,-3,-3,72,-3,-3,-3,-4,-4,-4,92,11,5,92,5,1,-3,71}) == 784066)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-13,-14,-15,-16,-13,-17,-17,49,19}) == -1494)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,-9,3,3,4,4,4,4,5,5,5,4,5,3}) == -451)){ tests_passed++; } total_tests++;

    if((sum_squares({94,6,1,-4,8,21,8,-9,-3,10,-9,1}) == 9512)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,-12,-4,-7,12,13,14,15,17,18,19,20,-20,-19,13,-18,-17,-16,-15,-13,-4}) == -2818)){ tests_passed++; } total_tests++;

    if((sum_squares({70,0,0,0,0,0,0,0,0,0,0,0,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,73,10,11,12,13,15,16,17,18,19,20,21,0,7,0,0}) == 18980)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,-12,-4,11,12,13,14,15,17,18,19,20,-20,-19,13,-18,-17,-16,-15,-14,-13,-4,14}) == -4714)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,-10,5,1,8,3,8,-9,-3}) == -664)){ tests_passed++; } total_tests++;

    if((sum_squares({7,8,9,10,3,48,-13,-14,-15,-16,-17,-17,49,-16,19}) == -353)){ tests_passed++; } total_tests++;

    if((sum_squares({1,6,1,1,1,1,1,2,2,2,2,-3,-3,72,-3,-3,-4,-4,-5,92,11,5,5,5,-5,1,-3,2}) == 1554)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,6,10,11,12,-13,-14,-15,-16,-17,-17,18,19,-16,20,-16}) == 7243)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,12,12,-13,-14,87,-15,-16,-17,-17,18,19,-16,20,7}) == 2693)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-3,3,3,-4,5,-6,7,33,-5,-8,9,11,-12,13,-14,1,-14,-6}) == -838)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,-2,5,-6,7,-5,-8,9,-10,-12,14,-14,1}) == 141)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,2,48,2,2,1,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,92,5,5,5,5}) == 284)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,8,0,-9,-3,11,11}) == 1422)){ tests_passed++; } total_tests++;

    if((sum_squares({7,8,9,10,11,-13,-14,-15,-16,-17,-17,18,19,-11,20,20,-13}) == -3568)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,12,-13,-14,-15,-16,-17,-17,18,19,20,12}) == -1347)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,-9,1,2,2,2,2,2,5,-3,-3,-3,-3,-3,-4,-4,-4,-4,92,5,5,5,5,5,5}) == 7764)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,49,50,58,70,64,72,81,82,88,92,94,50,-17,48}) == 848180)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,12,-13,-14,-15,-16,-17,-17,18,19,20,12,8}) == -835)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-5,3,-4,-2,5,-5,-8,9,-12,14,-14,1}) == -275)){ tests_passed++; } total_tests++;

    if((sum_squares({3,-16,0,6,40,19,7,-9,10,4,11,4,19}) == 65480)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,8,0,8,-9,-2,10,1}) == 1168)){ tests_passed++; } total_tests++;

    if((sum_squares({2}) == 4)){ tests_passed++; } total_tests++;

    if((sum_squares({5}) == 25)){ tests_passed++; } total_tests++;

    if((sum_squares({1}) == 1)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-2,-3,-4,-5}) == -113)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5}) == 143)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,1}) == 1)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-5,0,-5,0}) == 20)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}) == 56)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-9,-3,-8,11,3}) == -237)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,2}) == 169)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,3,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,4}) == 353)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,5,5}) == 151)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}) == 5227)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,10,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}) == 5825)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-15,-16,-17,18,19,20,-14}) == -719)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-15,-16,-17,18,19,20,-14,18}) == 5113)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,0}) == 5227)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,19,12,-13,-14,-15,-16,-17,19,19,20,-14,10}) == -2523)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,5,5,-3}) == 160)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-3,10,-3,-4,-4,-4,-4,-4,5,5,5,5,5,2}) == 182)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,-6,7,-8,9,-10,11,-12,13,-14}) == -107)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,9,-10,11,-12,14,8,-14}) == 1196)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-9,-3,-8,11,4}) == -236)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-4,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5}) == 174)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-3,-8,11,4}) == 1421)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,4,5,6,7,9,10,11,12,13,14}) == 1852)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-2,3,-4,5,-6,-6,7,-8,9,-10,11,-12,13,-14}) == -108)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,11,12,13,14,15,16,17,18,19,20,-20,-19,-18,-17,-16,-15,-14,-13,-16}) == -599)){ tests_passed++; } total_tests++;

    if((sum_squares({1,7,0,8,-3,-8,11,4,7,-3}) == 514)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,19,12,-13,-14,-15,-16,-17,19,19,20,-14,10,12}) == -2379)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,5}) == 413)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,5,5}) == 159)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-2,-4,5,-6,-6,7,-8,9,-10,-12,13,-14}) == 864)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,50,58,70,64,72,80,82,88,92,94}) == 852723)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,11,12,-13,-14,-15,-16,-17,18,19,20,-14,19}) == -760)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,-16,10,11,12,-13,-14,-15,-16,-17,18,19,20}) == -5127)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,3,2,2,3,3,3,3,3,4,4,0,4,4,4,5,5,5,5,5,4}) == 405)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,5}) == 410)){ tests_passed++; } total_tests++;

    if((sum_squares({6,1,7,0,8,1,-3,-8,11,4,3,1}) == 1909)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-9,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}) == 5088)){ tests_passed++; } total_tests++;

    if((sum_squares({6,-16,7,8,9,-16,10,11,12,-13,-14,-15,-16,-17,18,19,20}) == 11401)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,4,5,6,88,7,8,9,10,11,12,13,14}) == 1432)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-2,-3,-4,-5,-6,-7,-8,-9,-11,-11}) == -697)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,0,8,-9,5,-8,11,4}) == 1883)){ tests_passed++; } total_tests++;

    if((sum_squares({-3,1,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,5,5,-3,-3}) == 169)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,17}) == 6106)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,12,14,15,16,17,18,19,20,21,0}) == 5792)){ tests_passed++; } total_tests++;

    if((sum_squares({6,9,7,8,9,10,11,12,-13,-14,-15,-16,-17,18,19,20,-14,18,-14}) == -2848)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,5,5}) == 162)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,19,12,-13,-14,-16,-17,19,19,20,-14,10,11}) == 1089)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-9,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,0}) == 5088)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,12,9,-10,11,-12,-13,14,8,-14}) == -547)){ tests_passed++; } total_tests++;

    if((sum_squares({6,9,-16,7,8,9,10,11,12,-13,-14,-15,-16,-17,18,19,20,-14,18,-14}) == 11492)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-8,20,33,37,40,45,48,50,58,70,64,72,80,82,-5,92,94}) == 171135)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,10,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,5}) == 1164)){ tests_passed++; } total_tests++;

    if((sum_squares({-3,-5,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,5,5,-3,-3,-4}) == 159)){ tests_passed++; } total_tests++;

    if((sum_squares({40,3,6,1,0,8,-9,5,-8,11,4,8}) == 1325)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,-3,-3,-4,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5}) == 154)){ tests_passed++; } total_tests++;

    if((sum_squares({6,9,7,8,9,10,11,12,-13,-14,-15,-16,-17,18,19,20,-14,18,-16,-14,-14}) == -5546)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,-6,-19,-8,9,-10,11,-12,13,-14}) == -133)){ tests_passed++; } total_tests++;

    if((sum_squares({1,20,3,-4,5,-6,-6,7,-8,9,-10,11,-12,13,-14,-12}) == 59)){ tests_passed++; } total_tests++;

    if((sum_squares({1,20,3,-4,5,-6,-6,7,-8,9,-10,11,-12,13,-14,-12,3}) == 86)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,7,-9,-3,-8,11,3}) == -238)){ tests_passed++; } total_tests++;

    if((sum_squares({40,3,1,0,8,-9,5,-8,11,4,8}) == 3479)){ tests_passed++; } total_tests++;

    if((sum_squares({1,7,0,8,-3,-8,11,4,7,-3,1}) == 515)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,-1,8,-9,-3,-8,11,3}) == -238)){ tests_passed++; } total_tests++;

    if((sum_squares({1,20,5,3,-4,5,-6,-6,49,7,-8,9,-10,11,-12,13,-14,-12,3,5}) == 115231)){ tests_passed++; } total_tests++;

    if((sum_squares({4,3,6,1,0,8,-9,5,-8,11,4}) == -267)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-4,-4,-3,-4,-4,-4,-4,-4,5,5,5,5,5,-3}) == 170)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,2,7,0,7,-9,-3,-8,11,3}) == -237)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,9,-10,11,37,13,-14}) == 1210)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,2}) == 146)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,-16,10,11,12,-13,-14,-15,-9,-17,18,19,20}) == -5120)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,11,12,13,14,15,16,17,18,19,20,-20,-19,-18,-17,-16,-15,-14,-16}) == -858)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-9,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,0}) == 6380)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,3,2,2,3,3,3,3,4,4,0,4,4,4,5,5,5,5,5,4}) == 356)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,-16,10,11,12,-13,-14,-15,-16,-16,-17,18,19,20}) == 2765)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,-16,10,11,12,-13,-14,-15,-9,-17,18,19,20,19}) == 1739)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,-16,10,10,12,-13,-14,-15,-9,7,-17,18,50,19,20,19}) == 3923)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}) == 5154)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,6,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,6,-4,-4,-4,-4,5,5,5,5,5,2,1}) == -4)){ tests_passed++; } total_tests++;

    if((sum_squares({72,1,1,1,1,1,2,2,2,2,2,-3,-3,-4,-4,-3,-4,-4,-4,-4,-4,5,5,5,5,5,-3}) == 5158)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-3,-8,11,4,0}) == 1421)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-2,3,-4,5,-6,-6,7,-8,-8,9,-6,-10,11,-12,-14}) == 29)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,48,50,58,70,64,72,80,82,88,92,94,64}) == 984729)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-3,-8,11,4,10,0}) == 1431)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,2,5,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,5}) == 445)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,33,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,5,5}) == 196)){ tests_passed++; } total_tests++;

    if((sum_squares({1,7,0,8,-3,-8,11,4,7,-3,-3}) == 511)){ tests_passed++; } total_tests++;

    if((sum_squares({1,7,0,8,-8,11,4,-3,0}) == -416)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}) == 7108)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-4,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,-3}) == 171)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-3,-8,11,6}) == 1441)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,5,6,88,8,8,10,11,12,13,14}) == 683105)){ tests_passed++; } total_tests++;

    if((sum_squares({1,13,1,1,1,1,2,2,2,10,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,5,-3}) == 102)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,-16,10,11,12,-13,-14,-15,-16,-16,-10,18,19,20}) == 2772)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-2,-3,-4,-5,-6,-7,-8,-9,-11,-11,-1}) == -698)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-4,5,-6,-6,-19,-8,9,-10,11,-12,13}) == 1148)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,19,12,-13,-14,-15,-16,-17,19,19,20,-14,10,6}) == -2487)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,4,5,6,88,7,8,9,10,11,12,13,14,11}) == 1443)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,-9,-3,-8,11,3}) == 1397)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,10,-3,-4,-4,-4,-4,-4,5,5,5,5,5,2}) == 245)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,-10,11,-12,-13,14,8,-14,1}) == -535)){ tests_passed++; } total_tests++;

    if((sum_squares({4,-9,3,6,1,0,8,-10,5,-8,4}) == 294)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,0,0,0,0,0,0,0,0,0,0,0,1,2,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}) == 5890)){ tests_passed++; } total_tests++;

    if((sum_squares({6,1,7,0,8,2,1,-3,-8,11,4,3,1}) == 173)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,-16,10,10,12,-13,-14,-15,-8,7,-17,18,50,19,20,19}) == 3924)){ tests_passed++; } total_tests++;

    if((sum_squares({72,1,1,1,1,1,2,2,2,2,2,-3,-3,-4,-4,-3,-4,-4,-4,-4,-4,5,5,5,5,5,-3,2}) == 5162)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,3,5,6,7,8,9,10,11,12,13,14}) == 1673)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,48,58,70,64,72,80,82,88,92,94,64}) == 852591)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,16,2,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,5,5,-3}) == 173)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,-4,5,5,5,5}) == -22)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,4,5,6,7,9,10,11,12,13,14,7}) == 1901)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-9,-3,-8,11,3,1}) == -236)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-7,-4,5,-6,7,9,-10,11,37,13,-14}) == -448)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,9,-10,11,37,13}) == 1224)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,0,0,0,0,1,2,3,4,5,6,7,8,6,10,11,12,13,14,15,15,17,18,19,20,21}) == 5108)){ tests_passed++; } total_tests++;

    if((sum_squares({1,3,-4,5,-6,7,-8,12,9,-10,11,-12,-13,14,8,-14}) == 1107)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,0,-9,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,21,0}) == 5869)){ tests_passed++; } total_tests++;

    if((sum_squares({1,20,5,3,-4,5,-6,-6,49,7,-8,9,-10,11,-12,13,-14,-12,3,5,-8}) == 114719)){ tests_passed++; } total_tests++;

    if((sum_squares({7,8,9,11,12,-13,8,-15,-16,-17,18,19,20,-14,19}) == -1414)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,48,50,58,70,64,72,70,80,82,88,92,94,64}) == 1515669)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-9,-3,72,11,3,1}) == 373524)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,48,-17,20,33,37,40,45,48,48,50,58,70,64,72,70,80,82,88,92,94,64}) == 1249597)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,16,2,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,5,5,-3,1}) == 174)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,6,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,6,-4,-4,-4,-4,5,5,5,5,5,2,1,2}) == -2)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,5,6,88,8,8,10,11,12,13,14,88}) == 690849)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,-16,10,11,12,-13,-14,-16,-16,-10,18,19,20}) == -5317)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,2,-3,2}) == 170)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,11,12,13,14,15,16,17,18,19,20,-20,-17,-19,-18,-17,-16,-15,-14,-16}) == 1411)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-14,-15,-16,-17,18,19,20,-14,18,-14,-13}) == -3911)){ tests_passed++; } total_tests++;

    if((sum_squares({1,2,2,5,2,2,3,3,3,3,3,4,4,4,4,5,5,5,5,5,5}) == 429)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,11,12,13,14,15,16,17,18,19,20,-20,-19,-18,-17,-16,-15,-14,-13,-16,-4}) == 2639)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-9,-3,72,11,3,1,72}) == 378708)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,-16,10,11,12,-13,-14,-15,-9,-17,18,19,20,9}) == -4391)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,16,2,-3,-3,-3,-3,0,-4,-4,-4,-4,5,5,5,5,5,-3,1}) == 174)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,21,1,1,1,2,2,2,10,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,5}) == 101)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,-9,-3,-8,11,3,7}) == 1404)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,-10,11,-12,-13,14,8,1,-8}) == -457)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-4,5,-6,-6,-19,-8,-10,11,-12,13}) == -727)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,5,3}) == 422)){ tests_passed++; } total_tests++;

    if((sum_squares({3,1,7,0,8,-4,-8,11,4}) == 664)){ tests_passed++; } total_tests++;

    if((sum_squares({-7,2,4,5,6,88,8,8,10,11,12,13,14,88}) == 1886)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-16,-17,18,19,20,9}) == -823)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,19,12,-13,-14,-15,20,-16,-17,19,19,20,-14,10,6,-17}) == 3318)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,-18,1,1,2,2,2,10,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,5}) == 1145)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,33,1,1,1,3,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,5,5}) == 201)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-9,-3,-8,11,-7,4}) == -243)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,-16,11,12,-14,-15,-16,-17,18,19,20,-14,18,-14,-13,-13}) == 5230)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,12,-13,-14,-15,-16,-17,18,19,20,-14,19}) == -1337)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,3,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,4}) == 288)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,0,0,0,0,0,0,0,0,0,0,0,1,2,3,11,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}) == 5234)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,33,1,1,1,3,2,2,2,2,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,-20,5}) == 167)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,4,5,6,88,7,8,9,10,11,12,13,58,14,11}) == 1611)){ tests_passed++; } total_tests++;

    if((sum_squares({49,-2,3,-4,5,-6,7,-8,-10,11,-12,-13,14,8,-14,1}) == 1865)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,8,-9,-3,72,11,3,1,72}) == 2062)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,19,12,-13,-14,-15,20,-16,-17,19,19,20,10,6,-17}) == 8168)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,80,5,-6,7,-8,9,-10,11,-12,13,-14}) == 7545)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11,-11}) == -729)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,5,6,88,8,8,10,11,12,18,13,14,88,12,13}) == 683574)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-9,-3,72,11,94,1}) == 373615)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,7,8,-9,-3,72,11,3,1,72}) == 4649)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,5}) == 266)){ tests_passed++; } total_tests++;

    if((sum_squares({4,-9,3,6,1,0,8,-10,5,-8,4,4}) == 298)){ tests_passed++; } total_tests++;

    if((sum_squares({1,3,-4,5,-6,7,-8,12,8,-10,11,-12,-13,14,8,-14,-4}) == 826)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-9,9,-3,72,6,11,3,1,72}) == 5419)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,18,1,2,2,2,2,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,5,5,5,-3}) == 487)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,10,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,40,20,21}) == 6285)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-9,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,13,14,15,16,17,18,19,20,21,0}) == 7754)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,0,0,0,0,0,0,0,0,0,0,0,1,2,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,0}) == 15940)){ tests_passed++; } total_tests++;

    if((sum_squares({3,2,3,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,4}) == 293)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,18,1,2,2,2,2,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,-9,5,5,5,-3}) == -350)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,-9,-3,40,-8,11,3,7}) == -276)){ tests_passed++; } total_tests++;

    if((sum_squares({0,14,-1,-11,-4,-4,-4,-4,11,12,13,14,15,16,17,18,19,20,-20,-19,-18,-17,-16,-15,-14,-13,-16}) == 4015)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,2,2}) == 148)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,21,1,1,1,2,2,2,10,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,5,5}) == 126)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-9,-3,72,11,70,3,1}) == 373594)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,-4,11,12,13,14,15,16,17,18,19,20,-20,15,-19,-18,-17,-16,-15,-13}) == -2958)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,48,58,70,64,72,-1,80,82,88,92,94,64,72}) == 989064)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,20,33,37,40,45,48,50,58,70,64,72,80,82,33,92,94}) == 967719)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,70,0,8,-3,-8,11,4,10,0}) == 6282)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-3,-8,11}) == 1405)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,2,2,16,2,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,5,5,-3,1}) == 567)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,-9,-3,40,11,3,7}) == 1452)){ tests_passed++; } total_tests++;

    if((sum_squares({3,1,7,0,8,-4,-8,11,4,-3}) == 673)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,3,5,5,5,5,4}) == 331)){ tests_passed++; } total_tests++;

    if((sum_squares({40,3,6,1,0,8,-9,5,-8,11,4,8,8}) == 1389)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,80,5,-6,7,-8,9,-10,9,11,-12,13,-14}) == 7554)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,5,5,5,5,5,-3}) == 167)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,8,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,2}) == 493)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,45,48,49,58,70,64,72,80,82,88,92,94,64,64}) == 955738)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,9,-10,4,11,-12,13,-14}) == 1165)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,2,-3,2,5,-3}) == 292)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,2,7,0,7,-9,-3,-8,-6,3,2}) == -320)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-15,-16,18,-17,18,19,20,-14,18}) == -3243)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,-7,0,0,0,0,0,0,0,0,0,0,0,0,21,0,0,0,0,1,2,3,4,5,6,7,8,6,10,11,12,13,14,15,15,17,18,19,20,21}) == 13317)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,0,8,13,-9,5,-8,11,4}) == 240)){ tests_passed++; } total_tests++;

    if((sum_squares({40,3,6,1,-13,8,-9,5,-8,11,4,8}) == -872)){ tests_passed++; } total_tests++;

    if((sum_squares({1,13,1,1,1,1,2,2,2,10,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,5,-3,-3}) == 75)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,8,-9,-3,72,3,1,72}) == 749)){ tests_passed++; } total_tests++;

    if((sum_squares({1,7,0,8,1,-8,11,4,-3,0}) == 163)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,-18,-15,9,-16,10,11,12,-13,-14,-15,-16,-16,-10,18,19,20}) == 10375)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-2,3,-4,5,-6,7,-6,7,-8,9,-10,11,-12,13,-14}) == 903)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,18,1,2,2,2,2,-3,-3,-3,-3,-4,-4,-4,-4,6,5,5,-9,5,5,5,-3}) == -349)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,48,50,58,70,64,72,80,82,88,92,94}) == 958504)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,8,-3,-8,11,4,10,0}) == 813)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-3,-4,-3,-4,-4,-4,-4,-4,5,5,5,5,5,2,-3,2,5,15}) == 309)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,-7,0,0,0,0,0,0,0,0,0,0,0,0,21,0,0,0,0,1,2,3,4,5,6,7,8,6,10,11,12,13,14,15,15,17,18,19,20,21,0,6}) == 13353)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,-15,8,9,10,-16,11,12,-14,-15,-16,-17,18,19,20,-14,18,-14,-13,-13}) == -1023)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,3,2,2,3,3,3,3,4,4,0,4,4,3,4,5,5,5,5,5,4}) == 423)){ tests_passed++; } total_tests++;

    if((sum_squares({0,14,-1,-11,-4,-4,-4,-4,11,12,13,14,15,16,17,18,19,20,-20,-19,-18,-17,-16,-15,-14,-13,-16,14}) == 4211)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,-16,10,11,12,-13,-14,-15,-9,-17,18,19,20,6,12}) == -4892)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,-16,10,11,12,-13,-14,-15,-9,-17,-4,18,19,20}) == 2818)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,5,-6,7,-8,9,-10,11,37,13,-2}) == 1222)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-2,3,-4,5,-6,7,-6,7,-8,-10,11,-12,13,-14}) == 730)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-2,3,-4,5,-6,7,-6,7,-8,-10,11,-12,13,-14,-4}) == 746)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-3,-8,6,11}) == 411)){ tests_passed++; } total_tests++;

    if((sum_squares({88,4,3,6,1,0,8,-9,5,-8,11,4}) == 8047)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-9,9,-3,82,11,4}) == 6875)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,16,0,0,0,0,0,0,0,0,0,0,0,0,0,-9,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,0}) == 5380)){ tests_passed++; } total_tests++;

    if((sum_squares({72,1,1,1,1,1,2,2,2,14,2,-3,-3,-4,-4,-3,-4,-4,-4,-4,-4,5,5,5,5,5,-3}) == 5350)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-4,5,-6,-6,-19,-8,-11,11,-13,13,-6}) == -1023)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,-4,5,5,5,4}) == -31)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,33,1,1,1,3,2,2,2,2,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,-20,5,1}) == 168)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,5,6,88,8,2,9,10,11,12,13,14,88}) == 682972)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,0,8,13,-9,5,-8,-9,4}) == 200)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,-3,-8,6,11,7}) == 420)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,-4,11,12,13,14,15,16,17,18,19,20,-20,15,-19,-18,-17,-16,-15,-13,15}) == 417)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-2,3,-4,5,-6,7,-6,7,-8,-10,11,-12,13,-14,-4,-12}) == -982)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,-14,-15,-16,-17,18,19,20,-14,18,-14,-13}) == -4043)){ tests_passed++; } total_tests++;

    if((sum_squares({8,-2,-4,5,-6,-6,-19,9,-10,11,-12,13}) == -647)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,0,0,0,0,0,0,0,0,0,0,0,1,2,3,11,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,0}) == 5234)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,-17,-3,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,5,5}) == 436)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,8,-9,-3,72,11,1,72}) == 2053)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-9,-3,-8,11,4,11}) == -225)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-4,-3,-3,-4,-4,-4,-4,-4,5,4,5,5,5,5,-3}) == 167)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,4,3,3,3,3,4,4,4,4,4,5,5,5,5,5,5}) == 352)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,5,6,88,8,2,9,10,11,7,12,13,14,88}) == 682953)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,7,5,-6,-8,9,-2,-10,11,37,13,9}) == 561)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,3,5,6,7,8,9,10,11,11,12,13,14}) == 1658)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,-9,-3,-8,2,11,3}) == 189)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-2,3,-4,5,-6,7,-6,7,-8,-10,11,-12,13,-14,-4,-12,13}) == -969)){ tests_passed++; } total_tests++;

    if((sum_squares({20,-15,-17,20,33,37,40,45,48,48,50,58,70,64,72,70,80,82,88,92,94,64}) == 1515925)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,19,12,-13,-14,-15,-16,-17,19,19,20,-14,10,12,8,19}) == 4488)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,1,2,2,-3,-3,-3,-3,-4,-4,-4,-4,-4,-4,5,5,5,4}) == 139)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,18,1,2,2,2,2,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,5,-1,5,5,-3}) == 480)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-14,-15,-16,-17,18,19,20,-14,18,-14,-13,18,7}) == -3580)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,-9,-3,40,11,3,7,6}) == 1458)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,48,-17,20,33,37,40,45,48,48,50,58,70,64,72,70,80,82,88,92,10,64,70}) == 1240931)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,7,7,-3,-8,6,11,7}) == 426)){ tests_passed++; } total_tests++;

    if((sum_squares({6,9,7,8,9,10,11,12,-13,-14,-15,-16,-17,18,19,20,-14,18,-16,-14,-14,10}) == -5446)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-7,5,-6,7,9,-10,11,37,13,-14}) == 2578)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,-7,0,0,0,0,0,0,0,0,0,0,0,21,0,0,0,0,1,2,3,4,5,6,7,8,6,10,11,12,13,14,15,15,17,18,19,20,21}) == 5101)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,10,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,5,1}) == 1165)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,14,5,6,88,8,2,9,10,11,7,12,13,14,88}) == 9179)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,-16,10,11,12,-13,-14,-17,-16,-10,18,19,20}) == -5318)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,11,12,13,14,15,16,17,18,19,20,13,-20,-19,-18,-17,-16,-15,-14,-16}) == -1643)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11,-11,-3}) == -720)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,4,3,3,3,3,4,4,4,4,4,5,5,5,5,5,5,2}) == 360)){ tests_passed++; } total_tests++;

    if((sum_squares({3,1,7,-3,-8,45,6,11,7}) == -51)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-9,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,14,10,11,13,14,15,16,17,18,19,20,21,0}) == 5966)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,8,8,-9,-4,-3,72,3,1,72}) == 11007)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,18,1,2,2,2,2,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,5,4,5,-3}) == 478)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,-10,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,2}) == -29)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,5,2}) == 270)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,-4,5,5,5,4,-3}) == -34)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,3,-4,5,-6,7,-8,12,8,-10,11,-12,-13,14,8,-14,-4,8,-1}) == 835)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,-16,10,11,12,-13,-14,-15,-9,-17,18,19,20,6,45,12}) == -4715)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,16,2,-3,21,-3,-3,-4,-4,-4,-4,5,5,5,5,5,-3}) == 197)){ tests_passed++; } total_tests++;

    if((sum_squares({6,8,9,10,11,19,12,-13,-14,-15,20,-16,-17,19,19,20,-14,10,6,11,-17}) == -7754)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,16,2,94,-3,-3,-3,-4,-4,-4,-4,5,5,5,5,5,-3}) == 9000)){ tests_passed++; } total_tests++;

    if((sum_squares({-20,6,1,7,0,8,-9,-3,-8,11,4}) == 155)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,2,-3,2,-4}) == -4)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,8,-14,-9,-3,72,11,3,1,72}) == 379198)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,21,0,0,0,0,1,2,3,4,5,6,7,8,6,10,11,12,13,72,14,15,15,18,19,20,21}) == 375581)){ tests_passed++; } total_tests++;

    if((sum_squares({1,13,45,1,1,1,1,2,2,2,10,2,-3,-3,-3,-3,-11,-4,-4,-4,-4,5,5,5,5,5,5,-3,-3}) == -1234)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,-16,10,11,12,-13,-14,-15,-16,-16,-10,18,19,20}) == -565)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-2,3,-4,5,-6,7,-6,7,-8,-10,11,-12,13,-14,7}) == 779)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,48,50,58,50,70,64,72,80,82,88,92,94}) == 867990)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,33,1,1,1,3,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,5,5,5,5,5}) == 185)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,2,7,7,-9,-3,-8,11,3}) == 1741)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-4,-3,-3,-3,-4,-4,-4,-4,-4,-4,5,5,2,5,5}) == -21)){ tests_passed++; } total_tests++;

    if((sum_squares({8,-2,-4,5,-6,9,-10,11,-12,13}) == -1572)){ tests_passed++; } total_tests++;

    if((sum_squares({-3,-5,1,-4,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,5,5,-3,-3,-4,-3}) == 166)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,2,-3,-3,-3,-4,-3,-4,-4,-4,-4,-4,5,5,5,5,5,2,-3,2,5,15}) == 229)){ tests_passed++; } total_tests++;

    if((sum_squares({40,3,6,1,0,8,-9,5,-8,11,4,8,-8}) == 1389)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-14,-15,-16,-17,18,19,-19,-14,18,-13}) == -3390)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,-4,11,12,13,14,15,16,17,18,19,20,-20,15,-19,-18,-17,-16,-13,15}) == -2900)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,-13,11,19,-13,-14,-15,-16,-17,19,19,20,-14,10,6}) == -2744)){ tests_passed++; } total_tests++;

    if((sum_squares({72,1,1,1,1,1,2,2,2,2,2,-3,-3,-4,-4,-3,-4,-4,-4,-4,-4,5,5,5,5,5,-3,2,1}) == 5163)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,0,0,0,0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}) == 5830)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,2,-3,5}) == 191)){ tests_passed++; } total_tests++;

    if((sum_squares({-8,2,4,5,6,88,8,8,10,11,12,13,14,88,5,5}) == 1931)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,17,3,-4,5,-6,7,-8,9,-10,4,11,-12,13,-14}) == -110)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,14,15,16,17,18,19,20,21}) == 5490)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-9,-3,72,11,3,94,1,72,94}) == 373784)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,-16,10,11,12,-13,-14,-16,-10,18,19,20}) == -5485)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-3,-8,11,4,0,8}) == 1429)){ tests_passed++; } total_tests++;

    if((sum_squares({0,18,-2,3,-4,5,-6,-6,7,-8,-8,9,-6,-10,11,-12,-14,18}) == -2141)){ tests_passed++; } total_tests++;

    if((sum_squares({3,1,7,0,8,-3,-8,6,11}) == 1927)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,-12,0,0,0,0,0,0,0,0,0,0,-9,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,0}) == 5952)){ tests_passed++; } total_tests++;

    if((sum_squares({2,6,3,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,5,3}) == 427)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-2,3,-4,5,-6,7,-6,7,-8,-10,11,-12,13,-14,-14,7}) == 1269)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,5,6,88,12,8,8,10,11,12,13,14,88}) == 683035)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,2,7,7,-9,-3,-8,-2,11,3}) == 517)){ tests_passed++; } total_tests++;

    if((sum_squares({4,2,2,3,2,2,3,3,3,3,3,4,4,4,4,5,5,5,5,4,5}) == 427)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,8,1,2,2,2,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,6,5,5,2}) == 494)){ tests_passed++; } total_tests++;

    if((sum_squares({88,4,3,6,1,0,8,-9,5,-8,11,4,4}) == 8063)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,-16,10,11,12,-14,-15,-9,-17,18,19,20,6,45,12,6,-17}) == 85189)){ tests_passed++; } total_tests++;

    if((sum_squares({3,7,1,7,0,8,-3,-8,11,6}) == 1442)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,-3,-3,-4,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,5}) == 179)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-20,-14,-15,-16,-17,18,19,20,-14,18}) == 5106)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,19,12,-13,-14,-15,-16,-17,19,19,20,-14,10,12,-13}) == -2392)){ tests_passed++; } total_tests++;

    if((sum_squares({-3,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,48,5,5,-3,-3,2}) == 2454)){ tests_passed++; } total_tests++;

    if((sum_squares({6,8,9,10,11,12,-14,-15,-16,-17,18,19,20,-14,18,-14,-13,-14,-14}) == -3508)){ tests_passed++; } total_tests++;

    if((sum_squares({3,11,1,7,0,8,-9,-3,72,11,3,1,72}) == 378713)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,8,2,2,2,2,-3,-3,-4,-3,-3,-4,-4,-4,-4,-4,5,5,5,5,5,-3}) == 674)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,16,2,-3,-3,-3,-3,0,-4,-4,-4,-4,5,5,5,6,5,-3,1,5}) == 190)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,8,1,2,2,88,2,2,-3,-3,-3,-3,-3,-4,-4,-4,-4,-4,5,5,6,1,5,5,2}) == 681941)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,2,-3,-3,-3,-4,-3,-4,-4,-4,-4,-4,5,5,5,5,5,2,-3,2,5,15,5}) == 234)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-14,-15,-16,18,19,20,-14,18}) == -1405)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,7,0,8,-9,-3,72,11,3,1,72}) == 2019)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,3,5}) == 289)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,5,6,88,8,8,10,11,12,13,14,88,6}) == 690855)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,0,0,0,0,0,0,0,0,0,0,0,1,2,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,0}) == 5890)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,5,6,88,12,8,8,10,11,18,13,14,88,88}) == 683129)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,3,2,2,3,3,3,3,3,4,4,0,4,4,4,5,5,5,5,4}) == 328)){ tests_passed++; } total_tests++;

    if((sum_squares({-8,1,3,-4,7,5,-6,7,-8,12,9,-10,11,-12,-13,14,8,-14}) == 896)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,2,1,1,2,-5,2,2,-3,-3,10,-3,-4,-4,-4,-4,-4,5,5,5,5,5,2}) == 240)){ tests_passed++; } total_tests++;

    if((sum_squares({7,8,9,11,12,-13,8,-15,-16,13,18,19,20,-14,19}) == -1534)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,48,79,50,58,70,64,72,80,82,88,92,94,64}) == 1514436)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-7,5,7,9,-10,11,37,13,-14}) == 51288)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,19,12,-11,-13,-14,-15,20,-16,-17,19,19,20,-14,10,6,-17}) == 8643)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,8,5,-3,-8,11,4,10,0}) == 1940)){ tests_passed++; } total_tests++;

    if((sum_squares({1,17,3,-4,5,-6,7,-8,9,-10,4,11,-12,13,-14}) == 1184)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,14,5,6,88,8,2,9,10,11,7,12,13,14,88,2}) == 9187)){ tests_passed++; } total_tests++;

    if((sum_squares({-7,2,4,5,-16,6,88,8,8,10,11,12,13,14,88}) == 4648)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-14,-15,-16,18,19,20,-14,18,19}) == -1044)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,0,-9,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,21,0,9}) == 5950)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,-16,10,10,12,-13,-14,-15,-9,7,-17,18,50,19,20,19,10}) == 3933)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,5,4}) == 282)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,-1,8,9,-16,10,11,12,-13,-14,-16,-10,18,19,20}) == 3334)){ tests_passed++; } total_tests++;

    if((sum_squares({72,1,1,1,1,2,2,2,14,2,-3,-3,-4,-4,-3,10,-4,-4,-4,-4,5,5,5,5,-3,-3}) == 8157)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-3,-8,11,4,0,-8}) == 1413)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,2,2,2,3,3,3,3,-17,4,4,4,4,4,5,5,5,5}) == 563)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,0,8,-9,-3,-8,11,3,6}) == -231)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,0,8,-9,-8,11,4,11}) == 779)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,11,12,13,14,15,16,18,18,19,20,-20,-19,-18,-17,-16,-15,-14,-16}) == 2637)){ tests_passed++; } total_tests++;

    if((sum_squares({-1,-2,-3,-4,-5,-6,-8,-9,-10,-11,-11}) == -954)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,33,37,40,48,50,58,70,14,72,80,82,88,92,94}) == 1099964)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,10,3,4,5,6,7,8,9,10,11,12,13,70,15,16,17,18,19,20,21}) == 5881)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,0,0,0,0,0,0,0,0,0,0,0,1,2,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,19}) == 6251)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,3,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,4,4,2}) == 371)){ tests_passed++; } total_tests++;

    if((sum_squares({4,3,1,0,8,-9,5,-8,11,4}) == 1887)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,3,-4,2,5,-6,7,-8,9,-10,11,-12,14,8,-14}) == 6)){ tests_passed++; } total_tests++;

    if((sum_squares({-4,-3,1,1,1,1,2,2,2,2,2,-3,-3,-3,-3,-4,-4,-4,-4,5,5,5,48,5,5,-3,-3,2}) == 232)){ tests_passed++; } total_tests++;

    if((sum_squares({1,7,64,8,-3,-8,11,4,-3,-3}) == 208)){ tests_passed++; } total_tests++;

    if((sum_squares({13,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,10,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21}) == 5994)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,11,12,13,14,15,16,17,18,19,20,-20,-19,-18,-17,-16,-15,-14,-13,-16,-11}) == -1930)){ tests_passed++; } total_tests++;

    if((sum_squares({2,2,3,2,2,3,3,3,3,4,4,0,4,4,3,4,4,5,5,5,5,4,2}) == 364)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,2,-3,-3,-3,-4,-3,-4,-4,-4,-4,5,5,5,5,5,2,-3,2,5,15,5}) == 332)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,11,12,13,14,15,16,17,18,19,20,79,13,-20,-19,-18,-17,-16,-15,-14,-16}) == 4532)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-2,3,-4,5,-6,6,-6,7,-8,9,-10,11,-12,13,-14}) == 890)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,1,7,0,8,-4,-8,11}) == 1404)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-2,-4,5,-6,-6,7,-8,-10,13,-14}) == -1007)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,0,0,0,0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,0,0}) == 5830)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,21,70,1,1,1,2,2,2,10,2,-3,-3,-3,-3,-3,-4,-2,-4,-4,-4,5,5,5,5,5,5}) == 4955)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,16,2,-3,21,-3,-3,-4,-3,-4,-4,-4,5,5,5,-5,5,5,-3}) == 211)){ tests_passed++; } total_tests++;

    if((sum_squares({2,3,1,7,0,8,-4,-8,11,-4}) == 1420)){ tests_passed++; } total_tests++;

    if((sum_squares({0,-6,14,-1,-11,-4,-4,-4,-4,-4,11,12,13,14,15,19,16,17,18,19,20,-20,15,-19,-18,-17,-16,-13,15}) == 15907)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,8,8,-9,-4,-3,72,3,1,72,1}) == 11008)){ tests_passed++; } total_tests++;

    if((sum_squares({1,17,3,-4,5,-6,7,-8,10,-11,4,11,-12,13,-14}) == 1476)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,16,2,-3,21,-3,58,-3,-4,-3,-4,-4,-4,5,5,5,-5,5,5,-3}) == 3553)){ tests_passed++; } total_tests++;

    if((sum_squares({3,1,7,8,-3,-8,11,4,10,0}) == 1171)){ tests_passed++; } total_tests++;

    if((sum_squares({1,1,1,1,1,2,2,2,2,2,-3,-4,-3,-3,-3,-4,-4,-4,-4,-4,-4,5,2,5,5}) == -26)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,48,79,50,58,70,64,21,72,80,82,88,92,94,64,-17}) == 1322806)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-13,-14,-15,-16,-17,19,20,-14}) == -911)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,-12,0,0,0,0,0,0,0,0,0,0,-9,0,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,19,10,11,12,13,14,15,16,17,18,19,20,21,0}) == 5593)){ tests_passed++; } total_tests++;

    if((sum_squares({0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,94,0,0,0,0,0,0,0,0,0,0,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,19,17,18,19,20,21}) == 14412)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-17,20,33,37,40,45,48,-10,48,58,70,64,72,80,82,88,92,94,64,40}) == 984123)){ tests_passed++; } total_tests++;

    if((sum_squares({-12,-15,-8,20,33,37,40,45,48,50,58,70,64,72,80,-5,92,94}) == 934415)){ tests_passed++; } total_tests++;

    if((sum_squares({2,64,2,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,5,2}) == 346)){ tests_passed++; } total_tests++;

    if((sum_squares({3,6,1,7,-9,-3,72,3,1,72}) == 9705)){ tests_passed++; } total_tests++;

    if((sum_squares({2,4,5,6,88,12,8,8,8,10,11,18,13,14,88,88,4}) == 690325)){ tests_passed++; } total_tests++;

    if((sum_squares({6,7,8,9,10,11,12,-14,-15,-16,18,19,20,-14,18,8}) == -1341)){ tests_passed++; } total_tests++;

    if((sum_squares({40,3,6,1,0,-9,5,-8,11,4,8,-8}) == 2965)){ tests_passed++; } total_tests++;

    if((sum_squares({1,-2,-4,5,-6,-6,-8,9,9,11,-12,13}) == 722)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


