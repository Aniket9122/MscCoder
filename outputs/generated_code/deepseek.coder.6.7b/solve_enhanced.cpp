#include <algorithm>  // For std::reverse and std::any_of
#include <cctype>     // For isalpha and tolower/toupper functions
using namespace std;

string solve(const string& s) {
    string result = s;
        
    bool hasLetter = any_of(result.begin(), result.end(), ::isalpha);
    
    for (auto & c : result) 
    {
        if (::isalpha(c)) 
            c ^= ' '; // Flip case of the character
    }
        
    if (!hasLetter) reverse(result.begin(), result.end()); // Reverse string if no letters were found in the string
    
    return result;
}