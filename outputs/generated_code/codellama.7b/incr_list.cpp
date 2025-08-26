#include <iostream>
#include <vector>
using namespace std;

// Function to increment all elements of a vector by 1
vector<int> incr_list(vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}

// Test cases
void test() {
    // Vector with elements incremented by 1
    vector<int> v1 = incr_list({1, 2, 3});
    cout << "v1: ";
    for (auto i : v1) {
        cout << i << " ";
    }
    cout << endl;

    // Vector with elements incremented by 1
    vector<int> v2 = incr_list({5, 3, 5, 2, 3, 3, 9, 0, 123});
    cout << "v2: ";
    for (auto i : v2) {
        cout << i << " ";
    }
    cout << endl;
}

