#include<iostream>
#include<vector>
using namespace std;

// Function to intersperse a delimeter between consecutive elements of an input vector
vector<int> intersperse(const vector<int>& numbers, int delimiter) { 
    // Output vector
    vector<int> output; 
    
    for (size_t i = 0; i < numbers.size(); ++i) {
        output.push_back(numbers[i]);
        
        if (i != numbers.size() - 1) // Do not append delimiter after the last element
            output.push_back(delimiter);  
    }
    
    return output; 
}