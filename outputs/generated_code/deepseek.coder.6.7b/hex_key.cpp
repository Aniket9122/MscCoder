#include<stdio.h>
#include<string>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i){ 
        if (n % i == 0) return false;
    }
    return true;
}

int hex_key(string num) {
    int count = 0;
    for(char &c : num) {
        if(isupper(c)) {
            c = tolower(c);
        }
        
        if (c >= '2' && c <= '9') continue;
        
        switch (c) {
            case 'a': 
                if(!is_prime(10)) count++;  
                break;
            case 'b':
                if(!is_prime(11)) count++;  
                break;
            case 'c': 
                if(!is_prime(12)) count++;  
                break;
            case 'd':
                if(!is_prime(13)) count++;   
                break;
            case 'e': 
                if(!is_prime(14)) count++;    
                break;
            case 'f': 
                if(!is_prime(15)) count++;     
                break;
        }
        
    }
    return count;
}