#include <iostream>
#include <string>

using namespace std;

string encode_cyclic(string s) {
    // returns encoded string by cycling groups of three characters.
    // split string to groups. Each of length 3.
    int l = s.length();
    int num = (l + 2) / 3;
    string x, output;
    int i;
    for (i = 0; i < num; i++) {
        // cycle elements in each group. Unless group has fewer elements than 3.
        x = s.substr(i * 3, 3);
        if (x.length() == 3) {
            x = x.substr(1) + x[0];
        }
        output += x;
    }
    return output;
}

string decode_cyclic(string s) {
    // takes as input string encoded with encode_cyclic function. Returns decoded string.
    int l = s.length();
    int num = (l + 2) / 3;
    string x, output;
    for (int i = 0; i < num; i++) {
        // cycle elements in each group. Unless group has fewer elements than 3.
        x = s.substr(i * 3, 3);
        if (x.length() == 3) {
            x = x.substr(1) + x[0];
        }
        output += x;
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


