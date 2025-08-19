#include <cmath>
float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a){  // Check validity of the triangle
        // Use Heron's formula to calculate area.
        float s = (a + b + c)/2;
        return std::abs(sqrt(s*(s-a)*(s-b)*(s-c)) - ((a*b)/2));  // Return absolute value as the result is not always positive in case of right angle triangles
    } else {
        return -1.0;   // Return -1 for invalid triangle
    }
}