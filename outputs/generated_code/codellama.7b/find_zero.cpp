#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double poly(vector<double> xs, double x) {
    // Evaluates polynomial with coefficients xs at point x.
    // Return xs[0] + xs[1] * x + xs[2] * x^2 + ... + xs[n-1] * x^(n-1)
    double sum = 0;
    for (int i=0; i<xs.size(); i++) {
        sum += xs[i] * pow(x, i);
    }
    return sum;
}

double find_zero(vector<double> xs) {
    // Finds the zero of a polynomial with coefficients xs using the bisection method.
    if (xs.size() % 2 != 0 || abs(xs[0]) < 1e-3) {
        throw "Invalid input";
    }

    double a = -1, b = 1;
    while (b - a > 1e-3) {
        double x = (a + b) / 2;
        if (poly(xs, x) < 0) {
            b = x;
        } else {
            a = x;
        }
    }
    return (a + b) / 2;
}