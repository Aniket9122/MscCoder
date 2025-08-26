#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to calculate the strength of an extension based on its name
int getStrength(const string& extension) {
    int cap = 0, sm = 0;
    for (char c : extension) {
        if (isupper(c)) {
            ++cap;
        } else if (islower(c)) {
            ++sm;
        }
    }
    return cap - sm;
}

// Function to find the strongest extension in a vector of extensions
string Strongest_Extension(const string& class_name, const vector<string>& extensions) {
    int max_strength = 0;
    string strongest_extension;
    for (const string& extension : extensions) {
        int strength = getStrength(extension);
        if (strength > max_strength || (strength == max_strength && extension < strongest_extension)) {
            max_strength = strength;
            strongest_extension = extension;
        }
    }
    return class_name + "." + strongest_extension;
}
