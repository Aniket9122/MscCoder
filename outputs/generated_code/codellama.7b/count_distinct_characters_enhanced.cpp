#include <iostream>
#include <string>
#include <unordered_set>

int count_distinct_characters(const std::string& str) {
    std::unordered_set<char> distinctChars;
    for (auto c : str) {
        if (std::tolower(c) != 'x') {  // ignore the case of the character
            distinctChars.insert(c);
        }
    }
    return distinctChars.size();
}