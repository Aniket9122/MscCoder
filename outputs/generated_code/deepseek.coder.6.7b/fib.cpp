#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 0)  //if the input is not valid, return -1 for error indication
        return -1;
        
    int f[n+1];
    f[0] = 0;
    f[1] = 1;
    
    for(int i=2; i<= n; ++i)
      f[i] = f[i-1] + f[i-2];  //Dynamic programming approach: fib of a number is sum of its two previous numbers
  
    return f[n];
}