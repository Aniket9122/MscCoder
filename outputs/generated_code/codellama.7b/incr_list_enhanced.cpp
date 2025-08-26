#include <iostream>
#include <vector>
using namespace std;

// Function to increment all elements of a vector by 1
vector<int> incr_list(const vector<int>& l) {
    vector<int> result;
    for (int i : l) {
        result.push_back(i + 1);
    }
    return result;
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

