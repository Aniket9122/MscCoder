#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
  
    for (int i = 2; i * i <= n; ++i) 
        if (n % i == 0) 
            return false;      
    
    return true;
}

bool is_multiply_prime(int a){
    if(a > 100 || a < 0) return false;
  
    int factors = 0;
    for (int i = 2; i * i <= a && factors <= 4; ++i) {
        while (a % i == 0) {
            a /= i;
            ++factors; 
        }
    	if(isPrime(i)) return false;   //to check if the found factor is prime
    }
    if(a > 1 && isPrime(a)) factors++;  //if there's still a prime number left in 'a', increment the factors counter.

    return (factors == 3);    
}