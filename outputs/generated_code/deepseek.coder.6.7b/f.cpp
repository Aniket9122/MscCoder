#include <vector>
using namespace std;

// Function to compute factorial of a number
int factorial(int num) {
    int fact = 1;
    for (int i = num; i >= 1; --i){
        fact *= i;
    }
    return fact;
}

// Function to compute sum from 1 to a number
int get_sum(int num) {
    return (num * (num + 1)) / 2;
}

vector<int> f(int n){
    vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        if ((i+1) % 2 == 0) // Check if index is even
            result[i] = factorial((i+1)); // compute and store factorial in the vector at that index
        else
            result[i] = get_sum((i+1));    // compute and store sum of numbers from 1 to i in the vector at that index
    }
    return result;
}