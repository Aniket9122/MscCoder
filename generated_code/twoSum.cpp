#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); i++) {
        if (map.find(nums[i]) != map.end()) {
            result.push_back(map[nums[i]]);
            result.push_back(i);
            return result;
        } else {
            map[target - nums[i]] = i;
        }
    }

    return result;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}