#include<iostream>
#include<string>
using namespace std;

bool check_if_last_char_is_a_letter(string txt){
    if (txt.empty() || !isalpha(txt[txt.length()-1])){
        return false;
    } else {
        if ((int)txt[txt.length()-2] == 32 || txt.length()==1) {
            return true;
        } 
    }
    return false;
}