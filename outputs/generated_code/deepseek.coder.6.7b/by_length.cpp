#include <stdio.h>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

// Function to convert integer numbers into their string representation
vector<string> by_length(vector<int> arr) {
    map<int, string> numToStr = {{1, "One"}, {2, "Two"}, 
                                  {3, "Three"}, {4, "Four"}, 
                                  {5, "Five"}, {6, "Six"}, 
                                  {7, "Seven"}, {8, "Eight"}, 
                                  {9, "Nine"}};
    vector<string> result;
    
    // Ignore strange numbers and sort the valid ones in ascending order
    sort(arr.begin(), arr.end(), [](int a, int b) { return (a > 0 && a < 10) && (b > 0 && b < 10) && a < b; }); 
    
    // Reverse the sorted vector
    reverse(arr.begin(), arr.end());
    
    // Convert each valid integer into string and store it in result vector
    for_each(arr.begin(), arr.end(), [&](int n) { if (n > 0 && n < 10) result.push_back(numToStr[n]); }); 
    
    return result;
}