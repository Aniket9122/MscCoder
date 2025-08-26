#include <cmath>
bool isPrime(long long num){
    // 0 and 1 are not primes
    if(num <= 1) {
        return false;
    }
    
    // 2 is the only even prime number
    else if(num == 2) {
        return true;
    }
  
    // all other even numbers are not primes
    else if (num % 2 == 0){
        return false;
    }

    long long sqrtNum = static_cast<long long>(sqrt(num));
    
    /* Check the odd numbers only. Since we have already checked for 2 and even numbers, we just need to check for odd divisors starting from 3 */
    for (long long i = 3; i <= sqrtNum; i += 2){  
        // If num is divisible by any number between 3 and its square root, it's not prime.
        if(num % i == 0) {
            return false;
        }
    }
    
    /* No divisors were found after checking all possible odd numbers up to the square root of num, so num is a prime number */ 
    return true;  
}