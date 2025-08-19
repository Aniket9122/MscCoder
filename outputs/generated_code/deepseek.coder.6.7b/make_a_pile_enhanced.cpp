#include<iostream>
#include<vector>
#include <cassert> // Required for the assert statement
using namespace std;

// Function to create a pile of stones based on the number of levels n
vector<int> make_a_pile(int n){
    vector<int> result;  // Create an empty vector to store the numbers of stones at each level
    
    for (int i = 0; i < n; ++i) { 
        if (n % 2 == 0) { // If n is even, add the next even number
            result.push_back(2 * (i + 1)); 
        } else {  // If n is odd, add the next odd number
            result.push_back((2 * i) + 1);  
        }
    }
    
    return result; 
}
