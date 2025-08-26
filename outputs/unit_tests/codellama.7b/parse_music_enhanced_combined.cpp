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

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
bool issame(vector<int> a,vector<int>b){
    if (a.size()!=b.size()) return false;
    for (int i=0;i<a.size();i++)
    {
        if (a[i]!=b[i]) return false;
    }
    return true;
}
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

    if((issame(parse_music("") , {}))){ tests_passed++; } total_tests++;

     if((issame(parse_music("o o o o") ,{4, 4, 4, 4}))){ tests_passed++; } total_tests++;

      if((issame(parse_music(".| .| .| .|") , {1, 1, 1, 1}))){ tests_passed++; } total_tests++;

 if((issame(parse_music("o| o| .| .| o o o o") , {2, 2, 1, 1, 4, 4, 4, 4}))){ tests_passed++; } total_tests++;

  if((issame(parse_music("o| .| o| .| o o| o o|") , {2, 1, 2, 1, 4, 2, 4, 2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("") , {}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o o") , {4,4,4,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .|") , {1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| .| .| o o o o") , {2,2,1,1,4,4,4,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| o| .| o o| o o|") , {2,1,2,1,4,2,4,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| o|") , {4,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o| o| .|") , {1,1,2,2,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| .| o| .|") , {2,2,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o| o| o| o| .| .| o| o| o| o| o| o| o o o o") , {1,1,2,2,2,2,1,1,2,2,2,2,2,2,4,4,4,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o| o| .| .| o| o|") , {1,1,2,2,1,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| .| .| o| o|") , {2,1,1,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| .| .| .| .|") , {2,2,2,2,1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| o| .| o| o| .| o| .|") , {1,2,1,2,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| o| o| o| o| o|") , {4,2,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o| o| o| o| o| .| o| o| o| o| o| o o o o o o o| o|") , {1,1,2,2,2,2,2,1,2,2,2,2,2,4,4,4,4,4,4,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o| o|") , {1,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| o| o| o|") , {2,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| .| .| .|") , {2,2,2,2,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| o| o| o") , {4,2,2,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o|") , {2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o|") , {1,1,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| .| .| o| o| .| .| o| o|") , {2,1,1,1,2,2,1,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| o| .| .| .| .| o| .| o| .|") , {2,2,2,2,2,1,1,1,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| o| o|") , {4,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| o| o") , {2,2,2,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| .|") , {2,2,2,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o|") , {2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| o| o") , {4,2,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o|") , {2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| .| o| o|") , {2,1,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| o| o|") , {2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o|") , {2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| .| .| o| o| o| o| o| .| o| o| o| o| o| o o o o o o o| o| o| o| o") , {4,2,2,1,1,2,2,2,2,2,1,2,2,2,2,2,4,4,4,4,4,4,2,2,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o") , {2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| .| o| o| .| .| o| o|") , {2,1,1,2,2,1,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o| o| o| o o o") , {1,1,2,2,2,4,4,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o") , {2,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o") , {4,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| .| .| o|") , {2,1,1,1,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| .| .| o| o| o| o| o| .| o o o o o o o o| o| o| o| o") , {4,2,2,1,1,2,2,2,2,2,1,4,4,4,4,4,4,4,2,2,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o") , {4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o") , {4,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| .| o| o| o| o| o| o o o o o o o| o| o| o| o") , {4,2,2,1,2,2,2,2,2,4,4,4,4,4,4,2,2,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o| o| o") , {1,1,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| o") , {4,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| .| o| o| .| .| o|") , {2,1,1,2,2,1,1,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .|") , {2,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| .| o| o| .| o|") , {2,1,1,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o| o| o| o| .| .| o| o| o| o| o| o| o o o| .| .| .| o| o| o") , {1,1,2,2,2,2,1,1,2,2,2,2,2,2,4,4,2,1,1,1,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o| o| o o o") , {1,1,2,2,4,4,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| .| o| o| o| o| o| o| o| o| o| o") , {4,2,2,1,2,2,2,2,2,2,2,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o o| o| o| o| o|") , {2,4,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o| o| o| o| o| .| o| o| o| o| o| o o o| o|") , {1,1,2,2,2,2,2,1,2,2,2,2,2,4,4,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| o o| o") , {4,2,2,4,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| o| .|") , {2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o o| o|") , {2,4,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| .| o|") , {2,1,1,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| .| o| .|") , {2,2,2,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o") , {1,1,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| o| o| o| .| .| .| .|") , {2,2,2,2,2,2,2,1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o o| o| .| .| o| o| o| o| o| .| o| o| o| o| o| o o o o o o o| o| o| o| o|") , {2,4,2,2,1,1,2,2,2,2,2,1,2,2,2,2,2,4,4,4,4,4,4,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o") , {2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| o| o| o| o|") , {2,1,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o o| o| o| o| o| o| o| .| o| .| o| o|") , {2,2,2,4,2,2,2,2,2,2,2,1,2,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o| o| o| o") , {1,1,2,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| .|") , {2,2,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| .| .| o| o| o| o| o| .| o| o| o| o| o| o| o| o") , {4,2,2,1,1,2,2,2,2,2,1,2,2,2,2,2,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| o o") , {4,2,2,4,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| o| o| o| .| .| .| .| o| o|") , {2,2,2,2,2,2,2,1,1,1,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| .| .| o| o| o o| o") , {2,1,1,1,2,2,4,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| .| .| .| o| o|") , {2,1,1,1,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o| o| .| .| o| o o| o| .| .| o| o| o| o| o| .| o| o| o| o| o| o o o o o o o| o| o| o| o| .| o| o|") , {1,1,2,2,1,1,2,4,2,2,1,1,2,2,2,2,2,1,2,2,2,2,2,4,4,4,4,4,4,2,2,2,2,2,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| .| .| o| o| o| o| o| o| o| o| o| o") , {4,2,2,1,1,2,2,2,2,2,2,2,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| .|") , {4,2,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o") , {4,4,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o|") , {4,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o| o| o| o| .| .| o| o| o| o| o| o| o o o| .| .| .| o| o|") , {1,1,2,2,2,2,1,1,2,2,2,2,2,2,4,4,2,1,1,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| .| o o| o| o") , {4,2,2,1,4,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o o|") , {2,4,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o| o") , {1,1,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| .| o|") , {2,2,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| o o o") , {4,2,2,4,4,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| .| o| o| .| o") , {2,1,1,2,2,1,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o| o| o| o| .| .| o| o| o| o o o") , {1,1,2,2,2,2,1,1,2,2,2,4,4,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| o| o| o| o| o| .| .| .|") , {2,2,2,2,2,2,2,2,2,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| .| o| o| o| o| o| o| o| o") , {4,2,2,1,2,2,2,2,2,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o .| o| .|") , {2,4,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| .| .| .| .| o| .| o| .|") , {2,2,2,2,1,1,1,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o .|") , {4,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o o") , {1,1,4,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| .| o| .| o| .|") , {2,2,2,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o .|") , {2,4,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o| o| o| o| .| .| o| o| o| o| o| o| o o| .| .| .| o| o|") , {1,1,2,2,2,2,1,1,2,2,2,2,2,2,4,2,1,1,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| .| o| o| o|") , {2,1,1,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o| o| o| o| .| .| o| o| o| o| o o| o o o| .| .| .| o| o|") , {1,1,2,2,2,2,1,1,2,2,2,2,4,2,4,4,2,1,1,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| o") , {1,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o .|") , {1,1,4,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| o| o| o|") , {1,1,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| .| .| .| o| .| o| .|") , {2,1,1,1,1,2,1,2,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| .| o|") , {2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| .| o| o| o| o| o| .|") , {2,1,1,2,2,2,2,2,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| o| .| .| .| .| o| o|") , {2,2,2,2,2,1,1,1,1,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| o o| o| o| o| o| o| o| .| o| .| o| o| o| o| o| o|") , {2,2,2,2,4,2,2,2,2,2,2,2,1,2,1,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o o| o o| o| o| .| .|") , {4,4,4,2,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| o| .| .| o| .| .| o| .| o| .| o| .| o| .| .| o|") , {2,1,2,1,1,2,1,1,2,1,2,1,2,1,2,1,1,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| .| .| .| .|") , {4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .|") , {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o| o o| o| o|") , {4,4,2,4,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| o| o| o| o|") , {2,2,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| o o o o o o o o| o o o o o o o| o| o| .| .|") , {1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| .| .| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o o o o o o o o| o o o o o o o| o| o| .| .|") , {1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o o o o o o o o| o o o o o o o| o| o| .| .|") , {2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| o o| o o o| .| o o| o o o| .| o o| o o o| .| o o| o o o| o o o| o") , {1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,4,4,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| o| o| o|") , {4,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| .| .| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o|") , {2,2,2,2,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".|") , {1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o o| o o| o o| o o| o o| o o| o o| .| .| .| .|") , {4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| o o o o o o o| o| o o o o o o o| o| o| .| .|") , {1,1,1,1,4,4,4,4,4,4,2,2,4,4,4,4,4,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| o| .| .| o| .| .| o .| o| .| o| .| .| o|") , {2,1,2,1,1,2,1,1,4,1,2,1,2,1,1,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| o| o| o| o") , {2,2,2,2,2,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o o| o| o") , {2,2,4,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| .| .| .| .| o o o o o o o o| o o o o o o o| o| o| .| o|") , {2,2,2,2,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o") , {2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o o o o| o| o| .| .|") , {4,4,4,4,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o| o| .| .|") , {4,4,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| o| o o| o o| o o| o o| o o| o o| o o| .| .| .| .|") , {4,2,2,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .|") , {1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o o| o o| o o| o o| o o| o| .|") , {4,2,4,2,4,2,4,2,4,2,4,2,4,2,2,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o o| o o| o| o|") , {2,4,2,4,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o| o| o|") , {4,4,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| o o| o o o| .| o o| o o o| .| o o| o o o| .| o o| o o o| o o o o| o o| o| o| .| .| o| o") , {1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,4,4,4,2,4,2,2,2,1,1,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o o| o| .| .| .| .| o o o o o o o o| o o o o o o o| o| o| .| .|") , {2,2,4,2,2,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o o| o| o| .| .|") , {4,2,4,2,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| o") , {2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o o o o o o o o o| o o o o o o o| o| o| .| .|") , {2,2,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o| o| o| o| o| o| o| o| o| o| o| o| .| .| .| .| .| .| .| .| .| .| .| .| .| o") , {2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| .| o| .| .| o| .| .| o| .| o| .| o| .| o| .| .| o") , {2,1,2,1,1,2,1,1,2,1,2,1,2,1,2,1,1,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| o o o o o o o o o| o| o| .| .|") , {1,1,1,1,4,4,4,4,4,4,4,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o o| o| o| .| .|") , {4,2,4,2,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| .| .| .| .| o o o o o o o o| o o o o o o o| o| o o o o| o| o| .| .|") , {1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,4,4,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o o| o| o| .| .|") , {4,2,4,2,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o| .| o") , {2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,2,1,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o o| o| o| o o| o o| o o| o o| o o| o o| o o| .| .| .| .| o o o| o| o| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o") , {2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,4,2,2,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,1,1,1,1,4,4,2,2,2,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o o| o| o| o o| o o| o o| o o| o o| o o| o o| .| .| .| .| o o o| o| o| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o| o o o o o o o| o| o| .| .| o|") , {2,2,2,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,4,2,2,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,1,1,1,1,4,4,2,2,2,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,2,4,4,4,4,4,4,2,2,2,1,1,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o| o o| o|") , {4,4,2,4,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| o o| o| o| .| .|") , {4,2,2,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o o| o o| o|") , {2,4,2,4,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| o o o o o o o o o| o o| o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o o| o| o| .| .| o o o o| o| o| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o o| o| o| .| .|") , {4,2,4,2,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,4,2,4,2,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,2,2,2,1,1,4,4,4,2,2,2,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| o o o o| o o o o| o o o o o o o| o| o| .| .|") , {1,1,1,1,4,4,4,2,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o| o o| o") , {4,4,2,4,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o o o o o o o o| o o o o o o| o| o| o| .| .| o") , {2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,2,2,2,2,1,1,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o| o o o o o| o o o o o| o o o o o| o o o o o| o o o| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o o| o| o| .| .|") , {4,2,4,2,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| .| .| .| .| .| .| .| .| .| .| .| .| .| o") , {2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o| o|") , {4,4,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| .| .|") , {4,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| o| o o| o o| o o| o o| o o| o o| .| .| .| .|") , {4,2,2,2,4,2,4,2,4,2,4,2,4,2,4,2,1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o| o| o o| o o| o o| o o| o o| o o| o o| .| .|") , {4,2,2,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o o o o o o o o o| o o o o o o| o| o|") , {2,2,4,4,4,4,4,4,4,4,2,4,4,4,4,4,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o o| o o| o| o o| o o| o o| o o| o o| o o| o o| o o| .| .| .| .|") , {4,2,4,2,4,2,4,2,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o o| .| .| o|") , {2,4,2,1,1,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o| o o o o o| o o o o o| o o o o o| o o o o o| o o o| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o o o o o o o o| o o o o o o o| o| o| o o| o| o| o| o o| o| o| .| .|") , {4,2,4,2,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,4,2,2,2,2,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o o o o o o o o o| o o o| o o| o| o| o| o|") , {2,2,4,4,4,4,4,4,4,4,2,4,4,2,4,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o| o| o| o o| .| .| .| o o o o o o o o| o o o o o o o| o| o| .| o|") , {2,2,2,2,4,2,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o o o o o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| o o| o o o o o o o| o| o| .| .|") , {2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,4,4,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,2,4,4,4,4,4,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o o o|") , {4,4,4,4,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o o o o o o") , {4,4,4,4,4,4,4,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o| o| o .| .| .| .| o o| o .| o| o| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o| o| o| o| o o o o o o o o o o o o o o o o o o o o o o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o| o|") , {4,4,2,2,4,1,1,1,1,4,2,4,1,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,2,2,2,2,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o o") , {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o| o| .| .| .| .|") , {4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,2,2,1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o| o o|") , {4,4,2,4,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| o o| o o o| .| o o| o o o| o o o| o") , {1,4,2,4,4,2,1,4,2,4,4,2,4,4,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o| o| .| .| .| .|") , {4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,2,2,1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o| o") , {4,4,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o .| .| .| .| .| .| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o| o o| o| o| .| .| .| .|") , {4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,2,4,2,2,2,1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| o o o o o o o o| o o o o o o o| o| o .|") , {1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,4,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o| o o") , {4,4,2,4,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o| o|") , {4,2,4,2,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| o| o| o| .| .|") , {1,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| o o| o o o| .| o o| o o o| .| o o| o o o| .| o o| o o o| o o o| o o o o o o o o| o o o o o o o| o| o .|") , {1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,4,4,2,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,4,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| o o| o o o| .| o o| o o o| .| o o| o o o| .| o o| o o o| o o o| o o o o o o o| o o o o o o o| o| o .|") , {1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,4,4,2,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,4,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o| o") , {4,2,4,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o| .| o o| o o o| .| o o| o o o| .| o o| o o o| .| o o| o o o| o o o| o o o o o o o| o o o o o o o| o| o .|") , {4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,4,4,2,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,4,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| o o| o o o| .| o o| o o o| .| o o| o o o| .| o o") , {1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,1,4,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| o o o o o o o o| o o o o o| o o| o| o .|") , {1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,2,4,2,2,4,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| o o| o o o| .| o o| o o o| .| o o| o o o| .| o o| o| o o| o o o| o o o o o o o o| o o o o o o o| o| o .|") , {1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,2,4,2,4,4,2,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,4,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o o| o o| o o| o o| o o| o| o o| o o| o o| o o| o o| .| .| .| .|") , {4,2,4,2,4,2,4,2,4,2,4,2,4,2,2,4,2,4,2,4,2,4,2,4,2,1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| o o o o o o o o| o o o o o| o o| .|") , {1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,2,4,2,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o|") , {4,2,4,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o o| o o| o o| o o| o| o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o| o| .| .| .| .|") , {4,2,4,2,4,2,4,2,4,2,4,2,2,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,2,2,1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o| o .| .| .| .| o o o o o o o o| o o o o o o o| o| o") , {4,4,2,4,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| o o| o o o| .| o o| o o o| .| o o o| .| o o| o o o| o o o| o o o o o o o| o o o o o o o| o| o .|") , {1,4,2,4,4,2,1,4,2,4,4,2,1,4,4,2,1,4,2,4,4,2,4,4,2,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,4,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o") , {4,2,4,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| o o o o o o o| .| .|") , {1,1,1,1,4,4,4,4,4,4,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| .| .| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o o o o o o| o o o o o o o| o| o| .| .|") , {1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| o| o| o .|") , {1,2,2,4,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| o o o o o o o o| o o o| o .|") , {1,1,1,1,4,4,4,4,4,4,4,2,4,4,2,4,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o o| o|") , {4,4,4,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| o o| o o o| .| o o| o o o| .| o o| o o o| .| o o| o o o| o o o| o o o o o o o| o o o o o o o o| o .|") , {1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,4,4,2,4,4,4,4,4,4,2,4,4,4,4,4,4,4,2,4,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o o| o o| o o| o o| o| o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o|") , {4,2,4,2,4,2,4,2,4,2,4,2,2,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| .| o o| o o o| .| o o| o o o| .| o o| o o o| .| o o| o o o| o o o| o o o o o o o| o o o o o o o| o| o .| .| .|") , {1,1,1,1,1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,4,4,2,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,4,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o o| o o| o o| o o| o| o| o o o| o .| .| .| .| o o o o o o o o| o o o o o o o| o| o o| o| .| .| .| .|") , {4,2,4,2,4,2,4,2,4,2,4,2,2,2,4,4,2,4,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,4,2,2,1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| o o| o o o| .| o o| o o o| .| o o| o o o| .| o o| o o o| o o o| o o o o o o o o| o o o o o o| o| o .|") , {1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,4,4,2,4,4,4,4,4,4,4,2,4,4,4,4,4,2,2,4,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o|") , {4,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| o o| o o o| .| o o| o o o| .| o o o o o o| o| o .|") , {1,4,2,4,4,2,1,4,2,4,4,2,1,4,4,4,4,4,2,2,4,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o o| o o| o o| o o| o| o| o o| o o| o o| o o| o o| o|") , {4,2,4,2,4,2,4,2,4,2,4,2,2,2,4,2,4,2,4,2,4,2,4,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o| .| o o| o o o| .| o o| o o o| .| o o| o o o|") , {4,4,2,1,4,2,4,4,2,1,4,2,4,4,2,1,4,2,4,4,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .|") , {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| o o| o o o o o o| o o o o o| o o| .|") , {1,1,1,1,4,2,4,4,4,4,4,2,4,4,4,4,2,4,2,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| .| .| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o o o o o o| o o o o o o o| o| o| .| o o o| o") , {1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,4,4,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| o o o o o o o o| o o o o o .|") , {1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o o| o o| o o| o o o| o o| o o| o o| o o| o o| o|") , {4,2,4,2,4,2,4,2,4,2,4,4,2,4,2,4,2,4,2,4,2,4,2,2}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o| o o") , {2,4,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| o o o o o o o| o o o o o o o| o| o| .| .|") , {1,1,1,1,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o .| .| .| .| .| .| .| .| o o o o o o o o| o o o o o o o| o| o| .| .| o o o o o o o o| o o o o o o o| o") , {4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,1,1,1,1,1,1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,2,4}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| .| .| .| .| o| o o o o o o o| o o o o o o o| o| o| .| .| o o o o o o| o o o o o o o| o| o| .| .|") , {1,1,1,1,1,1,1,1,2,4,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1,4,4,4,4,4,2,4,4,4,4,4,4,2,2,2,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music("o o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| o o| .| .| .| .|") , {4,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,4,2,1,1,1,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| o o| o o o| .| o o| o o o o| o .|") , {1,4,2,4,4,2,1,4,2,4,4,4,2,4,1}))){ tests_passed++; } total_tests++;

    if((issame(parse_music(".| .| .| .| .| .| .| .| .| .| .| .| .| .| .| .|") , {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}))){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


