#include <iostream>
#include <vector>

using namespace std;

vector<float> get_positive(const vector<float>& l) {
    vector<float> positive;
    for (auto& element : l) {
        if (element > 0) {
            positive.push_back(element);
        }
    }
    return positive;
}
