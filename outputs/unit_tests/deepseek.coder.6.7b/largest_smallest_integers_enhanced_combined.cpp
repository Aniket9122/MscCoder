#include <vector>
using namespace std;

// Function that finds largest negative integer and smallest positive integer in a vector
vector<int> largest_smallest_integers(const vector<int>& lst) { 
    int neg = -1e6, pos = 1e6; // Initialize to large/small possible values
    for (auto i : lst){
        if (i < 0 && i > neg)  
            neg = i;      // If negative integer is found and larger than current largest 
        else if(i > 0 && i < pos)
            pos = i;       // If positive integer is found and smaller than current smallest 
    }                     
    return (neg != -1e6 || pos != 1e6)? vector<int>{neg, pos} : vector<int>{0,0};   // if any of the integers exist then return them else return [0,0]
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


