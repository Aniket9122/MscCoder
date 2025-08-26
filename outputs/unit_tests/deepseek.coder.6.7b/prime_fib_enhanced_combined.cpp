#include <iostream>
using namespace std;

// Function to check if number is prime
bool isPrime(int num) {
    if (num <= 1)  { 
        return false; 
    } 
  
    for(int i = 2; i*i <= num; ++i ){
       if (num % i == 0){
           return false; 
       }
     }
     return true;
}

// Function to find n-th Fibonacci number that is prime
int prime_fib(int n) {
    int fib1 = 0, fib2 = 1, fib3;
  	unsigned long counter = 0, result = -1;
    
    if (n < 1)  { 
        cout << "Invalid input. The number should be > 0."; 
    } else if( n == 1 ){
      return 2;
     }else if( n == 2){
      return 3;
     }else if( n == 3){
      return 5;
     }else {
        while (counter < n)  {
            fib3 = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib3;      
            ++counter;        
              
            if(isPrime(fib3))  { 
              result = fib3;   
              ++counter;     
            }       
         }  
     }    
    return result;
}

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

    if((prime_fib(1) == 2)){ tests_passed++; } total_tests++;

    if((prime_fib(2) == 3)){ tests_passed++; } total_tests++;

    if((prime_fib(3) == 5)){ tests_passed++; } total_tests++;

    if((prime_fib(4) == 13)){ tests_passed++; } total_tests++;

    if((prime_fib(5) == 89)){ tests_passed++; } total_tests++;

    if((prime_fib(6) == 233)){ tests_passed++; } total_tests++;

    if((prime_fib(7) == 1597)){ tests_passed++; } total_tests++;

    if((prime_fib(8) == 28657)){ tests_passed++; } total_tests++;

    if((prime_fib(9) == 514229)){ tests_passed++; } total_tests++;

    if((prime_fib(10) == 433494437)){ tests_passed++; } total_tests++;

    if((prime_fib(1) == 2)){ tests_passed++; } total_tests++;

    if((prime_fib(2) == 3)){ tests_passed++; } total_tests++;

    if((prime_fib(3) == 5)){ tests_passed++; } total_tests++;

    if((prime_fib(4) == 13)){ tests_passed++; } total_tests++;

    if((prime_fib(5) == 89)){ tests_passed++; } total_tests++;

    if((prime_fib(6) == 233)){ tests_passed++; } total_tests++;

    if((prime_fib(7) == 1597)){ tests_passed++; } total_tests++;

    if((prime_fib(8) == 28657)){ tests_passed++; } total_tests++;

    if((prime_fib(9) == 514229)){ tests_passed++; } total_tests++;

    if((prime_fib(10) == 433494437)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


