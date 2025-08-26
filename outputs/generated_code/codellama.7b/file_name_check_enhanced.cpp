#include <iostream>
#include <string>
using namespace std;

// A function to check if a string is a valid file name
bool isValidFileName(const string& fileName) {
    // Check if the file name contains more than three digits
    int digitCount = 0;
    for (char c : fileName) {
        if (isdigit(c)) {
            ++digitCount;
            if (digitCount > 3) {
                return false;
            }
        }
    }

    // Check if the file name contains a dot
    bool hasDot = false;
    for (char c : fileName) {
        if (c == '.') {
            hasDot = true;
            break;
        }
    }

    if (!hasDot) {
        return false;
    }

    // Check if the substring before the dot is non-empty and starts with a letter
    int firstDotIndex = fileName.find('.');
    string prefix = fileName.substr(0, firstDotIndex);
    if (prefix.empty() || !isalpha(prefix[0])) {
        return false;
    }

    // Check if the substring after the dot is one of the allowed extensions
    string suffix = fileName.substr(firstDotIndex + 1);
    if (suffix != "txt" && suffix != "exe" && suffix != "dll") {
        return false;
    }

    return true;
}

