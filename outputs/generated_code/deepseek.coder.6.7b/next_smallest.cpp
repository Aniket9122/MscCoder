#include <vector>
#include <algorithm>  // for std::sort
using namespace std;

int next_smallest(vector<int> lst) {
    if (lst.size() < 2)  // If the vector has less than two elements, return -1 to represent None in Python's context
        return -1;
    
    sort(lst.begin(), lst.end());  

    for (int i = 1; i < lst.size(); ++i) {  // Iterate through the vector and find unique elements, considering only those that have a next element to be different from them
        if (lst[0] != lst[i])
            return lst[i];
    }
    
    return -1;   // If no second smallest number is found, return -1 to represent None in Python's context
}