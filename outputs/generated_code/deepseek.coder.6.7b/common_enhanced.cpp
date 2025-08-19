#include <algorithm>
#include <vector>
using namespace std;

// Function to get unique elements in a vector
void removeDuplicates(vector<int>& vec)  {
    auto it = unique(vec.begin(), vec.end());
    vec.resize(distance(vec.begin(),it)); 
}

vector<int> common(vector<int> l1, vector<int> l2){
    
    // Sort and remove duplicates from both vectors
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    removeDuplicates(l1);
    removeDuplicates(l2);
 
    vector<int> result;
    
    // Find common elements using set_intersection algorithm
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), inserter(result, result.begin()));
  
    return result;
}