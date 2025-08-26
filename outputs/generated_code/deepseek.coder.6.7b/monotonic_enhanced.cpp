#include <vector>
using namespace std;

bool monotonic(const vector<float>& l) {
    if (l.size() < 2) // for single element or empty vector, return true
        return true; 
    
    bool increasing = false, decreasing = false;
    
    for (int i = 1; i < l.size(); ++i) {
        if (!increasing && !decreasing){ 
            if(l[i] == l[i-1]) continue; // Skip equal consecutive elements
            increasing = (l[i] > l[i - 1]); // Set flag to true if next element is greater than previous
            decreasing = (l[i] < l[i - 1]); // Set flag to true if next element is lesser than previous
        } else {
          if(increasing && l[i]<=l[i-1]) return false; // If increasing order, next should be greater or equal
          if(decreasing && l[i]>=l[i-1]) return false; // If decreasing order, next should be lesser or equal 
        }
    }
    
    return true;
}