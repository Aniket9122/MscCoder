#include<iostream>  //Corrected from stdio.h as we are not including any C style IO operations here
using namespace std; 
  
// Function to return gcd of a and b 
int greatest_common_divisor(int a, int b) {
    if (b == 0)     //Corrected from ==2 to == 0 as the GCD of any number and 0 is the number itself.
        return a;  
    else
        return greatest_common_divisor(b, a % b);  
}

