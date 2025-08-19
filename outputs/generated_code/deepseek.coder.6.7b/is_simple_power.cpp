#include <iostream>
#include<cmath>
using namespace std;

bool is_simple_power(int x, int n) {
    if (n == 1) return true; // Any number raised to the 0th power gives 1. So it's always a simple power of any positive integer.
    
    while (x % n == 0 && x >= n){
        x /= n;
    }

    return x==1;
}