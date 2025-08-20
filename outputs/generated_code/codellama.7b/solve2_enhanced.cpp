#include <iostream>
#include <string>

using namespace std;

string solve(int N) {
    string binary = "";
    while (N > 0) {
        int rem = N % 2;
        binary = to_string(rem) + binary;
        N /= 2;
    }
    return binary;
}

