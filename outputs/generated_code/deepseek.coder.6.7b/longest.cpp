#include <iostream>
#include<vector>
#include<string>
using namespace std;

string longest(vector<string> strings){
    if (strings.size() == 0) return "";
    
    vector<string>::iterator it = strings.begin();
    string longestString = *it;
    int maxLength = longestString.length();
  
    while(it != strings.end()) {
        if (maxLength < it->length()){
            maxLength = it->length();
            longestString = *it;
        }
        ++it;
    }
    
    return longestString;
}