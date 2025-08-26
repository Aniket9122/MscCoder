#include <iostream>
using namespace std;

bool isPrime(int num){
    if (num <= 1) { 
        return false; 
    } 
  
    for(int i = 2; i*i <= num; ++i ){
       if(num % i == 0){
           return false; 
       }
    }
    return true;
}

int prime_fib(int n){
    int fib1=0, fib2=1, fib3;
  	unsigned long counter = 0, result = -1;
    
    if (n < 1) { 
        cout << "Invalid input. The number should be > 0."; 
    } else if( n == 1 ){
      return 2;
    }else if( n == 2){
      return 3;
    }else if( n == 3){
      return 5;
    }else{
        while (counter < n) {
            fib3 = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib3;      
            ++counter;        
              
            if (isPrime(fib3)) { 
              result = fib3;   
              ++counter;     
            }       
        }  
    }    
    return result;
}