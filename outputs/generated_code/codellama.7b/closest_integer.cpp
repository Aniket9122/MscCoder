#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int closest_integer(const string& value) {
    double num = stod(value);
    int rounding_factor = 1;

    if (num < 0) {
        rounding_factor = -1;
    }

    return round(num + rounding_factor / 2) * rounding_factor;
}

