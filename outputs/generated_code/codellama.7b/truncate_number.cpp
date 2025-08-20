#include <iostream>
#include <cmath>

double truncate_number(double number) {
    return std::modf(number, &number);
}

