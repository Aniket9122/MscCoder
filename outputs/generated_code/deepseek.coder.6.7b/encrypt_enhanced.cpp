#include <iostream>
using namespace std;

string encrypt(string s){
    string result = "";
    for(char& c : s) {
        if (islower(c)) 
            // Rotate letters down by two places twice
            result += ((c - 'a' + 2 * 2 * 2) % 26 + 'a');
        else if (isupper(c)) 
            // Rotate letters down by two places twice
            result += ((c - 'A' + 2 * 2 * 2) % 26 + 'A');
    }
    return result;
}

