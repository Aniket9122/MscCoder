#include <vector>
using namespace std;

// Function to find largest index where element is not greater than preceding one
int can_arrange(const vector<int>& arr) {  // passing array by reference for efficiency
    if (arr.size() < 2) return -1;  // If the size of the input array is less than 2, no comparison needed, so return -1. This handles edge case when the array has less than two elements.
    
    int max_index = 0;  // Initialize maximum index to be zero (first element)
    for(size_t i = 1; i < arr.size(); ++i){
        if (arr[i] >= arr[max_index]) {  
            return static_cast<int>(i);  // If the current element is greater than or equal to max_element, update max_index and continue till end
         } else {
             max_index = i;  // Else just update the max_index if we found a smaller number. We are not returning here because we want to check all elements of the array.
         }     
     }
    return -1;  // If no such element is found, we return -1
}