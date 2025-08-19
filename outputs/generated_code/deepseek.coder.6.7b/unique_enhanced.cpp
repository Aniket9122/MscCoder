#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) { 
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

vector<int> unique(vector<int> l){
    sort(l.begin(), l.end());   // Sort the array
    auto ip = std::unique(std::begin(l), std::end(l));    // Remove duplicates
    l.resize(std::distance(l.begin(),ip));                 // Resize to proper size
    return l;
}
