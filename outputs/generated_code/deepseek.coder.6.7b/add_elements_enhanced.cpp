#include<iostream>
#include<vector>
using namespace std;

// Function to count number of digits in a number
int numOfDigits(int n) {
    if (n == 0) return 1; // edge case for zero
    if (n < 0) n = -n; // make sure we handle positive numbers
    int digits = 0;
    while (n) {
        n /= 10;
        ++digits;
    }
    return digits;
}

int add_elements(const vector<int>& arr, int k)  {
    // Initialize sum as 0
    int sum = 0;
    
    for (size_t i = 0; i < k && i < arr.size(); ++i){
        if (numOfDigits(arr[i]) <= 2)   // Check if number has at most two digits
            sum += abs(arr[i]); 
    } 
    
    return sum;
} 
