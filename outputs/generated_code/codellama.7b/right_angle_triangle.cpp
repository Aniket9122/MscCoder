#include <iostream>
#include <cmath>

bool right_angle_triangle(double a, double b, double c) {
    // Calculate the semi-perimeter of the triangle
    double semi_perimeter = (a + b + c) / 2;

    // Calculate the area of the triangle using Heron's formula
    double area = sqrt(semi_perimeter * (semi_perimeter - a) * (semi_perimeter - b) * (semi_perimeter - c));

    // Check if the area is equal to the product of the lengths of the sides
    return (area == a * b * c);
}