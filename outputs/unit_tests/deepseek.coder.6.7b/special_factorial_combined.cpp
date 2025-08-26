#include<bits/stdc++.h>
using namespace std;

vector<long long> dp(102, 1); // initialize dynamic programming vector
    
long long special_factorial(int n){
    if (dp[n] != 1) return dp[n]; // if factorial is already computed
        
    for(int i = 2; i <= n; ++i ) { 
        dp[i] = i * dp[i-1];
    }    
    return dp[n];
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

    if((special_factorial(4) == 288)){ tests_passed++; } total_tests++;

    if((special_factorial(5) == 34560)){ tests_passed++; } total_tests++;

    if((special_factorial(7) == 125411328000)){ tests_passed++; } total_tests++;

    if((special_factorial(1) == 1)){ tests_passed++; } total_tests++;

    if((special_factorial(4) == 288)){ tests_passed++; } total_tests++;

    if((special_factorial(5) == 34560)){ tests_passed++; } total_tests++;

    if((special_factorial(7) == 125411328000LL)){ tests_passed++; } total_tests++;

    if((special_factorial(1) == 1)){ tests_passed++; } total_tests++;

    if((special_factorial(2) == 2)){ tests_passed++; } total_tests++;

    if((special_factorial(3) == 12)){ tests_passed++; } total_tests++;

    if((special_factorial(6) == 24883200)){ tests_passed++; } total_tests++;

    if((special_factorial(8) == 5056584744960000LL)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


