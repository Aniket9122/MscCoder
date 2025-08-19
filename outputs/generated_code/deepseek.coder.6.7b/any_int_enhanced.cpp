#include <iostream>
using namespace std;

bool any_int(float a, float b, float c){
    // Check if all three numbers are integers. If not, return false immediately.
    if (static_cast<int>(a) != a || static_cast<int>(b) != b || static_cast<int>(c) != c) {
        return false;
    }
    
    // Casting to int and then comparing sum of two numbers with the third one.
    int ia = static_cast<int>(a);
    int ib = static_cast<int>(b);
    int ic = static_cast<int>(c);
    
    return (ia + ib == ic) || (ib + ic == ia) || (ic + ia == ib); 
}

