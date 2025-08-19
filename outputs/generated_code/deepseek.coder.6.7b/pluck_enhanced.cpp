#include<vector>
using namespace std;

// Function to find the node with smallest even value in a tree branch
pair<int, int> pluck(const vector<int>& arr) {
    // Initialization of the minimum values and their indices
    pair<int, int> min_val_index = make_pair(-1, -1); 
    
    for (int i = 0; i < arr.size(); ++i) {
        if ((arr[i] % 2 == 0) && (min_val_index.first == -1 || arr[i] <= min_val_index.first)) { // Checking if the node is even and smaller than current minimum
            min_val_index = make_pair(arr[i], i);                        // If true, update minimum value and index
        }
    }
    
    // Return a pair with smallest even number's value and its index or an empty pair if no such node exists 
    return (min_val_index.first != -1) ? min_val_index : make_pair(-1, -1);  
}