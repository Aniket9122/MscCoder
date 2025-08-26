#include <iostream>
using namespace std;

string encrypt(string s){
    string result = "";
    for (char& c : s) {
        if (islower(c)) 
            result += ((c - 'a' + 2 * 2) % 26 + 'a');
        else if (isupper(c)) 
            result += ((c - 'A' + 2 * 2) % 26 + 'A');
    }
    return result;
}