#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(const vector<int>& l) {
    // create a set to store the unique elements
    set<int> s;

    // iterate through the vector and insert each element in the set
    for (auto& x : l) {
        s.insert(x);
    }

    // convert the set back to a vector
    vector<int> result(s.begin(), s.end());

    // sort the vector
    sort(result.begin(), result.end());

    return result;
}

// function to check if two vectors are equal
bool issame(const vector<int>& v1, const vector<int>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

void print_vector(const vector<int>& v) {
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;
}