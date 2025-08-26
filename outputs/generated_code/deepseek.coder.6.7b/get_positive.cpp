#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function to get positive numbers from vector
vector<float> get_positive(vector<float> l){
    vector<float> result;
    
    // Using copy_if function of STL, which copies elements that satisfy the condition
    copy_if(l.begin(), l.end(), back_inserter(result), [](float i) { return i > 0; });
      
    return result; 
}

// Function to test get_positive function
bool issame(vector<float> a, vector<float> b){
    if (a.size() != b.size())
        return false;
        
    for(int i = 0; i < a.size(); ++i)
        if (a[i]!=b[i]) 
            return false;
            
    return true;
}
