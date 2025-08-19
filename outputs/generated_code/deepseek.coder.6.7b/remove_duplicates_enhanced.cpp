#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Helper function to print vector
void print(const vector<int>& nums) {
    cout << "{";
    for (size_t i = 0; i < nums.size(); ++i) {
        if (i != 0) 
            cout << ", ";
        cout << nums[i];
    }
    cout << "}\n";
}

vector<int> remove_duplicates(const vector<int>& numbers){
    unordered_map<int, int> count; // count occurrence of each number
    for (auto n : numbers) 
        ++count[n];
    
    vector<int> result;
    for (auto n : numbers) {
        if (count[n] == 1) 
            result.push_back(n); // only add to result if it appears once in the input
        else 
            --count[n]; // decrement count, so next time we encounter this number, it'll not be added to result
    }
    return result;
}
