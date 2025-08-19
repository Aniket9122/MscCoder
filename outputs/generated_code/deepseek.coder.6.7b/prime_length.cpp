#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Function to check if a number is prime or not
bool isPrime(int num) {
    if (num <= 1) 
        return false; 
  
    int sqrtNum = sqrt(num); 
    for (int i = 2; i <= sqrtNum; i++) 
        if (num % i == 0) 
            return false; 
  
    return true; 
} 

// Function to check if the length of a string is prime or not
bool prime_length(string str) {
    int len = str.length();
    return isPrime(len);
}