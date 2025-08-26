#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

pair<float, float> find_closest_elements(vector<float> numbers){
    sort(numbers.begin(), numbers.end());
    
    pair<float, float> result = {0.0f, 0.0f};
    float minDifference = std::numeric_limits<float>::max();
        
    for (size_t i = 1; i < numbers.size(); ++i)
    {
        const auto difference = abs(numbers[i] - numbers[i-1]);
            
        if (difference <= minDifference){
            result = {numbers[i-1], numbers[i]};
            minDifference = difference;
        }
    }
        
    return result; 
}