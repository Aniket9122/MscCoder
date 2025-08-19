#include<vector>
#include<string>
using namespace std;

// Function to parse music
vector<int> parse_music(string music_str) {
    vector<int> beats;  // Store the number of beats for each note
    int len = music_str.length(); 
    
    for (int i = 0; i < len; ){
        if (music_str[i] == 'o' && music_str[i+1] == '|') {   // Whole note lasts 4 beats
            beats.push_back(4);
            i += 3;  
        } else if (music_str[i] == '.' && music_str[i+1] == '|'){ // Quarter note lasts 1 beat
            beats.push_back(1);
            i += 2; 
        } else if (music_str[i] == 'o' && music_str[i+1] == '.') { // Half note lasts 2 beats
            beats.push_back(2);
            i += 3;  
        } else{   // Jump to the next character if current pattern is not identified
            i++;   
        }
    }    
    return beats;
}