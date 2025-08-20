#include <cmath>

bool any_int(float a, float b, float c) {
    // Check if all numbers are integers
    if (!std::isnan(a) && !std::isnan(b) && !std::isnan(c)) {
        int ia = (int)a;
        int ib = (int)b;
        int ic = (int)c;
        // Check if the sum of the numbers is equal to one of the numbers
        if ((ia + ib == ic) || (ib + ic == ia) || (ic + ia == ib)) {
            return true;
        }
    }
    return false;
}