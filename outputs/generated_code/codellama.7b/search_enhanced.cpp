#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int search(const vector<int>& lst) {
    // Create a hash table to store the frequency of each integer in the list
    unordered_map<int, int> frequencies;
    for (auto it = frequencies.begin(); it != frequencies.end(); ++it) {
        ++frequencies[it->first];
    }

    // Find the greatest integer with a frequency greater than or equal to its value
    int maxValue = -1;
    for (const auto& [num, freq] : frequencies) {
        if (freq >= num && freq > maxValue) {
            maxValue = num;
        }
    }

    return maxValue;
}