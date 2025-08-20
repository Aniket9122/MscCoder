#include <iostream>
#include <vector>

using namespace std;

int do_algebra(const vector<string>& operands) {
    int result = 0;
    for (const auto& operand : operands) {
        if (operand == "+") {
            result += 1;
        } else if (operand == "-") {
            result -= 1;
        } else if (operand == "*") {
            result *= 2;
        } else if (operand == "/") {
            result /= 2;
        } else {
            // Handle invalid operands here
        }
    }
    return result;
}