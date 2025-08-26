#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to sort only the third element of each triplet in a vector
void sortThird(vector<int>& v) {
    for (int i = 0; i < v.size(); i += 3) {
        sort(v.begin() + i, v.begin() + i + 2);
    }
}

// Function to test if two vectors are identical
bool issame(vector<int> a, vector<int> b) {
    return equal(a.begin(), a.end(), b.begin());
}
