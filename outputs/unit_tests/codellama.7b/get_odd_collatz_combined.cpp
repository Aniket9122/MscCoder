#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to get the odd numbers in the Collatz sequence for a given positive integer n
vector<int> get_odd_collatz(int n) {
    vector<int> odd_numbers;  // Vector to store the odd numbers in the Collatz sequence

    // Base case: if n is 1, return {1}
    if (n == 1) {
        odd_numbers.push_back(1);
        return odd_numbers;
    }

    // Initialize the first number in the sequence to n
    int current = n;

    // Loop until we reach 1
    while (current != 1) {
        // If the current number is even, divide it by 2
        if (current % 2 == 0) {
            current /= 2;
        } else {  // Otherwise, multiply it by 3 and add 1
            current = 3 * current + 1;
        }

        // Add the current number to the vector of odd numbers
        odd_numbers.push_back(current);
    }

    return odd_numbers;
}

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
bool issame(vector<int> a,vector<int>b){
    if (a.size()!=b.size()) return false;
    for (int i=0;i<a.size();i++)
    {
    if (a[i]!=b[i]) return false;
    }
    return true;
}
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

    if((issame(get_odd_collatz(14) , {1, 5, 7, 11, 13, 17}))){ tests_passed++; } total_tests++;

    if((issame(get_odd_collatz(5) , {1, 5}))){ tests_passed++; } total_tests++;

    if((issame(get_odd_collatz(12) , {1, 3, 5}))){ tests_passed++; } total_tests++;

    if((issame(get_odd_collatz(1) , {1}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


