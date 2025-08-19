#include <vector>

int fibfib(int n) {
    std::vector<int> dp(n+1, -1);
    
    // Base Cases.
    if (n == 0) return 0;
    if (n <= 2) return (n == 2) ? 1 : 0;
    
    // If the result has been computed before, just return it.
    if(dp[n]!=-1) return dp[n];
    
    // Else compute and store for future uses.
    dp[n] = fibfib(n - 1) + fibfib(n - 2) + fibfib(n - 3);
    return dp[n];
}