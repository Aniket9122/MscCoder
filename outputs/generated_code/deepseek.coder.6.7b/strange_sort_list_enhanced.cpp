#include <vector>
#include <algorithm>
using namespace std;

// Define a helper function for swapping elements in vector.
void swapElements(vector<int>& lst, int i, int j) {
    int temp = lst[i];
    lst[i] = lst[j];
    lst[j] = temp;
}

// Main function to sort the vector in strange order.
vector<int> strangeSortVector(vector<int> lst) {
    if (lst.empty()) return lst;   // Return empty vector for edge case when input is an empty array.
    
    int size = lst.size();
    sort(begin(lst), end(lst));   // Sorting the input vector.
    
    for (int i = 0, j = size - 1; i < j; ++i, --j) {
        swapElements(lst, i, j);   // Swap first and last elements using helper function.
    }
  
    return lst;
}