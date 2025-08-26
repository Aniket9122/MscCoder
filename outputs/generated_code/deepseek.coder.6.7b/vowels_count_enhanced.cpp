#include <string>
#include <cctype>      // for tolower()
using namespace std;

int vowels_count(const string& s) {
    int count = 0;
    const string vowels = "aeiou";
        
    for (char c : s){
        if ((vowels.find(tolower(c)) != string::npos)){    // check if the character is a vowel or not, convert to lowercase before checking 
            count++;
        }
    }
    
    return (count + (s.length() > 0 && s[s.length()-1] == 'y'));   // special case handling for 'y' at end of word
}