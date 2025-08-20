#include <iostream>
#include <string>
#include <bitset>

std::string rounded_avg(int n, int m) {
    // Check if n is greater than m, if so return -1
    if (n > m) {
        return "-1";
    }

    // Calculate the sum of the integers from n through m
    unsigned long long sum = 0;
    for (int i = n; i <= m; ++i) {
        sum += i;
    }

    // Calculate the average of the sum
    double avg = std::lround(sum / (m - n + 1));

    // Round the average to the nearest integer and convert it to binary
    unsigned long long rounded_avg = std::lround(avg);
    std::string binary_repr = std::bitset<32>(rounded_avg).to_string();

    return binary_repr;
}

