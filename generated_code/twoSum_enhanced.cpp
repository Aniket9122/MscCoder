#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map; // create a hash table to store the indices of the elements

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) { // check if the complement is already in the hash table
            return {i, map[complement]}; // return the indices of the elements that add up to the target
        } else {
            map[nums[i]] = i; // add the element and its index to the hash table
        }
    }

    return {}; // if no pair is found, return an empty vector
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}