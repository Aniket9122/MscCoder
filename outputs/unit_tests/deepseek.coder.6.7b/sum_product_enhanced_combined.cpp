#include<iostream>
#include<vector>
using namespace std;

pair<int, long long int> sum_product(const vector<int>& numbers){
    int sum = 0;
    long long int product = 1;
    
    for (auto num : numbers) {  // Use range-based 'for' loop to iterate through the elements of the vector
        sum += num;
        if(num!=0)            // Avoid multiplying by zero as it will make the product 0
          product *= num;
    }
    
    return make_pair(sum, (numbers.empty()?1:product));   // Return default product of 1 for empty vector
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

    if((issame(sum_product({}) ,{0, 1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1, 1, 1}), {3, 1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({100, 0}),{100, 0}))){ tests_passed++; } total_tests++;

     if((issame(sum_product({3, 5, 7}) , {3 + 5 + 7, 3 * 5 * 7}))){ tests_passed++; } total_tests++;

      if((issame(sum_product({10}) ,{10, 10}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({}) ,{0,1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1}) ,{3,1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({100,0}) ,{100,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,5,7}) ,{15,105}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10}) ,{10,10}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,6,8,10}) ,{30,3840}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,2,3,4,5}) ,{15,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,1,-2,2,-3,3}) ,{0,-36}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,3,5,7,11,13}) ,{41,30030}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,8,16,32}) ,{63,32768}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,3,4,5}) ,{15,120}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0}) ,{0,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,8,16}) ,{30,1024}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,-2,-3}) ,{-6,-6}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,20,30,40,50}) ,{150,12000000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,-3}) ,{-4,3}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,1,0,2,-3,3}) ,{2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,8,16,16,4}) ,{50,65536}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,2,3,4,5,0}) ,{15,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,-1}) ,{-1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,3,13,7,11,13}) ,{49,78078}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,3,5,13,0}) ,{24,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,3,4,5,4}) ,{19,480}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,3,5,0,5}) ,{16,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,3,13,7,11,13,2}) ,{51,156156}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,20,30,40}) ,{100,240000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,20,30,40,49}) ,{149,11760000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,3,5,13,0,14}) ,{38,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0}) ,{0,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,5,11,2}) ,{25,880}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,3,5,7,10,13,5}) ,{45,136500}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,20,30,40,0}) ,{100,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({30,30,40,50}) ,{150,1800000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,8,16,16,4,16,16,5}) ,{87,83886080}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,16}) ,{16,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,3,5,13,1}) ,{25,585}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,8,16,16,4,40}) ,{90,2621440}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,-3}) ,{-5,6}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,2,4}) ,{7,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,49,8,16,49}) ,{124,614656}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,13,7,11,13,49}) ,{95,1275274}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,8,16,4}) ,{34,4096}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,30,40,49}) ,{139,1176000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,3,5,7,11,14}) ,{42,32340}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,2,3,4,5,4}) ,{19,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,-3,4,-3}) ,{-3,-36}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({30,30}) ,{60,900}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-3,-3}) ,{-6,9}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({13,20,5,40,49}) ,{127,2548000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,49,16,49}) ,{116,76832}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,3,5,32,1,14,3}) ,{61,60480}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,8,16,16,4,16,16,5,-1}) ,{86,-83886080}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,8}) ,{14,64}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,4,8,16,32}) ,{61,16384}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({13,5,40,49}) ,{107,127400}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,3,7,11,14}) ,{37,6468}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,30,40,49,49}) ,{188,57624000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2}) ,{-2,-2}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,8,16,16,4,16,16,5,-1,4}) ,{90,-335544320}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,13,7,11,13,2,3}) ,{55,624624}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-2,2,-3}) ,{-1,24}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,13,7,11,13,49,16}) ,{111,20404384}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,4,8,16,32,8,50}) ,{119,6553600}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,8,16,4,16,16,5,-1,4,16}) ,{90,-335544320}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,2,4,5,0}) ,{12,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,3,13,7,11,13,2,1}) ,{52,156156}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,8,16,16,3,40}) ,{89,1966080}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,8,16,16,4,4}) ,{52,131072}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,8,16,16,4,16,5}) ,{71,5242880}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,3,4,5}) ,{13,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,3,4,5,0,-1}) ,{13,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({13,5,40,49,49}) ,{156,6242600}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,3,3,5,3}) ,{17,270}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,-2}) ,{-3,2}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,0}) ,{0,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-2,2,-3,2}) ,{1,48}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,8,16,4,8,8}) ,{50,262144}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,3,5,33,1,14,3}) ,{62,62370}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,3,4,5,2,0,0}) ,{17,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,49,0,16,49,49,0}) ,{165,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,4,11,2,4,3}) ,{31,8448}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,3}) ,{5,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,16,-1}) ,{15,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,3,5,13,1,5,14}) ,{44,40950}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,8,17,2,17}) ,{46,9248}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,4,16,32}) ,{53,2048}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,3,5,13,0,0}) ,{24,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-2,2,-3,-2}) ,{-3,-48}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,3,5,13,0,14,13}) ,{51,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,8,16,16,4,30}) ,{76,491520}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,3,5,7,11,14,5}) ,{47,161700}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,5,13,14,13,40}) ,{88,1419600}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-3}) ,{-3,-3}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,2,4,-2}) ,{5,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,-3}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,0,2,-3,3}) ,{3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,8,16,32}) ,{59,8192}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,-6,0,8,-10}) ,{-2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,3,10,20,30}) ,{66,36000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,5,8,-3,-5}) ,{7,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-1,1,-1,1,-1}) ,{0,-1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,0,4,7,3,2}) ,{23,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,5,-10,5,-2}) ,{-4,-1000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,3,0,-8}) ,{2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{60,1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,3,0,-8,10}) ,{12,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,30,0,-8,30,10}) ,{69,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,8,0,0,0,0,0,8}) ,{16,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,3,10,20,30,10}) ,{76,360000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,1,0}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,0,0,0,0}) ,{2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,3,-5,3,0,-8}) ,{5,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,4,-6,0,8,-10}) ,{-1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,0,0,1,0,0}) ,{21,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,30,0,-8,30,10}) ,{67,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,-8,0,0,0}) ,{-6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,-6,0,8,-10}) ,{-4,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,0,2,0,0}) ,{22,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,3,0,0,0}) ,{3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,10,5,8,-3,-5}) ,{5,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,1,0}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,0,0}) ,{0,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,10,5,8,-5}) ,{8,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,-6,-8,9,-10}) ,{-11,-17280}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-1,1,1,-2,1,-1}) ,{0,-2}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{61,1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,1,0,1,0}) ,{2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,3,10,3,20,30}) ,{69,108000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,30,0,-8,30}) ,{62,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,-8,-8,0,0,0}) ,{-14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,1,0,1,0}) ,{2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,1,0,1,0,0}) ,{2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,10,5,9,8,-5}) ,{17,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({8,-10,0,10,5,8,-5,8,8}) ,{32,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,-8,-8,0,0,0,0}) ,{-14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-9,4,-10,-6,0,8,-10}) ,{-23,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,0,0,0,0}) ,{20,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,8,0,0,0,0,8}) ,{16,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{57,1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,0,0,0,0,0}) ,{2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,10,-1,8,10,10}) ,{27,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,3,-5,3,0,-8}) ,{-5,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,30,-10,0,-8,30,10}) ,{57,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,8,0,-1,0,0,0,8}) ,{15,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,0,2,5,8,-3,-5}) ,{8,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-9,4,-11,-6,0,8,-10}) ,{-24,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,9,5,8,-3,-5}) ,{4,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({8,-10,0,10,5,-5,8,8}) ,{24,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,3,-5,3,0,-8}) ,{-4,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,3,10,3,20,30,3}) ,{72,324000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,0,-8,10}) ,{9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,5,-10,10,-2}) ,{1,-2000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-10,1,1,1,1,1,1,1,1,1}) ,{47,-10}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,30,0,-8,31,10,0}) ,{70,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{59,1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,0,2,0}) ,{22,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,30,0,-8,10,-5}) ,{34,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,2,4,-6,0,8,-10}) ,{-8,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,1,-2,0,0}) ,{-1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,9,1,5,8,-3,-5}) ,{5,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,5,-5,30,0,-8,30,10}) ,{64,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,7,31,0}) ,{38,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-1,-1,1}) ,{0,1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{61,2}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,0,0,8,0}) ,{28,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,4,10,3,-5,3,0,-8}) ,{0,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,4,10,3,-5,3,0,-8,3}) ,{3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,0,0,0,-1,0,0,0}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,0,7,3,2}) ,{19,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,30,0,30,-8,30,10}) ,{97,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,-9,4,-11,-6,0,8,-11}) ,{-35,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,30,-10,0,-8,11,30,10,30,-8}) ,{90,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{64,4}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,1,0,1}) ,{2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{62,1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,-4,3,-5,3,0,-8}) ,{-8,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,20,0,0,0,0,0,0}) ,{19,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,-4,8,4,-6,0,8,-10,4}) ,{-2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,1,10,5,9,8,-5}) ,{18,180000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-6,3,0,-8,10}) ,{11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,2,-4,3,-5,3,0,-8,-4}) ,{-10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,-4,7,4,-6,0,8,-10,4,8,0}) ,{5,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,-8,0,0,0,0}) ,{-6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,10,-1,8,10,-10}) ,{7,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{60,2}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({31,-10,1,10,5,9,8,-5,10}) ,{59,55800000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,0,-4,3,2}) ,{8,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-9,4,-10,-6,5,0,8,-10}) ,{-18,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,5,8,-3,-6,-3}) ,{3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,30,0,3,-8,10,-5,10,0}) ,{52,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,8,3,20,30}) ,{62,14400}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-9,3,-5,3,0,-8,3}) ,{-13,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,2,10,30,0,3,-8,10,-5,10,0}) ,{62,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,30,0,30,10}) ,{75,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-9,4,-10,-6,0,8,-10,-6}) ,{-29,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-9,3,-5,0,3}) ,{-8,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-1,1,-1,1,-1}) ,{1,-2}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{56,1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,0,0,0,-11,0}) ,{-9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,3,-3,-8}) ,{-1,-7200}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,0,1,0,0}) ,{21,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,0,0,-1,0,0}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,9,1,5,8,-3,-5}) ,{5,-54000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,30,0,-8,10}) ,{37,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,5,-10,10,-2,-2}) ,{-1,4000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,9,8,0,0,0,0,8}) ,{25,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,5,-10,0,-2}) ,{-9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,3,20,30,30}) ,{84,54000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,-4,8,3,-6,0,8,-10,4}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,0,8,30,30}) ,{69,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-1,1,-1,1}) ,{1,1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-9,3,-5,-11,0,-8,3}) ,{-27,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,3,-3,-8,10}) ,{9,-72000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,7,0,2,2,2}) ,{3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,1,10,5,9,8,-5,-5}) ,{13,-900000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,3,10,3,20,30}) ,{68,108000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({9,10,-5,-10,0,-8,30,10}) ,{36,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,2,-4,3,-5,3,0,-8,-4,10}) ,{9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,0,-4,2,3,2}) ,{10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,-1,1,-1,30,1}) ,{30,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,2,4,-6,0,8,-10,-10}) ,{-18,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({8,0,0,0,0}) ,{8,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{64,4}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,0,0,0}) ,{0,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,0,-10,0,0}) ,{10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,3,-3,-8,-8,10,10}) ,{11,5760000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,3,3,10,3,20,30}) ,{72,324000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,30,0,-8,-6,30,10}) ,{61,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,1,10,5,9,8,-5,11,-5,-10}) ,{14,99000000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,10,20,0,8,10,-10}) ,{39,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-10,1,1,1,1,1,1,1,1,1}) ,{55,-120}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,0,0,-9,0,0,0}) ,{11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,-1,0,0,-11,0}) ,{-10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,30,0,-8,31,0}) ,{60,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,30,0,-8,-6,30,10,10,10}) ,{81,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,0,8,-8,10,-8}) ,{9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,0,-8,-6,-7,30,10}) ,{24,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,-1,-1,30,1}) ,{29,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-9,5,-11,-6,0,8,-10}) ,{-23,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,8,29,3,20,30}) ,{91,417600}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,4,10,3,-10,-5,3,0,-8,3}) ,{-7,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-3,1,1,0,0,0,0}) ,{-1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,-4,3,-5,3,0,-8,-9}) ,{-17,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,-8,0,0,0,0,0}) ,{-6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,1,-4,7,4,-6,0,8,-10,4,8,0}) ,{6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1}) ,{61,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-9,3,-5,3,0,-8,3,-9}) ,{-22,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,0,-8,0,0,0,1}) ,{-5,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,3,0,-8}) ,{7,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{58,2}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-5,30,0,-8,10}) ,{27,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,30,0,-8,31,-8}) ,{52,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,3,-5,3,0,-8,-9}) ,{-13,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{58,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({21,0,0,8,0}) ,{29,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,1,-4,7,4,-6,0,8,-11,4,8,0}) ,{5,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,8,0,0,21,0,0,8}) ,{37,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,1,4,0,8,-10}) ,{5,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,7,2,2}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,-8,1,-8,0,0}) ,{-13,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-10,-5,30,-10,0,-8,11,30,-5,10,30,-8}) ,{75,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({8,8,20,0,0,0,8,0}) ,{44,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-9,4,-11,-6,0,8,-10}) ,{-23,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,6,10,5,9,8,-5}) ,{23,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,0,0,1,0,0,0}) ,{3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,30,10,3,20,30}) ,{95,1080000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,30,-10,0,-8,11,30,10,30,-8,0,30,-8}) ,{112,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{50,-6}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,1,10,5,9,8,-5,-5,9}) ,{22,-8100000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,-4,8,3,-6,0,8,-10}) ,{-7,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,3,-5,2,-1,-8}) ,{3,-4800}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-3,1,1,0,0,0,1,0}) ,{0,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,-8,0,0,0,1,0,0}) ,{-5,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,2,-4,3,-5,3,0,-6,-3,10}) ,{2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,4,10,3,-5,3,0,3}) ,{11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,0,-8,0,0,0}) ,{-7,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,9,1,5,8,-3,-5}) ,{25,54000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,0,-8,0,0,0,1,-8,0}) ,{-14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({9,10,-5,-10,0,-8,30,10,10}) ,{46,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-1,1,1,-1,1,-1}) ,{2,-2}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,-5,10,-4,3,-5,3,0,-8,2}) ,{-11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{65,4}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{58,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,3,-5,3,0,-8,-9,10,2}) ,{-1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,-10,5,-2}) ,{-9,-200}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-5,30,-8,10}) ,{27,12000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,5,8,-7,-3,-6,-3}) ,{-4,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,-5,30,0,-8,30,10}) ,{60,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-5,30,0,-8,9,-6,30,10,10,10}) ,{80,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,8,3,20,30}) ,{63,28800}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,30,0,-8,30,-8}) ,{54,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,20,30,0,0,0,0,0,0}) ,{49,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,1,0,0}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{63,1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,1,-4,7,4,-6,0,8,-10,4,8,0,4}) ,{10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1}) ,{62,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,3,7,-5,3,-8,-9,-5}) ,{-11,-20412000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,-5,30,0,-8,30,10}) ,{62,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,30,-2,-8,-6,30,10,10,10}) ,{84,-864000000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{59,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,-6,30,0,-8,30,10,-8}) ,{55,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,31,5,-10,0,21}) ,{45,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,1,0,0,0}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-1,1,-1,1,1}) ,{2,1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,30,-10,0,-8,11,30,10,30,-8,-8}) ,{82,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,30,10,-3,3,20,30,2}) ,{94,-6480000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,-5,3,21,-8,-9,10}) ,{15,40824000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-1,-5,30,-10,0,-8,11,30,10,30,-8,-8}) ,{81,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,3,10,3,30,3}) ,{52,16200}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-9,4,-10,-6,8,-6}) ,{-19,103680}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,2,-4,3,-5,3,0,-3,10}) ,{8,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,0,-9,0,0,0}) ,{11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,5,8,-5}) ,{-2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-10,-5,30,0,-8,11,30,-5,10,30,-8}) ,{85,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,-6,30,0,-8,30,10,-8,2}) ,{57,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,-4,8,3,-6,0,8,-10,-6}) ,{-13,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,5,-5,30,0,-8,30}) ,{54,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,8,3,20,30,-11,30}) ,{82,-9504000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,30,0,-7,31,10}) ,{71,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,3,-5,0,20,2}) ,{22,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,3,10,-4,3,4,30}) ,{48,-86400}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,20,0,0,1,0,0}) ,{22,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,0,1,1,-7,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1}) ,{54,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,-6,0,8,-10,-10,-6}) ,{-18,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,5,-10,-2,-2,-2}) ,{-13,-800}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-8,2,4,-6,0,8,-10}) ,{-10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,5,-10,-2,-2}) ,{-11,400}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,30,0,-7,-7,31,10}) ,{64,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,20,0,0,1,0,0}) ,{23,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,5,-10,5,-2,-2}) ,{-6,2000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,8}) ,{10,8}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,4,10,3,-5,3,0,3,3}) ,{14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,2,-4,8,4,-6,0,0,8,-10,4,-6}) ,{-6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,2,-9,10,-5,3,21,-8,-9,10}) ,{25,408240000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,0,2,1,0,0,20}) ,{43,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,2,2}) ,{-6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,2,2,2}) ,{-4,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,2,4,-6,0,8,-10,-6}) ,{-14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,7,0,0,21,0,0,8}) ,{36,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,-5,3,21,-8,-9,10,-8,2}) ,{9,-653184000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-1,1,-1,1,1,-1}) ,{1,-1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{59,2}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-1,11,-5,30,0,-8,30}) ,{59,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,1,0,0}) ,{21,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,-4,8,4,-6,0,8,-10}) ,{-6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-6,3,0,10}) ,{19,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({8,-10,0,10,5,-5,-5,8,8}) ,{19,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-8,2,4,-6,0,7,-10,8}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,3,10,3,20,30}) ,{69,162000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-1,0,-1,0,-11,0}) ,{-12,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,2,10,-6,3,0,-8,10,3}) ,{20,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,2,8,3,20,2,30}) ,{68,172800}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-9,4,-11,-6,0,8,4,-9}) ,{-18,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,0,2,4,8,-3,-5}) ,{7,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{45,60}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,2,-4,3,-4,3,0,-8,-4,10}) ,{10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,5,-10,0,-2}) ,{3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,0,1,-9,0,0,0}) ,{12,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,0,0,0,0,0,0,0}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,0,0,0,-1,0,0,0,0,0}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,30,3,-8,30}) ,{65,-216000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,9,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-10,1,1,1,1,1,1,1,1,1,1}) ,{64,-1080}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,-6,1,8,-10}) ,{-3,1920}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,-9,10,3,-5,3,0,-8,-5}) ,{-18,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-9,4,-11,-6,0,-9,8,4,-9,1}) ,{-26,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,-8,0,20,0,0,0}) ,{14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,0,30,30}) ,{61,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-10,1,1,1,1,1,1,1,1,1,1,1}) ,{52,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({30,0,5,8,-5}) ,{38,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{62,4}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,8,0,-1,0,-1,0,8,0,0}) ,{14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,5,-10,21,5,-2,5}) ,{22,-105000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,6,1,0,7,2,2}) ,{24,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,30,0,-7,-7,-11,10,30}) ,{52,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,10,5,9,8,-5,8}) ,{25,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,30,3,30}) ,{73,27000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,7,0,2,2,2,2,2}) ,{7,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,2,-4,3,-5,3,0,-8,-4,-4}) ,{-14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({21,8,0}) ,{29,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,20,-7,0,1,0,0}) ,{16,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,0,0,0,-9,0,0}) ,{-8,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,-1,1,1,0,0,-10,0,0}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,20,0,0,0,29,0,0,0}) ,{48,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{59,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,6,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-10,1,1,1,1,1,1,1,1,1}) ,{56,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-9,4,-10,-6,5,8,-10}) ,{-18,864000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({8,8,20,-1,0,0,8,0}) ,{43,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,5,-10,5,-2,-2,5}) ,{-1,10000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,1,-4,7,4,-6,8,-11,-5,4,8,0,-4}) ,{-4,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,30,-10,0,-8,30,11,10}) ,{68,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,0,0,0,-1,0,0,0,0}) ,{0,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({8,-10,0,10,-5,-5,-5,8,8}) ,{9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,2,4,-6,5,0,8,-10,2}) ,{-1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{64,1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,-6,30,0,-8,30,10,-8,-8}) ,{47,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,2,-4,3,-4,3,0,-8,-4,10,2,-8}) ,{4,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,30,0,-7,-6,30,10,10,10,10}) ,{92,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,0,0,-4,-1,0,0,0}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-3,2,3,10,3,20,30}) ,{65,-324000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,3,3,10,3,20,30,2}) ,{74,648000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,-4,8,3,-6,0,8,-3,-10}) ,{-10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,3,10,-5,-9,3,-3,-8}) ,{-7,194400}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,-8,0,0,2,0}) ,{14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({30,0,-8,30}) ,{52,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,2,-4,3,-5,3,0,-8,-4,-8}) ,{-18,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,1,-9,0,0,0}) ,{-8,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,2,3,-5,3,0,-8,-4,-8}) ,{-14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,-1,31,5,-10,0,21}) ,{44,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,0,1,0}) ,{2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,3,-6,8,-10}) ,{-2,4320}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-1,-5,30,-10,0,-8,11,30,10,30,-8,12,-8}) ,{93,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,30,0,-7,-6,30,10,10,10,10}) ,{97,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-5,30,0,30,30}) ,{85,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,10,20,0,8,10,0,1}) ,{50,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{58,1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,0,8,-8,10,-8,10}) ,{19,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,2,0,-4,3,-5,3,0,-8,-4,10}) ,{9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{64,8}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,2,9,30,0,3,-8,10,-5,10,0}) ,{61,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,-2,0,0,0}) ,{18,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,10,20,0,8,10,0,0,1}) ,{50,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,-1,1,0,0,11,0}) ,{11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,-10,0,-8,30,10}) ,{27,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,-1,-6,0,8,21,-10}) ,{16,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,2,3,-6,0,8,-10}) ,{-9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,0,0,-4,-1,0,0,11}) ,{8,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,2,-5,30,0,-8,31,-8}) ,{41,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-6,4,-6,0,-10,-10,-6}) ,{-32,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,2,-4,3,-5,3,0,-3,10,3}) ,{11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,20,9,1,1,1,1,6,1,1,1,1,1,1,1,1,1,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{95,4320}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,10,20,0,8,0,0,1}) ,{40,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,-6,1,1,0,1,1,1,7,1,1,1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{52,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,-6,30,0,-8,30,10,-8,10}) ,{65,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{60,2}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-9,4,-11,3,-6,0,-10}) ,{-28,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,0,1,-9,0,0,0,0}) ,{12,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,7,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,1,1,29,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{96,812}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,0,-7,-6,30,-7,10,10,10}) ,{50,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,30,0,-8,-7,-7,-11,10,30,0,30}) ,{74,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,9,0,5,8,-5}) ,{7,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,-8,0,-8,-6,-7,30,10}) ,{16,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,10,5,9,8,-5,11,-5,-10}) ,{24,-9900000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,2,1}) ,{-7,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,-4,3,-5,0,-8}) ,{-11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-8,2,4,0,8,-10}) ,{-4,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,-9,0,0,0}) ,{-9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-7,-9,10,3,-5,3,0,-8,-9}) ,{-20,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,3,-8,30}) ,{35,-7200}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,0,2,1,6,0,20}) ,{49,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,-4,8,3,-6,0,-3,8,-10,-6}) ,{-16,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,30,0,30,-8,30,10,-8}) ,{89,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,-1,-1,30,-8}) ,{20,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,10,20,0,8,10,0,0}) ,{49,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,0,2,1,0,13,0,12,20}) ,{68,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,-4,8,4,-6,0,8,-10,4,-6,-10}) ,{-18,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,0,0,0}) ,{2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,0,0,0,29,-1,0,0,0,0,0}) ,{30,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,3,10,19,30,10,10,1}) ,{86,3420000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,20,0,0,0,29,0,0,0,0,20}) ,{68,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,-1,0,0,0,1,1}) ,{3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,1,-4,7,4,-6,9,-11,-5,4,8,0,-4}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,6,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,21,-10,1,1,1,1,1,1,1,1,1}) ,{77,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({8,-10,0,10,5,-5,-5}) ,{3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,21,0,0}) ,{21,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,5,-10,10,-2,10}) ,{11,-20000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,0,-7,-6,30,-7,10,10,10,10}) ,{60,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({11,2,10,-4,3,-5,0,-8,-9}) ,{0,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,3,10,19,30,10,10,1,19}) ,{105,64980000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,-5,0,8,-10}) ,{-1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-4,3,-5,3,0,-8,-4,10}) ,{7,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,21,3,-8,30}) ,{56,-151200}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,0,1,-9,0,-1,-4}) ,{7,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({13,2,-1,1,-1,1,-1}) ,{14,-26}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({8,-10,0,10,5,-5,-9,8,-9}) ,{-2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({21,0,8,0}) ,{29,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,0,-9,0,0,0,0}) ,{11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,0,0,0,-11,0,0}) ,{-9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,2,-4,3,-5,3,0,-8,-4,-4,-5}) ,{-19,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,1,0,0,0}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,9,1,5,8,-2,-5}) ,{6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{62,2}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,-5,30,0,-8,30,11}) ,{63,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({9,-5,8,-10,0,-8,30,10}) ,{34,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-4,-5,-8,0,-8,-6,-7,30,10}) ,{12,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-7,2,-6,4,-6,0,-10,-10,-6}) ,{-39,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,1,-4,7,4,-6,0,-11,4,8,0}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,10,-1,20,0,8,0,0,1,20}) ,{59,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,-8,1,-8,0,0,0}) ,{-13,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({21,1,0,0,8,0}) ,{30,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,4,-6,0,8,-10,4}) ,{4,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-5,30,0,30,30,30}) ,{115,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,20,30,0,0,0,0,0}) ,{49,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-3,1,1,9,0,0,0}) ,{8,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,-1,0,0,2,0,1,1}) ,{5,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,-8,1,-8,0,0,1}) ,{-12,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,1,1,0,0,0,0,0}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-9,4,-10,-6,6,0,8,-10,8,8}) ,{-1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,2,-4,3,-5,3,0,-7,-4,10}) ,{10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({9,0,5,6,8}) ,{28,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,2,8,3,20,13,-2,2,2}) ,{51,-299520}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,-10,30,10,-5}) ,{30,-750000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,2,2,1,1,6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-10,1,1,1,1,1,1,1,1,1}) ,{56,-480}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,-1,1,1,0,0,-10,-9,0,0,0}) ,{-12,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,3,10,3,3}) ,{22,540}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,0,0,1,0,0,-7}) ,{-4,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({21,0,8,0,21}) ,{50,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,10,-8,20,0,8,10,0,0}) ,{40,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-4,3,-3,-8,-8,10,10,-8}) ,{4,-36864000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,-8,1,-8,0}) ,{-13,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,30,-10,0,-8,11,30,10,-8,-8}) ,{52,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,21,0,0,-1,0}) ,{20,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,-8,1,-8,0,0,0,-8,-8}) ,{-29,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,20,9,1,1,1,1,6,1,1,1,1,1,1,1,1,1,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{96,4320}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({8,8,9,-1,0,0,8,0}) ,{32,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-5,30,6,10}) ,{41,-9000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({8,-1,1,-2,1}) ,{7,16}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,1,10,5,9,-5,-5}) ,{5,-112500}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,31,0,0}) ,{31,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,-5,0,1,0,1}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-8,2,-5,4,-6,8,20,-10}) ,{5,3072000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,8,0,0,12,21,0,0,8}) ,{49,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,0,-8,-6,-7,30,-3}) ,{11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({21,-11,8,0,21}) ,{39,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,1,-4,7,4,-6,8,-11,-5,8,0,-4}) ,{-8,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,2,-4,3,-5,3,0,-8,-6,-4,-4,-5}) ,{-25,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,-4,3,-9,-5,3,0,-8,-9,10,10,3}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,-1,0,-1,0,1,1,1,0}) ,{3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,2,-4,3,-5,0,30,10}) ,{38,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,-10,0,-8,30,10,-5}) ,{22,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,0,0,-9,0,0,0,0}) ,{11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,1,-2,0,0,1}) ,{0,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,4,6,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,9,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-10,1,1,1,1,1,1,1,1,1,1}) ,{67,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,-4,-4,7,4,-6,0,8,-10,4,8,0}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,5,-10,-2,-1,-2}) ,{-12,-400}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,2,-4,3,3,0,-8,-4,10,10}) ,{24,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,3,-3,-8,3}) ,{2,-21600}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,3,-5,3,-8,-9,-5}) ,{-18,-2916000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{62,2}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{62,6}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-10,1,1,1,1,1,1,1,1,1}) ,{56,-120}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,-10,0,0}) ,{10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,0,0,0,-1,0,0,0}) ,{0,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,-7,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1}) ,{55,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({9,10,-5,-10,0,-8,30}) ,{26,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,0,0,-1,0,0}) ,{2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,-9,-10,1,-4,7,4,-6,9,-11,-5,4,8,0,-4}) ,{-22,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,2,-4,3,3,0,-8,-4,10}) ,{14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,5,-5,30,0,-8,30,30}) ,{84,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,1,10,5,-8,8,6,-5,-5,9}) ,{11,43200000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,30,30,-8}) ,{62,-72000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,6,0,-9,0,0,0}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,2,-4,3,-5,3,0,10,3}) ,{14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({13,30,30,-8}) ,{65,-93600}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({21,0,0,8,0,0}) ,{29,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,6,30,0,-7,31,10}) ,{80,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,-6,2,2,1,1,6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-10,1,1,1,1,1,1,1,1,1,1}) ,{53,5760}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-5,30,-10,0,-8,30,10}) ,{47,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-4,0,8,-8,10,-8,10}) ,{20,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-3,-7,1,-4,0,0,0,0}) ,{-13,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,1,0,0,0,-9,0,0}) ,{-18,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,2,-4,2,-5,3,0,-8,-4,-4}) ,{-15,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,2,4,-6,0,8,-6,-10}) ,{-14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,0,30,-4,3,2,-4}) ,{34,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,6,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-10,1,1,1,1,1,1,1,1,1,1}) ,{56,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,0,0,0,0,0,0}) ,{20,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,4,-6,0,8,-10,-6}) ,{-7,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-4,30,0,-8,9,-6,30,10,8}) ,{69,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0}) ,{0,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,-5,10,-4,-3,3,-5,3,0,-8,-9,2}) ,{-23,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({9,0,5,6,8,5}) ,{33,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,-10,10,-2,-2}) ,{-6,800}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,20,0,0,0,29,0,0,0,0,20,0,0}) ,{68,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,0,0,0,0}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,-1,0,0,0,0,0}) ,{-1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,5,-9,10,-2,10}) ,{12,-18000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,1,0,0,0}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({9,0,5,4,8}) ,{26,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,31,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{94,31}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-10,1,1,1,1,1,1,1,1,1,1}) ,{47,-10}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-5,30,0,-8,31,-8}) ,{42,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,-5,30,0,-8,30,4}) ,{56,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,30,-10,0,-8,30,10,10,-10}) ,{57,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({8,-10,0,10,5,-5,-5,8,-9,8}) ,{10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-8,1,20,30,30}) ,{74,-144000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,20,-1,1,-1,30,1}) ,{50,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({8,0,0,0}) ,{8,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,7,0,2,2,2,7}) ,{10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,0,8,-8,10,-8,-5}) ,{4,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-3,-7,8,1,-4,0,0,0,0}) ,{-5,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-9,4,-10,-6,5,0,-10,8,-10,4}) ,{-24,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,20,30,0,0,0,0}) ,{49,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,9,1,10,19,0,8,10,-10}) ,{47,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,31,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{95,31}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,0,0,0,1,0,0}) ,{3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({8,-10,10,5,-5,-9,8,-9}) ,{-2,12960000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-9,-2,4,-10,-6,5,0,8,9}) ,{-1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-5,30,-4,0,30,30,30,30}) ,{141,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-3,2,10,20,20,20,30}) ,{99,-14400000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,30,0,-8,30,10,10}) ,{77,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,6,30,0,-7,30,10}) ,{79,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-9,10,2,-4,2,-5,3,0,-8,-4,-5}) ,{-16,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,-4,7,4,-6,0,8,-11,-10,4,8}) ,{-6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0}) ,{0,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,0}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,2,3,4}) ,{10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-5}) ,{-5,-5}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1}) ,{1,1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1}) ,{-1,-1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,0,-3}) ,{-1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{30,1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,0,4,7,3,7,2}) ,{30,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,0,4,3,7,2}) ,{23,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{61,2}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,3,10,-5,-10,0,-8}) ,{-8,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{52,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{55,-18}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,0,4,7,3,7,2,2}) ,{32,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,30,0,4,3,7,2}) ,{52,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,-6,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{47,108}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({30,0,4,3,3,7,2}) ,{49,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,4,3,0,-8}) ,{11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,0,7,3,7,2,2}) ,{27,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,-6,0,8}) ,{8,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{56,-36}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,0,0,0,0}) ,{2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,-6,0,8}) ,{9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,5,8,-3,-5,-5}) ,{2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,-6,0,8,-10,4}) ,{2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,0,4,8,4,7,3,7,2,2}) ,{44,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,0,8,1}) ,{16,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,1,-1,-3,0,0,0,0}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,1,-1,-3,0,0,0,0,0}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,1,0,4,3,7,2}) ,{22,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,-3,0,8,1}) ,{13,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,-6,0,8,8}) ,{17,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,-1}) ,{-1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,3,4,0,-8}) ,{6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-1,-1,0,-1}) ,{-2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,5,0,0,0}) ,{7,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,0,5,0,0,0,5}) ,{14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,6,1,0,4,8,4,7,3,7,2,-2,-1}) ,{38,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,-3,0,-3,8}) ,{9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,-6,1,-1,-3,0,0,0,0,0,0}) ,{-9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,-8,5,0,0,0}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,7,1,0,4,7,3,7,2,2}) ,{39,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,-6,0,8,8,-6}) ,{7,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,6,10,20,30}) ,{69,72000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,-6,0,5,8}) ,{14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,20,1,0,4,7,3,7,2}) ,{50,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,-8,8,8,-6}) ,{5,6144}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,3,0,-8,-8,-8}) ,{-17,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,0,-8}) ,{4,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,-6,1,-1,-6,-8,0,0,0,0,0,0}) ,{-20,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,3,1,0,4,6,7,3,2,2}) ,{33,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,10,20,30}) ,{63,12000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,20,1,0,7,3,7,2,7}) ,{53,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,2,3,1,0,4,6,7,3,2,2,7}) ,{42,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,5,8,-3,-5}) ,{7,1200}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,10,1,1,1,1,1,1,1,1,1,1,1,1}) ,{65,-180}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-3,0,2,5,8,-3,-5,-5}) ,{-1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,-1,0,0,0,0,-6,1,-1,-6,-8,0,0,0,0,0,0}) ,{-21,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,-6,-6,0,8}) ,{-1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,1,-1,-3,0,0,0,0}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5,1,1,1,1,1,1}) ,{47,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,-3,0,-3,8,8}) ,{17,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,1,1,1,1}) ,{58,-72}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,1,0,4,7,3,7,2,2}) ,{36,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,1,1,1,1}) ,{53,360}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,0,10,0,0}) ,{12,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,1,1,1,1}) ,{53,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,10,1,1,1,1,1,1,1,1,1,1,1,1}) ,{66,-180}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,3,0,-8,2}) ,{4,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,2,0,0,1,0,0}) ,{3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,3,0,4,3,7,2}) ,{24,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,1,0,4,7,3,2}) ,{27,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,2,0,0,1,0}) ,{3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,1,-3,0,0,0,0}) ,{-2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,5,8,-3}) ,{12,-240}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,2,1,-6,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{49,216}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,10,1,1,1,1,1,1,1,1,1,1,1,1}) ,{63,180}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,20,1,0,4,7,3,7,1,2}) ,{51,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,3,1,4,6,7,3,2,2}) ,{33,30240}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,1,0,4,7,3,7,2,2,-8}) ,{28,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,-6,-1,8,-10}) ,{-5,-1920}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,-6,0,8,8,0,-6}) ,{11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,0,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,1,1,1,1,1}) ,{58,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,6,-1,20,30}) ,{58,-7200}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,2,3,1,0,4,6,7,3,2,2,7}) ,{43,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,-1,1,-1}) ,{1,1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{52,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,5,8,-3,-5,-5,2}) ,{4,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,0,10,-5,3,0,-8,2}) ,{4,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,1,-3,0,0,0,0,0}) ,{-2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,3,4,6,7,3,2,2}) ,{32,30240}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,0,4,7,3,2,2}) ,{25,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,1,0,4,7,3,3,2,0,3}) ,{33,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,1,0,4,7,3,7,-2,2,-8}) ,{24,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,5,8,-3,-5,2}) ,{9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,-6,-5,1,-1,-3,0,0,0,0,0,0}) ,{-14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{56,-18}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,0,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{58,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,3,-1,-8}) ,{1,-2400}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,-2,1,1,1,1,2,1,-6,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5}) ,{51,-2160}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,1,2,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,10,1,1,1,1,1,1,1,1,1,1,1,1}) ,{65,360}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,0,2,5,7,8,8,-3,-5,-5}) ,{15,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-5,3,1,-8,10,-5}) ,{-2,-12000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,-6,0,8,-5,-10,4,4}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,3,4,6,7,3,1,2,2,10}) ,{43,302400}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,1,0,0,-6,-5,1,-1,-3,0,0,0,0,0,0}) ,{-13,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,1,0,4,7,4,7,-2,2,-8}) ,{25,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,-1,0,0,0,0,-6,1,-1,-6,-8,0,0,0,0,0,0,0}) ,{-21,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,5,-1,1,-1}) ,{5,5}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,0,10,-5,3,0,-7,2}) ,{5,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,1,1,1,1}) ,{57,-72}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,1,1,1,1}) ,{54,360}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,-10,-2}) ,{-14,-40}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,5,-1,1,-1,-1}) ,{4,-5}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,0,4,10,3,7,2}) ,{33,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,-6,-6,1,1,1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{41,-540}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,1,0,4,7,3,7,3,2,-8}) ,{29,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,0,-6,-10,4,4}) ,{-2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,5,8,-5,2}) ,{12,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,-6,-7,-1,30,-10}) ,{10,50400}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,1,0,4,30,3,7,2}) ,{52,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,4,-3,0,8,1}) ,{11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,-1,4,7,3,7,2}) ,{28,-7056}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,2,4,1,0,4,6,7,3,2,2,7}) ,{44,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,2,4,1,0,4,6,7,3,2,7}) ,{42,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,10,0,0,0,0,-6,1,-1,-6,-8,0,0,0,0,0,0,0}) ,{-10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,1,1,4,3,7,2,1}) ,{24,840}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,-1,0,0,0,0,1,-1,-6,-8,0,0,0,0,0,0,0}) ,{-15,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,0,-10}) ,{2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,-2,1,0,4,10,3,7,2,2}) ,{33,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,6,1,0,4,8,4,7,3,7,8,2,30,-1,6,8}) ,{92,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,20,0,2,4,7,3,7,2}) ,{51,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,-6,3,0,8,0,-6}) ,{6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,3,1,1,1,1,1,1,1,1,1,2,1,1,1,-1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{58,72}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,2,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{53,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,30,0,4,7,2}) ,{49,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,-2,4,-3,0,8,1}) ,{11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,2,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{55,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-5,3,1,-8,10,-5,3}) ,{1,-36000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,6,-3}) ,{9,-108}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,30,0,4,3,2}) ,{45,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,0,4,10,3,7}) ,{31,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-1,1,-1,1,-1,1,1,-1}) ,{1,1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,5,8,-3}) ,{12,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,0,4,3,7,2,4}) ,{27,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,6,4,4}) ,{20,576}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,0,-8,-8}) ,{-4,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,30,0,4,7,1}) ,{48,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,-6,-6,0,-10}) ,{-19,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-6,0,8,-10,4}) ,{-2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,5,8,-3,-5,2}) ,{7,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,-3,3,0,-8,-3}) ,{-4,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,5,-10,8,-3,-5}) ,{-3,-12000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,1,4,30,3,7,2}) ,{52,25200}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,4,30,3,7,2,30}) ,{77,151200}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,1,0,4,7,3,2,2}) ,{29,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,8,-3}) ,{7,-48}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,-3,0,-2,8,8,0}) ,{18,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,0,-6,-10,4,4,2}) ,{0,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-8,-8}) ,{-6,640}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,2,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{53,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,30,0,0,1,0}) ,{31,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,7,1,0,4,3,4,7,2,7}) ,{41,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,20,1,6,0,8,7,2,7,8}) ,{65,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,-6,0}) ,{0,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,1}) ,{58,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,-6,0,-6}) ,{-6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,-8,5,0,0,0,0}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,-3,8,1}) ,{13,-192}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,1,1,4,3,7,2}) ,{23,840}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,30,0,0,1,0}) ,{31,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,1,0,0,-6,1,-1,-6,-8,0,0,0,0,0,0}) ,{-19,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,0,-6,-10,4,2}) ,{-6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,-8,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{49,144}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,0,-6,-10,4,2,-10}) ,{-16,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,9,0,-8,-8}) ,{5,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,-1,-6,1,-1,-3,1,0,0,0,0,0,0}) ,{-9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,-6,0,5}) ,{6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,-6,-7,-1,30,-10,-10}) ,{0,-504000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,1,0,0,-6,-6,1,-1,-6,-8,0,0,0,0,-7,0}) ,{-32,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,0,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,4,1,1,1,1,1,1}) ,{59,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,4,8,-3,-5,-5,2}) ,{3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,1,4,30,3,7,2,7}) ,{59,176400}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,0,10,0,0,0}) ,{12,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,-6,-5,1,-1,-3,0,0,0,0,-1,0}) ,{-15,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,0,5,0,0,0,5,5}) ,{19,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,2,1,0,4,7,3,2,2}) ,{31,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,1,5,-1,1,-1}) ,{4,-5}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,0,-2,-3,3,2}) ,{10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,0,-4,10,-5,3,0,-8,2}) ,{0,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1}) ,{61,2}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,4,0,1,-1,-3,0,0,0,0}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,0,-10}) ,{-9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,0,2,5,7,8,8,-3,-5,-5,8}) ,{23,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,20,1,0,7,3,7,2,7,1}) ,{54,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,0,4,3,7,2,4,3}) ,{30,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,1,-1,-1,1,-1}) ,{-3,2}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,30,7,0,4,3,2,0}) ,{52,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,-8,-7,8,8,-6}) ,{-2,-43008}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-3,0,2,5,8,-3,-5,-5,-5}) ,{-6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,-6,0,0,8,-6}) ,{-1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,-6,-7,-1,1,30,-10}) ,{11,50400}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{54,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,20,1,0,4,7,3,7,1,1,2}) ,{52,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,-8,5,0,0,0,0,0}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,5,0,0,0,0}) ,{5,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,1,0,4,7,3,7,2,30,2}) ,{66,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,6,4,4,6}) ,{26,3456}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,7,2,3,1,0,4,6,7,3,2,2,7}) ,{50,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,-6,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,3,1,1,1,1,1,1,1,1,1,2,1,1,1,-1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{58,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,0}) ,{6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,3,4,-8}) ,{6,9600}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,5,0,-6,-10,4,4}) ,{-1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,0,0,0,0,0,-6,1,-1,-3,0,0,-8,0,0,0,0}) ,{-18,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-6,-7,-1,1,30,-10}) ,{7,12600}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{55,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,2,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5}) ,{50,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,-6,-4,8,-10,4,4}) ,{2,-245760}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,-6,1,-1,-3,0,0,0,0,0,0,0}) ,{-9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-3,10,0,-10}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,4,8,-3,-5,-5,2}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({20,7,1,0,4,6,3,4,7,2,7}) ,{61,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,-3,0,-3,8,1}) ,{10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,1,1,-10,4,3,7,2}) ,{13,-8400}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,4,-3,-5,2}) ,{-2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,0,0,4,10,3,7,2}) ,{32,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,-8,-6,-5,0,-6,-5}) ,{-24,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,4,-3,0,8,1,8}) ,{19,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-5,1,1,1,1,0,1}) ,{46,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,4,3,3,0,-2,-8}) ,{12,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,1,20,4,3,7,2}) ,{42,16800}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,0,0,4,10,3,7,2,3}) ,{35,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,1,1,7,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,10,1,1,1,1,1,1,1,1,1,1,1,1}) ,{74,6300}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,1,3,-10,3,4,3,7,2}) ,{18,-75600}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,-6,0,8,-6}) ,{-1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{56,-18}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,0,-6,-5,1,-1,-3,0,0,0,0,0,0}) ,{-14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,0,-8,10}) ,{14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,3,10,20,30,3}) ,{69,108000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-7,-2}) ,{-9,14}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,-2,5,5,-2}) ,{6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,0,0,4,3,7,2,3}) ,{25,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,1,4,6,3,2,2}) ,{21,864}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,0,-7,0,0}) ,{-5,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,2,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{52,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{56,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,20,1,0,7,3,7,2,7,1,1}) ,{55,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,-2,1,1,1,1,2,1,-6,-6,1,1,1,1,1,1,1,1,1,1,-2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,5}) ,{51,8640}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,0,10,0,0,0}) ,{12,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,0,-8,-8}) ,{-6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-1,1,-1,1,-1,1}) ,{1,-1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,4,1,-1,-3,0,0,0,0}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,3,4,4,0,-6,-10,4,4,2}) ,{7,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{51,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,0,8,0}) ,{10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,1,1,4,3,7,-2}) ,{19,-840}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,0,-6,1,-1,-3,0,0,0,0,0,0}) ,{-9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-8,0,0,1,0,0,-6,-6,1,-1,-6,-8,0,0,0,0,-7,0,-8}) ,{-48,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,4,30,2}) ,{43,1440}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,0,8,0,0}) ,{10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,0,-6,1,-4,-1,-3,0,0,0,0,0,0}) ,{-13,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,1,2,4,-3,8,1}) ,{17,-768}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,4,3,-4,-8}) ,{7,7680}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,1,0,4,7,3,7,1,2,2,-6,-8}) ,{23,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,1,1,0,4,7,3,2}) ,{28,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,0,1,3,7,2,2}) ,{21,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,-1,0,0,-6,1,-1,-6,-8,0,0,0,0,0,0}) ,{-21,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,-6,2,0,-7,0,0}) ,{-11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,0,4,10,2,3,7,3,3}) ,{39,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-10,0,10,-5,3,0,-8,2}) ,{-8,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,1,4,3,7,2,1}) ,{23,840}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,0,10,0,0}) ,{13,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,1,0,4,7,3,7,2,0,2}) ,{36,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-2,-6,-1,0,-1}) ,{-9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,0,2,5,7,8,8,-3,-5,-5,8,8}) ,{31,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{62,2}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,2,5,0,-6,-10,4,4}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,4,-3,8,1,8}) ,{19,-768}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,1,0,0,-6,-6,1,-1,-6,-8,0,0,0,0,-7}) ,{-32,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,4,-3,0,0,8,1,0}) ,{11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,20,1,-6,4,7,3,7,2,6}) ,{50,-5080320}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,2,3,1,0,4,6,7,3,2,2}) ,{36,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,0,1,-6,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,4,1,1,1,1,1,1}) ,{60,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,6,1,7,0,4,10,3,7,10}) ,{54,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,0,-6}) ,{0,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,1,4,7,3,2,7,7}) ,{41,172872}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,6,1,0,4,8,4,7,2,3,7,2,-2,-1}) ,{40,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,-8,7,8,8,-6}) ,{12,43008}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,6,10,20,30}) ,{68,72000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,-10,-2,-2,-2}) ,{-18,-160}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,0,-8,-8,-8}) ,{-14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,0,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,4,1,1,1,1,1,1,1,3,1,1}) ,{65,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,0,10,-5,3,0,2,2}) ,{14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-8,1,4,-3,8,1,8}) ,{11,6144}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,1,0,4,7,3,7,3,2,4}) ,{41,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,2,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0}) ,{53,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{54,-18}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,20,0,2,4,7,3,6,7}) ,{55,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,27,-6,6,0,8,-10,4,2}) ,{33,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,30,-3,0,4,7,2}) ,{46,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,1,-1,-1}) ,{4,5}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,4,-3,0,8,1,0}) ,{12,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-3,8,1,8}) ,{15,-192}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,1,-1,-3,0,0,0,0,0}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,30,0,1,0}) ,{31,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,0,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,1,1,1,1,1}) ,{57,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,5,-1,-36,-1,-2,-1,-1}) ,{-36,360}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,0,0,4,10,3,7,91,2,3}) ,{126,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,3,7,0,-2,-3,3,2,0}) ,{8,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,7,2,4,1,0,4,6,7,3,2,2,7}) ,{51,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,-6,3,0,8,0,-6,3}) ,{9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,1,1,4,3,-2,1}) ,{13,-120}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,-2,4,-3,0,8,1,1}) ,{12,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-1,7,-1,-1,0}) ,{5,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,6,1,0,4,8,4,7,7,2,-2,-1}) ,{35,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,1,2,-2,4,-3,0,8,1,1}) ,{14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,1,4,20,8,3,2,7,7,7}) ,{69,27659520}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,4,8,-3,-5,8,2}) ,{14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,-1,5,0,0,0,0}) ,{4,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,2,4,1,0,4,6,7,3,2,7,7,6}) ,{55,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,1,1,1,1,1}) ,{57,-72}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,4,-3,0,8,1,0}) ,{11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,0,-4,-6,10,-5,3,0,-8,2}) ,{-6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,-3,0,8,1,1}) ,{14,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,0,0,0,0,5}) ,{9,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,-6,-7,-1,30,-10,-10,-6}) ,{-6,3024000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,0,4,10,-4,3,7,3,3}) ,{33,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,-5,2,0,-8}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,1,-74,-1,-3,0,0,0,0,0,0}) ,{-77,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,30,0,4,2,7,2}) ,{51,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,0,0,4,10,3,7,91,2,3,4,6}) ,{136,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,-6,2,0,-7,0,0,0}) ,{-11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,4,2,0,-36,-7,0,0,0}) ,{-37,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-1,0,-2}) ,{-2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,-1,1,0,0,0,0,-6,1,-1,-6,-8,0,0,0,0,0,0}) ,{-20,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,30,0,1,0}) ,{31,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,10,1,1,1,1,1,1,1,1,1,1,1,1}) ,{67,-360}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-5,3,1,10,-5}) ,{6,1500}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,0,-6,10,-5,3,0,-8,2}) ,{-2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,10,3,3,-4,2,-8,3}) ,{11,34560}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,1,1,-10,4,3,7,2,1}) ,{14,-8400}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,2,4,1,0,6,7,3,2,7,7,6}) ,{51,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,-6,1,-1,-3,0,6,0,0,0,0,0}) ,{-3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,-3,0,1,1,0,-3}) ,{3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,-1,0}) ,{-1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-5,3,10,-5}) ,{5,1500}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,-6,8,-5,-10,4,4}) ,{1,-307200}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,1,-3,0,0,0,0,0}) ,{-2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-9,2,5,-10,8,91,-5}) ,{82,-3276000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,5,27,-6,6,0,8,-10,4,2}) ,{38,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,1,-2,-1}) ,{3,10}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,10,2,3,7,3,3}) ,{35,22680}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,3,4,6,7,3,2,2,7}) ,{39,211680}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({4,0,5,0,0,0,5,5,5}) ,{24,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-1,6,1,0,4,8,4,7,7,2,-2,-1,7,7}) ,{49,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,-6,0,8,-10,4,8}) ,{10,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,1,0,0,0,0}) ,{1,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,1,0,3,2,0}) ,{12,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,0,10,0,-1,0}) ,{11,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-1,-1,1,-1}) ,{-1,-1}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,4,-3,0,-2,8,8,0,0}) ,{18,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,4,7,-3,-5,-5,2}) ,{2,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,5,-10,8,-3,-5}) ,{-2,-18000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,-6,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,1,1,1,1,1,1,1,1}) ,{59,-72}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,4,-6,1,8,-5,-10,4,4}) ,{2,-307200}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,91,4,0,-6}) ,{91,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,0,1,-2,-1}) ,{3,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1}) ,{62,2}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,7,2,3,1,0,4,6,7,3,2,2,7,6}) ,{56,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,1,0,4,7,3,7,-74,3,2,4}) ,{-33,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,3,1,4,6,7,3,2,2,7,5}) ,{45,1058400}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,3,0,30,0,0,1,0}) ,{34,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({6,20,1,0,4,7,3,7,2,7}) ,{57,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,-74,-10}) ,{-83,740}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{55,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-2,-10,-2,-10}) ,{-24,400}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,-2,1,1,1,1,2,1,-6,-6,1,1,1,1,1,1,1,1,1,1,2,-3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,5}) ,{52,25920}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,3,10,20,30,1}) ,{67,36000}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,0,0,0,0,1,1,-74,-1,-3,0,0,0,0,0,0}) ,{-76,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({2,-77,-6,10,-5,3,-7,0,-8,2}) ,{-86,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({10,-5,-3,3,0,-8,-3}) ,{-6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({0,2,-6,-6,0,8,8,0}) ,{6,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({-8,0,0,1,0,0,-6,-6,1,-1,-6,-8,0,0,0,-1,0,-7,0,-8}) ,{-49,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({5,1,1,-10,4,3,7}) ,{11,-4200}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,1,1,1,1,-5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}) ,{54,0}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({3,7,1,8,4,7,3,2,3,3}) ,{41,254016}))){ tests_passed++; } total_tests++;

    if((issame(sum_product({1,2,-6,0,5}) ,{2,0}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


