#include <cmath>

bool is_prime(long long n){
    if (n <= 1) {
        return false;  // 0 and 1 are not primes
    } else if (n == 2) {
        return true;   // 2 is the only even prime number
    } else if ((n % 2) == 0) {
        return false;  // all other even numbers are not primes
    }
    
    long long sqrtN = static_cast<long long>(sqrt(n));
    for (long long i = 3; i <= sqrtN; i += 2){   // check the odd numbers only
        if ((n % i) == 0) {
            return false;  // we found a divisor, so n is not prime
        }
    }
    
    return true;  // no divisors were found, so n is prime
}