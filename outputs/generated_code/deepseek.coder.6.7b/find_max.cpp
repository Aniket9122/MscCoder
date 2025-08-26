#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

string find_max(vector<string> words) {
    int max_len = 0; 
    string max_word = "";
    
    for (auto word : words){
        set<char> s(word.begin(), word.end()); // get unique chars in each word by using a set
        
        if (s.size() > max_len) {
            max_len = s.size(); 
            max_word = word; 
        } else if (s.size() == max_len && word < max_word){ // compare lexicographically
            max_word = word; 
        }
    }
    
    return max_word; 
}