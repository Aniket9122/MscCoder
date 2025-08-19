#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

bool issame(const vector<float>& a, const vector<float>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) 
        if (abs(a[i] - b[i]) > 1e-9) return false; // floats comparison
    return true;
}

vector<float> sort_even(vector<float> l){
    vector<float> evenIndices, oddIndices;
    
    for (int i = 0; i < l.size(); ++i) {
        if (i % 2 == 0) evenIndices.push_back(l[i]);
        else oddIndices.push_back(l[i]);
    }

    sort(evenIndices.begin(), evenIndices.end());
    
    for (int i = 0, j = 0; i < l.size(); ++i) 
        if (i % 2 == 0) l[i] = evenIndices[j++];
        
    // Put odd-indexed elements back in their original order
    for (int i = 1, j = 0; i < l.size(); i += 2, ++j)
        l[i] = oddIndices[j]; 

    return l;
}
