#include<iostream>
#include<string>
using namespace std;

bool check_if_last_char_is_a_letter(const string& txt){
    if (txt.empty() || !isalpha(txt[txt.length()-1])){ // ensure the string is not empty and last character is a letter
        return false; 
      } else {
         size_t pos = txt.find_last_not_of(" ");   // find position of last non-space character
         if (pos == string::npos || txt[pos] != ' '){   // check if there is no non-space characters or the second last character is not space
             return true;  
           }
        }
     return false;
}

