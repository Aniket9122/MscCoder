#include <iostream>
using namespace std;
long long starts_one_ends(int n) {
    if (n == 1) return 2; // special case for single digit numbers
    
    long long dp[3] = {0, 2, 8};
  
    for (int i=3; i<=n; ++i) {
        dp[(i+1)%3] = 2 * dp[(i-1)%3] + dp[(i-2)%3]; // formula to find the count of n digit numbers starting or ending with 1.
    }
  
    return dp[n % 3];
}