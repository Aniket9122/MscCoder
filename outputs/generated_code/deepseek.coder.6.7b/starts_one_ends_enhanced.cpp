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

