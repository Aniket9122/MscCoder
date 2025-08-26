#include<iostream>
using namespace std;
int fizz_buzz(int n) {
    int count = 0;
    for (int i=1; i < n ; i++){
        if ((i % 11 == 0) || (i % 13 == 0)){
            string num = to_string(i);
            size_t found = num.find('7');
            while (found != std::string::npos){
                count++;
                found = num.find('7', found+1);
            }
        } 
    }
   return count;
}
