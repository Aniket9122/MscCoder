#include <iostream>
#include <string>
using namespace std;

char encode_vowel(char c) {
    string vowels = "aeiouAEIOU";
    char* encoded_vowels = (char*)"cgCGE";
    
    size_t found = vowels.find(c);
    if (found != string::npos){
        return encoded_vowels[found];
    } else {
        return c;
   <｜begin▁of▁sentence｜>}

string encode(string message) {
    for (int i = 0; i < message.length(); ++i) {
        message[i] = encode_vowel(message[i]);
    }
    return message;
}