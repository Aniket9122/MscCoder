#include <iostream>
#include <string>
#include <map>

bool issame(const std::map<char, int>& m1, const std::map<char, int>& m2) {
    if (m1.size() != m2.size()) {
        return false;
    }
    for (auto& p : m1) {
        if (m2.find(p.first) == m2.end() || m2.at(p.first) != p.second) {
            return false;
        }
    }
    return true;
}

std::map<char, int> histogram(const std::string& str) {
    std::map<char, int> hist;
    for (char c : str) {
        if (!isspace(c)) {
            hist[tolower(c)]++;
        }
    }
    return hist;
}