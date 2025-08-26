#include <cmath> 
float triangle_area(float a, float b, float c) {
    if (a + b > c && a + c > b && b + c > a) {
        // Use Heron's formula to calculate area.
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    } else {
        return -1;
    }
}