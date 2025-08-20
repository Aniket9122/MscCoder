#include <string>
#include <iostream>

std::string change_base(int x, int base) {
    std::string result = "";
    while (x > 0) {
        int remainder = x % base;
        result = (remainder >= 0 && remainder <= 9) ? char('0' + remainder) : char('A' + remainder - 10);
        x /= base;
    }
    return result;
}

