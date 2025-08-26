#include<iostream>
#include<stack>
using namespace std;

bool is_nested(string str) {
    stack<char> stk; 
    for (int i=0; i<str.length(); i++) {
        if (str[i] == '[') {
            stk.push('[');
        } else { // this means it's a closing bracket, ']'
           if(stk.empty())  return false;  
           while(!stk.empty() && stk.top()==']'){
                stk.pop();
            }
            if (!stk.empty()) { // there is at least one unpaired opening bracket left in the stack
               stk.pop(); 
            } else { // no opening bracket left to pair with current closing bracket
              return false;  
            }
        }
    }
    
    if (!stk.empty()) return true; // there are unpaired opening brackets left in the stack
    return false; 
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

    if((is_nested("[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]]]]]]][[[[[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[][]") == false)){ tests_passed++; } total_tests++;

    if((is_nested(("[]")) == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]]]]]]]]]]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[]]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("]]]]]]]]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]]]]]]][[[[[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[][]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]]]]]]]]]]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[]]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("]]]]]]]]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]][[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[][][]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[][][") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][][][[][]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[][][") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[][") == false)){ tests_passed++; } total_tests++;

    if((is_nested("][]][[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][]][][]][[][]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][[[]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][[]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][[][][]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][[]]]][[[[[[][]]]]][][]]]][][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]]]]]][[][[]]]][[[[[[][]]]]][][]]]][][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][]][[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][]][]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("][][][") == false)){ tests_passed++; } total_tests++;

    if((is_nested("][]][[[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("][]][[[][]]]]]][[][[]]]][[[[[[][]]]]][][]]]][][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]]][]][][]][[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][][]][[[]]][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][]]][[][]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]]]]]][[][[]]]][[[[[[][]]]]][][]]]][][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][][[[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("][][][][]][[][]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("][][][[[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]]][[][[]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]]]]][[[]]]][]][][]][[][]][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]]]][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][][][][][]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("][][][][][][][]][[[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]]][[][[]]]][[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][][][][]][[[]]][][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][][][][]][]][]][][]][[][]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][[[]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][]]]][][[[[[[]]]]]]][[][[]]]][[[[[[][]]]]][][]]]][][[[][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]]]]]][[][[]]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][][[][[[[[[[[[][]][[[]]]]]]]]][[][[]]]][[[[]]][][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[[[]]]]][]]][][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][]]]][][[[[[[]]]]]]][[][[]]]][[[[[[][]]]]][][]]][][[[]][]][][]][[][][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][]]]][][[[[[[]]]]]]][[][[]]]][[[[[[][]]]]][][]]]][][[[][[[]]]]][[][[]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][]]][][][]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][[][") == false)){ tests_passed++; } total_tests++;

    if((is_nested("][][][][[[[]]]]][[][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]]][[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]]]][][][][[[[]]]]][[][][[][[]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][]][[[][]]]]]][[][[]]]][[[[[[][]]]]][][]]]][][[[[[][]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][][][][][[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]][[[[[[]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[]]]]]][]][[][[[[[[]]][[[[[[]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]]]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]]]]][]][[[]][]]]][][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]]][[[][]][[][][]]]]][]]][[][[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][]]][[]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][][[][[[[[[[[[][]][][[]]]]]]]]][[][[]]]][[[[]]][[][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][[]]]][[[[[[][]]]]]]]][]][]]]][][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[[[]]]]]][]][[[]][]]]][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]]][[][[[[[[][]]]][]]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]]][[][[]]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][]][[][[[[[[[[[][]][[[]]]]]]]]][[][[]]]][[[[]]][][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[][") == false)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][[]]]]][[[[[[][]]]]][][]]]][][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]]][][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][]][[[][]]]]]][[][[]]]][[[[[[][]]]]][][]]]][][[[[[][]]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]]][[][[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[]]]]][]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]]]][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][]]]][][[[[[[]]]]]]][[][[]]]][[[[[[][]]]]][][]]]][][[[[][[[]][]]][[][[]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]]]][][][][[[[]]]]][[][][[][[]]]][]]]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][]]]][][[[[[[]]]]]]][[][[[[[[[][][][[[]]]]][[[][]][[][][]]]]][]]][[][[][]]]][[[[[[][]]]]][][]]]][][[[][[[]]]]][[][[]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]]][[][[][[[[][]]]][][[[[[[]]]]]]][[][[[[[[[][][][[[]]]]][[[][]][[][][]]]]][]]][[][[][]]]][[[[[[][]]]]][][]]]][][[[][[[]]]]][[][[]]]][]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]]]][][][][[[[]]]]][[][][[][[]]]][[][[][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[]][[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][][][][][][][]][[][]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]]]]]]][][[[]]]]]][][][][[[[]]]]][[][][[][[]]]]][]][[[]][][[[]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][]][[[][]]]]]][[][[]]]][[[[[[]][]]]]][][]]]][][[[[[][]]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]]]]]]][][[[]]]]]][][][][[[[]]]]]][[][][[][[]]]]][]][[[]][][[[]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][][[][[[]]]]]]]][][[[[[[[[][]][][[]]]]]]]]][[][[]]]][[[[]]][[][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][][][][]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("][][[][[[]]]]]]]]][][[[[[[[[][]][][[]]]]]]]]][[][[]]]][[[[]]][[][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]]]][][][[][[[[]]]]][[][][[[][[]]]][]]]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][][][][][[][][[]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]]]]][[[]]]][]][][]][[][]][]][[[[]]]]][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]]]]][[][][]][[[]][]]]][][[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[]][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]]]][[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]]]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[[[][[[[[][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[]]]][][][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][]]]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]]]][[]]][[][]][[[[[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]][][][[]]][[][]][[[[[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[]]]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][[]]]][][][][[][]]][[[][]]][[]]][[[]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[]][][[[][[]][[[[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][[[[][[[[[]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[]]]][][][][[][]]][[[][]][[]]]]]][][][][[][]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[]][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][][[[[[[]][][][[]]][[][]][[[[[]]]][][][[]]][[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[[[]][[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][][[][]][[[[[]]][[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]][][][[]]][[][]][[[[[]]]][][][[][]][[[[[]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[[][[][[[][]]][][[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[][[[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[[[]]][[[][[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[[[[]][[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[]]]][][][][[][]]][[[][]][[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][][[[[[[]][][][[]]][[][]][[[[[[][[[[]]]][][][][[][]]][[[][]][[]]]]]][][][][[][]]][[[][]][[]]][[]]]][[[[[[[[[]]]][][][[]]][[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[[[[[[[[[[[]][[]][[[]][][[[][[]][[[[[]]][[[[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][][][][[][]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[[][[][[[][]][[[[]]]][][][][[][]][[]]][[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[]]]]][[[][]][[]]]][][[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][][[[[]][[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[[[]]]]]]]][][[]]]]]]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]]][][][[]]][[][]][[[[[]]]][][][[][]][[[[[]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[]][[]]][][[[[[[]][][][[]]][[][]][[[[[]]]][][][[]]][[[[[][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][][[]][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[]]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[[[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[]]]]]]]][][[]]]]]]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][]][[[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[[[[][[][[[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][][") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][]]][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[]]][[[][]][[[[][[[[[]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[[]]]][[[][[[[[[][]]]][[]]][[][]][[[[[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[[[][[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[[[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[[]]]][[[[[[][[[[[][[[[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]][[[[[][[[[[]]]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]][]]]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[][][[[[][[[[[[]]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[[]]]][[[][[[[[[][]]]][[]]][[][]][[[[[]]]]][[[]]]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[[]]]][[[[[[][[[[[][[[[[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]][][[][[[[[[]][][][[]]][[][]][[[[[]]]][][][[][]][[[[[]]][[]]][[]]][[][]][[[[[]]]][][][[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[]]]]][[[][]][[]]][]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[[]]][][[[[]][[[]]][]][[[[][[[[[[]]]][[]]][[][]][[[[[[[][[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[[[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[[]]]][[[][[[[[[][]]]][[]]][[][]][[[[[]][]]][[[]]]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[][[]]]]]]]][][[]]]]]]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[]][[]]]][][[[[[[]][][][[]]][[][]][[[[[]]]][][][[]]][[[[[][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[[[]]]][[[[[][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[[[[][[[[[][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[][[]]]][][][][[][]]][[[][]]][[]]][[[]][[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[]]]][][][][[][]]][[[][]][[]]]]]][][][][[][]]][[[][]][[]][][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[]]]][][]]]]][][][][[][]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[][][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[[][[][[[][]][[[[]]]][][][][[][[]][[]]][[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[]]]]][[[][]][[]]]][][[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[][]][[[[[]]][[[[[]]]][[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]]]][[]]]][[][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[][[[][[][[[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[]][[]]][][[[[[[]][][][[]]][[][]][[[[[]]]][[][][[]]][[[[[][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]][[[[[[[[[[[]]]]][[[]]]]]]][[[[][[]]]]]]]][][[]]]]]]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[[[[[[[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]][[[[[[[][[]]]]]]]][][[]]]]]]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]][][][[]]][[][]][[[[[]]]][][][[][]][][[[[]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[][]][[[[[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[][]][[[[[]]][[[[[]]]][[[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][[[[[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[[[][[[[[[]]]][[]]][[[[[[][[[[[[]]][][[[[]][[[]]][]][[[[][[[[[[]]]][[]]][[][]][[[[[[[][[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[[[]]]][][][[]][][]][[[[[[[][[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[[[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[[][[]]]][][][][[][]]][[[][]]][[]]][[[]][[[]]]][[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[[[[[[[[[[[]][[]][[[]][][[[][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][][[]][][]]][[[[[[]][[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[[]][][]][[[]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][][[[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[[[][[[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][][][][[][]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[[][]][[]]][[[]][[[]]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[]]]][][][][[][]]][[[][]][[]]]]]][][][][[][]]][[[][]][[]]][[]]]][[[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][[]]]][][][][[][]]][[[][]][[[]][[[]][][]][]]][[][]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[]][][[]][][]][[[[]]][[[][[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[[[][[[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[]]][[[[[[[[[[[[[]][[]][[[]][][[[][[]][[[[[]]][[[[[]]]]]]][[[]][[]]]]]][][][][[][]]][[[][]][[][[[[][[[[[]]]]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[][[]]]]]]]][][[]]]]]]]]]]]]][[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[[[][][[[[[][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[][]][[[[[][[[[[[][[[[[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][][[[[[][[]]]][][][][[][]]][[[][]][[]]][][[[[[[]]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][]][[[[[][]][[[[[[[[[[[[]]]]]]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[][[[[]]]][][][][[][]]][[[][]][[]]]]]][][][][[][]]][[[][]][[]]][[]]]][[[[[[[[[[][[[[[[][[][[[][]]][][[[]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[[[]][[[[]]][][[[[][]][[[[][[[[[]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[]][][[[][[]][[[[[]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[]][[[[][]][[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[]][[[[]]][]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[][]][[[[[][][][[[[][[[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[][][[[[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[[]]]][[[][[[[[[][]]]][[]]][[][]][[[[[]]]][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[[[][]][[]]][[[]][[[]]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][][[[][]][[[[][[[[[]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[[[]]]]]]]][][[]]]]][[][[]]]][][][][[][]]][[[][]][[]]]]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][[[[]]]][][][][[][]]][[[][]][[]]]][]][[[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]]][][][][[][]]][[[][]][[]]]]][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[]]]][][][][[][]]][[[][]][[]]]]]][][][][[][]]][[[][]][[]][][[]]]][[[[][[[[[[]][[[]]][][[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[][][[[[[[[[[[[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[]]]][[[[[][][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[][[][][[[[[[[[[[[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[[[[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[][]][[[[[[]][][[]][][]][][[[[[[][[[[[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[]]]][[[[[][][[]][[][[][][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][][[[[[[][[[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][][][][[][]]][[[][]][[]]][[]]]][[[[[[]][[[[[]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[][]][[[][[[]][][[]][][]][][[[[[[][[[[[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][]]]]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[[[][[[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][][][][[[][]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][][[[[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][[[[][[[[[]]]][[[[[]][[[]]]][[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[]]]][[[[[][][[]][[][][][[][[[[][]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]][[]]][[]][][[[][]][[[[[][][][[[[][[[[[[[[[[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[[[]]]]]]]][][[]]]]][[][[]]]][][][][[][]]][[[][]][[]]]]]]]]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]][][][[]]][[][]][[[[[]]]][][][[][]][[[[[]]][[]][][[[][]][[[[[][][][[[[][[[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[]]][[[[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][]][[[[[][]][[[[[[[[[[[[]]]]]]]]]]]]][[[]]][][[[][]][[[[][[[[[]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]]][][][][[][]]][[[][]][[][]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[]][[]]][][[[[[[]][][][[]]][[][]][[[[[]]]][[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[]]]]][[[][]][[]]][][][[]]][[[[[][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]][][][[]]][[][]][[[[[]]]][][][[][][[[][[]]]][][][][[][]]][[[][]][[[]][[[]][][]][]]][[][]][[[]]]][[[[[]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[[][[][[[][]][[[[]]]][][][][[][[]][[]]][[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[[[[[]]]]][[[][]][[]]]][][[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]][][][[]]][[][]][[[[[]][[[[]][[[]][[[[]]][]][]]][][][[][][[[][[]]]][][][][[][]]][[[][]][[[]][[[]][][]][]]][[][]][[[]]]][[[[[]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[]]][[]][][[]][][]]][[[[[[]][[[]]][][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]]]]][[]]][[][]][[[[[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[]]]][][][][[][]]][[[][]][[]]]]]][][][][[][[[[[]][[[]]][[]][][[]][][]]][[[[[[]][[[]]][][]]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]][][[][[[[[[]][][][[]]][[][]]]]]][][][[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]][[[[]]]]]]][[[[][[[[[[]]]][[[[[][[[[[][[][]][[[[[]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[[[]]]]][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[[[][[[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][][]][][[[][]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]]]][[[[[[[[][[[[[]]]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]]][[[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][][[[[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[]]]][][]][][[][]][[[][[]]]][][][][[][]]][[[[[][]][[]]][[[]][[[]]]][[]]][[][]][[[[[]]][[[[[]]]][[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[[[]][[[[][[[[]]]][][][][[][]]][[[][]][[]]]]]][][][][[][]]][[[][]][[]][][[]]]][[[[][[[[[[]][[[]]][][[[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][][[[[[[][[[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][][][][[][]]][[[][]][[]]]][[]]]][[[[[[]][[[[[]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]]]]]]]][[[[][[[[[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[][[[[[[][[[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][][]][][[[][]]][[[][]][[]]][[]]]][[[[[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[][[]]]][][][][[][]][[[[]]]][][][][[][]]][[[][]][[]]]]]][[[][]]][[]]][[[]][[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[[]]]][][][][[][]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][[[[][[[[[]]]][[[[[[[[[]]]][][][][[][]]][[[][]][[][]]][[[[[]]][[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][[[][][[[[[]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]][[[[]]]]]]][[[[][[[[[[]]]][[[[[[][[[[[[]]]]][[]]][[][]][[[[[]]]][][][[]]][[[[[][[][]][[[[[]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[[][[][[[[][]][[[[]]]][][][][[][[]][[]]][[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[[[[[]]]]][[[][]][[]]]][][[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[[[][][[[[[[][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[]]]][][][][[][]]][[[][]][[][]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[][[]]]][][][][[][]]][[[][]]][[]]][[[]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][][[[[[[]][][][[]]][[[[]]][[[[[[[[[[[[]]]][]][[[[[[][[[[]]]][][][][[][]]][[[][]][][]]]][[][]]][[[][]][[]]][[]]]][[[[[[[[[]]]][][][[]]][[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[][][[[[[][[[[[[]][][][[]]][[][]][[[[[]]]][][][[][][[[][[]]]][][][][[][]]][[[][]][[[]][[[]][][]][]]][[][]][[[]]]][[[[[]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[[[[]]]]][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]]][") == false)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[[[][[[][[][][[[[[[[[[[[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[]]][[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][][][][[[][]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][][[]][]][]]][[[[[[]][[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[[[][[[[[[]]]]]]]]]][[[[][[[[[[[]]]]]]][[[[[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]][][][[]]][[][]][[[[[]]]][][[][[][]][[[[[[]]][[]][][[[][]][[[[[[[[][[[[[[]]]][][][][[[[][[[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[[[[[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][]][[[[[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[][[]]]]]]]][][[]]]]]]]]]]]]]]]]][[[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[]]]][][][][[][]]][[[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]][[][]][[]]]]]][][][][[][[[[[]][[[]]][[]][][[]][][]]][[[[[[]][[[]]][][]]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[][]][][[[][[]][[[[[]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][[[][][[[[[[[][]][[[[[]]]]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[]][[][][[[[[[[[[[[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[][]][][]]][[[]][[[]]]]][[[][]][[]]][]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[][]][[][][[[[[[][[[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][][][][[][]]][[[][]][[]]][[]]]][[[[[[]][[[[[]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]][[[]]]]][[[[[[[[[[[[[]]]]]]]]]]][[[[][[[[[[]]]]][]]]][[[[][[[[[[]]]][[[[[][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]][[[[[[[][[]]]]]]]][[[[]][[[]][[[[]]][]][][][[]]]]]]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][]][[[[[][]][[[[[[[[[[[[]]]]]]]]]]]]][[[]]][][[[[[][[][[[]]]]][[[][]][[[[][[[[[]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]]][][][][[]][[[[]]]][][]][][[][]][[[][[]]]][][][][[][]]][[[[[][]][[]]][[[]][[[]]]][[]]][[][]][[[[[]]][[[[[]]]][[[[[]]][[[][[[[[[][[][[[]]]]]]][[]]]][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][][[[[[[]][][][[]]][[][]][[[[][]]]][][][[]]][[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]][[[[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[[[[[[[[[[[]]]]]]]]]]][[[[][[[[[[]]]]]]][]]][[[[][]][[]]][[[]][[[]]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[]][[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][][[[[[[]][][[][[[[[[]][][][[]]][[][]]]]]][][][[[]][]]][[[][]][[]]][[]][][[[][]][[[[[][][][[[[][[[[[[[[[[[[[]][[[[[[[[[[[[[]]]]][][[]]]]]]][[[[][[[[[[]]]]]]]][][[]]]]][[][[]]]][][][][[][]]][[[][]][[]]]]]]]]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[][][[[[[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]][]][[][[[[[[]][][][[]]][[][]][[[[[]]]][][][[][]][[[[[]]][[]]][[]]][[][]][[[[[]]]][][][[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]][[[[[[[][[]]]]]]]][]][[]]]]]]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[][[]]]]]]]][][[]]]]]]]]]]]]]]]]]][[[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][]][[[[[[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[[[[[[[[[[[]]]]]]]]]]][[[[][[[[[[]]]]]]][]]][[[[][]][[]]][[[]][[[[[[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][]][[[[[[[[[[[[]]]]]]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[]]]][][][[]][][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]][[[]]]]][[[[[[[[[[][[[[[[][[[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[]]][[[[[[[[[[[[[]][[]][[[]][][[[][[]][[[[[]]][[[[[]]]]]]][[[]][[]]]]]][][][][[][]]][[[][]][[]][[[[[[[[[]]]]]]]]]]][[[[][[[[[[]]]]][]]]][[[[][[[[[[]]]][[[[[][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[][]][[][][[[[[[][[[[]]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][][][][[][]]][[[][]][[]]][[]]]][[[[[[]][[[[[]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]][[]]][[][][[[[][[[[[[]]]][[[[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]][[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[[]]]][[[[[[][[[[[][[[[[[[[][[][[[]]]]][[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[[][[[][[[][]]][][[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][]][[[][[][][[[[[[[[[[[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[]]][[[[][]][[[[[[[[[[[[]]]]]]]]]]]]][[[]]][][[[[[][[][[[]]]]][[[][]][[[[][[[[[]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]][[[[]]][[]][[][][[[[[[[[]]][][[[[[[]][][][[]]][[][]][[[[][]]]][][][[]]][[[[[][[[[[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[]]]]][[[]]]]]]][[[[][[]]]]]]]][][[]]]]]]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[]][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[[[][]][[]]][[[]][[[]]]][[]]][[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[]]]][][][[]][][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]]][][][][[][]]][[[][]][[]]]]][[[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[][]][[]]][[[[]]]][][][][[][]]][[[][]][[]]]]][[[]][[[]]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]][[]]][[]][][[[[[[[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[]]]][][][[]][][[[[[]]]]]]][[[[][[[[[[]]]]]]]][][[]]]]][[][[]]]][][][][[][]]][[[][]][[]]]]]]]]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][][][[[[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[]]]][][]][][[][]][[[][[]]]][][][][[][]]][[[[[][]][[]]][[[]][[[]]]][[]]][[][]][[[[[]]]][[[[[]]]][[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[]][[[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[]]]][[]]][[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[][[]]]]]]]][][[]]]]]]]]]]]]]]]]]][[[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[][[[[[[]]]][[[[][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[]]]][][][][[][]]][[[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]][[][]][[]]]]]][][][][[][[[[[]][[[]]][[]][][[]][][]]][[[[[[]][[[]]][][]]]][[[][]][[]]][[]]]][[[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[[]]][]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[[[[]]]][[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[][][[[[[]][[[[[[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[[[][]][[]]][[[]][[[]]]][[]]][[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[]]]][][][[]][][[[[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]]]][[[[[[[[[][[[[[]]]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[[[]]]]]]]][][[]]]]]]]]]]]]][][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[]][[]]]][][[[[[[]][][][[]]][[][[[[[]]]][[[[[[[[[[[[[]]]]]]]]]]][[[[][[[[[[]]]]]]][]]][[[[][]][[]]][[[]][[[[[[[]]]]]]][[[[[]]]][][][[]]][[[[[][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][][[[[[[]][][][[]]][[][]][[[[[[][[[[]]]][][][][[][]]][[[][]][[]]]]]][][][]][][[]]][[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]][[]]][[]][][[[[[[[[[[][[][[[[][[]][[[][]][[[[[[]][][[]][][]][][[[[[[][[[[[[]]][[[[[]]]][[]]][[][]][[[[[]]]][][][[]][][[[[[]]]]]]][[[[][[[[[[]]]]]]]][][[]]]]][[][[]]]][][][][[][]]][[[][]][[]]]]]]]]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][][[][]][[[[[]]][[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]]]][[]]]][][[[[[][]][[[[[[[[[[[[]]]]]]]]]]]]]][][[[][[[]][[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[]]]][][][][[][]]][[[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]][[][]][[]]]]]][][[[]]]][[[[[]][][[][[[[[]][[[]]][[]][][[]][][]]][[[[[[]][[[]]][][]]]][[[][]][[]]][[]]]][[[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][]][[[][[][][[[[[[[[[[[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[]]][[[[][]][[[[[[[[[[[[]]]]]]]]]]]]][[[[[[[[[[[[[[[]]]]][[[[]]]]]]][[[[][[[[[[]]]][[[[[][[[[[][[][]][[[[[]]]]]][]]][][[[[[][[][[[]]]]][[[][]][[[[][[[[[]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][[[[[[[[[[]]]][][][[][[][]]][[[][]][[]]]]][[[[[]]]][[[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]][[[[[[[][[]]]]]]]][]][[]][[[][[[[]]]][][][][[][]]][[[][]][[]]]][]][[[[]]]]]]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]][]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[[[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[][[][][[[[][[[[[[]]]][[[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[[]]]][[[][[[[[[][]]]][[]]][[][]][[[[[]]][]][[[]]]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[][[[[[[][[[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[][[][[]]]][[[[[][][[]]][[[[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[]]]][][][][[][]]][[[][[[][]][[[[][[[[[]]]][[[[[]][[[]]]][[[[]][][]][[][]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[[[][[[][[][][[[[]][[[[]][[]]]][][[[[[[]][][][[]]][[][]][[[[[]]]][][][[]]][[[[[][][]]]][[[]]][[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][][][][[[][]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][][[[][]][[[[][[[[[]]]][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[]]]][][][[]][][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][[[[[[[[[[[[[[]]]]][[[[]]]]]]][[[[[][][[[[[[][[[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][][][][[][]]][[[][]][[]]]][[]]]][[[[[[]][[[[[]]][[[[[]]][][[[[[[]]]][[[[[][[[[[][[][]][[[[[]]]]]]][[]]][[[]][[[]]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[[[][[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[[[]]]][][][[]][[[[][[][[[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[[]][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[]][[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[]]]][][][[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]][[]]][[]][][[[[[[[[[[][[][[[[][[]][[[][]][[[[[[]][][[]][][]][][[[[[[][[[[[[]]][[[[[]]]][[]]][[][]][[[[[]]]][][][[]][][[[[[]]]]]]][[[[][[[[[[]]]]]]]][][[]]]]][[][[]]]][][][][[][]]][[[][]][[]]]]]]][[[[]][[[]]][]]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]][[]][[[][[]]]][][][][[][]]][[[][]]][[]]][[[]][[[]]]]]]]]]]][[[[][[[[[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[]]]][][[][][[][]]][[[][]][[]]]]]][][][][[][]]][[[][]][[]][][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[[[[[][[[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][][][][[][]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[[][[][[[][]][[[[]]]][][][][[]][[[][][]]]]][[[]][[[]]]][][[[][]][[[[[][][][[[[][[[[[[]][[[][]][[]]]][][[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[][[]]]][[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]]]]]]][][[]]]]]]]]]]]]][[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][][[[[[[]][][][[]]][[][]][[[[[[][[[[]][]]][[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[[[[[[[[[[[[[[]]]][][]]][][[][]]][[[][]][[]]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[]][[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[]]]][][][[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[[][[][[[[][]][[[[]]]][][][][[][[]][[]]][[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[[[[[]]]]][[[[[[[][[[[[[][[][[[][]][[[[]]]][][][][[][[]][[]]][[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[]]]]][[[][]][[]]]][][[[]]][[][]][[]]]][][[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[[[[]]]][[[[[][]][[[]][[[[]]][]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[[]][][[[][]][[[[[[[[[[]]]][][][[][[][]]][[[][]][[]]]]][[[[[]]]][[[][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][[[][][[[[[[[][]][[[][[]]]][][][][[][]]][[[][]][[]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]]]]][[]]][[][]][[[][[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]]]]]]]][[[[][[[[[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[[][[[[]]]][][][][[][]]][[[][]][[]]]]]][][][][[][]]][[[][]][[]][][[]]]][[[[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][]][[[[[][]][[[[[[[[[[[[]]]]]]]]]]]]][[[]]][][[[][]][[[[]][[[[[]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]][[[[]]][[]][[][][[[[[[[[]]][][[[[[[]][][][][[[[[[]][]][[][[[[[[]][][][[]]][[][]][[[[[]]]][][][[][]][[[[[]]][[]]][[]]][[][]][[[[[]]]][][][[[]][[]]][[][]][[[[][]]]][][][[]]][[[[[][[[[[][[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]][[[]]]][][[]]]][[[[[][][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[[]]]][[[][[[[[[][]]]][[]]][[][[]][[[]]][[[[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[][][[[[[]][[[[[[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[[[][]]]][[]]][[][][[][]][[[[[[]]]][[[[[]]]][][][[]][][[[[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[][]][[]]][[[[]]]][][][][[][]]][[[][]][[[]]]]][[[]][[[]]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[[]]]][[[[[[][[[[[[][[[[[[[[][[][[[]]]]][[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[[][[][[[][]]][[[[]]]][][][][[][]][[]]][[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[]]]]][[[][]][[]]]][][[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]][][][[]]][[][]][[[[[]]]][][][[][]][[[][[]]]][][][][[][]]][[[][]][[[]][[[]][][]][]]][[][]][[[]]]][[[[[]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[[[][]][[]]][[[]][[]]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[]][[]]]][][[[[[[]][][][[]]][[][[[[[]]]][[[[[[[[[[[[[]]]]]]]]]]][[[[][[[[[[]]]]]]][]]][[[[][]][[]]][[[]][[[[[[[]]]]]]][[[[[]]]][][[[[[[[[[[[[[[]]]]][[[[]]]]]]][[[[][[[[[[]]]][[[[[][[[[[][[][]][[[[[]]]]]]][[]]][[[[[][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[]][[[[[[[]]]][[[[[[[][[[[[][[[[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]][[[[]]]]][]][[[[][[[[[]]]][[[[[][[[[[][[][]][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[]][[]]]][][[[[[[]][][][[]]][[][[[[[]]]][[[[[[[[[[[[[]]]]]]]]]]][[[[][[[[[[]]]]]]][]]][[[[][]][[]]][[[]][[[[[[[]]]]]]][[[[[]]]][][[[[[[[[[[[[[[]]]]][[[[]]]]]]][[[[][[[[[[]][][[][[[[[[]][][][[]]][[][]]]]]][][][[[]]][[[[[[]]]][[[[[][[[[[][[][]][[[[[]]]]]]][[]]][[[[[][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]][]]]]]]]]][[[[][[[[[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[[][]][[[[[[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[][[]]]][[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]]]]]]][][[]]]]]]]]]]]]][[[]]][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][[[][[]]]][[[][[[[[[][]]]]]]][[[[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][[[[[[[[[]]]][][][][[][]]][[[][]][[]]]]][[[[[[]]]][[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]]][][][][[][]]][[[][]][[][]]][[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[]][]][[[[[[]][][[]][][]][][[[[[[][[[[[[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][][[]][]][]]][[[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]]][][][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[[[][[[[[[]]]][[]]][[[[[[][[[[[[]]][][[[[]][[[]]]][]][[[[][[[[[[]]]][[]]][[][]][[[[[[[][[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[[[]]]][][][[]][][]][[[[[[[][[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[[[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[]]]][][]][][[][]]][[[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]][[][]][[]]]]]][][[[]]]][[[[[]][][[][[[[[]][[[]]][[]][][[]][][]]][[[[[[]][[[]]][][]]]][[[][]][[]]][[]]]][[[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[[][[][[[][]][[[[]]]][][][][[][]][[]]][[[][[]]]][][][][[][]]][[[][]][[[[[[][[[[]]]][][]][][[][]]][[[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]][[][]][[]]]]]][][[[]]]][[[[[]][][[][[[[[]][[[[]]][[]][][[]][][]]][[[[[[]][[[]]][][]]]][[[][]][[]]][[]]]][[[[[[[]]][[[]][[[]]]]][[[][]][[]]]][][[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]]][[[[[[]][[[[][[[[]]]][][][][[][]]][[[][]][[]]]]]][][][][[][]]][[[][]][[]][][[]]]][[[[][[[[[[]][[[]]][][[[[]]][][[[[][[[[[]]]][[[[[]][[[]]]][[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]]][][][[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[][][[[[[]][][[[[[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[[[][]]]][[]]][[][][[][]][[[[[[]]]][[[[[]]]][][][[]][][[[[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[][[[[[[]][][][[[]]][[][]][[[[[]]]][][][[][]][[[[[]]][[]][][[[][]][[[[[][][][[[[][[[[[[][[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][[[][[]]]][[[][[[[[[][]]]]]]][[[[[[[]]]][][][][[][][[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[]]]][][][][[][]]][[[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]][[[[[[]][[[]]][]][]][[]]]]]][][][][[][[[[[]][[[]]][[]][][[]][][]]][[[[[[]][[[]]][][]]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[]][[[[]][[]]][][[[[[[]][][][[]]][[][]][[[[[]]]][[][][[]]][[[[[][][]][[[[][[[[[[]]]][[]]][[][]][[[[[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[][]][[[[[][]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]][[]]][[]][][[[][]][[[[[][][][[[[][[[[[[[[[[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[[[]]]]]]]][][[]]]]][[][[]]]][][][][[][]]][[[][]][[]]]]]][]]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[]][[]]][][[[[[[]][][][[]]][[[[[[]][[[[]]][][[[[][]][[[[][[[[[]]]][[[[[]]]][[][]][[[[[]]]][][][[]]][[[[[][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[[[][]][[[[[][]][[[[[[[[[[[[]]]]]]]]]]]]][[[]]][][[[[[][[][[[]]]]][[[][]][[[[][[[[[]]]][[[[[]]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[[[[]]][[[[[[][[[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][][][][[][]]][[[][]][[]]][[]]]][[[[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[]][][[]][]][]]][[[[[[]][[[]]][][]][[[[[[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[[[[[][[[[[[][[][[[][]][[[[]]]][][][][[][]][[]]][[[][[]]]][][][][[][]]][[[][]][[[[[[][[[[]]]][][]][][[][]]][[[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]][[][]][[]]]]]][][[[]]]][[[[[]][][[][[[[[]][[[[]]][[]][][[]][][]]][[[[[[]][[[]]][][]]]][[[][]][[]]][[]]]][[[[[[[]]][[[]][[[]]]]][[[][]][[]]]][][[[]]][]]][[[][]][[[[][[[[[]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][][[[[]]][[[[[[[[[[[[[]][[]][[[]][][[[][[]][[]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]]]][[]]]][][[[[[][]][[[[[[[[[[[[]]]]]]]]]]]]]][][[[][[[]][[[[]][[[[[[[]]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[[]]]]]][][][][[][]]][[[][]][[]][][[]]]][[[[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][][[]][]][]]][[][]][[[[[[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[][[]]]]]]]][][[]]]]]]]]]]]]][[[]]][[[[[]][[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][[[[[[[[[[]]]][][][][[][]]][[[][]][[]]]]][[[[[[]]]][[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][]][[]][]][]]][[[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]]][][][[]]][[][]][[[[[]]]][][][[[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[]]]][[]]]][]][[[[[]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[[[[]]]][][][][[][]][[[][[]]]][][][]][[][]]][[[][]][][]]][[[]][[[]]]]][[[][]][[]]][]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]]]][[]][[][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[[[[[[[[[[[]]][][[[[[[]]]][[]]][[][]][[[[[]]]][][][[]][]][[]]][[[]][[[]]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[[]]]][[[[[[][[[[[[][[[[[[[[][[][[]]][[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[]][[]]]][]][[[[[[]][][][[]]][[][][[[[[]]]][][][[]]]][[[[[][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[[[[[[][[[[[[][[][[[][]]][[[[]]]][][][][[][]][[]]][[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[]]]]][[[][]][[]]]][][[[]]][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]]][][][][[][]]][[[][]][[]]]]][[[[[]]]][[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]]]][[[[[[[]][[[]]]][][[]]]][[[[[][][[]]][[[[[[][[[[[]]]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]]]][[[[[[[]][[[]]]][][[]]]][[[[[][][[]]][[[[[[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[[[]]]]][]][[][[[[[]]]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][[[[][[[[[]]]][[[[[[]][[[]]]][[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[[[]]][[[][[[]][[[[]]]][][][][[][]]][[[][]]]][[[[[[[[[][[[[[]]]]]][[[[[[][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[[[][[[[[[]]]]]]]]]][[[[][[[[[[]]]]]][][[[[[]]]][][][[]][[[[][[][[[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][]][[[][[][][[[[[[[[[[[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[]]][[[[][]][[[[[[[[[[[[]]]]]]]]]]]]][[[[[[[[[[[[[[[]]]]][[[[]]]]]]][[[[][[[[]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[[[][[[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][][]][][[[][]]][[[][]][[]]][[]]][][[[[[[]][][][[]]][[][]][[[[[[][[[[]]]][][][][[][]]][[[][]][[]]]]]][][][][[][]]][[[][]][[]]][[]]]][[[[[[[[[]]]][][][[]]][[[[[][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[[]]]][[[[[[[]]]][[[[[[][][[[[[][[[[[]]]][][[[[[[][[[[[[[[][[][[]]][[[][]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[[]][][[]][][]][[[[]]][[[][[[]]][][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[]][[[[][]][[][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[]][[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[]]]][][][[[[[][]][[[[[][]]]]][][[]]]][][][[]][][[][]][[[[[]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[]][[[[[[[][[[][[]][[[[[]]]][[[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][[]]]][][][][[][]]][[[][]][[[]][[[]][][]][]]][[[[]]]]][][][][[][]]][[[][]][[]]]][[][]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[][[]]]]]]]][][[]]]]]]]]]]]]]]]]]][[[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[[[[]]]][[[[[][]][[[]]][[[[]]][]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[[[[][[][[[[[[][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[[[[[[[[[[[]]][][[[[[[]]]][[]]][[][]][[[[[]]][][][][[]][]][[]]][[[]][[[]]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[][][[[[[][[[[[[]][][][[]]][[][]][[[[[]]]][][][[][][[[][[]]]][][][][[][]]][[[]][]][[[]][[[]][][]][]]][[][]][[[]]]][[[[[]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]]][][[][]][[[[[]]][[][[[[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][]][[]][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]]]][[[][]][[]]][[]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[][][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[[[[[][[[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][[][[[[[[]]][][][[]]][[][]][[[[[]]]][][][[[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[]]]][[]]]][]][[[[[]]][[]]][][][[][]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]][[[[]]]]]]][[[[][[[[[[]]]][[[[[[][[[[[[]]]]]][[]]][[][]][[[[[]]]][][][[]]][[[[[][[][]][[[[[]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]][[[[]]]]]]][[[[][[[[[[]]]][[[[[[][[[[[[]]]]]][[]]][[][]][[[[[]]]][][][[]]][[[[[][[][[[[[]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[][[]]]][][][][[][]]][[[][]]][[]]][[[][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]][[[[[[[][[]]]]]][]][]][[]][[[][[[[]]]][][][][[][]]][[[][]][[]]]][]][[[[]]]]]]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[[[[[[[[[[[]]]]]]]]]]][]][]]][[[[][]][[]]][[[]][[[[[[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[[]]][][[[][[[[[[][]]]][[]]][[[][[[[[[]][][][[]]][[][]][[[[[]]]][][][[][]][[[[[]]][[]][][[[][]][[[[[][][][[[[][[[[[[]][]][[[[[]][]]][[[]]]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]]][][[[[[][[[[[[[][]][[[[[][]][[[[[[[[[[[[]]]]]]]]]]]]][[[]]][][[[[[][[][[[]]]]][[[][]][[[[][[[[[]]]][[[[[]]][[[[][][][[][]]][[[][]][[]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][]]][]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[[][[][[[[][]][[[[]]]][][][][[][[]][[]]][[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[[[[[]]]]][[[[[[[][[[[[[][[][[[][]][[[[]]]][][][][[][[]][[]]][[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[]]]]][[[][]][[]]]][[[[[]]]][[[[[[[[[[[[[]]][][[[[[[]]]][[]]][[][]][[[[[[]]]][][][[]][]][[]]][[[]][[[]]]][[]]][[[]]][[][]][[]]]][][[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[][[][]]][[[][]]][[]]][[[][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]][[[[]]]]]]][[[[][[[[[[]]]]][[[[[[][[[[[[]]]]][[]]][[][]][[[[[]]]][][][[]]][[[[[][[][]][[[[[]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[]]][[]]][[][]][[[[[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[][[[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]][[][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]][[[]]]][][[]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[[]]]][[]]][[][]][[[[[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]][[]]][[]]][][[[[[[[[[[][[][[[[][[]][[[][]][[[[[[]][][[]][][]][][[[[[[][[[[[[]]][[[[[]]]][[]]][[][]][[[[[]]]][][][[]][][[[[[]]]]]]][[[[][[[[[[]]]]]]]][][[]]]]][[][[]]]][][][][[][]]][[[][]][[]]]]]]][[[[]][[[]]][]]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[][]][[]]][[[[]]]][][]][][[][]]][[[][]][[]]]]][[[]][[[]]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][]][[[][[][][[[[[[[[[[[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[]]][[[[][]][[[[[[[[[[[[]]]]]]]]]]]]][[[[[[[[[[[[[[[]]]]][[[[]]]]]]][[[[][[[[[]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][][[[[][[[[]]]][][][][[][]]][[[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]][[[[[[]][[[]]][]][]][[]]]]][[[][]]][[[[[[]][[[[][[[[]]]][][][][[][]]][[[][]][[]]]]]][][][][[][]]][[[][]][[]][][[]]]][[[[][[[[[[]][[[]]][][[[[]]][][[[[][[[[[]]]][[[[[]][[[]]]][[[[]]]][][][][[][[[[[]][[[]]][[]][][[]][][]]][[[[[[]][[[]]][][]]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]][[]]][[]][][[[[[[[[[[][[][[[[][[]][[[][]][[[[[[]][][[]][][]][][[[[[[][[[[[[]]][[[[[]]]][[]]][[][]][[[[[]]]][][][[]][][[[[[]]]]][[[[[[[[[]]]][][][][[][]]][[[][]][[][]]][[[[[]]]]][[][[]]]][][][][[][]]][[[][]][[]]]]]]]]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[[[]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[[[][[[[[[]]]][[]]][[][[[[][[[[[[]]][][[[[]][[[]]][]][[[[][[[[[[]]]][[]]][[][]][[[[[[[][[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[[[]]]][][][[]][][]][[[[[[[][[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[[[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[[[][[[][[][][[[[]][[[[]][[]]]][[[[[[[[[]]]][][][][[][]]][[[][[]][[]]]]][[[[[]]]][[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]]][[[[[[]][][][[]]][[][]][[[[[]]]][][][[[]]][[[[[][][]]]][[[]]][[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]][[[[][[[][][][][[[][]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[][]][[[][[[]][[[[[]]]][][][][[][]]][[[][]][[]]][[][][[[[][[[[[[]]]][[[[]]]][[[[[[]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[[[[][[[][[][][[[[]][[[[]][[]]]][][[[[[[]][][][[]]][[][]][[[[[]]]][][][[]]][[[[[][][]]]][[[]]][[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][][][][[[][]]][[[][]][[]]][[]]]][[[[[[[]][[[[][[[[[]]]][[[[[[]][[[]]]][[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[][[[[[[][[][[[][]][[[[]]]][][][][[][]][[]]][[[][[]]]][][][][[][]]][[[][]][[[[[[][[[[]]]][][]][][[][]]][[[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]][[][]][[]]]]]][][[[]]]][[[[[]][][[][[[[[]][[[[]]][[]][][[]][][]]][[[[[[]][[[]]][][]]]][[[][]][[]]][[]]]][[[[[[[]]][[[]][[[]]]]][[[][]][[]]]][][[[]]][]]]][[[][[[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][][][[[][][[[[[[[][]][[[[[]]]]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[][[][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[]][[[[[][[][[[[][[[[[[]]]]][[[[]]]][][]][][[][]][[[][[]]]][][][][[][]]][[[[[][]][[]]][[[]][[[]]]][[]]][[][]][[[[[]]][[[[[]]]][[[[]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[[[[]]]][][][][[][]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]]][][[][[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[[[[][][[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[[[][[[[]]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][][]][][[[][]]][[[][]][[]]][[]]][][[[[[[]][][][[]]][[][]][[[[[[][[[[]]]][][][][[][]]][[[][]][[]]]]]][][][][[][]]][[[][]][[]]][[]]]][[[[[[[[[]]]][][][[]]][[[[[][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[[]]]][[[[[[[]]]][[[[[[][][[[[[][[[[[]]]][][[[[[[][[[[[[[[]][[][[]]][[[][]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[][[[[]][[[[]]][][[[[][]][[[[][[[[[]]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]][[]]][[]][][[[[[[[[[[][[][[[[][[]][[[][]][[[[[[]][][[]][][]][][[[[[[][[[[[[]]][[[[[]]]][[]]][[][]][[[[[]]]][][][[]][][[[[[]]]]]]][[[[][[[[[[]]]]]]]][][[]]]]][[][[[][[[[[[]][][][[]]][[][]][[[[[]]]][][][[][]][[[[[]]][[]][][[[][]][[[[[][][][[[[][[[[[[]]]]][][]][][[][]]][[[][]][[]]]]]]][[[[]][[[]]][]]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[][]][[[][[[]][[[[[]]]][][][][[][]]][[[][]][[]]][[][][[[[][[[[[[]]]][[[[]]]][[[[][[]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[]]]][[[[[][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[[]][[]]][][[[[[[]][][][[]]][[][]][[[[[]]]][][][[]]][[[[[][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[[[][[[[[[]]]]]]]]]][[[[][[[[[[[[]]]]]]][[[[[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][][][[[[[]][][][[]]][[][]][[[[[]]]][][][[]]][[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]][[[[[][[[[[[][[[]]]]][[[[[[[[[[[[[]]]]]]]]]]][[[[][[[[[[]]]]][]]]][[[[][[[[[[]]]][[[[[][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]][[[[]]][]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[][[]]]][][][][[][]]][[[][]]][[][[[[[[]]][[[][[[]]][]]]][[[]][[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[][]][[[][[][][[[[[[[[[[[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[]]][[[[][]][[[[[[[[[[[[]]]]]]]]]]]]][[[[[[[[[[[[[[[]]]]][[[[]]]]]]][[[[][[[[]]]][[[[[]]][[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[[[]]]][[[[[][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]][[]]][[]][][[[[[[[[[[][[][[[[][[]][[[][]][[[[[[]][][[]][][]][][[[[[[][[[[[[]]][[[[[]]]][[]]][[][]][[[[[]]]][][][[]][][[[[[]]]]][[[[[][[[[[[]][[[[]]][][[[[][]][[[[][[[[[]]]][[[[[]]][[[[]]]][][][][[][]]][[[][]][[][]]][[[[[]]]]][[][[]]]][][][][[][]]][[[][]][[]]]]]]]]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][][[][]][[[[[]][[][[]][[[[[[]]][[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[][]][[[[[][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][[]]]][][][][[][]]][[[][[[][]][[[[[[[]]]][[[[[[[]]]][[[[[[][][[[[[][[[[[]]]][][[[[[[][[[[[[[[][[][[]]][[[][]]]]]]]][[[]][[[]][][]][]]][[[[]]]]][][][][[][]]][[[][]][[]]]][[][]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[]]]]][[[]]]]]]][[[[][[]]]]]]]][][[]]]]]]]]]]]]][[]]][[[[[[[[[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[][][[[[[][[[[]]]][][[[[[[[[[[[[[[]]]]][[[[]]]]]]][[[[[][][[[[[[][[[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]]][][][][[][]]][[[][]][[]]]][[]]]][[[[[[]][[[[[]]][[[[[]]][][[[[[[]]]][[[[[][[[[[][[][]][[[[[]]]]]]][[]]][[[]][[[]]]][[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]]]][[[][]][[]]]][[]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][[[[[]]]][[[[[[[[[[[[[]]]]]]]]]]][[[[][[[[[[]]]]]]][]]][[[[][]][[]]][[[]][[[]]]][[]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[]][[]]]][][[[[[[]][][][[]]][[][[[[[]]]][[[[[[[[[[[[[]]]]]]]]]]][[[[]][[[[[[]]]]]]][]]][[[[][]][[]]][[[]][[[[[[[]]]]]]][[[[[]]]][][[[[[[[[[[[[[[]]]]][[[[]]]]]]][[[[][[[[[[]]]][[[[[][[[[[][[][]][[[[[]]]]]]][[]]][[[[[][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]]][][][][[][]]][[[][]][[]]]]][[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[[[[]]]][][][][[][]][[[][[]]]][][][]][[][]]][][[][]][][]]][[[]][[[[[][[[[]]]][][][][[][]]][[[][]][[]]]]]][][][][[][[[[[]][[[]]][[]][][[]][][]]][[[[[[]][[[]]][][]]]][[[][]][[]]][[]]]][[[[[[[[]]]]][[[][]][[]]][]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[][[]]]][][][][[][]]][[[][]]][[][[[[[[]]][[[][[[]]][]]]][[[]][[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[][[]]]][][][][[][]]][[[][]]][[]]]][[[]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[][[[[]]]][][][][[][]]][[[]][[[[[[]]][[[][[[]][[[[]]]][][][][[][]]][[[][]]]][[[[[[[[[][[[[[]]]]]][[[[[[][][]][[]]]]]][][][][[][]]][[[][]][[]]][[]]]][[[[[[[[[[][[[[[[][[][[[][]]][][[[]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[[[[][[][[[[[[[[[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[[[]]]]]]]][][[]]]]]]]]]]]]][]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[]][][[[[[[[]]]][[[][[[[[[][]]]][[]]][[][]][[[[[]]]]][[[]]]]][[]]]][][[][][[][]]][[[][]][[]]]]]][][][][[][]]][[[][]][[]][][[]]]][[[[[][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]]][][][][[][]]][[[][]][[][]]][[[[[]]][][[[[[[]][][][[]]][[][]][[[[[]]]][][][[][]][][[[[]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[]]]][][][][[][]]][[[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][[[[][[]]]][][][][[][]]][[[][]][[[]][[[]][][]][]]][[[[]]]]][][][][[][]]][[[][]][[]]]][[][]][[[]]]][[[[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[[[[[[[[[[[]]][][[[[[[]]]][[]]][[][]][[[[[]]][][][][[]][]][]][[[]]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]]]]]]][[[[][[[[[[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[]]]]]]]][][[]]]]]]]]]]]]][[[[]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[]]]]][][][][[][]]][[[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]][[][]][[]]]]]][][][][[][[[[[]][[[]]][[]][][[]][][]]][[[[[[]][[[]]][][]]]][[[[]]]][][][][[][]]][[[][]][[]]][[]][][[[[[[[[[[][[][[[[][[]][[[][]][[[[[[]][][[]][][]][][[[[[[][[[[[[]]][[[[[]]]][[]]][[][]][[[[[]]]][][][[]][][[[[[]]]]][[[[[][[[[[[]][[[[]]][][[[[][]][[[[][[[[[]]]][[[[[]]][[[[]]]][][][][[][]]][[[][]][[][]]][[[[[]]]]][[][[]]]][][][][[][]]][[[][]][[]]]]]]]]]]][[[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]]][[[[[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("][]][[[[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]]][][][][[][]]][[[][]][[]]][[]][][[[[[[[[[[][[][[[[][[]][[[][]][[[[[[]][][[]][][]][][[[[[[][[[[[[]]][[[[[]]]][[]]][[][]][[[[[]]]][][][[]][][[[[[]]]]]]][[[[][[[[[[]]]]]]]][][[]]]]][[][[]]]][][][][[][]]][[[][]][[]]]]]]][[[[]][[[]]][]]]]][]]]][][][][[][][[[[[[]][][[][[[[[[]][][][[]]][[][]]]]]][][][[[]][]]][[[][]][[]]][[]][][[[][]][[[[[][][][[[[][[[[[[[[[[[[[]][[[[[[[[[[[[[]]]]][][[]]]]]]][[[[][[[[[[]]]]]]]][][[]]]]][[][[]]]][][][][[][]]][[[][]][[]]]]]]]]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]][[]]][[]][][[[][]][[[[[][][][[[[][[[[[[[[[[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][][[]]]]]][]]]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[]]]][[]][][[]][]][]]][[[[[[]]][][][[]][][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[[[[[[[[[[[]]][][[[[[[]]]][[]]][[][]][[[[[]]][][][][[]][[]][]][[[]]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][[[[][[[[[]]]][[[[[[]][[[]]]][[[[]]][][[[[[[[]]]][[[][[[[[[][]]]][[]]][[][]][[[[[]]]]][[[]]]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][][[]][]][]]]][[[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[[[][[][[[][]]][][[[][]][[[[][[]]]][][][][[][]]][[[][]][[[]][[[]][][]][]]][[[[]]]]][][][][[][]]][[[][]][[]]]][[][]][[[]]]][[[[][]][[[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]][[[]]]]][][[]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[[[[[][[[[[[[][]][[[[[][]][[[[[[[[[[[[]]]]]]]]]]]]][[[]]][][[[[[][[][[[]]]]][[[][]][[[[][[[[[]]]][[[[[]]][[[[][]]]][[]]]][[][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[][][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]][][][[]]][[][]][[[[[]]]][][][[][][[[][[]]]][][][][[][]]][[[][]][[[]][[[]][][[[[]][[[[[[]]]][][][][[][]][[[][[]]]][][][][[][]]][[[][]][][]]][[[]][[[]]]]][[[][]][[]]][]]]][]][]]][[][]][[[]]]][[[[[]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][[[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]][][[][[[[[[]][][][[]]][[][]][[[[[]]]][][][[][]][[[[[]]][[]]][[]]][[][[]][[[[[]]]][][][[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[][[][][[[[[[[[[[[[[[[]]]]]]]][]][[[[][[[[[[]]]]]]][[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[]]]][][][][[][]]][[[][][[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[]][[[][]][[[[][[]]]][][][][[][]]][[[][]][[[]][[[]][][]][]]][[[[]]]]][][][][[][]]][[[][]][[]]]][[][]][[[]]]][[[[][]]]]][[[]]]]]]][[[[][[]]]]]]]][][[]]]]]]]]]]]]][[]]][[[[[[[[[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[[[[[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[[[][[[[[[]]]]]]]]]][[[[][[[[[[[[]]]]]]][[[[[]]]][][][[]]][[]]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[[[][[[[[[]]]][[]]][[][[[[][[[[[[]]][][[[[]][[[]]][]][[[[][[[[[[]]]][[]]][[][]][[[[[[[][[[[[[]]]]]]]]]][[[[]][[[][[]]]][][][][[][]]][[[][]]][[]]]][[[]][[[]]]][[[[[[]]]]]]][[[[[]]]][][][[]][][]][[[[[[[][[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[[[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[]][[[[[][[][[[[][[]][[[[]][][]][[[[[[]]]][[]]][[][]][[[[[]]]][][[[][]][[[[][[[[[]]]][[[[[]]][][[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[]]]][][][][[][]]][[[][]][[]]]]]][][][]][][[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[[[[][[[[[[][[]][][][[]]][[][]][[[[[]]]][][][[][]][[[[[]]][[]][][[[][]][[[[[][][][[[[][[[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[][[]]]]]]]][][[]]]]]][[[][][][[[][][[[[[[[][]][[[[[]]]]]]][[[[[]]]]]]]]]]]]]]][[[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]][[[][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[]]]][][][][[][]][][[[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]][[[[[[]][[[]]][]][]][[]]]]]][][][][[][[[[[]][[[]]][[]][][[]][][]]][[[[[[]][[[]]][][]]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][][[][]][[[[[]]][[[]][[[[[[][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[[]]]][][[][][[][]]][[[[][]][[]]]]]][][][][[][]]][[[][]][[]][][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]][[]]][[[[[[[[[[[[]]]]]]]]][[[[][[[[[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[[]][][[]][][]][[][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[[[[]]]]][[[[]]]]]]][[[[][[[[[[]]]][[[[[[][[[[[[]]]]]][[]]][[][[]][[[[[]]]][][][[]]][[[[[][[][[[[[]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[[[[[[[[[[[]]]]]]]]]]][[[[][[[[[[]]]]]]][]]][[[[][]][[]]][[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[[[[][[[[[][[[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][][[[]][]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[[[[]]]]]]]]][]][]]][[[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[[[[[][[[[[[][[][[[][]][[[[]]]][][][][[][]][[]]][[[][[]]]][][][][[][]]][[[][]][[[[[[][[[[]]]][][]][][[][]]][[[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[]]][[][]][[]]]]]][][[[]]]][[[[[]][][[][[[[[]][[[[]]][[]][][[]][][]]][[[[[[]][[[]]][][]]]][[[[][]][[]]][[]]]][[[[[[[]]][[[]][[[]]]]][[[][]][[]]]][][[[]]][]]][[[][]][[[[][[[[[]]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[[[[[[[[[[[]]]]]]]]]]][[[[][[[[[[]]]]][[[[]][[[]]][]]][]]][[[[][]][[]]][[[]][[[[[[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[][[]]]][][][][[][]]][[[][]]][[]]][[[]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[[[[]][[[[[[[[[[[[[]]]]][[[]]]]]]][[[[][[[[][[]]]]]]]][][[]]]]]]]][[[][]][[[[[][]]]]]]][[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]][[[[[[[][[]]]]]]]][]][[]][[[][[[[]]]][][][][[][]]][[[][]][[]]]][]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[][[[[][[[[[[]]]][[]]][[][]][[[[[]]][[]][[][][[[[[[[[[[[[[[[]]]]]]]]]][[[[][[[[[[]]]]]]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[][[[[]]]][][][][[][]]][[[][]][[]]][[]][][[[[[[[[[[][[][[[[][[]][[[][]][[[[[[]][][[]][][]][][[[[[[][[[[[[]]][[[[[]]]][[]]][[][]][[[[[]]]][][][[]][][[[[[]]]]]]][[[[][[[[[[]]]]]]]][][[]]]]][[][[[][[[[[[]][][][[]]][[][]][[[[[]]]][][][[][]][[[[[]]][[]][][[[][]][[[[[][][][[[[][[[[[[]]]]][][]][][[][]]][[[][]][[]]]]]]][[[[]][[[]]][]]]]][][[[[[[[]]]][[[[[[[][[[[[][[[[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]]][][][][[][]]][[[][]][[]]]][[[[[[[[[[][[[[[[][[][[[][]]][[[[]]]][][][][[][]][[]]][[[][[]]]][][][][[][]]][[[][]][[]]][[[]][[[]]]]][[[][]][[]]]]][][[[]]][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[[[[][[[[[][[[[[[]][][[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[[[[][[[][[][][[[[]][[[[]][[]]]][[[[[[[[[]]]][][][][[][]]][[[][[]][[]]]]][[[[[]]]][[[[[[[[]]]][][][][[][]]][[[][]][[]]][[[[[][[][[]][[[[]][[]]][][[[[[[]][][][[]]][[][]][[[[[]]]][[][][[]]][[[[[][][]][[[[][[[[[[]]]][[]]][[][]][[[[[]]]][][][[]]][[[[[]]]][[[[[[]][][][[]]][[][]][[[[[]]]][][][[[]]][[[[[][][]]]][[[]]][[[]]]][][][][[][]]][[[][][[]]]][[[][[[[[[]][[]]]]][[[[][[[][][][][[[][]]][[[][]][[]]][[]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[]][[]]]][][[[[[[]][][][[]]][[][[[[[]]]][[[[[[[[[[[[[]]]]]]]]]]][[[[][[[[[[]]]]]]][]]][[[[][]][[]]][[[]][[[[[[[]]]]]]][[[[[]]]][][[[[[[[[[[[[[[]]]]][[[[]]]]]]][[[[][[[[[[]]]][[[[[][[[[[][[][]][[[[[]]]]]]]][[]]][[[[[][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[][][][][][][][][][][][][][][][][][][[[[[[[[[[[[[[[[[[[[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("]][]") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[]][") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[][[") == false)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]][][][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]]][[[[[[][[[[]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][]][[[[[]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[]][]][[[[[]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[[[[]]]][][][][[][]]][[[][]][[]]][]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][]][[[[[[[[][]][][[][]]][[[][[]][[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[]]]][[[[[[][[[[]][[[]]]][[][]][[[[[]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]]][[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][]][[[[[]][[[]][[[]][][]][[[]]]][][][][[][]]][[[][]][[]]][[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[]][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][][]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][][][[[[[[[[][]][][[][]]][[[][[]][[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]][]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[[]][[[]][[[]][][]][[[]]]][][][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]]]][[]]][][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]]][[][]][[[[[]]][[[][][][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][]][[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[]]]][[[[[[][[[[]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][]][[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[]][]][[[[[[]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][][[][]]][[[][]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[]]]]][[][]][[[[[[[[][]][][[][]]][[[][[]][[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[[]]]][[[[[[][[[[]][[[]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]]][[[]]]][[[[[[][[[[]][[[]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[][]][][[][]]][[[][]][[]]]]][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][][[][]][][[[][]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][]][[[[[[[[][]][][[][[[[[]][[[]]]][][[[[]][[[]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]]][[[]]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[]]]][[[[[[][[[[]][[[[][]][][[][]]][[[][]][[]]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][]][[[[[]][[[]][[[]][][]][[[]]]][][][][[][]]][[[[][]][][[][]]][[[][]][[]]]]][[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[]][][]][[[]]]][][][][[][]]][[[][]][[]]][]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[[[[]]]][[]]]][][][[]][]][[[]][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]]][[][]][[[[[[[[][]][][[][[[[[]][[[]]]][][[[[]][[[]]]][][]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][]][][[][]][][[[][]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[]]][[[]][][]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[[[[]]]][[]]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]][[]][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][][[][]]]][[][]][[[[[]][[[]][[[]][][[[[]]]][[[]]]][][][][[][]]][[[[][]][][[][]]][[[][]][[]]]]][[][[[][]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][][[][]]]][[][]][[[[[]][[[]][[[]][][[[[]]]][[[]]]][][][[[[][]][][[][]]][[[][]][[]]][[][]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]]][[][]][[[[[]]]][[[][][][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[]][]][[[[[[[]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]]][[[]]]][[[[[[][[[[]][[[[]]]][[[[[[][[[[]][[[]]]][[]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][]][][[][]][][[[]][]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[[[]]][[][]][[[[[[[[][]][][[][[[[[]][[[]]]][][[[[]][[[]]]][][]][][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]][][][][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]]]][[[[[[][[[[]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][][[]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][]][][[][]][][[[]][]][[]]][][[[]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][[[]]]][[[[[[][[[[]][[[]]]][[][]][[[[[]]][[[[]]][][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][]][[[[[]]][[[]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][]][[[[[]]][[[][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]]][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]]][[][]][[[[[[[[][]][][[]][[[]]]][][[[[]][[[]]]][][]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[][]][][[][]]][[[][]][[]]]]]]][[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]]][[[]]]][[[[[[][[[[]][[[[]]]][[[[[[][[[[]][[[]]]][[[[[[]]][[[[]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][]][[[[[[[[[[[[]]][[[[]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]][][][][][[][]]][[[]][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[[][]][[[[[[[[][]][][[][[[[[]][[[]]]][][[[[]][[[]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[][[]]]][[[[[]][][[[[[[]]]][[]]]][][][[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][]][[[[[[[]]][[[][]][[[[[[[[][]][][[][[[[[]][[[]]]][][[[[]][[[]]]][][[]]][[[]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]][[][]][][[[][]][[]]][[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][][][[[[[[]]]][[]]]][][][[]][]][[[]][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]]][[[]]][[[]]][][]][[[]]]][][][]][[][]]][[[][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]]][][]][[[]]]]][[][]][[[[[]]][[[][][][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]]][[][]][[[[[[[[][]][][[]][[[]]]][][[[[]][[[]]]][][[]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[][[]]]][[[[[]][][[]]]][][][[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]][]][][][][[][]]][[[]][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[]]][[][]][[[[[]]][[[]][[[[]][[[[[[[[[[[[]]][[[[]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][][]][[[][]][[]]][[[[]]][[]]][[][]][[[[[]]][[[]][[[[]][[[[[[[[[[[[]]][[[[]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]]][[[[[]][[[]][[[]][][]][[[]]]][][][][[][]]][[[[][]][[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][][[][]]]][[][]][[[[[]][[[]][[[]][][[[[]]]][[[]]]][][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[]][]][[[[[[[]][[[[[[]]][[][]][[[[[[[[][]][][[][[[[[]][[[]]]][][[[[]][[[]]]][][]][][[[[][[[[]]]][][][][[][][]][[[][]][[]]][[]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[[[[]][[[]][][]][[[]]]][]][][][][[][]]][[[]][]][[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][]][][[][]][][[[]][]][[]]][][[[]][[[]]][][]][[[]]]][][[][][[][]]][[[][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[]][[[]][][]][[[][[]]]][[[[[]][][[]]]][][][[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][]][[[[[]][[[]][[[[]][][]][[[]]]][][][][[][]]][[[][]][[]]][[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[[[[]]]][[]]]][[][]][[[[[[[[][]][][[][]]][[[][[]][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[][[[][][][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][[[[[[]]]][[]]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]][[]][][]][][]][[[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[[[[[[[[[[[]]]]]]]]]]]]]]][][][][[][][]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]][][][][[][]]][[[[[[[[[[]]][[[]]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[]][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]]]]][[[[[[][[[[]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[[[[]][[[]][][]][[[]]]][]][][][][[][]]][[[]]][]][[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][][]][[[[[]]][[][[]][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]]][[][]][[[[[]]][[][]][[[[[[[[][]][][[][[[[[]][[[]]]][][[[[]][[[]]]][][[[[][[]]][[[]]]]]]]][[[][][][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]]][[[][[[[[[]]]][[]]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]][[]][][]][][]][[[[[[]]][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]][[[][]]][[]]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[[[[]]]]][[]]]][[][]][[[[[[[[][]][][[][]]][[[][[]][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][[[[]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][]]][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]][[][]][[[[[[[]]][[[][]][[[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[]]][[[]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]]][[[]]][[[]]][][]][[[]]]][][][][[][]]][[[[[[[[[]]][[[]]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]][][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[]]][[[]][][]][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]]][[][]][[[[[]]]][[[]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]]][[][]][[[[[]]][[[][[[]]]][[[[[[[]]][[[]]][[[]]][][]][[[]]]][][][][[][]]][[[[[[[[[]]][[[]]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]][][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][[[[]]][[]]][[][]][[[[[]]][[[]][[][[]][[[[[[[[[[[[]]][[[[]]]]][]][[[[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][]][[[[[]][[[][]][][[][]]]][[][]][[[[[]][[[]][[[]][][[[[]]]][[[]]]][][][[[]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][]][[[[[]][[[]][[[]][][]][[[]]]][][][][[][]]][[[[][]][]]][[[]]]][[[[[[][[[[]][[[]]]][[][]][[[[[]]][[[[[[][]][[]]]]][[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]]]][[[[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]]]]][[[[[]]][]][[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][]][[[[]][[[[[[]]][[][]][[[[[[[[][]][][[][[[[[]][[[]]]][][[[[]][[[]]]][][]][][[[[][[[]][[[]][[[[]][][]][[[]]]][][][][[][]]][[[][]][[]]][[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][]][][[][]][][[[]][]][[]]][][[[]]][[[]]]][][]][[[]]]][][][][[][]]][[[][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]][]][][[][]][][[[]][]][[]]][]]]][[][]][[[[[]]][[[][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[[[]][[[]]][[[][]][][[][]]]][[][]][[[[[]][[[]][[[]][][[[[]]]][[[]]]][][][[[[][]][][[][]]][[[][]][[]]][[][]][[]]][]]]][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][]][][[][]][][[[]][]][[]]][][[[]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][[[]]]][[[[[[][[[[]][[[]]]][[][]][[[[[]]][[[[]]][][][[][]]][[[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]]][[[]]][[[]]][][]][[[]]]][][][]][[][]]][[[][]]][[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][][[][[][]]][[[][]][[]]]]][[][[[][]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][[[[]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]]][[[]]]][[[[[[][[[[]][[[[]]]][[[[[[][[[[]][[[]]]][[]]]][][][][[][][]][[[[[]]][[][[]][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]][[[]][][]][[[]]]][][][][[][]]][[[][]][[]]][]]][[[[[]]][]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[]][][][[[[[]][[[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]]][][[][]]][[[][]][[[]][[[[[[[][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[[[[]][[[]][][]][[[]]]][]][][][][[][]][]][[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][[[]][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[]][]][[[[[]][[[]][[[]][][]][[[]]]]][[][]][[[[[]]]][[[][][][][[][]]][[[][]][[]]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]]][[[]]]][[[[[[][[[[]][[[[]]]][[[[[[][[[[][[[[][]]][[[]][[[]]]][[[[[[]]][[[[]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]][[][]][[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[]]][[[]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[][]][[][]][[[[[[[]]][[[][]][[[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[]]][[[]][[[[]][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]][][][][[][]]][[[][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][]]][][[][]]][[[][]][[[]][[[[[[[][]]][][]][][[]][[[[][]][[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[][]]][][[][]]][[[][]][[]]]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]][]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]][[][]][[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[]]][[[[[[[]]][[][]][[[[[[[[][]][][[]][[[]]]][][[[[]][[[]]]][][[]][][]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[[]]]][[[[[[][[[[]][[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]][][][][][[][]]][[[][]][[[[[[[[]]][[[]]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]][[][]][[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[]]][[[[[[[]]][[][]][[[[[[[[[]][[[]]]][][[]][][]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[]]]][[[[[[][[[[]][[[]]]][][][]][[[[[]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][[]]][[[]][][]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]]][]]][[[][]]][[]]][][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][][[]]]][[[]]]][][][[[[][]][][[][]]][[][[[[[[]]]]][[]]]][[][]][[[[[[[[][]][][[][]]][[[][[]][][]][[[][]][[]]][[][]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[]][]]][[[[[[[]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][][][[[[[[[[][]][][[][]]][[[][[]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]]]]][[[[[[][[[[]][[[]][[[[[][]][[[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[[[[]][[[]][][[]][[[]]]][]][][][][[][]][]][[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[][[[][]][][[][]]][[[][]][[]]]]][[[][[[[]]]][[]]]][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]][[][]][][[[][]][[[[[]][[[]][][]][[[]]]]][[][]][[[[[]]][[][]][[[[[[[[][]][][[][[[[[]][[[]]]][][[[[]][[[]]]][][[[[][[]]][[[]]]]]]]][[[][][][][[][]]][[[][]][[]]]]]][[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[]]]][[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[[][[[][]][[]]][[[]][][]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]][][][][][[][]]][[[][]][][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][][][][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[[][[[[[[]]]][[]]]][[][]][[[[[[[[][]][][[][]]][[[][[]][][]][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[[]]]][[[[[[][[[[]]][[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]]][[]][]][[[[[]]]][[[]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[][]][][[][]]][[[][]][[]]]]]]][[[[[][[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][][[[][]]][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]]][[][][][[[[[[[[][]][][[][]]][[[][[]][[]]][[][][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]]][[]][]][]][[][]][[[[[[[]]][[[][]][[[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[]]][[[]][[[[]][[[[[[[]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][[[[[[]]]]][[]]]][[][]][[[[[[[[][]][][[][]]][[[][[]][][]][][]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]][[][]][[[[[[[][]][][[]][[[[[]][[[]]]][][[][[[]][][]][[[[]][[[]]]][][[]]][[[[[[[]]][[][]][[[[[[[[[]][[[]]]][][[]][][]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[]][][][[[[[]][][[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[]]][[[]][][]]][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]]][[[]]][[[]]][][]][[[]]]][][][]][][][]]][[[][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][[[[][]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][][[][[][]]][[[][]][[]]]]][[][[[][]]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[]]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[][][][[[[[[[[][]][][[][]]][[[][[]][[]][[[]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[[]]][[]]][[][]][[[[[]]][[[]][[[[]][[[[[[[[[[[[]]][[[[]]]]][][[[]][][]][[[]]]]][[][]][[[[[]]][[[][][][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]][[[][[[]]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]][[][]][[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]]]][[[[][[]]][[[[[[[]]][[][]][[[[[[[[[][]][][[]][[[]]]][][[[[]][[[]]]][][[]][][]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[]][[][]][[[[[[[[][]][][[][]]][[[][[]][[]]][[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][]][][[][]][][[[[]][]][[]]][][[[]][[[]]][][]][[[]]]][][[][][[][]]][[[][]]][[]]]]][[][]][[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[]]][[[[[[[]]][[][]][[][]][][[]][[[]]]][][[[[]][[[]]]][][[]][][]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][][[][]]]][[][]][[[[[]][[[]][[[]][][[[[]]]][[[]]]][][][[[[][]][][[][]]][[]]]][[[[[[[]][[[]][][]][[[]]]][]][][][][[][]]][[[]]][]][[]]][[[[][]][[]]][[][]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]]][][]][[[]]]][][][][[][]]][[][]][[[][[[][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]][[]][]][[[[[[]]][[[[[[]]][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]]]][[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[]]][[][]][][[[][]][[]]][[][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[[[[[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[]][]][[]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[][[[][][][][[][]]][[[][]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][[[[]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]]][[][]][[[[[]]][[[][[[]]]][[[[[[[]]][[[]]][[[]]][][]][[[]]]][][][][[][][[[[[]]][[[]]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]][][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][][[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]]][][[][]]][[[][]][[[]][[[[[[[[][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]]][[]][]][]][[][]][[[[[[[]]][[[][]][[[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[]]][][[]][[[[]][[[[[[[]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[[[[[[[[[[[[[[[[[[]]][[[]]][[[]]][][]][[[]]]][][][]][[][]]][[[][]]][[]]]][]]]]]]]]]]]]]]][][][][[][][]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[[]]]][[[[[[][[[]]][[[]]][[[]]]]]][[]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][][]][[[][]][[[][]]][[[][[[[[[]]]][[]]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]][[]][][]][][]][[[[[[]]][][[][]]][[[][]][[]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[]][][[[][[[]][][][[[[[]][[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]][][][][[][]]][[[][[[[][[[][]][][[][]]][[[][]][[]]]]][[[][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][]][[[[]]]][[[[[[[]][[[]][][]][[[]]]][]][][][][[][]]][[[]][]][[]]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][][[[]][[[]]][][]][[[]]]]][[][]][[[[[]]][[[][][][][[][]]][[[][]][[]]]][[[[[[[[][]][][[][[[[[]][[[]]]][][[[[]][[[]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][[[[][]][[[[]]][[][[[[]]]]][]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][[]]][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]]][]]][[[][]]][[]]]][][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[]][[][]][[[[[[[[][]][][[][[[]][[[]]]][[[]]][]]][[[]]][[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[]]][[[]][][]]][]]][[][[[[]]]][[[[[[][[[[]]][[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][]]][[[][]][[[]][[[]]]][[[]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[[[[]][[[]][][]][[[]]]][[]][][][][[][]][]][[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]][[][]]][[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[]]][[[[[[[]]][[][]][[[[[[[[[]][[[]]]][][[]][][]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[[]]][[]]][[][]][[[[[]]][[[]][[[[]][[[[[[[[[[[[]]][[[[]]]]][][[][[]]]][[[]][][]][[[]]]]][[][]][[[[[]]][[[][][][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][]][[[[[[[]]][[[][][][[[[[[[[][]][][[][[[[[]][[[]]]][][[[[]][[[]]]][][][]]][[[]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]]][[[][[[[[[]]]][[]]]][[][[[]][[[]][][]][[[][[]]]][[[[[]][][[]]]][][][[]]]]]][]][[[[[[[[][]][][[][]]][[[][]][[]]][[]][][]][][]][[[[[[]]][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]]]]][[[[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][]][[[[[[[[][]][][[][[[[[]][[[]]]][][[[[]][[[[]][[[[[[]]]][][][][[][]]][[[][]][[]]][]]]][[[]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]]]]]][[]][]][]][[][]][[[[[[[]]][[[][]][[[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[]]][][[]][[[[]][[[[[[[]]][[[][[[[[[[][[[]][][]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][][[[][]]][][[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]][][][][][[[][]]][[[][]][][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]]][][]][[]][[[]]]][[[[[[][[[[]][[[]]]][[][]][[[[[]]][[[[][]]][[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[][[[]][[[]][][]][[[][[[][][][][[][]]][[[][]][[]]][[[][][][][[][[[]]]][[[[[[[]][[[]][][[]][[[]]]][]][][][][[][]][]][[]]][[[[]][[[]]]]][[[[[[][[[[]][[[]]]]]]][[[][]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[]][[[]][][]][[[]]]][][][][][[][]]][[[[][]][[]]]][[[]][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[[[[]][[[]][[[]]]][[[[[[][[[[]][[[]]]][[][]][[[[[]]][[[[]]][][][[][]]][[[[][]][[]]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[[][[[]]]][[[[[[][[[[]][[[]]]]][[[[[[]]]][[]]]][[][]][[[[[[[[][]][][[][]]][[[][[]][][]][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]]]][[]]]][][][][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[[]][[][]][[[[[[[[][]][][[][[[]][[[]]]][[[]]][]]][[[]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][][][][][[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][]][][][[[][]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]]][[[[]]]][[[[[[][[[[]][[[[]]]][[[[[[][[[[]][[[]]]][[[[[[]]][[[[]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]]]][[[[[[][[[[]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]][[][]][[[[[[[[[[[[]]][[[[]]]]][]]][[[]][][]][][[]]]][][][][[][]]][[[][][[[][]][][[][]][][[[][]][[]]][]][[]]][]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[[]]][[[]]][[[]]][][]][[[]]]][][][]][[][]]][[[][]]][[]]]][]]][][[][]]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[]]]][[[[[[][[[[][][[[]]]][[][]][[[[[]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[[][[[[[[]]]][[]]]][[][]][[[[[[[[][]][][[][]]][[[][[]][][]][]][[[[]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]]][[[]]]][[[[[[][[[[]][[[]]]][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]]][[[]]]][[[]]][][]][[[]]]][][][][[][]]][[[[[[[[[]]][[[]]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]][][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]][[][]][][]][[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[[]][[[]][][]][[[]]]][][][][][[[][]]][[[][]][][]]]][][[[][]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]]][[]][]][]][[][]][[[[[[[]]][[[][]][[[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[]]][[[]][[][[]][[[[[[[]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]][][][][[][]]][[[][[[[][[[][]][][[][]]][[[][]][[]]]]][[[[][[[]][[[]][][]][[[]]]][][][][][[][]]][[[[][]][[]]]][[[]][][]][][]][[[[]]][[][[[[][]]]][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[]]]][[[[[[][[[[][[[[[]]][[][]][[[[[[[[][]][][[][[[[[]][[[]]]][][[[[]][[[]]]][]][[[]]]][[][]][[[[[]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[][][[][]]][[[][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][]][[[[[[][]]][[[][[[]]][[[][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][][[][]][]]][[]][]][[[[[]][[[]][[[]][][]][[[]]]]][[][]][[[[[]]]][[[][][][][[][]]][[[][]][[]]]][[[[[[][]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]][[][]][[[[[[[[[[[[]]][[[[]]]]][]]][[[]][][]][][[]]]][][][][[][]]][[[][][[[][]][][[][]][][[[][]][[]]][]][[]]][]][[[[[]]][[]][[[]][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]]]]][[[[[]]][]][[[[][]][[[][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][[[[]][[][]][[[[[[[[][]][][[][[[]][[[]]]]][[[]]][]]][[[]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]]]][[[[[[][[[]][]][][[][]][][[[]][]][[]]][][[[]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[[[][]][[[[[[]]][[[]][][]]][]]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]]][[][]][[[[[[[[][]][][[]][[[]]]][][[[[]][][][]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]][][][][][[][]]][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][][[[[[[][[[][]][][[][]]][[[][]][[]]]]][[[][[[[]]]][[]]]][][][[]][[[]]]][][][][][[][]]][[[][]][][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][][][[[][[]]]][[[[[]][][[[[[[]]]][[]]]][][][[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][]][[[[[]][[[]][[[]][][]][[][]]]][][][][[][][]][[[[][]][][[][]]][[[][]][[]]]]][[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]][[][]][[[[[[[]]][[[][][][[[[[[[[][]][][[][[[[[]][[[]]]][][[[[]][[[]]]][][][]]][[[]][[[]]][[[[[[][[[[]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]]][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]][[][]][[[[[[[[[[[[]]][[[[]]][[[]][[[]][][]][[[]]]][][][][][[][]]][[[]]][]]][[[]][][]][][[]]]][][][][[][]]][[[][][[[][]][][[][]][][[[][]][[]]][]][[]]][]][[[[[]]][[]][[[]][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[][[]]]][[[[[[[]][[[]][][]][[[]]]][]][][][][[][]][]][[]]][]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[]]]][[[[[[][[[[[]][[[]]]][[][]][[[[[]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]]][][][][[][][][][[[][]][[]]]][[[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][][][[[[[[]]]][[]]]][][][[]][]][[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[]][][][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][][[[[[[][[[][][[[[]][[[[[[[[[[[[[[[[[[[]]][[[]]][[[]]][][]][[[]]]][][][]][[][]]][[[][]]][[]]]][]]]]]]]]]]]]]]][][][][[][][]][[[][]][[]]]][][[][]]][[[][]][[]]][[[[]]]][[]]]][][][[]][[[]]]][][][][][[][]]][[[][]][][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][][][[[[[[[[][]][][[][]]][[[][[[[[[[[[[]]][[[]]][[[]]][[[]]]]][[[[[[][[[[]][[[]]]][][]][[[]]]][][][]][[][]]][[[][]]][[]]]][]]][][[][]]]][[]]][[]][[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][][[][]][]]][[]][]][[[]][[[]][][]][[[]]]]][[][]][[[[[]]]][[[][][][][[][]]][[[][]][[]]]][[[[[[][]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]]][[[[[[][[[[]][[[]]]][[[[]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][][[[][][[][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]]]]][[[][[[][[[[]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][]][][[]][]][][[[]][]][[]]][][[[]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][[]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][]][][[][]][][[[]][]][]]][][[[]][[[]]][][]][[[]]]][]]][[]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][]][][[][]][][[[]][]][[]]][][[[]][[[]]][][]][[[]]]][][[][][[][]]][[[][]]][[[[[]]]]][[[[[]]][]][[[[[][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]]]][[[[[[][[[]][]][][[][]][][[[]][]][[[]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][[[[[[]]]][[]]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]][[]][][]][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[[]]][[][]][[[[[[[[[[[[]]][[[[]]]]][]]][[[]][][]][][[]]]][][][][[][]]][[[][][[[][]][][[][]][][[[][]]]][]][[]]][]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]][[][]][[[[[[[[[[[[]]][[[[]]]]]][]]][[[]][][]][][[]]]][][][][[][]]][[[][][[[][]][][[][]][][][[][]][[]]][]][[]]][]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][]][[[[[]][[[][[[[]]]][[[]]]][][][[[]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[]]]][[]]][][][][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][]][[[[[]]][[[[][[[[[[]]]][[]]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]][[]][][]][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[][[[]][[[]]]]][[[[[[][[[[]][[[]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][][[][]]][]][[[]]][[][]][][[[][]][[]]][[][[[[[]][][[[]][[[]]][][]][[[]]]][][][][[][[[[]]][[][]]][[][]][[[][[[][]]][[]]]]][[[][]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][]][[[[[[[[][]][][[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]]][[[][[[[[[]]]][[]]]][[][[[]][[[]][][]][[[][[]]]][[[[[]][][[]]]][][][[]]]]]][]][[[[[[[[][]][][[][]]][[[][]][[]]][[]][][]][][]][[[[[[]]][][[][]]][[[][]][[[]][[[]]]][[[[[[[]]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]][[][]]][[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[]][[][]][[[[[[]]][[[]][][]]][]]][[][[[[]]]][[[[[[][[[[]]][[[]]]]]]]][[[[[[[][]][[][]][[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[[]]][[[[[[[]]][[][]][[[[[[[[[]][[[]]]][][[]][][]][[[[]]][[][]][[[[[[[[[]][[[]]]][][[]][][]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[[]]]][[[[[[][[[[]][]]][[]][]][]][[][]][[[[[[[]]][[[][]][[[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[]]][][[]][[[[]][[[[[[[]]][[[[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[[[[][[[][]][][[][]]][[[][]][[]]]]][[[][[[[]]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][]]]][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[][][[][]][][[[][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[[[]][[[]]][[[][[[][[[[]]][[]]][[][]][[[[[]]][[[]][[][[]][[[[[[[[[[[[]]][[[[]]]]][]][[[[[[[][]][][[][]]]][[][]][[[[[]][[[]][[[]][][[[[]][[][[[[]]]][[[[[[][[[[]]][[[]]]]]]]]][[[]]]][][][[[[][]][][[][]]][[[][]][[]]][[][]][[]]][]]]][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[]]][[[]][][]]][[[][[[]][][][[[[[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]]][][][][[][][]][[[][]][[[][]]][[[][[[[[[]]]]][[]]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]][[]][][]][][]][[[[[[]]][][[][]]][[[][]][[]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][][][[[[[[[[][]][][[][]]][[[][[[[[[[[[[]]][[[]]][[[]]][[[]]]]][[[[[[][[[[]][[[]]]][][]][[[]]]][][][]][[][]]][[[][]]][[]]]][]]][][[][]]]][[]]][[]][[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]]][[]][[[[[[][[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[[[[]]]]][[]]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]][[]][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]]][][][][[][][][][[[][]][[]][[[[]]]]][[[[[[][[[[]][[[]]]][[[[]][[[[]]][[[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][]][][[][]][][[[[]][]][[]]][][[[]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]][[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]]][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[[[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]]]][[[]]][[[]]][][]][[[]]]][][][]][[][]]][[[][]]][[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][]][[]][]]][[[[[[[]]][[[[][]][[[[[]]][[[][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[]][]][[[[[[[]]][[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]]]][[[[[[][[[]][]][][[][]][][[[]][]][[[]][[[]]][][]][[[]]]][][][][[][]]][[[[[[[]]]][][][][[][][]][[[][]][[[][]]][[[][[[[[[]]]]][[]]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]][[]][][]][][]][[[[[[]]][][[][]]][[[][]][[]]][[]]]][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[]]][[][]][[[[[[[]]][[[][][][[[[[[[[][]][][[][[[[[]][[[]]]][][[[[]][[[]]]][][][]]][[[]][[[]]][[[[[[][[[[]][[[]]]][[[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][[[[]][[[]]]][[[[[[][[[[]][[[]]]]]][[[[[]]][[[][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]]][[][]][[[[[]]][[[][][][][[][]]][[[]][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][[[[][[[]]]][[[[[]][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][[[[][[[][]][][[][]][]]][[]][]][[[]][[[]][][]][[[]]]]][[][]][[[[[]]]][[[][][][][[][]]][[[][]][[]]]][[[[[[][]][[]]][]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[[][[[]]][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][]][[[[[[[[[[[[]]][[[[[[[[[[[[[[]]][[[]]][[[]]][][]][[[]][[[]]]]][[[[]][]][][[][]][][[[]][]][[]]][][[[]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]][[]][[[[[[[[[]]]][][][]][[][]]][[[][]]][[]]]][]]][][[][]]]][[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[]]][[[]]][[[]]][][]][[[]]]][][][][[][]]][[[[[[[[[]][[]]][[[[[][]][[[[[[]]][[[]][][]]][]]]]]]]]]][[[]]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]][][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[][]][][[][]]][[[][]][[]]]]]][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[]][]][[]]][[[]][[[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[][[[][]][[][[[[]]]][[[[[[][[[[]]][[[]]]]]]]]]]]][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[[[[]]]]]][[]]]][[][]][[[[[[[[][]][[][[][]]][[[][]][[]]][[]][][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][][[[]][][]][[[]]]]][[][]][[[[[]]]][[[]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][][][][][[][]]][[[][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[[]]]][[[[[[][[[[]][]]][[]][]][]][[][]][[[[[[[]]][[[][]][[[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[]]][][[]][[[[]][[[[[[[]]][[[[[]]]][[[[]]][[][[[[]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]][]][][][][[][]]][[[]][]][[[[[[]]][[][[[[][[[][]][][[][]][]]][[]][]][[[]][[[]][][]][[[]]]]][[][]][[[[[]]]][[[][][][][[][]]][[[][]][[]]]][[[[[[][]][[]]][]]]][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[][[[[[]]][[][]][[[[[[[[][]][][[]][[[]]]][][[[[]][[[]]]][][[]][]]]][[[[[[][[[[][][[[]]]][[][]][[[[[]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][][[][]]]][[][]][[[[[]][[[]][[[][[]]][[[][[]]]][[[[[[[]][[[]][][]][[[]]]][]][][][][[][]][]][[]]][]]]]]][][[[[]]]][[[]]]][][][[[[][]][][[][]]][[]]]][[[[[[[]][[[]][][]][[[]]]][]][][][][[][]]][[[]]][]][[]]][[[[][]][[]]][[][]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]][[[[][[[[]]]][[[[[[][[[[]]][[[]]]]]]]][[[]]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[[[]][[[]]]]]][[]][][]][[[]]]][][][][][[][]]][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][]][][[][]][][[[[]][]][[]]][][[[]][[[]]][][]][[[]]]][][[][][[][]]][[[][]]][[]]]]][[][]][[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][][[]]]][][[]]][[[[[[[]]][[][]][[][]][][[]][[[]]]][][[[[]][[[]]]][][[]][][]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[[[[[[][[[][][[[]][][]][[[]]]]][[][]][[[[[]]]][[[]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[]]][]]][][][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[][[[]]][[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[][][[[[[][[[][]]][][[][]]][[[][]][[]]]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]][]][][[[][[]][[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]]][][][][][[][]]][[[]][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[][[[[[[]][]][][[][]][][[[[]][]][[]]][][[[]][[[]]][][]][[[]]]][][[][][[][]]][[[][]]][[]]]]][[][]][[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[]]][[[[[[[]]][[][]][[][]][][[]][[[]]]][][[[[]][[[]]]][][[]][][]][[[[][[]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][][[]]][[[]]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][[[]]]][[[[[[][[[[[[]][[[]]]][[[[[[][[[[]][[[]]]][]][[[]]]][[][]][[[[[]]][[[[]]][][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][[[[]][[[[][[[[]][[[]]]][[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[]]]]][[]]]][[[[[[[]][[[]][][]][[[]]]][[]][][][][[][]][]][[]]][") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]][[][]][][[[[[[[[[[]]][[][]][[[[[[[[[[[[]]][[[[]]]]]][]]][[[]][][]][][[]]]][][][[[]]][[[]]]]][[]]]][[[[[[[]][[[]][][]][[[]]]][[]][][][][[][]][]][[]]][][[][]]][[[][][[[][]][][[][]][][][[][]][[]]][]][[]]][]][[[[[]]][][]][[]]][[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[[[[]]]][[[]]][[[]]][][]][[[]]]][][][]][[][]]][[[][]]][[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[]]][[[]][][]]][[[][[[]][][][[[][[]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[[[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]]][[[]]]][[[[[[][[[[]][[[[]]]][[[[[[][[[[][[[[][]]][[[]][[[]]]][[[[[[]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]]][[[][]]][[]]][[[[]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][[[]][][]]][]][][[]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]][][][][][[][]]][[[]]][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]][[[]]][[][]][][[]][[]][]][[]]][[[[][]][[]]][[][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]][[][][][[[[[[[[][]][][[][]]][[[][[]][][]][[[]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[][][[][]][][[[][]]][[[[]][[[]][][]][[[]]]][][][][][[][]]][[[][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]][][][][[][]]][[[][[[[][[[][]][][[][]]][[[][]][[]]]]][[[[][[[]][[[]][][]][[[]]]][][]][[]][]]][[[[[[[]]][[[][][][[][]]][[[[][]][[]]]][[[]][][]][][]][[[[]]][[][[[[][]]]][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("]]][[][]][[[[[]]][[[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]]][[[]]]][[[[[[][[[[]][[[[]]]][[[[[[][[[]][]][][[][]][][[[]][]][[]]][][[[]][[[]]][][]][[[]]]][][[][][[][]]][[[][]]][[]]][[[[]][[[]]]][[[[[[]]][[[[]]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]]]]][[[[[[][[[[]][[[][][[[[[][]][[[[]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[[]]][[]]][[][]][[[[[]]][[[]][[[[]][[[[[[[[[[[[]]][[[[]]]]][][[][[]]]][[[]][][]][[[]]]]][[][]][[[[[]]][[[][][[[[][]]][[[][[[[[[]]]][[]]]][[][[[]][[[]][][]][[[][[]]]][[[[[]][][[]]]][][][[]]]]]][]][[[[[[[[][]][][[][]]][[[][]][[]]][[]][][]][][]][[[[[[]]][][[][]]][[[][]][[]]]][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[[[[][[[[][[[]]][]]][[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][][[][]]]][[][]][[[[[]][[[]][[[][[]]][[[][[]]]][[[[[[[]][[[]][][]][[[]]]][]][][][][[][]][]][[]]][]]]]]][][[[[]]]][[[]]]][][][[[[][]][][[[][]]][[]]]][[[[[[[]][[[]][][]][[[]]]][]][][][][[][]]][[[]]][]][[]]][[[[][]][[]]][[][]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][]][][[][]][][[[]][]][[]]]][][[[]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[]]][[][]][[[[[[[]]][[[]][[][[[[[[]][[[]]][[[[[[][[[[]][[[]]]][[[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]]][[[]][][[[[]][[[]]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[][]][[[[[[[[[[[[]]][[[[[[[[[[[[[[]]][[[]]][[[]]][][]][[[]][[[]]]]][[[[]][]][][[][]][][[[]][]]][[]]][][[[]][[[]]][][]][[[]]]][][][][[][]]][[[][]]][[]]][[]][[[[[[[[[]]][[]]]][[[[[[[]][[[]][][]][[[]]]][]][][][][[][]][]][[]]][][][][]][[][]]][[[][]]][[]]]][]]][][[][]]]][[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]]][][][][][[][]]][[[[[]]][][[[]][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[][]][[[]][][]][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("][][[][]]][[[][]][[]]][[") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]][[[[[][]][[[[[[[[[][]][][[]]]][[[]]]][][][[[[][]][][[][]]][[][[[[[[]]]]][[]]]][[][]][[[[[[[[][]][][[][]]][[[][[]][][]][[[][]][[]]][[][]][[]]][]]]][[[]][][]]][]]]]]]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[][[[[[[]]][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[]]]][][][][[][]]][[[][[[[][[[][]][][[][]]][[[][]][[]]]]][[[[][[[]][[[]][][]][[[]]]][]][][[][]]][[[[][]][[]]]][[[]][][]][][]][[[[]]][[][[[[][]]]][]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][]][][][]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[][]][[[[[]]][[][][[][]]][[[][]]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]][[][]][[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][][]][][[]][[[]]]][][[[[]][[[]]]][][[]][][]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[]][]][[][]][[[[[[[[][]][][[][]]][[[][[]][[]]][[][]]][[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[]]][[[[[[[]]][[][]][[[[[[[[[]][[[]]]][][[]][][]][[[[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[]]]][[[[]][[][]][[[[[[[[[[]]]][[[[][]][][[][]]][[[][[]][[]]][[]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]][[]][[]][]][[[[[[[]][[[[[[]]][[][]][[[[[[[[]]][[][[[[][[[][]][][[][]][]]][[]][]][[[]][[[]][][]][[[]]]]][[][]][[[[[]]]][[[][][][][[][]]][[[][]][[]]]][[[[[[][]][[]]][]]]][][]][[[]]]][][[[[]][[[[[[[[[]]][[[]]][[[]]][][]][[[]]]][[][][]][[][]]][[[][]]][[]]]][]][[[[]]][[][[[[][]][[[[]]][[][[[[]]]]][]]][]]][][]][][[[[][[[[]]]][][][][[][][]][[[][]][[]]][[]]][[[[]][][]][[[]]]][][][][[][]]][[[][]][[]]][]][[[[[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[[][]][]][[][][][[[[[[[[][]][][[][]]][[[][[]][[]][]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[][]][][[][[][]]][[[[]][[][]]][[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[]][[][]][[[[[[]]][[[]][][]]][]]][[][[[[]]]][[[[[[][[[[]]][[[]]]]]]]][[[[[[[][]][[][]][[[[[[[][]][][[]][[[[[]][[[]]]][][[[[]][[[]]]][][[[]]][[[[[[[]]][[][]][[[[[[[[[]][[[]]]][][[]][][]][[[[]]][[][]][[[[[[[[[]][[[]]]][][[]][][]][[[[]][]][[]]]]][[][[[][]]][[]]][]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][]][[]][[[[[]]]][][][][[][]]][[[][]][[[]][[[]]]][[[]]][[]]]]]][[[[[[[]]][[[[][]][[[[[]]][[[][[[]]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][[[[[[]]]]][[]]]][[][]][[[[[[[[][]][][[][]]][[[][]][[]]][[]][][]][[[]][[[]][[[]]]][[[[[[][[[[[[]][[[]]]][[[[[[][[[[]][[[]]]][]][[[]]]][[][]][[[[[]]][[[[]]][][][[][]]][[[][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[]][[[]][][]][[[[][][][[][]]][[[]][]][[]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[][]][[[[[[[][[[[[[]]]][[][]]][[][]][[[[[[[][]][][[][][[[[[[]]]][[]]][][][][][]][]]][[[][[]][][]][]]]") == true)){ tests_passed++; } total_tests++;

    if((is_nested("[[[[]]][[[[[[[]]]][[[[]][[][]][[[[[[[[][]][][[][[[]][[[]]]][[[]]][]]][[[]]][[]]]") == true)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


