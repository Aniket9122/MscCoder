#include <iostream>
#include <vector>
using namespace std;

int specialFilter(const vector<int>& nums) {
    int count = 0;
    
    // Iterate over each number in the input vector.
    for (auto n : nums) {
        // Check if the number is greater than 10, its first digit is odd, and last digit is also odd.
        if (n > 10 && abs(n) % 2 == 1 && (abs(n / 10) * 10 + abs(n % 10)) % 2 == 1) {
            ++count;
        }
    }
    
    return count;
}