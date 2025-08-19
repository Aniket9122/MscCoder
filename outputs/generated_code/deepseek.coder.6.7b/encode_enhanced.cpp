#include <iostream>
#include <string>
using namespace std;

char encode_vowel(char c) {
    string vowels = "aeiouAEIOU";
    char encoded_vowels[] = {'c', 'g', 'C', 'G', 'E'};  // Characters that are two positions after a, e, i, o, u in the English alphabet.
    
    size_t found = vowels.find(c);
    if (found != string::npos){   // If the character is a vowel, replace it with its encoded counterpart.
        return encoded_vowels[found];
    } else {  // If not a vowel, keep it as is.
        return c;
    }
}

string encode(string message) {
    for (int i = 0; i < message.length(); ++i){  
        if((message[i] >= 'a' && message[i] <= 'z') || (message[i] >= 'A' && message[i] <= 'Z')){  // If the character is a letter, encode it.
            message[i] = encode_vowel(message[i]); 
        }     
    }
    return message;
}