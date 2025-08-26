#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> split_words(const string& txt) {
    // split on whitespace
    vector<string> words;
    istringstream iss(txt);
    copy(istream_iterator<string>(iss), istream_iterator<string>(), back_inserter(words));

    // if no whitespace, split on commas
    if (words.empty()) {
        size_t pos = 0;
        while ((pos = txt.find(',', pos)) != string::npos) {
            words.push_back(txt.substr(0, pos));
            pos++;
        }
    }

    // if no commas, return a vector with one element
    if (words.empty()) {
        words.push_back("1");
    }

    // count the number of lower-case letters with odd order in the alphabet
    int count = 0;
    for (char c : txt) {
        if (c >= 'a' && c <= 'z') {
            if ((int)(c - 'a') % 2 == 1) {
                count++;
            }
        }
    }

    // return the vector with the number of lower-case letters with odd order in the alphabet
    return words;
}
