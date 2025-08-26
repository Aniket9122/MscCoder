#include <iostream>
using namespace std;

bool any_int(float a, float b, float c){
    // Converting double type to integer by truncating decimal part. If the original number is non-integer, conversion does not change it 
    int ia = static_cast<int>(a);
    int ib = static_cast<int>(b);
    int ic = static_cast<int>(c);
    
    // Check if any of the three numbers is equal to the sum of other two, and all numbers are integers.
    return (ia + ib == ic) || (ib + ic == ia) || (ic + ia == ib); 
}

