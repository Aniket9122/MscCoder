#include<iostream>
#include<string>
using namespace std;

int how_many_times(string str, string sub){
    int count = 0;
    for (size_t i = 0; i < str.length(); ++i) {
        if (str.substr(i, sub.length()) == sub) { 
            ++count;
            // If you want to overlap counting just reduce the next line's substr length by one
            i += sub.length() - 1;  
        }
    }
    return count;
}

