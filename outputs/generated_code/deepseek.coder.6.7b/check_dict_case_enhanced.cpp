#include <string>
#include <map>
using namespace std;

bool check_dict_case(const map<string, string>& dict) {
    if (dict.empty()) return true;   // returns true for empty maps to follow the given example behavior
    
    bool allLower = true, allUpper = true;
    for (auto const &pair : dict) {
        for(const auto &c : pair.first){ 
            if (!islower(c)) {   // check if any character is not lowercase
                allLower = false;  
            }
            if (!isupper(c)) {   // check if any character is not uppercase
                allUpper = false;
            }
        }
    }
    
    return (allLower || allUpper);  // returns true only when both are true
}