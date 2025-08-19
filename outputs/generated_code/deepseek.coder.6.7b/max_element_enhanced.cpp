// This function returns maximum element present in the vector passed as argument
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

float max_element(const vector<float>& l) {
    // If vector is not empty, return maximum value. Otherwise return a small number to indicate an error.
    if (!l.empty()) {
        return *max_element(l.begin(), l.end()); 
    } else {
        cout << "Error: The input vector is empty." << endl;
        return 1e-4; // Return a small number to indicate an error
    }  
}
