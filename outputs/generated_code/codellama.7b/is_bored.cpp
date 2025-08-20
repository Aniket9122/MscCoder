#include <iostream>
#include <string>

using namespace std;

int is_bored(string S) {
    int count = 0;

    // Iterate through the string and check if each sentence starts with "I"
    for (auto it = S.begin(); it != S.end(); ++it) {
        // Check if the current character is a '.' or '?' or '!'
        if (*it == '.' || *it == '?' || *it == '!') {
            // If the previous character is "I", then the sentence starts with "I"
            if (it - 1 >= S.begin() && *(it - 1) == 'I') {
                count++;
            }
        }
    }

    return count;
}

