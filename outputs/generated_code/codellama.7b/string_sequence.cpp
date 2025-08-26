#include <iostream>
#include <string>
using namespace std;

string string_sequence(int n) {
    string str = "";
    for (int i = 0; i <= n; i++) {
        str += to_string(i) + " ";
    }
    return str;
}