#include <iostream>
#include <string>
using namespace std;

string solve(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) { // check if the current character is a letter
            if (islower(s[i])) { // check if the letter is in lowercase
                result += toupper(s[i]); // convert to uppercase
            } else {
                result += tolower(s[i]); // convert to lowercase
            }
        } else {
            result += s[i]; // keep as it is if not a letter
        }
    }
    return result;
}