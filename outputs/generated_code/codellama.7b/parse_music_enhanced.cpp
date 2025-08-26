#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to parse a string representing musical notes and return a vector of integers
// corresponding to the number of beats each note lasts.
vector<int> parse_music(const string& music_string) {
    // Initialize an empty vector to store the parsed notes
    vector<int> notes;

    // Initialize a variable to keep track of the current note length
    int current_note = 0;

    // Iterate through each character in the input string
    for (char c : music_string) {
        // Check if the character is an 'o' (whole note), '|' (half note), or '.' (quarter note)
        if (c == 'o') {
            current_note = 4;
        } else if (c == '|') {
            current_note = 2;
        } else if (c == '.') {
            current_note = 1;
        }

        // Add the current note length to the vector of notes
        notes.push_back(current_note);
    }

    return notes;
}