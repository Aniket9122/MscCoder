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

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

   
    double solution;
    int ncoeff;
    for (int i=0;i<100;i++)
    {
        ncoeff = 2 * (1+rand()%4);
        vector<double> coeffs = {};
        for (int j=0;j<ncoeff;j++)
        {
            double coeff = -10+rand()%21;
            if (coeff == 0) coeff = 1;
            coeffs.push_back(coeff);
        }
        
        solution = find_zero(coeffs);
        if((abs(poly(coeffs, solution))< 1e-3)){ tests_passed++; } total_tests++;

    }

    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


