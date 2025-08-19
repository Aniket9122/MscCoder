#include<bits/stdc++.h>
using namespace std;

// Function for rounding a number to its upper int(ceiling)
int ceilNum(float num){
    return (static_cast<int>(num) == num) ? static_cast<int>(num) : static_cast<int>(num + 1);
}

// Function for squaring each rounded number and calculating the sum
int sum_squares(vector<float> lst){
    vector<int> rounded;
    
    // Applying ceilNum to each element of vector 'lst'
    transform(lst.begin(), lst.end(), back_inserter(rounded), ceilNum);
	  
    // Squaring and calculating the sum
    return accumulate(rounded.begin(), rounded.end(), 0, [](int a, int b){return a + pow(b,2);});
}
