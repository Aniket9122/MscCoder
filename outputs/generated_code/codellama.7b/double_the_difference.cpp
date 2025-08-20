#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;

    for (auto num : lst) {
        if (num >= 0 && floor(num) == num) { // if the number is positive and an integer
            sum += pow(num, 2); // add the square of the number to the sum
        }
    }

    return sum;
}