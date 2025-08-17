#include<iostream>
#include<string>
using namespace std;

bool is_palindrome(const string& text){
    int begin = 0;
    int end = text.length() - 1;
    
    while (begin < end) {
        if (text[begin] != text[end]) {
            return false;
        }
        ++begin;
        --end;
    }
    // If we got this far, the string is a palindrome.
    return true;
}