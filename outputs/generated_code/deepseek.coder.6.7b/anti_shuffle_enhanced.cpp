#include <string>
#include <algorithm>
using namespace std;

// Helper function to sort characters of a word.
void sort_word(string &s) {
    sort(s.begin(), s.end());
}

string anti_shuffle(const string& str)  {
    // Temporary variable to hold the current word
    string temp = "";
    
    // Resultant string with ordered words 
    string result = "";

    for (char c : str){
        if ((c == ' ' || (!temp.empty() && isupper(temp[0]) && islower(c) && (temp.find_first_of("abcdefghijklmnopqrstuvwxyz") != string::npos))) ){
            sort_word(temp);
            
            // converting the first character of word to uppercase and remaining characters to lowercase 
            if (!temp.empty()) {
                char t = toupper(temp[0]);
                temp[0] = tolower(temp[0]);
                result += t + temp;
            }
            
            // append the space or character after sorted word into 'result' string 
            if (c != ' ') {
                c = toupper(c);
            }
            result+= c;  
                
            temp = "";    
        } else {
           temp += tolower(c);     
        }
    }
        
    return result;
}