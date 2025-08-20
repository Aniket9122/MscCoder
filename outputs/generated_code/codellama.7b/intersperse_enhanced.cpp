#include <iostream>
#include <vector>

void intersperse(std::vector<int>& numbers, int delimeter) {
    if (!numbers.empty()) {
        for (int i = 0; i < numbers.size() - 1; i++) {
            numbers.insert(numbers.begin() + i + 1, delimeter);
        }
    }
}
