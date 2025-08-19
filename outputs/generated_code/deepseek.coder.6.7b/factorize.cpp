#include <vector>
using namespace std;

// Function to check if number is prime or not
bool isPrime(int n) {
    if (n <= 1) return false;
    
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) 
            return false;
    }
        
    return true;
}

// Factorize function that returns vector of prime factors of given integer in the order from smallest to largest.
vector<int> factorize(int n) {
    vector<int> factors;
    
    for (int i = 2; i <= n;) {
        if (!(n % i)) {  // If number is divisible by 'i'
            n /= i;       // Divide the number by 'i'.
            factors.push_back(i);   // Push 'i' into vector.
        } else {    // If not, increment 'i' until it becomes a prime factor of 'n'.
            if (isPrime(i))  i++;    
        }
        
        if (isPrime(n) && n != 1){   // Checking if remaining number is prime.
          factors.push_back(n);       // If yes, push it into vector.
           n = 1;                     // And set 'n' equal to 1 for exit from loop.
        }        
    }
    
    return factors;   // Return the factors of number.
}