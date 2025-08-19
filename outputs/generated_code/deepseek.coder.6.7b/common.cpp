#include <algorithm> 
#include <vector>

std::vector<int> common(std::vector<int> l1, std::vector<int> l2) {
    // Sort both lists and remove duplicates.
    sort(l1.begin(), l1.end()); 
    auto it = unique(l1.begin(), l1.end()); 
    l1.resize(distance(l1.begin(),it));
    
    sort(l2.begin(), l2.end()); 
    it = unique(l2.begin(), l2.end());
    l2.resize(distance(l2<｜begin▁of▁sentence｜>.begin(),it));
    
    // Find common elements using set_intersection algorithm.
    std::vector<int> result;
    sort(l1.begin(), l1.end()); 
    sort(l2.begin(), l2.end());
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    
    // Remove duplicates from the common elements list and return it.
    sort(result.begin(), result.end()); 
    it = unique(result.begin(), result.end()); 
    result.resize(distance(result.begin(),it));
    return result;
}