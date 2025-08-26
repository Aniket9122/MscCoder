#include <iostream>
#include <vector>
#include <string>
#include <boost/any.hpp>
#include <list>

typedef std::list<boost::any> list_any;
using namespace std;

// Improved function signature for issame() to be more consistent with the standard library functions
bool issame(const vector<int>& v1, const vector<int>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

// Improved function signature for filter_integers() to use a more appropriate type for the parameter and return value
vector<int> filter_integers(const list_any& values) {
    vector<int> result;
    for (auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
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

    if((issame(filter_integers({}),{}))){ tests_passed++; } total_tests++;


    if((issame(filter_integers({4,  {},23.2, 9, string("adasd")}) ,{4, 9}))){ tests_passed++; } total_tests++;

    if((issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}) ,{3, 3, 3}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


