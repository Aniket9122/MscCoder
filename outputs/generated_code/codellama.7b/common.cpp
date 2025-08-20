#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(const vector<int>& v1, const vector<int>& v2) {
    return equal(v1.begin(), v1.end(), v2.begin());
}

vector<int> common(const vector<int>& l1, const vector<int>& l2) {
    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    return result;
}
