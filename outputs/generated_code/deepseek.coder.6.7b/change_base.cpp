#include<bits/stdc++.h>
using namespace std;

string change_base(int x, int base){
    string result = "";
    
    while (x > 0) { 
        char digit = '0' + (x % base);
        if(digit > '9'){ // For bases greater than 10.
            digit += ('A' - ':'); // ASCII value of A is 65 and for : it's 58, so difference is 7 which we add to get the required character in alphabets after 9(9+7=16, 'P').
        }
        result = digit + result;
        x /= base;
    }
    
    return (result == "") ? "0" : result; // If number is zero.
}