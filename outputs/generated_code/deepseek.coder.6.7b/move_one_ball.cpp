#include <vector>
using namespace std;
bool move_one_ball(vector<int> arr) {
    int shifts = 0;
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            ++shifts;
            // Ensure we can perform the shift
            if (i + 2 == arr.size() || arr[i + 2] >= arr[i]) {
                --i;  // Undo increment of i to check current again after a potential shift.
            } else {
                ++i;  // We have to make a shift after the last element, so it will be checked on next iteration.
            }
        }
    }
    return shifts <= 1;
}