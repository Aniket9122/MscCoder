#include <iostream>
#include <vector>
using namespace std;

// Function to generate even digits between two positive integers
vector<int> generate_integers(int a, int b) {
    // Check if the input is valid
    if (a <= 0 || b <= 0 || a > b) {
        return {};
    }

    vector<int> result;

    // Loop through the range of numbers from a to b
    for (int i = a; i <= b; i++) {
        // If the number is even, add it to the result vector
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }

    return result;
}



void printVector(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}