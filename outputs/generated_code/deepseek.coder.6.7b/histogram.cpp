#include<iostream>
#include<string>
#include<map>
#include<sstream>
using namespace std;

map<char,int> histogram(const string &s){
    map<char, int> counts;
    
    for(char c : s) {
        if (isalpha(c))  // check the character is an alphabet
            ++counts[tolower(c)];   // convert to lowercase and increment count
    }
    
    map<char, int> result;
    int maxCount = 0;
    
    for(const auto & [letter, count] : counts){ 
        if (count > maxCount) {
            maxCount = count;
            result.clear();   // clear previous results and start a new one with the current letter
            result[letter] = count;
        } else if (count == maxCount) {
            result[letter] = count;  // add to existing result
        }
    }
    
    return result;
}