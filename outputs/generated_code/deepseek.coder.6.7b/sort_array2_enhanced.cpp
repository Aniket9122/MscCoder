#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to generate sorted copy of vector based on sum of first and last element
vector<int> sort_array(const vector<int>& array) {
    if (array.empty()) return {};  // Return empty vector for empty input
    
    int sum = array[0] + array[array.size() - 1];  // Calculate the sum of first and last element

    // Make a copy of the original vector
    vector<int> sortedArray(array);  

    // Sort in ascending order if sum is odd, descending otherwise
    if (sum % 2 == 1) {
        sort(sortedArray.begin(), sortedArray.end());  // Ascending sort
    } else {
        sort(sortedArray.rbegin(), sortedArray.rend());  // Descending sort
    }
    
    return sortedArray;  
}

// Function to perform unit tests on the above function 
void test() {
    if (sort_array({}) != vector<int>{}) cout << "Test Case 1 Failed\n";
    if (sort_array({5}) != vector<int>{5}) cout << "Test Case 2 Failed\n";
    if (sort_array({2,4,3,0,1,5}) != vector<int>{0,1,2,3,4,5}) cout << "Test Case 3 Failed\n";
    if (sort_array({2,4,3,0,1,5,6}) != vector<int>{6,5,4,3,2,1,0}) cout << "Test Case 4 Failed\n";
}