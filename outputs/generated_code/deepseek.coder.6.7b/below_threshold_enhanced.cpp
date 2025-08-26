#include <vector> // header inclusion
#include <cassert> // header inclusion for assert function
using namespace std; 

// Function to check if all elements in a vector are below a certain threshold.
bool below_threshold(const vector<int>& l, int t) {
    for (auto num : l) { // iterate over each number in the vector 'l'
        if (num > t) return false; // if any number is greater than 't', function returns false.
     }
    return true;  // If none of the numbers are greater than 't', all numbers are below threshold, so function returns true.
}

// Function to test 'below_threshold' function.
void test() {
    assert(below_threshold({1, 2, 4, 10}, 100)); // should return true
    assert(!below_threshold({1, 20, 4, 10}, 5)); // should return false
    assert(below_threshold({1, 20, 4, 10}, 21)); // should return true
}

// Main function. Calls the test() to run our tests.
