#include <vector>
#include <algorithm>
using namespace std;

// Function to rescale a vector of numbers
vector<float> rescale_to_unit(vector<float>& numbers) { 
    if (numbers.empty()) // Check for empty vector
        return {};
        
    auto minmax = minmax_element(begin(numbers), end(numbers)); // find the minimum and maximum number
    
    float minVal = *minmax.first;  
    float maxVal = *minmax.second; 

    if (fabs(maxVal - minVal) < 1e-6) { // Check for equal numbers, avoid division by zero
        fill(begin(numbers), end(numbers), 0);
        return numbers;
    }
    
    transform(begin(numbers), end(numbers), begin(numbers), [minVal, maxVal](float& num) {
        return (num - minVal) / (maxVal - minVal); }); // rescale the numbers in-place
        
   return numbers;
}