#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int closest_integer(const string& value) {
    double num = stod(value);
    float rounding_factor = 1.0f;

    if (num < 0) {
        rounding_factor = -1.0f;
    }

    return round(num + rounding_factor / 2.0f) * rounding_factor;
}