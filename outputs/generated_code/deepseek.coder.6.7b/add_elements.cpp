#include<iostream>
#include<vector>
using namespace std;

int add_elements(const vector<int>& arr, int k) {
    int sum = 0; 
    
    for (size_t i = 0; i < k && i < arr.size(); ++i){
        if (to_string(abs(arr[i])).length() <= 2)   //Check if number has at most two digits
            sum += arr[i]; 
    } 
    
    return sum;
} 
