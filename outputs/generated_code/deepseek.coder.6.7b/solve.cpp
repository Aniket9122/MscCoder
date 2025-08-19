#include <algorithm>
using namespace std;

string solve(const string& s) {
    string result = s;
    bool hasLetter = false;
    
    for (auto & c: result) {
        if (isalpha(c)) {
            hasLetter = true;
            if (islower(c)) 
                c = toupper(c);
            else 
                c = tolower(c);
       <｜begin▁of▁sentence｜>}
    }
    
    if (!hasLetter) reverse(result.begin(), result.end());
    
    return result;
}