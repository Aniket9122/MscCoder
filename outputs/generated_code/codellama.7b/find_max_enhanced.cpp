#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

string find_max(const vector<string>& words) {
    unordered_map<char, int> char_counts; // Use a hash map for O(1) lookups
    string max_word = "";
    int max_unique_chars = 0;

    for (auto word : words) {
        for (auto c : word) {
            if (char_counts.find(c) == char_counts.end()) {
                char_counts[c] = 1; // Initialize the count to 1 if not found
            } else {
                char_counts[c]++; // Increment the count if already found
            }
        }

        if (char_counts.size() > max_unique_chars) {
            max_unique_chars = char_counts.size();
            max_word = word;
        } else if (char_counts.size() == max_unique_chars && word < max_word) {
            max_word = word;
        }
    }

    return max_word;
}
