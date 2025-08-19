#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function to get sum of digits
int digitSum(int num){
    int sum = 0;
    while (num != 0) {
        sum += abs(num % 10);
        num /= 10;
    }
    return sum;
}

vector<int> order_by_points(vector<int> nums){
    vector<pair<int, int>> vec;
    
    // Store elements and their sums in a pair 
    for (auto x : nums) {
        vec.push_back({x, digitSum(x)});
    }
        
    // Sort the pairs by sum of digits then by element's value
    sort(vec.begin(), vec.end(), [](const auto &a, const auto &b) { 
        if (a.second == b.second){
            return a.first < b.first;   // If sums are same order them according to their values
        }
        else{
            return a.second < b.second;  // Otherwise order them by sum of digits
        }});
    
    vector<int> res;
    for (auto x : vec){
      res.push_back(x.first);   // Push only element into the result vector
    }
        
    return res; 
}