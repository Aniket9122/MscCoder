#include <iostream>
#include <vector>
using namespace std;

vector<int> f(int n) {
    vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            result[i] = factorial(i);
        } else {
            int sum = 0;
            for (int j = 1; j <= i; ++j) {
                sum += j;
            }
            result[i] = sum;
        }
    }
    return result;
}

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
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

    if((issame(f(5) , {1, 2, 6, 24, 15}))){ tests_passed++; } total_tests++;

    if((issame(f(7) , {1, 2, 6, 24, 15, 720, 28}))){ tests_passed++; } total_tests++;

    if((issame(f(1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(f(3) , {1, 2, 6}))){ tests_passed++; } total_tests++;

    if((issame(f(5) , {1,2,6,24,15}))){ tests_passed++; } total_tests++;

    if((issame(f(7) , {1,2,6,24,15,720,28}))){ tests_passed++; } total_tests++;

    if((issame(f(1) , {1}))){ tests_passed++; } total_tests++;

    if((issame(f(3) , {1,2,6}))){ tests_passed++; } total_tests++;

    if((issame(f(0) , {}))){ tests_passed++; } total_tests++;

    if((issame(f(2) , {1,2}))){ tests_passed++; } total_tests++;

    if((issame(f(4) , {1,2,6,24}))){ tests_passed++; } total_tests++;

    if((issame(f(6) , {1,2,6,24,15,720}))){ tests_passed++; } total_tests++;

    if((issame(f(8) , {1,2,6,24,15,720,28,40320}))){ tests_passed++; } total_tests++;

    if((issame(f(10) , {1,2,6,24,15,720,28,40320,45,3628800}))){ tests_passed++; } total_tests++;

    if((issame(f(12) , {1,2,6,24,15,720,28,40320,45,3628800,66,479001600}))){ tests_passed++; } total_tests++;

    if((issame(f(11) , {1,2,6,24,15,720,28,40320,45,3628800,66}))){ tests_passed++; } total_tests++;

    if((issame(f(9) , {1,2,6,24,15,720,28,40320,45}))){ tests_passed++; } total_tests++;

    if((issame(f(13) , {1,2,6,24,15,720,28,40320,45,3628800,66,479001600,91}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


