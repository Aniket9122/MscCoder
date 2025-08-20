#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> split_words(const string& txt) {
    // Split the string on whitespace or commas
    vector<string> words;
    istringstream iss(txt);
    copy(istream_iterator<string>(iss), istream_iterator<string>(), back_inserter(words));

    // If there are no whitespace characters, split the string on commas
    if (words.empty()) {
        size_t pos = 0;
        while ((pos = txt.find(',', pos)) != string::npos) {
            words.push_back(txt.substr(0, pos));
            pos++;
        }
    }

    // If there are no commas, return a vector with one element
    if (words.empty()) {
        words.push_back("1");
    }

    // Return the vector of strings
    return words;
}
