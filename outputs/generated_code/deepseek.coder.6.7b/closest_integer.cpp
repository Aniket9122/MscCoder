#include <string>
#include <cmath>
using namespace std;

int closest_integer(string value){
    double num = stod(value);
    int roundedNum = (int) floor(num + 0.5); //add 0.5 then use floor to get the nearest integer, effectively rounding away from zero for negative numbers.
    
    return roundedNum;
}