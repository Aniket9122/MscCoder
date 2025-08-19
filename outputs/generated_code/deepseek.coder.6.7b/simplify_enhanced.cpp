#include<bits/stdc++.h>
using namespace std;

// Function to calculate gcd of two numbers using Euclid's algorithm
int gcd(int a, int b) { 
    if (b == 0) 
        return a; 
    else
       return gcd(b, a % b);  
}

bool simplify(string x, string y){
     // Parsing numerator and denominator from input strings
     size_t pos = 0;
     int num1 = static_cast<int>(stol(x.substr(0, x.find("/")))); 
     int denom1 = static_cast<int>(stol(x.substr(x.find("/")+1)));
  
     pos = 0;
     int num2 = static_cast<int>(stol(y.substr(0, y.find("/")))); 
     int denom2 = static_cast<int>(stol(y.substr(y.find("/")+1)));
   
     // Calculating gcd of numerators and denominators
     int common_gcd_num = gcd(num1, num2);
     int common_gcd_denom = gcd(denom1, denom2);
  
     return (common_gcd_num == common_gcd_denom); 
}