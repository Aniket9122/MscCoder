#include <algorithm>
#include <cctype>
#include <string>
#include <array>
using namespace std;

constexpr string vowels = "aeiouAEIOU";

bool isVowel(char c) {
    return vowels.find(c) != string::npos;
}

bool isConsonant(char c) {
    return isalpha(c) && !isVowel(c);
}

string getClosestCharacter(char c, const array<char, 21>& chars){
   auto result = min_element(begin(chars), end(chars), [c](char a, char b){
       return abs(a - c) < abs(b - c);   
    });
   
    // If the character is in 'chars' array then return it. Otherwise return an empty string.
   return (result != end(chars)) ? string(1, *result) : ""; 
}

string get_closest_vowel(char c){
    if(isVowel(c)){
        return "";
     } else {
       const array<char, 5> vowelsArray = {'a', 'e', 'i', 'o', 'u'};
       return getClosestCharacter(tolower(c), vowelsArray); 
    }
}

string get_closest_consonant(char c) {
    if (isConsonant(c)) {
        return "";
     } else {
        const array<char, 21> consonantsArray = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm','n', 
                                                   'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'};
        return getClosestCharacter(tolower(c), consonantsArray);  
     }
}