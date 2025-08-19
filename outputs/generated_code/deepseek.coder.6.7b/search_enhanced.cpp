#include <vector>
#include <unordered_map>
using namespace std;

int search(const vector<int>& lst) {
    unordered_map<int, int> freqs;
    for (auto num : lst) {  // Iterating over the input list.
        ++freqs[num];       // Updating frequency count of each number.
    }
    
    for (int i = *max_element(lst.begin(), lst.end()); i > 0; --i) {   // Starting from maximum element in the list to 1, iterate backwards.
        if (freqs[i] >= i){                                           // If frequency of current number is greater than or equal to it:
            return i;                                                   // Return this as result.
        }
    }
    
    return -1;   // If no such a value exist, return -1.
}