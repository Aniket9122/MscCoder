#include<string>
using namespace std;

string encode_shift(string s) {
    string out = "";
    for (int i=0; i < s.length(); i++)  {
        char c = s[i];
        if (isupper(c))
            out += char((c - 'A' + 5) % 26 + 'A'); // uppercase letter
        else if (islower(c))
            out += char((c - 'a' + 5) % 26 + 'a'); // lowercase letter
        else
            out += c; // non-alphabet characters are copied directly to the output string.
    }
    return out;
}

string decode_shift(string s){
    string out = "";
    for (int i=0;i<s.length();i++)  {
        char c = s[i];
        if (isupper(c))
            out += char((c - 'A' + 21) % 26 + 'A'); // uppercase letter
        else if (islower(c))
            out += char((c - 'a' + 21) % 26 + 'a'); // lowercase letter
        else
            out += c; // non-alphabet characters are copied directly to the output string.
    }
    return out;
}