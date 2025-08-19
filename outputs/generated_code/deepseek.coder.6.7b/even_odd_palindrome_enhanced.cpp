#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int num) {  
    int reversed = 0, original = num; 
    
    while (num != 0) {
        int digit = num % 10; 
        reversed = (reversed * 10) + digit;
        num /= 10;
    } 
  
    return original == reversed;
}

vector<int> even_odd_palindrome(int n){  
    int eCount = 0, oCount = 0;
    
    for (int i=1; i <=n; ++i) {
        if (isPalindrome(i)) { 
            if ((i % 2) == 0) 
                eCount++;
            else
                oCount++;
         }
      }
   return {eCount,oCount};
}