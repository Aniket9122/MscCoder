#include <vector>
#include <algorithm>
using namespace std;

int next_smallest(const vector<int>& lst) {
    if (lst.size() < 2)   // If the vector has less than two elements, return -1 to represent None in Python's context
        return -1;
    
    int first = INT_MAX, second = INT_MAX;  // Initialize smallest and second smallest as infinity
    
    for(int num : lst) {  // Iterate through the vector and update smallest and second smallest if necessary
        if (num < first) {
            second = first;
            first = num;
        } else if (first != INT_MAX && num > first && num <= second) {  // If current number is not smaller than the smallest but larger than second smallest, update second smallest
            second = num;
        }  
    }
    
    return (second == INT_MAX || second == first) ? -1 : second;  // If no second smallest number is found, return -1 to represent None in Python's context
}