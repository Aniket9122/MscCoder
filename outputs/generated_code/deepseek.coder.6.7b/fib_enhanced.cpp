#include <vector>
int fib(unsigned int n) {
    // If the input is 0 or 1, return directly to avoid further computation and potential overflow
    if (n <= 1)
        return n;
    
    std::vector<unsigned int> f(n+1);
    f[0] = 0;
    f[1] = 1;
  
    // Dynamic programming approach: fib of a number is sum of its two previous numbers
    for(size_t i=2; i <= n; ++i) 
        f[i] = f[i-1] + f[i-2]; 
      
    return f[n]; // Return the nth Fibonacci number  
}