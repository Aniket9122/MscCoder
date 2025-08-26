#include <vector>
#include <cassert>
using namespace std;

bool below_threshold(const vector<int>& l, int t) {
    for (auto num : l) {
        if (num > t) return false;
    }
    return true;
}

void test() {
    assert(below_threshold({1, 2, 4, 10}, 100));
    assert(!below_threshold({1, 20, 4, 10}, 5));
    assert(below_threshold({1, 20, 4, 10}, 21));
}

