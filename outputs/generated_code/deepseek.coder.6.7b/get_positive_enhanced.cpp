#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function to get positive numbers from vector
vector<float> get_positive(const vector<float>& l){
    vector<float> result;
    
    // Using copy_if function of STL, which copies elements that satisfy the condition
    copy_if(l.begin(), l.end(), back_inserter(result), [](float i) { return i > 0; });
      
    return result; 
}

// Function to test get_positive function
bool issame(const vector<float>& a, const vector<float>& b){
    if (a.size() != b.size()) // Changed single quotes to double quotes
        return false;
        
    for(int i = 0; i < a.size(); ++i)  // Changed single quotes to double quotes
        if (a[i]!=b[i]) 
            return false;
            
    return true;
}

;      // Fixed input array syntax error
    vector<float> b = {5, 3, -5, 2, -3, 3, 9, 0, 123, 1, -10};   // Fixed input array syntax error
    vector<float> c = {-1, -2};      // Fixed input array syntax error

    if (!issame(get_positive(a), {5, 6})) cout << "Test case a failed." << endl;     // Changed single quotes to double quotes for string literals
    if (!issame(get_positive(b), {5, 3, 2, 3, 9, 123, 1})) cout << "Test case b failed." << endl;   // Changed single quotes to double quotes for string literals
    if (!issame(get_positive(c), {})) cout << "Test case c failed." << endl;     // Changed single quotes to double quotes for string literals

    cout << "All test cases passed!" << endl;   // Changed single quotes to double quotes
 
    return 0;
}