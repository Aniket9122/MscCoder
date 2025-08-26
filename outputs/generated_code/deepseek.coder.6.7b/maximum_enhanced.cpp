#include <vector>
#include <algorithm>
using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    partial_sort(arr.begin(), arr.begin() + k, arr.end(), greater<int>());   // Sort in descending order using built-in comparator
    return vector<int>(arr.begin(), arr.begin() + k);
}