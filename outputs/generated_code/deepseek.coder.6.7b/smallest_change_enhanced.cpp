#include <vector>
using namespace std;

int smallest_change(const vector<int>& arr) { 
    int count = 0;
    for (size_t i = 0, j = arr.size() - 1; i <= j; ++i, --j) {
        if (arr[i] != arr[j]) {
            ++count;
        }
    }
    return count / 2 + count % 2; // divide by two as we are comparing pairs of elements and adding up the differences. Plus an additional change needed if the length of array is odd (the middle element)
}