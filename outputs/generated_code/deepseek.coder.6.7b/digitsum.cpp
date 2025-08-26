#include<iostream>
#include<string>
using namespace std;
int digitSum(string s){
    int total = 0;
    
    for(char &c : s) {
        if (isupper(c)) {
            total += static_cast<int>(c);
        }
    }

    return total;
}