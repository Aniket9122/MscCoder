#include <iostream>
using namespace std;

int digits(int n){
    int product = 1, digit;
    while (n != 0) {
        // get last digit
        digit = n % 10;
        
        // if the digit is odd, multiply it to the product
        if(digit % 2 != 0){
            product *= digit;
        }
        
        // remove the processed digit from number
        n /= 10;
    }
    
    return (product == 1) ? 0 : product;
}

