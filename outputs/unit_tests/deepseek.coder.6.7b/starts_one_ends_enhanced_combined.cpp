#include<iostream>
using namespace std;

int starts_one_ends(int n){
    long long dp[50][2];  
    dp[1][0] = 1, dp[1][1] = 1;   

    for(int i=2; i<=n; ++i) {
        dp[i][0] = dp[i-1][0] + dp[i-1][1]; 
      
        dp[i][1] = dp[i-1][0];  
    }
  
    return (dp[n][0] + dp[n][1]) * 9;   
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

    if((starts_one_ends(1) == 1)){ tests_passed++; } total_tests++;

    if((starts_one_ends(2) == 18)){ tests_passed++; } total_tests++;

    if((starts_one_ends(3) == 180)){ tests_passed++; } total_tests++;

    if((starts_one_ends(4) == 1800)){ tests_passed++; } total_tests++;

    if((starts_one_ends(5) == 18000)){ tests_passed++; } total_tests++;

    if((starts_one_ends(1) == 1)){ tests_passed++; } total_tests++;

    if((starts_one_ends(2) == 18)){ tests_passed++; } total_tests++;

    if((starts_one_ends(3) == 180)){ tests_passed++; } total_tests++;

    if((starts_one_ends(4) == 1800)){ tests_passed++; } total_tests++;

    if((starts_one_ends(5) == 18000)){ tests_passed++; } total_tests++;

    if((starts_one_ends(6) == 180000)){ tests_passed++; } total_tests++;

    if((starts_one_ends(10) == 1800000000)){ tests_passed++; } total_tests++;

    if((starts_one_ends(8) == 18000000)){ tests_passed++; } total_tests++;

    if((starts_one_ends(9) == 180000000)){ tests_passed++; } total_tests++;

    if((starts_one_ends(7) == 1800000)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


