#include <string>
using namespace std;

bool isNested(const string& str) {
    int stack = 0;
    for (char c : str) {
        if (c == '[') {
            stack++;
        } else if (c == ']') {
            stack--;
        }
    }
    return stack > 0;
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


