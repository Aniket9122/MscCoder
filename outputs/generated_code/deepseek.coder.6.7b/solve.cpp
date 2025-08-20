#include<iostream>
#include<string>
using namespace std;

string solve(string s){
    for (int i=0; i<s.length(); ++i) {
        if (isalpha(s[i])){
            if (islower(s[i]))
                s[i] = toupper(s[i]);
            else 
                s[i] = tolower(s[i]);
        }
    }
    
    // If no alphabets are found, reverse the string.
    if (!isalpha(s[0])){
        for (int i=0; i<s.length()/2; ++i){
            swap(s[i], s[s.length()-1-i]);
        }
    }
    
    return s;
}