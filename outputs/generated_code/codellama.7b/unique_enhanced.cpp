#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

// Function to return sorted unique elements in a vector
vector<int> unique(const vector<int>& l) {
    set<int> s; // create a set to store unique elements
    for (auto& x : l) s.insert(x); // iterate through the vector and insert each element in the set
    vector<int> result(s.begin(), s.end()); // convert the set back to a vector
    sort(result.begin(), result.end()); // sort the vector
    return result;
}

// Function to check if two vectors are equal
bool issame(const vector<int>& v1, const vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) if (v1[i] != v2[i]) return false;
    return true;
}

// Function to print a vector
void print_vector(const vector<int>& v) {
    for (auto x : v) cout << x << " ";
    cout << endl;
}
