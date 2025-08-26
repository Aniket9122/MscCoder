#include<string>
using namespace std;
int digitSum(string s){
    int total = 0; // initializing total to 0 at the start and not inside for loop as per good coding practices
    
    for(char &c : s) { // using range-based 'for' loops instead of traditional one
        if (isupper(static_cast<unsigned char>(c))) { // casting c to unsigned char before passing to isupper to prevent undefined behavior in case of negative values
            total += static_cast<int>(c); 
        }
    }

    return total;
}