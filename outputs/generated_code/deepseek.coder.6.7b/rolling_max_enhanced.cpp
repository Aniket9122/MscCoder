#include<vector>
using namespace std;

// Function to find rolling maxima
vector<int> rolling_max(const vector<int>& numbers){
    // If input array is empty return an empty array
    if  (numbers.empty()) { 
        return {}; 
     }
  
    int currentMax = numbers[0];  // Initialize first max to the first element of the sequence
    vector<int> result;
    
    for(auto const& number : numbers){
        currentMax = max(currentMax,number);   // Update rolling max every iteration
        result.push_back(currentMax);           // Append it into our result vector
    }
    return result;
}