#include <vector>
#include <string>

using namespace std;

string longest(const vector<string>& strings) {
    if (strings.empty()) return ""; // Return None in case the input vector is empty
    auto max_length = 0; // Initialize maximum length to 0
    string longest_string; // Initialize longest string to ""
    for (const auto& s : strings) {
        if (s.size() > max_length) {
            max_length = s.size();
            longest_string = s;
        }
    }
    return longest_string; // Return the first string of the same length
}