#include <iostream>
#include <string>
#include <algorithm>

int hex_key(const std::string& num) {
    int count = 0;

    for (auto c : num) {
        if (std::isxdigit(c)) {
            switch (tolower(c)) {
                case '2':
                case '3':
                case '5':
                case '7':
                case 'b': // decimal 11
                case 'd': // decimal 13
                    count++;
                    break;
            }
        }
    }

    return count;
}