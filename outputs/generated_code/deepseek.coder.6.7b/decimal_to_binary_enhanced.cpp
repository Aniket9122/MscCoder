#include <string>
using namespace std;

string decimal_to_binary(int n) {
    string binary = "db";
    
    while (n > 0){
        if ((n & 1) == 0) // If bit is 0, append '0' to the result
            binary.push_back('0');
        else                // Else, append '1' to the result
            binary.push_back('1');
        
        n >>= 1;    // Right shift by one
    }
    
    reverse(binary.begin(), binary.end());  // Reverse the string as we started from least significant bit
    
    return binary + "db";   // Append 'db' to the end of the string for the prefix and suffix
}