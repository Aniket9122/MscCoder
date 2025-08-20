#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    sort(l1.begin(), l1.end());   // sorting the vectors first
    sort(l2.begin(), l2.end());  
    
    vector<int> result;          
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));   // using intersection to get common elements, removes duplicates as it goes
    
    auto ip = unique(result.begin(), result.end());    // remove duplicates in sorted range
    
    result.resize(distance(result.begin(), ip));       // resize the vector, erase remaining duplicate elements
        
    return result; 
}