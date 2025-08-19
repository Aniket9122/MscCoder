#include <vector>
#include <algorithm>
#include <cmath>
#include <stdexcept>
using namespace std;

pair<float, float> find_closest_elements(const vector<float>& numbers) {
    if (numbers.size() <= 1) { 
        throw invalid_argument("Input must contain at least two elements");
     }

    vector<float> sortedNumbers = numbers;
    sort(sortedNumbers.begin(), sortedNumbers.end());
    
    pair<float, float> result{0.0f, 0.0f};
    float minDifference = numeric_limits<float>::max();
        
    for (size_t i = 1; i < sortedNumbers.size(); ++i) {
        const auto difference = abs(sortedNumbers[i] - sortedNumbers[i-1]);
            
        if (difference <= minDifference){
            result = {sortedNumbers[i-1], sortedNumbers[i]};
            minDifference = difference;
         }
     }
     
    return result; 
}