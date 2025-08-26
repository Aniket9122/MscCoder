#include<iostream>
using namespace std;

bool isPrime(int num){
    if(num <= 1) return false;   // numbers less than or equal to 1 are not prime
    
    for(int i = 2; i*i <= num; ++i) {
        if (num % i == 0)    // number is divisible by some other value
            return false;
    }
    return true;
}

int x_or_y(int n, int x, int y){
  try{
      if (!isPrime(n)) {
          throw "Number is not prime!";  // throw an exception when number is not prime
       }
      else {
          return x;
       }
   } catch (const char* msg) {  // catching thrown exceptions
      cout << msg << endl;     // printing the exception message
      return y;                 // returning the value of y in case n isn't prime
    }
}

