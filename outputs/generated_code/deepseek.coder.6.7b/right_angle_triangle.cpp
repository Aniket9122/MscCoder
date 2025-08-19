#include <algorithm>
bool right_angle_triangle(double& a, double& b, double& c) {
    double sides[3] = {a, b, c};
    std::sort(sides, sides+3);
    // Pythagorean theorem states that a^2 + b^2 = c^2 for right angle triangle
    return (sides[0]*sides[0]) + (sides[1]*sides[1]) == (sides[2]*sides[2]);  
}