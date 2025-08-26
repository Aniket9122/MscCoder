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

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

    if((abs(triangle_area(3, 4, 5)-6.00)<0.01)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1, 2, 10) +1)<0.01)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(4, 8, 5) -8.18)<0.01)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2, 2, 2) -1.73)<0.01)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1, 2, 3) +1)<0.01)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(10, 5, 7) - 16.25)<0.01)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2, 6, 3) +1)<0.01)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(1, 1, 1) -0.43)<0.01)){ tests_passed++; } total_tests++;

    if((abs(triangle_area(2, 2, 10) +1)<0.01)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


