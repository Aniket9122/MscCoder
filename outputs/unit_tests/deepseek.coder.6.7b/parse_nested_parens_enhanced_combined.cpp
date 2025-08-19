#include<vector>
#include<string>
#include<stack>
using namespace std;

// Main function to parse nested parentheses in groups
vector<int> parse_nested_parens(string paren_string) {
    vector<string> groups;
    size_t start = 0, end = 0;
    
    while (end != string::npos){
        end = paren_string.find(' ', start);
        
        // If find returns npos, then substring does not occur again 
        if(end != string::npos) {
            groups.push_back(paren_string.substr(start, end-start));
            start = end+1;   // Set the new starting point to after the space character
        } else{
            groups.push_back(paren_string.substr(start));  // copy the last group
        }   
    } 
    
    vector<int> maxDepths;
    for (const auto &group : groups){
        stack<char> parenStack;
        int currentDepth = 0, maxDepth = 0;
        
        for(char c: group) {
            if(c == '(') {
                parenStack.push(c);
                ++currentDepth;
                if (currentDepth > maxDepth){
                    maxDepth = currentDepth;
                }
            } else if (!parenStack.empty() && c == ')'){ 
                parenStack.pop();
                --currentDepth;
            }
        }
        
        maxDepths.push_back(maxDepth);
    }
    
    return maxDepths;
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


