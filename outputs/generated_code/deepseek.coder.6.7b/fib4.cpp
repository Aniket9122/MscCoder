#include <iostream>
using namespace std;

int fib4(int n) {
    if (n < 2){  // If n is less than 2, return 0. This handles base cases for the function.
        return 0;
    } else if (n == 2){  // If n equals to 2, then return 2.
        return 2;
    }
    
    int a = 0;  
    int b = 0; 
    int c = 2; 
    int d;     
        
    for (int i=4; i<=n ;i++) { // Start looping from the fourth term onwards.
        d = a + b + c;         
        a = b;                  
        b = c;                   
        c = d;                    
    } 
    
    return d;                     
}