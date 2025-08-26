#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string circular_shift(int x, int shift) {
    string s = to_string(x);
    
    if (shift >= s.size()) {  // If rotation is greater than size of number return reverse 
        reverse(s.begin(), s.end());
        return s;
    } else {                   
       rotate(s.rbegin(), s.rbegin() + shift, s.rend());
       return s;
   }
}

