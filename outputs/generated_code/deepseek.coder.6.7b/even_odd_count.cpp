#include<iostream>
#include<vector>
using namespace std;

// Function to determine if a digit is even or odd
bool IsEven(int num) { return num % 2 == 0; }

vector<int> even_odd_count(int num){
    vector<int> counts = {0, 0}; // initialize vector with two zeros
    int digit;
    
    while (num != 0) {
        digit = abs(num % 10);  
        if (IsEven(digit))
            counts[0]++; // increase count for even digits
        else
            counts[1]++; // increase count for odd digits
        
        num /= 10; 
    }
    
    return counts;
}