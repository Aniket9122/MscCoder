#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() != b.type()) {
        throw std::invalid_argument("Arguments must have the same type");
    }

    if (a.type() == typeid(int)) {
        return std::max(boost::any_cast<int>(a), boost::any_cast<int>(b));
    } else if (a.type() == typeid(double)) {
        return std::max(boost::any_cast<double>(a), boost::any_cast<double>(b));
    } else {
        throw std::invalid_argument("Arguments must be of type int or double");
    }
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


