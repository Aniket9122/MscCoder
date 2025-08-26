#include<vector>
using namespace std;

// function to find rolling maxima
vector<int> rolling_max(const vector<int>& numbers){
    // if input array is empty return an empty array
    if (numbers.empty()) { 
        return {}; 
    }
  
    int rollMax = numbers[0]; // initialize first max to the first element of the sequence
    vector<int> result;
    
    for(auto const& num : numbers){
        rollMax = max(rollMax,num);  // update rolling max every iteration
        result.push_back(rollMax);   // append it into our result vector
    }
    return result;
}