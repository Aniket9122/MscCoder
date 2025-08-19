#include <string_view>
using namespace std;

int countBoredom(const string& S) {
    int count = 0;  // Initialize counter variable
  
    size_t pos = 0;
    
    while (true) {
        // Find the next sentence starting with 'I'
        pos = S.find('I', pos);
        
        if (pos == string::npos || (pos != 0 && S[pos-1] != '.') || 
            (pos+2 < S.size() && (S[pos+2] == '.' || S[pos+2] == '?' || S[pos+2] == '!'))) {
            break;  // No more sentences starting with 'I' or found a sentence not followed by '.', '?', '!'.
        } else {
            ++count;  
        }
        
        pos += 3; // Skip 'I ', which has been found.
    }
  
    return count;  // Return the number of sentences starting with 'I' or not followed by '.', '?', '!'.
}