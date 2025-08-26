#include <string>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i){ 
        if (n % i == 0) return false;
     }
    return true;
}

int hex_key(string num) {
    int count = 0;
    string primeHexDigits = "2357BD";   // B and D are also prime, so include them here

    for (char &c : num){
        if (!isupper(c)) c = toupper(c);                // Convert to uppercase
        
        if (!((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F')) ) continue;    // Skip non-hexadecimal characters

        if (primeHexDigits.find(c) != string::npos) count++;    // Count only primes in the hexadecimal number
     }
     return count;
}