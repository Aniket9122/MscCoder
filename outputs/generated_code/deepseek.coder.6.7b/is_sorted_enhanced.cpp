#include <vector>
using namespace std;

bool has_duplicates(const vector<int>& lst) {
    int prev = lst[0];
    for (size_t i = 1; i < lst.size(); ++i) {
        if (lst[i] == prev || lst[i] - 1 != prev) return true;
        prev = lst[i];
    }
    return false;
}

bool is_sorted(const vector<int>& lst) {
    for (size_t i = 0; i < lst.size() - 1; ++i) {
        if (lst[i] >= lst[i + 1]) return false;
    }
    return true && !has_duplicates(lst);
}