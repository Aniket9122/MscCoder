#include <string>
#include <algorithm>
using namespace std;

// Helper function to sort characters of a word.
void sort_word(string &s){
    sort(s.begin(), s.end());
}

string anti_shuffle(const string& str) {
    // Temporary variable to hold the current word
    string temp = "";
    
    // Resultant string with ordered words 
    string result = "";

    for (char c : str){
        if (c == ' ' || (temp.size() && isupper(temp[0]) && islower(c) && (temp.find_first_of("abcdefghijklmnopqrstuvwxyz") != string::npos))){
            sort_word(temp);
            result += temp + c;
            temp = "";
        } else {
            temp += tolower(c);
        }
    }
    
    if (!temp.empty()){
        sort_word(temp);
        for (char &c : temp)
           c = toupper(c);
       result += temp;
    } 
    
    return result;
}