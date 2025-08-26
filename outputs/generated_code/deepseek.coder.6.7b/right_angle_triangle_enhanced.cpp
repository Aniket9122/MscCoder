#include <algorithm> // For sort function
#include <cmath>     // For sqrt() function

bool right_angle_triangle(double a, double b, double c) {
    double sides[3] = {a, b, c};
    std::sort(sides, sides+3);
    return std::abs((sides[0]*sides[0]) + (sides[1]*sides[1]) - (sides[2]*sides[2])) < 1e-9;  
}