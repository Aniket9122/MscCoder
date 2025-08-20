#include <cmath>

bool isCube(int a) {
    return std::cbrt(a) * std::cbrt(a) * std::cbrt(a) == a;
}