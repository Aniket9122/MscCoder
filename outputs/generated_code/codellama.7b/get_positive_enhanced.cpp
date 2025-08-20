#include <iostream>
#include <vector>

using namespace std;

vector<float> get_positive(const vector<float>& l) {
    // Initialize a new vector to store the positive numbers
    vector<float> positive;

    // Iterate through the input vector and check if each element is positive
    for (auto& element : l) {
        if (element > 0) {
            positive.push_back(element);
        }
    }

    return positive;
}
