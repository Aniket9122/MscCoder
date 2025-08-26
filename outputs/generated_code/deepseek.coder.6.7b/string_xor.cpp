#include<iostream>
#include<string>
using namespace std;

// function for xor operation between two bits
char XOR(char a, char b) {
    return ((a - '0') ^ (b - '0')) + '0';
}

string string_xor(string a, string b) {
    int n = a.size();  // size of input strings
    string result(n, '0');   // resulting xor string initialised with all zeros
    
    for (int i = 0; i < n; ++i) {
        result[i] = XOR(a[i], b[i]);  // perform bitwise xor operation on each pair of bits
    }
    
    return result;
}

// Unit tests
void unitTests() {
    cout << (string_xor("111000", "101010") == "010010") << endl;  // output should be 1 if true and 0 otherwise
    cout << (string_xor("1", "1") == "0") << endl;  
    cout << (string_xor("0101", "0000") == "0101") << endl;
}

// Driver code
