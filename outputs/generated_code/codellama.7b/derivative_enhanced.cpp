#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the derivative of a polynomial given by its coefficients
vector<float> derivative(const vector<float>& xs) {
    // Calculate the number of terms in the derivative
    int n = xs.size() - 1;

    // Initialize the derivative as all zeros
    vector<float> deriv(n, 0);

    // Loop through each term in the polynomial and calculate the corresponding derivative term
    for (int i = 0; i < n; ++i) {
        deriv[i] = xs[i + 1];
    }

    return deriv;
}
