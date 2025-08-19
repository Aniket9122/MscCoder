#include <iostream>
#include <sstream>
using namespace std;

// Function to return space-separated numbers from 0 upto n inclusive.
string string_sequence(int n) {
    ostringstream os;
    
    for (int i = 0; i <= n; ++i) {
        os << i;
        if (i != n) {
            os << " ";
        }
    }
    
    return os.str();
}