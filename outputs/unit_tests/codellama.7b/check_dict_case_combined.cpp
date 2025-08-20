#include <iostream>
#include <string>
#include <map>
using namespace std;

bool check_dict_case(const map<string, string>& dict) {
    if (dict.empty()) return false;

    bool all_lowercase = true;
    bool all_uppercase = true;

    for (auto& entry : dict) {
        const string& key = entry.first;
        const string& value = entry.second;

        if (!key.empty() && !value.empty()) {
            if (all_lowercase && !islower(key[0])) all_lowercase = false;
            if (all_uppercase && !isupper(key[0])) all_uppercase = false;
        }
    }

    return all_lowercase || all_uppercase;
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

    if((check_dict_case({{"p","pineapple"}, {"b","banana"}}) == true)){ tests_passed++; } total_tests++;

    if((check_dict_case({{"p","pineapple"}, {"A","banana"}, {"B","banana"}}) == false)){ tests_passed++; } total_tests++;

    if((check_dict_case({{"p","pineapple"}, {"5","banana"}, {"a","apple"}}) == false)){ tests_passed++; } total_tests++;

    if((check_dict_case({{"Name","John"}, {"Age","36"}, {"City","Houston"}}) == false)){ tests_passed++; } total_tests++;

    if((check_dict_case({{"STATE","NC"}, {"ZIP","12345"} }) == true)){ tests_passed++; } total_tests++;

    if((check_dict_case({{"fruit","Orange"}, {"taste","Sweet"} }) == true)){ tests_passed++; } total_tests++;

    if((check_dict_case({}) == false)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


