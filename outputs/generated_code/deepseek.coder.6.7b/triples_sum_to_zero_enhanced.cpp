#include <algorithm>
#include <vector>
using namespace std;

bool triples_sum_to_zero(vector<int>& arr) {
    int n = arr.size();
    
    if (n < 3) return false; // If there are less than 3 elements, it is not possible to have three numbers summing up to zero

    sort(arr.begin(), arr.end()); // Sort the array

    for (int i = 0; i < n - 2; i++) { // Traverse through each element of sorted array
        int left = i + 1, right = n - 1;
        while (left < right) {
            if (arr[i] + arr[left] + arr[right] == 0) return true; // If sum is zero then return true
            
            else if (arr[i] + arr[left] + arr[right] < 0) left++;  // If the sum is less than 0, move left pointer to right
            
            else right--;  // If the sum is more than 0, move right pointer to left
        }
    }
    
    return false;  // After traversing all possible triplets, if no triplet sums up to zero then return false
}