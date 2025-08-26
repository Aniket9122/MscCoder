#include <iostream>
#include <string>
using namespace std;

string string_xor(string a, string b) {
    // Calculate the length of the result string
    int result_length = a.length() > b.length() ? a.length() : b.length();

    // Create an empty string for the result
    string result;
    result.reserve(result_length);

    // Perform XOR operation on each character of the strings
    for (int i = 0; i < result_length; i++) {
        char a_char = (i < a.length()) ? a[i] : '0';
        char b_char = (i < b.length()) ? b[i] : '0';
        result += (a_char ^ b_char);
    }

    return result;
}