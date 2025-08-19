#include<vector>
using namespace std;

// Function to calculate the derivative
vector<float> derivative(vector<float> xs) {
    for (int i = 1; i < xs.size(); ++i) 
        xs[i] = xs[i] * i;
    
    // Remove the leading coefficient that is no longer needed after differentiation.
    if(xs.size() > 1)
       xs.erase(xs.begin());
    else  
       xs.clear();  // If polynomial was a constant, it becomes zero.
     
    return xs;
}