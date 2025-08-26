#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_music(const string& music_string) {
    vector<int> notes;
    int current_note = 0;
    for (char c : music_string) {
        if (c == 'o') {
            current_note = 4;
        } else if (c == '|') {
            current_note = 2;
        } else if (c == '.') {
            current_note = 1;
        }
        notes.push_back(current_note);
    }
    return notes;
}