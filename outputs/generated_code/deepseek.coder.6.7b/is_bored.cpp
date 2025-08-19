#include<iostream>
#include<sstream>
using namespace std;

int is_bored(string S) {
    int count = 0;  // Initialize counter variable
  
    // Split the string into sentences using delimiters '.' or '?' or '!'
    for (int start = 0, end = 0; end != string::npos; start = end + 1) {
        end = S.find_first_of(".?!", start);
  
        // Check if sentence starts with "I"
        if(end != string::npos && S[end-1] == ' ' && S.substr(start, 1) == "I"){
            count++;
        }
    }
  
    return count;  // Return the number of boredoms
}