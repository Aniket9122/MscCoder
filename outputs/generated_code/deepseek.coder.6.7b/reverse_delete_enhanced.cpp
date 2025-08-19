#include <bits/stdc++.h>  // Include all standard libraries for convenience
using namespace std;

pair<string, string> reverse_delete(const string& s, const string& c) {
    string processed = "";  // String to store the result after deleting characters in 's' that are present in 'c'
    
    for(char ch : s) {       // Iterate over each character of string 's'
        if(c.find(ch) == string::npos)  // If character is not present in the string 'c'
            processed += ch;             // Add it to the resultant string 'processed'
    }
    
    string reversed_processed = processed;   // Create a copy of processed for checking if it's palindrome or not
    reverse(reversed_processed.begin(), reversed_processed.end());  // Reverse the 'reversed_processed'
    
    return make_pair(processed, (processed == reversed_processed ? "True" : "False"));   // Return a pair of processed and if it's palindrome or not
}