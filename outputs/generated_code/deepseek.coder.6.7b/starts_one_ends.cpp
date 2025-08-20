#include<iostream>
using namespace std;
long long starts_one_ends(int n) {
    if (n == 1) return 2; // special case for single digit numbers
    
    long long dp[n+1];
    dp[0] = dp[1] = 0; // base cases
  
    for (int i=2; i<=n; ++i) {
        if(i == 2) 
            dp[i] = 8;
        else
            dp[i] = dp[i-1]*2 + dp[i-2]*8; // formula to find the count of n digit numbers starting or ending with 1.
    }
  
    return dp[n];
}