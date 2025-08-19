#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool issame(vector<int> a, vector<int> b) { 
    if (a.size() != b.size()) return false; 
    for (int i = 0; i < a.size(); i++)  
        if (a[i] != b[i]) return false; 
    return true; 
} 

vector<int> sort_third(vector<int> l){
    vector<int> notDivByThree, divByThree;
    
    for(int i = 0; i < l.size(); ++i) {
        if ((i+1) % 3 == 0) {
            divByThree.push_back(l[i]);
        } else {
            notDivByThree.push_back(l[i]);
        }
    }
    
    sort(divByThree.begin(), divByThree.end());
    
    int j = 0; 
    for (int i = 0; i < l.size(); ++i) {
        if ((i+1) % 3 == 0 && j < divByThree.size()) {
            notDivByThree.push_back(divByThree[j++]);
        }
    }
    
    return notDivByThree;
}
