#include <string>
using namespace std;

bool is_palindrome(const string& text){
    int len = text.length();
    
    if (len == 0) { // If the length of the string is 0, return true as it's a palindrome by definition.
        return true;
    }
  
    for (int i = 0; i < len/2; i++){
       if(text[i] != text[len-1-i]) { // If the character at position 'i' is not equal to the character at position 'len - 1 - i', return false.
           return false;
       }
    }
  
    return true;
}