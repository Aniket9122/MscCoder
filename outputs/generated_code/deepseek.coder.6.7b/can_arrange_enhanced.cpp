#include <vector>
using namespace std;

int can_arrange(const vector<int>& arr) {  // Passing by reference for efficiency
    if (arr.size() < 2) return -1;  // If array has less than 2 elements, no need to search
    
    int maxIndex = 0;  // Start from the first element
    for(unsigned int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i-1]) {  // If current element is less than previous one
            maxIndex = i;  // Update maxIndex
        } else {
            return maxIndex;  // Return the largest index where condition holds true
        }
    }
    
    return -1;  // If no such element exists, then return -1
}