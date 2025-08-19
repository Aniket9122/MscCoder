#include<vector>
using namespace std;

int smallest_change(vector<int> arr) {
    int count = 0;
    for (int i = 0, j = arr.size() - 1; i < j; ++i, --j) {
        if (arr[i] != arr[j]) {
            ++count;
        }
    }
    return count;
}