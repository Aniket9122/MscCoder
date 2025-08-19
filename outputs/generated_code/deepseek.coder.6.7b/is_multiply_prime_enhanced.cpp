#include <iostream>
using namespace std;
bool is_multiply_prime(int a) {
    int primeCount = 0; // count number of prime factors
    
    for (int i = 2; i * i <= a && primeCount <= 3; ++i) {
        if (a % i == 0){ 
            while (a % i == 0) {  
                a /= i;
                ++primeCount; // count the frequency of i as a factor in a
            }
        }
    }
    
    //if number is prime or square of a prime then its only divisor will be 1 or itself so check for these cases.
   if(a != 1 && a * a != a) {
       int b = sqrt(a);
      if (b * b == a) return false; // number is the square of a prime
    } else if (primeCount == 3 || (primeCount == 2 && a % 4 != 0)) {
        return true;
   }
    
   return false;
}

