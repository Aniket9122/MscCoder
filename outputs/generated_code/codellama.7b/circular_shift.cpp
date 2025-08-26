#include <iostream>
#include <string>
using namespace std;

string circular_shift(int x, int shift) {
    string str = to_string(x);
    if (shift >= str.size()) {
        return reverse(str);
    } else {
        return str.substr(shift, str.size() - shift) + str.substr(0, shift);
    }
}