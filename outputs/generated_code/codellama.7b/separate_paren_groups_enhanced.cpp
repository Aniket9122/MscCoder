#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> separate_paren_groups(const string& paren_string) {
    vector<string> result;
    int bal = 0;
    string current;

    for (char c : paren_string) {
        if (c == '(') {
            bal++;
            current += c;
        } else if (c == ')') {
            bal--;
            current += c;
            if (bal == 0) {
                result.push_back(current);
                current = "";
            }
        }
    }

    return result;
}
