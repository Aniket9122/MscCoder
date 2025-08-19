#include<iostream>
using namespace std;

bool is_equal_to_sum_even(int n) {
    int count = 0;
    for (int i = 2; i <= n && count <= 4; i += 2) {
        if((n - i) % 2 == 0){
            count++;
        }
    }
    return count == 4 ? true : false;
}

// Unit tests
