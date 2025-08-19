#include <vector>
using namespace std;

// Function to calculate the derivative
vector<float> derivative(const vector<float>& xs) {
    if (xs.size() <= 1) // If polynomial has less than or equal to 1 term, its derivative is zero.
        return {};
    
    vector<float> result;
    for (int i = 1; i < xs.size(); ++i) 
        result.push_back(xs[i] * i); // Differentiate each term and store in new vector
        
    return result;
}