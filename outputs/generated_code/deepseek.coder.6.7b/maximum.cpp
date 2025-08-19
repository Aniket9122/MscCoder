#include <vector>
#include <algorithm>
using namespace std;

bool compare(int i, int j) {
    return i > j;
}

vector<int> maximum(vector<int> arr, int k){
    sort(arr.begin(), arr.end(), compare);  // Sort in descending order using custom comparator
    vector<int> result(arr.begin(), arr.begin()+k);
    return result;
}