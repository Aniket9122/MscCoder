#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(const string& s, const string& c) {
    vector<string> result;

    // Create a new string with the characters in s that are not in c
    string new_s = s;
    for (char c_char : c) {
        new_s.erase(remove(new_s.begin(), new_s.end(), c_char), new_s.end());
    }

    // Check if the new string is a palindrome
    bool is_palindrome = true;
    for (int i = 0; i < new_s.length() / 2; ++i) {
        if (new_s[i] != new_s[new_s.length() - i - 1]) {
            is_palindrome = false;
            break;
        }
    }

    // Return the result vector with the new string and "True"/"False"
    result.push_back(new_s);
    result.push_back(is_palindrome ? "True" : "False");
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

    if((issame(reverse_delete("abcde","ae") , {"bcd","False"}))){ tests_passed++; } total_tests++;

    if((issame(reverse_delete("abcdef", "b") , {"acdef","False"}))){ tests_passed++; } total_tests++;

    if((issame(reverse_delete("abcdedcba","ab") , {"cdedc","True"}))){ tests_passed++; } total_tests++;

    if((issame(reverse_delete("dwik","w") , {"dik","False"}))){ tests_passed++; } total_tests++;

    if((issame(reverse_delete("a","a") , {"","True"}))){ tests_passed++; } total_tests++;

    if((issame(reverse_delete("abcdedcba","") , {"abcdedcba","True"}))){ tests_passed++; } total_tests++;

    if((issame(reverse_delete("abcdedcba","v") , {"abcdedcba","True"}))){ tests_passed++; } total_tests++;

    if((issame(reverse_delete("vabba","v") , {"abba","True"}))){ tests_passed++; } total_tests++;

    if((issame(reverse_delete("mamma", "mia") , {"", "True"}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


