#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> result;
    for (const string& word : lst) {
        if (word.length() % 2 == 0) {
            result.push_back(word);
        }
    }
    sort(result.begin(), result.end(), [](const string& a, const string& b) {
        return a.length() < b.length();
    });
    if (result.size() > 1 && result[0].length() == result[1].length()) {
        sort(result.begin(), result.end());
    }
    return result;
}
