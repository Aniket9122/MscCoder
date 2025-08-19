#include<iostream>
#include<string>
using namespace std;

// function for xor operation between two bits
char XOR(const char a, const char b) {
    return ((a - '0') ^ (b - '0')) + '0';
}

string string_xor(string a, string b) {
    size_t n = a.size();   // size of input strings
    
    if (n != b.size()) {
        cerr << "Strings are not equal in length" << endl;  // If lengths mismatch, print error message and return empty string
        return "";
    }
        
    string result(n, '0');   // resulting xor string initialised with all zeros
    
    for (size_t i = 0; i < n; ++i) {
        result[i] = XOR(a[i], b[i]);  // perform bitwise xor operation on each pair of bits
    }
        
    return result;
}

// Unit tests
void unitTests() {
    string res1 = string_xor("111000", "101010");
    cout << (res1 == "010010") << endl;   // output should be 1 if true and 0 otherwise
    
    string res2 = string_xor("1", "1");
    cout << (res2 == "0") << endl;        

    string res3 = string_xor("0101", "0000");
    cout << (res3 == "0101") << endl;      
}

// Driver code
