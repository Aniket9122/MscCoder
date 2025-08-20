#include <iostream>
#include <string>
using namespace std;

bool prime_length(const string& str) {
    int length = str.size();
    bool isPrime = true;
    for (int i = 2; i <= sqrt(length); ++i) {
        if (length % i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}