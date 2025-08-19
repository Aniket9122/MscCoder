#include <iostream>
#include <vector>
using namespace std;

// Initialize dynamic programming vector
vector<long long> dp(102, 1);  

long long special_factorial(int n){
    if (dp[n] != 1) return dp[n]; // If factorial is already computed
        
    for(int i = 2; i <= n; ++i ){ 
        dp[i] = i * dp[i-1];
     }    
     return dp[n];
}

