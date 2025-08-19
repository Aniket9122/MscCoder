#include<bits/stdc++.h>
using namespace std;

string circular_shift(int x, int shift) {
    string s = to_string(x);
    
    if (shift >= s.size()) { // If rotation is greater than size of number return reverse 
        reverse(s.begin(), s.end());
        return s;
    } else{                   
       rotate(s.begin(), s.begin()+s.size()-shift, s.end());
       return s;
   }
}

