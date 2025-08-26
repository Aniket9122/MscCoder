#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    // Get the number of ones in the binary representation of a and b
    int numOnesA = 0, numOnesB = 0;
    while (a > 0 || b > 0) {
        if (a % 2 == 1) {
            ++numOnesA;
        }
        if (b % 2 == 1) {
            ++numOnesB;
        }
        
        a /= 2;
        b /= 2;
    }
    
    // If the number of ones is the same, compare the decimal values
    if (numOnesA == numOnesB) {
        return a < b;
    }
    
    // Otherwise, return the one with more ones first
    return numOnesA > numOnesB;
}
