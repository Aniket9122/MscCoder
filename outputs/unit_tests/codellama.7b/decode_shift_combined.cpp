#include <iostream>
#include <string>
using namespace std;

string encode_shift(string s) {
    string out;
    for (int i = 0; i < s.length(); ++i) {
        int w = ((int)s[i] + 5 - (int)'a') % 26 + (int)'a';
        out += (char)w;
    }
    return out;
}

string decode_shift(string s) {
    string out;
    for (int i = 0; i < s.length(); ++i) {
        int w = ((int)s[i] - 5 + (int)'a') % 26 + (int)'a';
        out += (char)w;
    }
    return out;
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

        string encoded_str = encode_shift(str);
        if((decode_shift(encoded_str) == str)){ tests_passed++; } total_tests++;

    }

    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


