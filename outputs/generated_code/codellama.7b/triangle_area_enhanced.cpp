#include <cmath>

float triangle_area(float a, float b, float c) {
    if (a + b <= c || b + c <= a || a + c <= b) {
        return -1;
    }

    // Use the Heron's formula to calculate the area of the triangle
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}