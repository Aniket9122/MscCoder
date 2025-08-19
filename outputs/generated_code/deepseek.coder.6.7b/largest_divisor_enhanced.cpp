#include<iostream>
using namespace std;

int largest_divisor(int n){
    if(n <= 1) {
        cout << "Number must be greater than 1";
        return -1; // Return error value or handle it differently in the calling function.
    }
    
    for(int i = n/2; i >= 1; --i)  {
        if(n % i == 0)
            return i;
    }
                        
    return n; // If no divisors found, return the number itself as a divisor.
}