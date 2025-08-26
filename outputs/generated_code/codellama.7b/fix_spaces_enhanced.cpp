#include <string>
using namespace std;

string fix_spaces(const string& text) {
    string result = "";
    bool space_found = false;
    for (int i = 0; i < text.size(); ++i) {
        char c = text[i];
        if (c == ' ') {
            if (!space_found) {
                result += "_";
                space_found = true;
            } else {
                result += "-";
            }
        } else {
            result += c;
            space_found = false;
        }
    }
    return result;
}