#include <iostream>
#include <string>
using namespace std;

string file_name_check(string file_name) {
    // Check if the file name contains more than three digits
    int digit_count = 0;
    for (char c : file_name) {
        if (isdigit(c)) {
            ++digit_count;
            if (digit_count > 3) {
                return "No";
            }
        }
    }

    // Check if the file name contains a dot
    bool has_dot = false;
    for (char c : file_name) {
        if (c == '.') {
            has_dot = true;
            break;
        }
    }

    if (!has_dot) {
        return "No";
    }

    // Check if the substring before the dot is non-empty and starts with a letter
    int first_dot_index = file_name.find('.');
    string prefix = file_name.substr(0, first_dot_index);
    if (prefix.empty() || !isalpha(prefix[0])) {
        return "No";
    }

    // Check if the substring after the dot is one of the allowed extensions
    string suffix = file_name.substr(first_dot_index + 1);
    if (suffix != "txt" && suffix != "exe" && suffix != "dll") {
        return "No";
    }

    return "Yes";
}

