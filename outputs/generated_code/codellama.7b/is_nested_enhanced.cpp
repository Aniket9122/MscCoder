#include <string>
using namespace std;

bool isNested(const string& str) {
    int stack = 0;
    for (char c : str) {
        if (c == '[') {
            stack++;
        } else if (c == ']') {
            stack--;
        }
    }
    return stack > 0;
}