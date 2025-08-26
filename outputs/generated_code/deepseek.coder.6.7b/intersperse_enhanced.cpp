#include<vector>
using namespace std;

// Function to intersperse a delimeter between consecutive elements of an input vector
vector<int> intersperse(const vector<int>& numbers, int delimiter) { 
    // Output vector
    vector<int> output; 
    
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (it != numbers.begin()) {
            output.push_back(delimiter);  
        }
        
        output.push_back(*it);
    } 
    
    return output; 
}