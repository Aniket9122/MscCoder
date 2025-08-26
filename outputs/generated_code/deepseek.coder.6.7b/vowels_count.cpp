#include<iostream>
#include<cctype>
using namespace std;

int vowels_count(string s) {
    int count = 0;
    string vowels = "aeiou";
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);  // convert to lowercase
    
    for (char& c : s) {
        if (vowels.find(c) != string::npos) {  // check if the character is a vowel or not
            count++;
        }
    }
    
    if (s[s.length()-1] == 'y'){   // special case handling for 'y' at end of word
      count++;
    }
    
    return count;
}