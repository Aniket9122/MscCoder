#include <iostream>
#include <string>

int fruit_distribution(const std::string& s, int n) {
    // Count the number of apples and oranges in the basket
    int apples = 0;
    int oranges = 0;
    for (const auto& c : s) {
        if (c == 'a') {
            ++apples;
        } else if (c == 'o') {
            ++oranges;
        }
    }

    // Return the number of mango fruits in the basket
    return n - apples - oranges;
}