#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(n + 1);
    if (n >= 0){ 
        result[0] = 3; // tri(1)=3
    }
    if (n >= 1){ 
        result[1] = result[2] + result[0]; // tri(2)=2
    }
    
    for (int i = 3; i <= n; i++) {
        int j = i - 1;
        if ((i % 2) == 0){
            while((j > 0 ) && (result[j] != 0)){
                result[j] += i / 2 ; // tri(n)=1 + n/2, if n is even
                j--;
            }
        }
        else{
           result[i] = result[i - 1] +  result[i - 2]  + result[i - 3];//tri(n)= tri(n-1) + tri(n-2) + tri(n-3), if n is odd.
        }
    }
    
   return result; // returns vector of first n + 1 Tribonacci numbers
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

    if((issame(tri(3) , {1, 3, 2, 8}))){ tests_passed++; } total_tests++;

    if((issame(tri(4) , {1, 3, 2, 8, 3}))){ tests_passed++; } total_tests++;

    if((issame(tri(5) , {1, 3, 2, 8, 3, 15}))){ tests_passed++; } total_tests++;

    if((issame(tri(6) , {1, 3, 2, 8, 3, 15, 4}))){ tests_passed++; } total_tests++;

    if((issame(tri(7) , {1, 3, 2, 8, 3, 15, 4, 24}))){ tests_passed++; } total_tests++;

    if((issame(tri(8) , {1, 3, 2, 8, 3, 15, 4, 24, 5}))){ tests_passed++; } total_tests++;

    if((issame(tri(9) , {1, 3, 2, 8, 3, 15, 4, 24, 5, 35}))){ tests_passed++; } total_tests++;

    if((issame(tri(20) , {1, 3, 2, 8, 3, 15, 4, 24, 5, 35, 6, 48, 7, 63, 8, 80, 9, 99, 10, 120, 11}))){ tests_passed++; } total_tests++;

    if((issame(tri(0) , {1}))){ tests_passed++; } total_tests++;

    if((issame(tri(1) , {1, 3}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


