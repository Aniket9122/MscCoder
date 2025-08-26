#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_nested_parens(const string& paren_string) {
    vector<int> levels;

    int level = 0;
    for (char c : paren_string) {
        if (c == '(') {
            level++;
        } else if (c == ')') {
            level--;
        }

        if (level > 0) {
            levels.push_back(level);
        }
    }

    return levels;
}
