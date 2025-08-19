#include <string> // Used only when comparing strings, not required here.
using namespace std;

// The function validates a filename based on the given conditions.
string file_name_check(const string& fileName) {
    size_t dotPos = fileName.find('.');
    if (dotPos == string::npos || dotPos == 0) // There should be at least one character before and after the dot, so 0 is invalid.
        return "No";
    
    string extension = fileName.substr(dotPos + 1);
    if ((extension != "txt" && extension != "exe" && extension != "dll")) // The substring after the dot should be one of these:  {"txt", "exe", "dll"}
        return "No";
    
    string baseName = fileName.substr(0, dotPos);
    if ((baseName[0] < 'A' || (baseName[0] > 'Z' && baseName[0] < 'a') || baseName[0] > 'z') ) // The substring before the dot should not be empty and start with a letter
        return "No"; 
    
    int digitCount = 0;
    for (char c : baseName) { if ('0' <= c && c <= '9') ++digitCount;} // Count the number of digits.
    if(digitCount > 3) return "No"; // There should not be more than three digits in the filename after the dot.
    
    return "Yes"; 
}