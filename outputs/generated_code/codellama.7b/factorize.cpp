#include <iostream>
#include <vector>

using namespace std;

vector<int> factorize(int n) {
    vector<int> factors;

    // iterate from 2 to n-1, checking if each number is a factor of n
    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            // if it is a factor, add it to the vector and divide n by that factor
            factors.push_back(i);
            n /= i;

            // once we have found a factor, we can stop checking for other factors,
            // because we know that all smaller factors have already been found
            break;
        }
    }

    return factors;
}



void print_vector(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
}