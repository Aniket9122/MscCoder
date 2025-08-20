#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char shift(char c){
    // Shifts alphabet by 2 places ahead (circular)
    if((c >= 'a' && c < 'z') || (c >= 'A' && c < 'Z')) {
        char base = isupper(c) ? 'A': 'a';
        return char((c - base + 3) % 26 + base);
     }
    return c; // If not an alphabet, just return it.
}

string encode(const string& message){
   string encoded_message = "";
   transform(message.begin(), message.end(), back_inserter(encoded_message), [](char c) { 
       if (isalpha(c)) {
           if((tolower(c) == 'a') || (tolower(c) == 'e') || (tolower(c) == 'i') || (tolower(c) == 'o') || (tolower(c) == 'u')){
               return shift(shift(c)); // Twice shifted for vowels.
            } 
           else {
               return shift(c);   // Once shifted for consonants and special characters.
            }
        }
       else {
       	   return c;  // Add special character as it is.
        }});
   
   return encoded_message;
}

