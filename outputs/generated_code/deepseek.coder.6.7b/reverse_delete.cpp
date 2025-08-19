#include <bits/stdc++.h>
using namespace std;

vector<string> reverse_delete(string s, string c) {
    string processed = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) { // If character is not present in the string 'c'
            processed += ch; 
        }
    }
    
    string reversed_processed = processed;
    reverse(reversed_processed.begin(), reversed_processed.end());
  
    vector<string> result;
    result.push_back(processed); // Resultant string
    result.push_back(processed == reversed_processed ? "True" : "False");  // Check if it's palindrome or not
    
    return result;
}