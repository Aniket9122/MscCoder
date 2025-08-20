#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

// Function to count the number of odd digits in a given string
int oddCount(const string& str) {
    int count = 0;
    for (char c : str) {
        if (c - '0' % 2 == 1) {
            count++;
        }
    }
    return count;
}

// Function to get the number of odd digits in each string in a vector
vector<string> oddCount(const vector<string>& lst) {
    vector<string> result;
    for (const string& str : lst) {
        int count = oddCount(str);
        result.push_back("the number of odd elements " + to_string(count) + "n the string " + str + " of the input.");
    }
    return result;
}
