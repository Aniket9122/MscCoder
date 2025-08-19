#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to increment vector elements by one
vector<int> incr_list(vector<int> l) {
    for_each(l.begin(), l.end(), [](int &n){ n++; });   // Increment each element of the list by 1
    return l;  
}

// Function to check if two vectors are equal or not
bool issame(vector<int> a, vector<int> b) {
    return a==b;  
}
