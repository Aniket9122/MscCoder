#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int next_smallest(const vector<int>& lst) {
    if (lst.size() < 2) return -1;

    auto it = find_if(lst.begin(), lst.end(), [&](int x){return x != lst[0];});
    if (it == lst.end()) return -1;

    int second_smallest = *min_element(it, lst.end());
    return second_smallest;
}