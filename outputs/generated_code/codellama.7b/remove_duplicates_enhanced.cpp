#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

template<typename T>
std::vector<T> removeDuplicates(const std::vector<T>& numbers) {
    unordered_set<T> seen;
    vector<T> result;

    for (auto& number : numbers) {
        if (seen.find(number) == seen.end()) {
            seen.insert(number);
            result.push_back(number);
        }
    }

    return result;
}
