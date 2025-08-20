#include <string>
#include <iostream>
using namespace std;

int how_many_times(const string& str, const string& sub){
    size_t pos = 0;
    int count = 0;
    
    while((pos = str.find(sub, pos)) != string::npos) {
        ++count;
        ++pos;  // Move to next position for further search
    }
    return count;
}

