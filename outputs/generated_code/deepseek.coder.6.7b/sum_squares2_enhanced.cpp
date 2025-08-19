#include <cmath>    // for pow function
#include <vector>   // for vector
#include <algorithm>// for transform, accumulate
#include <iostream> // for cout
using namespace std; 

// Function for rounding a number to its upper int(ceiling)
int ceilNum(float num){
    return static_cast<int>(ceil(num));
}

// Function for squaring each rounded number and calculating the sum
int sum_squares(const vector<float>& lst){
    // Applying ceilNum to each element of vector 'lst' and squaring it. Then, calculate the sum 
    return accumulate(lst.begin(), lst.end(), 0, [](int a, float b) {return a + pow(ceilNum(b),2);});
}
