#include <openssl/md5.h>
#include <string.h>
#include<iostream>
using namespace std;

string string_to_md5(const string& text){
    if (text == "") return "None";
    
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), result);

    string md5string = "";
    const char* hexdigits = "0123456789abcdef";
    for(int i = 0; i < MD5_DIGEST_LENGTH; ++i){
        md5string += hexdigits[result[i]>>4];
        md5string += hexdigits[result[i]&15];
    } 

    return md5string;
}