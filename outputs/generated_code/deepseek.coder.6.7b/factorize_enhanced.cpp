#include <vector>
using namespace std;

// Constants
const int FIRST_FACTOR = 2;

// Function to check if number is prime or not
bool isPrime(int num) {
    if (num <= FIRST_FACTOR) 
        return (num == FIRST_FACTOR); // Return true only for num equal to 2
    
    for (int i = FIRST_FACTOR; i * i <= num; ++i){
        if (num % i == 0) 
            return false;
    }
        
    return true;
}

// Function that returns a vector of prime factors of given integer in the order from smallest to largest.
vector<int> factorize(int numberToFactorise) {
    vector<int> factors;
    
    for (int factor = FIRST_FACTOR; factor <= numberToFactorise;)  {
        if (!(numberToFactorise % factor)) {   // If number is divisible by 'factor'
            numberToFactorise /= factor;        // Divide the number by 'factor'.
            factors.push_back(factor);    // Push 'factor' into vector.
         } else  {     // If not, increment 'factor' until it becomes a prime factor of 'numberToFactorise'.
            ++factor;    
        }
        
        if (isPrime(numberToFactorise) && numberToFactorise != FIRST_FACTOR){   
          // Checking if remaining number is prime.
            factors.push_back(numberToFactorise);       
           numberToFactorise = FIRST_FACTOR;                     
         }        
     }
    
    return factors;   // Return the factors of number.
}