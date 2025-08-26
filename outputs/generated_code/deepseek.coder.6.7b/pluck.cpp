#include<vector>
using namespace std;

// Function to find the node with smallest even value in a tree branch
vector<int> pluck(vector<int> arr){
    // Initialization of the minimum values and their indices
    int min_val = INT32_MAX, min_index = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0 && arr[i] <= min_val){ // Checking if the node is even and smaller than current minimum
            min_val = arr[i];                       // If true, update minimum value and index
            min_index = i;
        }
    }
    
    // Return a vector with smallest even number's value and its index or an empty vector if no such node exists 
    return (min_index != -1) ? vector<int>{min_val, min_index} : vector<int>{} ;
}