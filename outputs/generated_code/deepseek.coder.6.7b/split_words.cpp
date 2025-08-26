#include<vector>
#include<string>
#include<algorithm>
using namespace std;

// Function to check if character is lowercase letter with odd order
bool isOddLower(char ch) {
    return 'b' <= ch && ch <= 'z' && (ch - 'a') % 2 == 1;
}

vector<string> split_words(string txt){
    vector<string> words;
    
    size_t pos = 0, prevPos = 0;
    int oddCount = 0;
  
    // Check for whitespace and comma then split the string
    while ((pos = txt.find(' ', prevPos)) != std::string::npos || (pos = txt.find(',', prevPos)) != std::string::npos) {
        if (prevPos != pos){
            words.push_back(txt.substr(prevPos, pos - prevPos));
            
            // Count lower-case letters with odd order 
            for (const auto& ch : txt.substr(prevPos, pos - prevPos)) {
                if (isOddLower(ch)) ++oddCount;
            }  
        }
        
        prevPos = pos + 1;    // Skip the found delimiter 
    }
    
    if (prevPos < txt.length()){
        words.push_back(txt.substr(prevPos));
      
        // Count lower-case letters with odd order
        for (const auto& ch : txt.substr(prevPos)) {
            if (isOddLower(ch)) ++oddCount;
        }  
    }
    
    // If no whitespace or comma found, return a vector with one element as the count of lower-case letters with odd order 
    if (words.empty()){
      words.push_back(to_string(oddCount));
    }
      
    return words;  
}