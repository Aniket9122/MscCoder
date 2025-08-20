#include <iostream>
#include <string>

int fruit_distribution(const std::string& s, int n) {
    int apples = 0;
    int oranges = 0;
    for (const auto& c : s) {
        if (c == 'a') {
            ++apples;
        } else if (c == 'o') {
            ++oranges;
        }
    }
    return n - apples - oranges;
}