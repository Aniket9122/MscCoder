#include <iostream>
#include <vector>

using namespace std;

vector<int> tri(int n) {
    vector<int> result(n + 1, 0); // Initialize result with all elements set to 0
    result[0] = 1;
    result[1] = 3;
    result[2] = 2;

    for (int i = 3; i <= n; i++) {
        if (i % 2 == 0) {
            result[i] = (result[i - 1] + result[i / 2]) % 1000000007;
        } else {
            result[i] = (result[i - 1] + result[i - 2] + result[i + 1]) % 1000000007;
        }
    }

    return result;
}