#include<iostream>
#include<vector>
using namespace std;

// Function to increment vector elements by one
vector<int> incr_vector(vector<int> v){
    for(auto &element : v) element++;  // Increment each element of the list by 1
    return v;  
}

// Function to check if two vectors are equal or not
bool issame(vector<int> a, vector<int> b){
    return a==b;  
}
