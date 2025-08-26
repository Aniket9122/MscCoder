#include<iostream>
#include<vector>
using namespace std;

bool isPalindrome(int num) {
    int r, sum = 0, temp;    
    temp = num;    
    while(num > 0){    
        r = num % 10;    
        sum = (sum * 10) + r;    
        num = num / 10;    
    }    
    if(temp == sum)
        return true;    
    else     
        return false;  
}

vector<int> even_odd_palindrome(int n){
    int eCount = 0, oCount = 0;
    for (int i=1; i <=n; i++){
       if (isPalindrome(i)){
           if ((i % 2) == 0)
               eCount++;
           else
               oCount++;
       }
    }
   return {eCount,oCount};
}