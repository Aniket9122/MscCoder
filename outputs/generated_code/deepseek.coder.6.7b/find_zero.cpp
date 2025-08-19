#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

double poly(const vector<double>& xs, double x){
    /* 
    Evaluates polynomial with coefficients xs at point x. return xs[0] + xs[1] * x + xs[2] * x^2 + .... xs[n-1] * x^(n-1) 
    */
    double sum = 0;
    for (int i=0;i<xs.size();++i){
        sum += xs[i]*pow(x, i);
    }
    return sum;
}

double poly_diff(const vector<double>& xs, double x) {
    /* 
    Evaluates the derivative of polynomial with coefficients xs at point x.
    */
    double sum = 0;
    for (int i=1;i<xs.size();++i){
        sum += i * xs[i]*pow(x, i-1);
    }
    return sum;
}

double find_zero(const vector<double>& xs) {
    /* 
    Find zero of the polynomial with coefficients xs using Newton's method. Start from x0=1 and iterate until |f(xn)| < 1e-3.
    */
    double x = 1; // initial guess
    while (abs(poly(xs, x)) > 1e-3) {
        x = x - poly(xs, x)/poly_diff(xs, x);  // Newton's method
    }
    return x;
}