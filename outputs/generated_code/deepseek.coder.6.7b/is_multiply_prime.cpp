#include <iostream>
using namespace std;
bool is_multiply_prime(int a) {
    for (int i = 2; i * i <= a; ++i) {
        if (a % i == 0){ // i is divisor of a 
            int factorCount = 0;
            while (a % i == 0) { // count the frequency of i as a factor in a
                a /= i;
                ++factorCount;
            }
            if(i != 2 && i * i == a){// for case like 9,16 etc. which are products of two primes.
                return false;
           <｜begin▁of▁sentence｜>}
           // check if it is possible to write 'a' as product of three numbers
           int b = sqrt(a);
           if (b * b == a && factorCount >= 3)  {
               return true;
           }
        }
    }
   //if number is prime then its only divisor will be 1 so check for this case.
   if(a*a != 1){
       int b = sqrt(a);
      if (b * b == a) {
         return false;
      }
    }
   //if number is still greater than 2 then its a prime number so return false.
   return false;
}

