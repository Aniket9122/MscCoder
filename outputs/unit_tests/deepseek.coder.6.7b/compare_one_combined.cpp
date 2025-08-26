#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

template<typename T> 
T compare_one(T a, T b){
    return (a == b) ? static_cast<T>(NULL) : max(a,b); 
}

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

    if((boost::any_cast<int>(compare_one(1, 2)) == 2)){ tests_passed++; } total_tests++;

    if((boost::any_cast<double>(compare_one(1, 2.5))== 2.5)){ tests_passed++; } total_tests++;

    if((boost::any_cast<int>(compare_one(2, 3)) == 3)){ tests_passed++; } total_tests++;

    if((boost::any_cast<int>(compare_one(5, 6)) == 6)){ tests_passed++; } total_tests++;

    if((boost::any_cast<string>(compare_one(1, string("2,3")))== "2,3")){ tests_passed++; } total_tests++;

    if((boost::any_cast<string>(compare_one(string("5,1"), string("6"))) == "6")){ tests_passed++; } total_tests++;

    if((boost::any_cast<string>(compare_one(string("1"), string("2"))) == "2")){ tests_passed++; } total_tests++;

    if((boost::any_cast<string>(compare_one(string("1"), 1)) == "None")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


