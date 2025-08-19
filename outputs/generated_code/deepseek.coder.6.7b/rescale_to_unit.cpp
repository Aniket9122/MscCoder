#include<vector>
using namespace std;

// Function to rescale a vector of numbers
vector<float> rescale_to_unit(vector<float> numbers) { 
    float min = *min_element(numbers.begin(), numbers.end()); // find the minimum number
    float max = *max_element(numbers.begin(), numbers.end()); // find the maximum number
    
    for (unsigned int i = 0; i < numbers.size(); ++i) { 
        numbers[i] = (numbers[i] - min) / (max - min);
    }
   return numbers;
}