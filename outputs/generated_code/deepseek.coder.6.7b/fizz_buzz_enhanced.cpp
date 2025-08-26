#include <iostream>
#include <string> // for to_string function 
using namespace std;

int fizz_buzz(int n) {
    int count = 0;
    string num; // declare outside the loop so it doesn't get redeclared and recreated every time
    
    for (int i=1; i<n ; ++i){
        if ((i % 11 == 0) || (i % 13 == 0)){
            num = to_string(i); // convert integer to string so we can search for '7' in it
            
            size_t found = num.find('7');
            while(found != std::string::npos){
                ++count;
                found = num.find('7', found+1);
            }
        } 
    }
   return count;
}

