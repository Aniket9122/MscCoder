#include <string>
#include <cmath>
using namespace std;

// This function takes a string value and returns an integer 
int closest_integer(string value){
    // Convert the input string to double
    double num = stod(value);
    
    // Add 0.5 then use floor to get the nearest integer, effectively rounding away from zero for negative numbers.
    int roundedNum = (int)floor(num + 0.5);
    
    return roundedNum;
}