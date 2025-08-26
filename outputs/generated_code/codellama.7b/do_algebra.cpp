#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int do_algebra(const vector<string>& operator, const vector<int>& operand) {
    // Check if the input vectors are valid
    if (operator.size() != operand.size() - 1 || operand.empty()) {
        return -1;
    }

    int result = operand[0];
    for (int i = 1; i < operand.size(); ++i) {
        switch (operator[i - 1]) {
            case "+":
                result += operand[i];
                break;
            case "-":
                result -= operand[i];
                break;
            case "*":
                result *= operand[i];
                break;
            case "/":
                result /= operand[i];
                break;
            case "%":
                result %= operand[i];
                break;
            case "**":
                result = pow(result, operand[i]);
                break;
        }
    }

    return result;
}