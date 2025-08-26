#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> bf(string planet1, string planet2) {
    vector<string> output;

    // Your code here
    int i = 0;
    while (i <= planet1.length() - 1) {
        if (planet1[i] == planet2[i]) {
            output.push_back(planet1);
            return output;
        }
        ++i;
    }
    output.push_back("No match found");
    return output;
}
