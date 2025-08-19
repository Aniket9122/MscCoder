#include<vector>
#include<algorithm>
using namespace std;

// Function to generate Collatz sequence of given number n 
vector<int> collatz(int n) {
    vector<int> result{n};
    int temp = n; // use a temporary copy
    while (temp != 1) {
        if (temp % 2 == 0)
            temp /= 2;
        else
            temp = 3 * temp + 1;
        
        result.push_back(temp);
     }
    
    return result;
}

// Function to generate odd numbers in the Collatz sequence of given number n
vector<int> get_odd_collatz(int n) {
    vector<int> collatzSeq = collatz(n);
    vector<int> oddCollatzNumbers;
    
    for (unsigned int i = 0; i < collatzSeq.size(); ++i){
        if (collatzSeq[i] % 2 != 0 && find(oddCollatzNumbers.begin(), oddCollatzNumbers.end(), collatzSeq[i]) == oddCollatzNumbers.end()) {
            oddCollatzNumbers.push_back(collatzSeq[i]);
         } 
     }
    
    sort(oddCollatzNumbers.begin(), oddCollatzNumbers.end()); // Sort the result in increasing order
    return oddCollatzNumbers;
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

    if((issame(get_odd_collatz(14) , {1, 5, 7, 11, 13, 17}))){ tests_passed++; } total_tests++;

    if((issame(get_odd_collatz(5) , {1, 5}))){ tests_passed++; } total_tests++;

    if((issame(get_odd_collatz(12) , {1, 3, 5}))){ tests_passed++; } total_tests++;

    if((issame(get_odd_collatz(1) , {1}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


