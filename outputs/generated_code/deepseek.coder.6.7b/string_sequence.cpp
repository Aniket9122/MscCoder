#include <iostream>
#include <sstream>
using namespace std;

// Function to return space-separated numbers from 0 upto n inclusive.
string string_sequence(int n){
    ostringstream os;
    
    for(int i=0; i<=n; ++i) {
        if (i != 0)
            os << " ";
        os << i;
    }
    
    return os.str();
}