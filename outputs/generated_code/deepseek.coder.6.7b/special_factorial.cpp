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

