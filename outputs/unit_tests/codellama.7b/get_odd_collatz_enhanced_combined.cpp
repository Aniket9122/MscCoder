#include <iostream>
#include <vector>

using namespace std;

// Function to get the odd numbers in the Collatz sequence for a given positive integer n
vector<int> get_odd_collatz(int n) {
    vector<int> odd_numbers{};  // Initialize an empty vector of integers

    if (n == 1) return odd_numbers;  // Base case: If n is 1, return an empty vector

    int current = n;

    while (current != 1) {
        if (current % 2 == 0) {
            current /= 2;
        } else {
            current = 3 * current + 1;
        }

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


