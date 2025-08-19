#include <vector>
#include <boost/any.hpp>
#include <string>
#include <typeindex>
using namespace std;
typedef vector<boost::any> any_vector;

// Helper function to check if the type of an element matches a specific type T
template<typename T>
bool isType(const boost::any& operand) {
    return operand.type() == typeid(T);
}

vector<int> filter_integers(const any_vector& values){
  vector<int> result;
  
  for(const auto& value : values)  // Corrected here by using range-based for loop
    {
      if(isType<int>(value))   // Specified the type as int
        {
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


