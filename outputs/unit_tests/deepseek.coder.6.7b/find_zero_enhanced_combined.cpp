#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const double epsilon = 1e-3;  // Define constant for checking condition in find_zero

// Evaluates polynomial with coefficients xs at point x.
double poly(const vector<double>& xs, double x) {
    if (xs.empty()){
        throw invalid_argument("Cannot evaluate zero degree polynomial.");  // Check for empty vector
     }
    
    double sum = 0;
    for (size_t i=0; i < xs.size(); ++i)  { 
        sum += xs[i] * pow(x, static_cast<double>(i));  
    }
    return sum;
}

// Evaluates the derivative of polynomial with coefficients xs at point x.
double poly_derivative(const vector<double>& xs, double x) { 
    if (xs.size() <= 1){
        throw invalid_argument("Cannot calculate a derivative for a constant or zero degree polynomials.");  // Check for empty and single element vector  
     } 
    
    double sum = 0;
    for (size_t i=1; i < xs.size(); ++i) {
        sum += static_cast<double>(i) * xs[i] * pow(x, static_cast<double>(i-1)); 
    }
    return sum;
}

// Find zero of the polynomial with coefficients xs using Newton's method.
double find_zero(const vector<double>& xs) {
    if (xs.empty()){
        throw invalid_argument("Cannot compute zeros for zero degree polynomials.");  // Check for empty vector
     }  

    double x = (xs.size() > 1)? static_cast<double>(xs[0]) : 1;  // initial guess: first coefficient if it exists, otherwise 1

    while (abs(poly(xs, x)) > epsilon){
        double derivative = poly_derivative(xs, x);  
        if (abs(derivative) < epsilon) {
            throw runtime_error("Cannot compute zero with current coefficients.");  // Check for divergence
         }      
        x = x - poly(xs, x) / derivative;     // Newton's method
    }
    
    return x;
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


