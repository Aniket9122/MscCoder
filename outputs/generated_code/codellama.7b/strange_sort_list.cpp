#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> strange_sort_list(const vector<int>& lst) {
    vector<int> result;
    int min_val = *min_element(lst.begin(), lst.end());
    result.push_back(min_val);
    int max_val = *max_element(lst.begin(), lst.end());
    if (max_val != min_val) {
        result.push_back(max_val);
    }
    for (int i = 0; i < lst.size(); ++i) {
        if (lst[i] != max_val && lst[i] != min_val) {
            result.push_back(lst[i]);
        }
    }
    return result;
}
