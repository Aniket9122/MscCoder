#include <vector>

std::vector<int> largest_smallest_integers(const std::vector<int>& lst) {
    int largest_negative = 0, smallest_positive = 0;

    for (const auto& num : lst) {
        if (num < 0 && num > largest_negative) {
            largest_negative = num;
        } else if (num > 0 && num < smallest_positive) {
            smallest_positive = num;
        }
    }

    return { largest_negative, smallest_positive };
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

    if((issame(largest_smallest_integers({2, 4, 1, 3, 5, 7}) , {0, 1}))){ tests_passed++; } total_tests++;

    if((issame(largest_smallest_integers({2, 4, 1, 3, 5, 7, 0}) , {0, 1}))){ tests_passed++; } total_tests++;

    if((issame(largest_smallest_integers({1, 3, 2, 4, 5, 6, -2}) , {-2, 1}))){ tests_passed++; } total_tests++;

    if((issame(largest_smallest_integers({4, 5, 3, 6, 2, 7, -7}) , {-7, 2}))){ tests_passed++; } total_tests++;

    if((issame(largest_smallest_integers({7, 3, 8, 4, 9, 2, 5, -9}) , {-9, 2}))){ tests_passed++; } total_tests++;

    if((issame(largest_smallest_integers({}) , {0, 0}))){ tests_passed++; } total_tests++;

    if((issame(largest_smallest_integers({0}) , {0, 0}))){ tests_passed++; } total_tests++;

    if((issame(largest_smallest_integers({-1, -3, -5, -6}) , {-1, 0}))){ tests_passed++; } total_tests++;

    if((issame(largest_smallest_integers({-1, -3, -5, -6, 0}) , {-1, 0}))){ tests_passed++; } total_tests++;

    if((issame(largest_smallest_integers({-6, -4, -4, -3, 1}) , {-3, 1}))){ tests_passed++; } total_tests++;

    if((issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}) , {-3, 1}))){ tests_passed++; } total_tests++;



    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


