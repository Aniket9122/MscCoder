#include <iostream>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& text) {
    if (text == "") return "None";

    unsigned char hash[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), hash);

    std::stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }

    return ss.str();
}