#include <iostream>
#include <string>
#include <map>
using namespace std;

map<char,int> histogram(const string &s){
    map<char, int> counts;
    
    for(auto c : s)  {   // iterate over the characters in the string
        if (isalpha(c)) {   // check the character is an alphabet
            ++counts[tolower(c)];    // convert to lowercase and increment count
         }
     }
    
    map<char, int> result;
    auto maxCount = 0;  // let compiler deduce type for maxCount
    
    for (const auto& [letter, count] : counts){   // C++17 decomposition syntax
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