#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Function to check if a number is prime or not
bool isPrime(int num) {
    // Handling edge cases for negative numbers and zero
    if (num <= 1) 
        return false; 
  
    int sqrtNum = static_cast<int>(sqrt(static_cast<double>(num)));
    
    for(int i = 2; i <= sqrtNum; i++) {
      // Handling potential integer overflow cases
      if (i * i > num) 
        break;  
      
      if (num % i == 0)
          return false; 
    } 
  
    return true; 
} 

// Function to check if the length of a string is prime or not
bool prime_length(string str) {
    // Handling empty strings
    if(str.empty())
      return false;
    
    int len = static_cast<int>(str.size());
      
    return isPrime(len);
} 

// Testing the function
