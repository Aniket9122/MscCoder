#include <vector>
using namespace std;

/// Function to check if there are two distinct numbers in a vector that sum to zero
/** 
 * @param l Vector of integers 
 * @return True if there are two distinct elements in the vector that sum to zero, False otherwise.
 */
bool pairs_sum_to_zero(vector<int>& l) {
    // Handle edge case where size of list is less than 2
    if (l.size() < 2) return false;
    
    int i = 0, j = l.size() - 1;
    
    while(i < j) {
        if (l[i] + l[j] == 0) return true;
        else if (abs(l[i]) > abs(l[j])) i++; // Increment left pointer if sum is negative
        else j--; // Decrease right pointer if sum is positive
    }
    
    return false; // No two elements sum to zero 
}