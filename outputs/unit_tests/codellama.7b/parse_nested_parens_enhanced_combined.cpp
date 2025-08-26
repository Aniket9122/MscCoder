#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_nested_parens(const string& paren_string) {
    vector<int> levels;

    int level = 0;
    for (char c : paren_string) {
        if (c == '(') {
            level++;
        } else if (c == ')') {
            level--;
        }

        if (level > 0) {
            levels.push_back(level);
        }
    }

    return levels;
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

    if((issame(parse_nested_parens("(()()) ((())) () ((())()())"),{2, 3, 1, 3}))){ tests_passed++; } total_tests++;

     if((issame(parse_nested_parens("() (()) ((())) (((())))") , {1, 2, 3, 4}))){ tests_passed++; } total_tests++;

    if((issame(parse_nested_parens("(()(())((())))") ,{4}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


