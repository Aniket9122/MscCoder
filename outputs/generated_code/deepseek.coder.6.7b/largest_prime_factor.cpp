#include <iostream>
using namespace std;

int largest_prime_factor(long long n){ 
    int maxPrime = -1; 
    
    while (n % 2 == 0) { 
        maxPrime = 2; 
        n >>= 1; 
    } 
  
    for (int i = 3; i <= sqrt(n); i += 2) { 
        while (n % i == 0) { 
            maxPrime = i; 
            n = n / i; 
        } 
    } 
    
    if (n > 2) 
        maxPrime = n; 
  
    return maxPrime; 
} 

int main() {
    cout << largest_prime_factor(13195)<<endl; // outputs: 29
    cout << largest_prime_factor(2048)<<endl; // outputs: 2
  
    return 0; 
}