#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int smallest_change(const vector<int>& arr) {
    int n = arr.size();
    unordered_set<int> s;
    for (int i = 0; i < n; ++i) {
        s.insert(arr[i]);
    }

    int min_changes = 0;
    for (int i = 0; i < n; ++i) {
        if (s.find(arr[i]) != s.end()) {
            continue;
        }

        bool found = false;
        for (int j = 0; j < n; ++j) {
            if (j == i || arr[i] == arr[j]) {
                continue;
            }
            if (s.find(arr[j]) != s.end()) {
                found = true;
                break;
            }
        }
        if (!found) {
            ++min_changes;
        }
    }

    return min_changes;
}
