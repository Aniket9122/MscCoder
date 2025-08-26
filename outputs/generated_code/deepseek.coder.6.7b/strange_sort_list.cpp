#include <vector>
#include <algorithm>
using namespace std;

vector<int> strange_sort_list(vector<int> lst){
    if (lst.empty()) return lst;  // Return empty vector for edge case when input is an empty array
  
    sort(begin(lst), end(lst));  // Sorting the input vector
  
    int i = 0, j = lst.size() - 1;
    
    while (i < j) {
        swap(lst[i], lst[j]);  // Swap first and last elements
        i++;
        j--;
    }
  
    return lst;
}