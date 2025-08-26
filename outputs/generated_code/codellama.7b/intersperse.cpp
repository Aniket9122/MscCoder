#include <iostream>
#include <vector>

void intersperse(std::vector<int>& numbers, int delimeter) {
    for (int i = 0; i < numbers.size() - 1; i++) {
        numbers.insert(numbers.begin() + i + 1, delimeter);
    }
}
