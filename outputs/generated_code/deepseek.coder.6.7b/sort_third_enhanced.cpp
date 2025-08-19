#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) { 
    return a == b; 
} 

vector<int> sort_third(vector<int> l){
    vector<int> notDivByThree, divByThree;
    
    for (size_t i = 0; i < l.size(); ++i) {
        if ((i+1) % 3 == 0) {
            divByThree.push_back(l[i]);
        } else {
            notDivByThree.push_back(l[i]);
        }
    }
    
    sort(divByThree.begin(), divByThree.end());
    
    size_t j = 0; 
    for (size_t i = 0; i < l.size(); ++i) {
        if ((i+1) % 3 == 0 && j < divByThree.size()) {
            notDivByThree.push_back(divByThree[j++]);
        }
    }
    
    return notDivByThree;
}
