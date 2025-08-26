#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& lst) {
    int maxFrequency = 0, maxValue = -1;

    // Calculate the frequency of each integer in the vector
    unordered_map<int, int> frequencies;
    for (auto& num : lst) {
        ++frequencies[num];
    }

    // Find the greatest integer with a frequency greater than or equal to its value
    for (auto& [num, freq] : frequencies) {
        if (freq >= num && freq > maxFrequency) {
            maxFrequency = freq;
            maxValue = num;
        }
    }

    return maxValue;
}
