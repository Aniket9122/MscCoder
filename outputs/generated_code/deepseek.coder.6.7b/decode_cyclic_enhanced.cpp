#include <string>
#include <algorithm> // for std::rotate and std::next
using namespace std;

// Function to encode the string
string encode_cyclic(const string& s) { 
    int l = s.length();
    
    string output;
    
    for(int i = 0; i * 3 < l; ++i){
        // Substring of length 3
        auto str = s.substr(i*3, min(3, static_cast<int>(s.length()) - i*3));
        
        if (str.size() == 3) {
            // Rotate elements in each group to the right by one position 
            rotate(str.begin(), next(str.begin()), str.end());
        } 

        output += str;
    }  

    return output;
}

// Function to decode the string
string decode_cyclic(const string& s) {
    int l = s.length();
    
    string output;
    
    for (int i = 0; i * 3 < l; ++i){
        // Substring of length 3
        auto str = s.substr(i*3, min(3, static_cast<int>(s.length()) - i*3));
        
        if (str.size() == 3) {
            // Rotate elements in each group to the left by one position 
            rotate(str.rbegin(), next(str.rbegin()), str.rend());
        } 

        output += str;
    }  
    
    return output;
}