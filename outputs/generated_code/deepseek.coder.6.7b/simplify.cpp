#include<bits/stdc++.h>
using namespace std;

// Function to calculate gcd of two numbers using Euclid's algorithm
int gcd(int a, int b) { 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
}

bool simplify(string x, string n){
    // Parsing numerator and denominator from input strings
    size_t pos = 0;
    int num1 = stoi(x, &pos);
    int denom1 = stoi(x.substr(pos + 1));
  
    pos = 0;
    int num2 = stoi(n, &pos);
    int denom2 = stoi(n.substr(pos + 1));
    
    // Calculating gcd of numerators and denominators
    int common_gcd = gcd(num1*denom2, num2*denom1);
  
    return (common_gcd == denom1 && common_gcd == denom2);
}