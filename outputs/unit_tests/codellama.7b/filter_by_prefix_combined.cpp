#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to filter an array of strings based on a given prefix
vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
bool issame(vector<string> a,vector<string>b){
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

    if((issame(filter_by_prefix({}, "john") , {}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx") , {"xxx", "xxxAAA", "xxx"}))){ tests_passed++; } total_tests++;


    if((issame(filter_by_prefix({}, "john") , {}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_prefix({"xxx","asd","xxy","john doe","xxxAAA","xxx"}, "xxx") , {"xxx","xxxAAA","xxx"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_prefix({}, "") , {}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_prefix({"abc","abcd","abcde"}, "abc") , {"abc","abcd","abcde"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_prefix({"xyz","efg","hij"}, "a") , {}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_prefix({"cat","dog","bat"}, "elephant") , {}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_prefix({"apple","banana","orange","apricot","kiwi"}, "ap") , {"apple","apricot"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_prefix({"a","ab","abc","ba","bb","bc"}, "a") , {"a","ab","abc"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_prefix({"zzz","zzz","zzz"}, "z") , {"zzz","zzz","zzz"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_prefix({"hello","world","house"}, "h") , {"hello","house"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_prefix({"apple","orange","banana"}, "b") , {"banana"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_prefix({"python","java","javascript","c++"}, "java") , {"java","javascript"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_prefix({"hello","world","heworldlo","house"}, "h") , {"hello","heworldlo","house"}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_prefix({"cat","dog"}, "apricot") , {}))){ tests_passed++; } total_tests++;

    if((issame(filter_by_prefix({"hello","world","heworldlo","house"}, "hh") , {}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


