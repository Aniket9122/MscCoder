#include <bits/stdc++.h>
using namespace std;

vector<string> reverse_delete(string s, string c) {
    string processed = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) { // If character is not present in the string 'c'
            processed += ch; 
        }
    }
    
    string reversed_processed = processed;
    reverse(reversed_processed.begin(), reversed_processed.end());
  
    vector<string> result;
    result.push_back(processed); // Resultant string
    result.push_back(processed == reversed_processed ? "True" : "False");  // Check if it's palindrome or not
    
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


