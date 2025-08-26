#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

bool isVowel(char c) { 
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u'); 
}

int countConsonants(string word){
    int count = 0;
    for(int i=0; i<word.size(); ++i) {
        if(!isVowel(tolower(word[i])) && isalpha(word[i])) 
            ++count;    
    }
    return count;
}

vector<string> select_words(string s,int n){
    vector<string> res;
    string word;
    stringstream ss(s);
    while (ss >> word) {
        if(countConsonants(word) == n) 
            res.push_back(word);    
    }
    return res;
}