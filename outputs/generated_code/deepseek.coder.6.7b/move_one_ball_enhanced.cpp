#include <vector>
using namespace std;

bool move_one_ball(vector<int>& arr) {
    int shifts = 0;
    for (size_t i = 0; i < arr.size() - 1 && shifts < 2; ++i) {
        if (arr[i] > arr[i + 1]) {
            ++shifts;
            // Ensure we can perform the shift
            if(i+2<arr.size() && arr[i+2] >= arr[i]){
                continue;  // We should not make a shift, but check subsequent elements for possible other shifts.
            }
        }
    }
    return shifts <= 1;
}