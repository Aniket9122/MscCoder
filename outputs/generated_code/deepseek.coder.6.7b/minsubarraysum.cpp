#include<vector>
using namespace std;
long long minSubArraySum(vector<long long> nums) {
    long long current_sum = nums[0], min_sum = nums[0];
    for (size_t i = 1; i < nums.size(); ++i){
        current_sum = -((-current_sum > nums[i]) ? -nums[i] : current_sum);  // Negate and compare, assign smaller one to current sum
        min_sum = (min_sum > current_sum) ? current_sum : min_sum;  // Compare with previous minimum sum
    }
    return -min_sum;  
}