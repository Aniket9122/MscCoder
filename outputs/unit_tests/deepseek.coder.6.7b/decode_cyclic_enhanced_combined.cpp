#include <string>
#include <algorithm> // for std::rotate and std::next
using namespace std;

// Function to encode the string
string encode_cyclic(const string& s) { 
    int l = s.length();
    
    string output;
    
    for(int i = 0; i * 3 < l; ++i){
        // Substring of length 3
        auto str = s.substr(i*3, min(3, static_cast<int>(s.length()) - i*3));
        
        if (str.size() == 3) {
            // Rotate elements in each group to the right by one position 
            rotate(str.begin(), next(str.begin()), str.end());
        } 

        output += str;
    }  

    return output;
}

// Function to decode the string
string decode_cyclic(const string& s) {
    int l = s.length();
    
    string output;
    
    for (int i = 0; i * 3 < l; ++i){
        // Substring of length 3
        auto str = s.substr(i*3, min(3, static_cast<int>(s.length()) - i*3));
        
        if (str.size() == 3) {
            // Rotate elements in each group to the left by one position 
            rotate(str.rbegin(), next(str.rbegin()), str.rend());
        } 

        output += str;
    }  
    
    return output;
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

    
    for (int i=0;i<100;i++)
    {
        int l=10+rand()%11;
        string str="";
        for (int j=0;j<l;j++)
        {
            char chr=97+rand()%26;
            str+=chr;
        }

        string encoded_str = encode_cyclic(str);
        if((decode_cyclic(encoded_str) == str)){ tests_passed++; } total_tests++;

    }

    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


