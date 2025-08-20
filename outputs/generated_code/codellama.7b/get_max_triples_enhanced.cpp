#include <iostream>
#include <vector>

int get_matrix_triples(int n) {
    int count = 0;
    std::vector<int> a(n); // using vector instead of vector<int>
    for (int i = 1; i <= n; ++i) {
        a[i] = i * i - i + 1;
    }

    for (int i = 1; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k <= n; ++k) {
                if ((a[i] + a[j] + a[k]) % 3 == 0) {
                    count++;
                }
            }
        }
    }

    return count;
}

