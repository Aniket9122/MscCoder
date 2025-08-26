int fib4(int n) {
    if (n < 2){   // If n is less than 2, return 0. This handles base cases for the function.
        return 0;
    } else if (n == 2){   // If n equals to 2, then return 2.
        return 2;
    }
    
    int a = 0;  
    int b = 0; 
    int c = 2; 
    int d;     
        
    for (int i=4; i<=n ;i++) { // Start looping from the fourth term onwards.
        d = a + b + c;         
        a = b;                  
        b = c;                   
        c = d;                    
     } 
     
    return d;                     
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

    if((fib4(5) == 4)){ tests_passed++; } total_tests++;

    if((fib4(8) == 28)){ tests_passed++; } total_tests++;

    if((fib4(10) == 104)){ tests_passed++; } total_tests++;

    if((fib4(12) == 386)){ tests_passed++; } total_tests++;

    if((fib4(5) == 4)){ tests_passed++; } total_tests++;

    if((fib4(8) == 28)){ tests_passed++; } total_tests++;

    if((fib4(10) == 104)){ tests_passed++; } total_tests++;

    if((fib4(12) == 386)){ tests_passed++; } total_tests++;

    if((fib4(1) == 0)){ tests_passed++; } total_tests++;

    if((fib4(2) == 2)){ tests_passed++; } total_tests++;

    if((fib4(3) == 0)){ tests_passed++; } total_tests++;

    if((fib4(4) == 2)){ tests_passed++; } total_tests++;

    if((fib4(6) == 8)){ tests_passed++; } total_tests++;

    if((fib4(7) == 14)){ tests_passed++; } total_tests++;

    if((fib4(9) == 54)){ tests_passed++; } total_tests++;

    if((fib4(11) == 200)){ tests_passed++; } total_tests++;

    if((fib4(15) == 2764)){ tests_passed++; } total_tests++;

    if((fib4(20) == 73552)){ tests_passed++; } total_tests++;

    if((fib4(19) == 38158)){ tests_passed++; } total_tests++;

    if((fib4(21) == 141776)){ tests_passed++; } total_tests++;

    if((fib4(16) == 5328)){ tests_passed++; } total_tests++;

    if((fib4(17) == 10270)){ tests_passed++; } total_tests++;

    if((fib4(14) == 1434)){ tests_passed++; } total_tests++;

    if((fib4(18) == 19796)){ tests_passed++; } total_tests++;

    if((fib4(22) == 273282)){ tests_passed++; } total_tests++;

    if((fib4(0) == 0)){ tests_passed++; } total_tests++;

    if((fib4(13) == 744)){ tests_passed++; } total_tests++;

    if((fib4(23) == 526768)){ tests_passed++; } total_tests++;

    if((fib4(24) == 1015378)){ tests_passed++; } total_tests++;

    if((fib4(25) == 1957204)){ tests_passed++; } total_tests++;

    if((fib4(26) == 3772632)){ tests_passed++; } total_tests++;

    if((fib4(27) == 7271982)){ tests_passed++; } total_tests++;

    if((fib4(28) == 14017196)){ tests_passed++; } total_tests++;

    if((fib4(29) == 27019014)){ tests_passed++; } total_tests++;

    if((fib4(30) == 52080824)){ tests_passed++; } total_tests++;

    if((fib4(31) == 100389016)){ tests_passed++; } total_tests++;

    if((fib4(32) == 193506050)){ tests_passed++; } total_tests++;

    if((fib4(33) == 372994904)){ tests_passed++; } total_tests++;

    if((fib4(34) == 718970794)){ tests_passed++; } total_tests++;

    if((fib4(35) == 1385860764)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


