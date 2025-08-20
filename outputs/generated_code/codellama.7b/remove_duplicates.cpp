#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> removeDuplicates(const vector<int>& numbers) {
    unordered_set<int> seen;
    vector<int> result;

    for (auto& number : numbers) {
        if (seen.find(number) == seen.end()) {
            seen.insert(number);
            result.push_back(number);
        }
    }

    return result;
}
