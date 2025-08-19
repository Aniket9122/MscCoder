#include <iostream>
using namespace std;

int multiply(int a, int b) {
    // Calculate unit digit of a and b
    int lastDigitA = abs(a % 10);
    int lastDigitB = abs(b % 10);
    
    // Return the product of their unit digits
    return lastDigitA * lastDigitB;
}