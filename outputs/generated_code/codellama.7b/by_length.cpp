#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

vector<string> by_length(const vector<int>& arr) {
    // sort the vector and reverse it
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end());
    reverse(sorted_arr.begin(), sorted_arr.end());

    // create a map to store the digit-name pair
    map<int, string> digit_names {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"}
    };

    // replace each digit in the sorted vector with its corresponding name from the map
    for (int& digit : sorted_arr) {
        if (digit_names.find(digit) != digit_names.end()) {
            digit = digit_names[digit];
        }
    }

    return sorted_arr;
}
