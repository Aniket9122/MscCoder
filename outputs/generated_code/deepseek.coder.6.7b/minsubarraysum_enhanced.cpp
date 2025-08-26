#include <vector>
using namespace std;

long long minSubArraySum(const vector<long long>& nums) {
    // handle empty input case
    if (nums.empty()) return 0;
    
    long long current_sum = nums[0], min_sum = nums[0];
    for (size_t i = 1; i < nums.size(); ++i){
        // update the running sum of non-negative numbers
        if(nums[i] >= 0) {
            current_sum += nums[i]; 
        } else {
            // reset the sum if it becomes negative
            if (current_sum < 0) {
                current_sum = nums[i];
            } else {
                // add new number to previous non-negative sum
                current_sum += nums[i];
            }
        }
        
        min_sum = min(min_sum, current_sum);  
    }
    
    return -min_sum;  // returning the negative value of minimum positive subarray sum. The function is equivalent to finding the maximum subarray sum among all non-empty subarrays in a modified array where we negate every element.
}