#include <openssl/md5.h>
#include <string>
using namespace std;

// Function to convert string to md5 hash
string string_to_md5(const string& text) {
    if (text == "") return "";   // Return empty string if the input is an empty string
    
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), result);

    string md5string = "";
    const char* hexdigits = "0123456789abcdef";  // Hexadecimal digits for conversion
    
    for(int i = 0; i < MD5_DIGEST_LENGTH; ++i){
        md5string += hexdigits[result[i]>>4];   // Shift 4 bits to the right and select high nibble.
        md5string += hexdigits[result[i]&15];   // And with 15 (0xF) to get lower nibble.
    }
    
    return md5string;
}