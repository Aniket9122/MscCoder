#include <iostream>
using namespace std;

long long largest_prime_factor(long long n) {
    if (n < 2) return -1;  // No prime factors for numbers less than 2

    long long maxPrime = -1;
    
    while (n % 2 == 0) {   // Remove all multiples of 2 until n becomes odd
        maxPrime = 2;
        n >>= 1;
    }
    
    for(long long i=3; i*i<=n; i+=2){  // Check for potential prime factors starting from 3 onwards
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }
    
    if(n > 2) maxPrime = n;  // If the remaining number is greater than 2, it's a prime and the largest factor.
        
    return maxPrime;  
}

