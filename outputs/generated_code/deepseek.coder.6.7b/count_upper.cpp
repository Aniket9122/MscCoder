#include <iostream>
#include <string>
using namespace std;

int count_upper(string s) {
    int cnt = 0;
    for (int i=0; i<s.size(); i+=2){ // traverse through the string with a step of 2 to check letters at even indices only
        if (s[i] >= 'A' && s[i] <= 'Z') { // checks whether uppercase letter is found in an even indexed position
            switch(s[i]) {
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U': cnt++;  // if the character at even index is a vowel, increment count by 1
                  break;  
            }
        }        
    }
    return cnt;
}