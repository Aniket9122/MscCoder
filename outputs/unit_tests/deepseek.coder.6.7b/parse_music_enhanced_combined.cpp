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


