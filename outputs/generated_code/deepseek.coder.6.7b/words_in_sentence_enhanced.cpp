#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool is_prime(int n) { 
    if (n <= 1)  
        return false; 
    if (n == 2 || n==3)
        return true;
    
    for (int i = 2; i * i <= n; ++i){
        if ((n % i) == 0)
            return false; 
    }
    return true; 
}

string words_in_sentence(string sentence) {
    string word, result = "";
    istringstream iss(sentence);
    
    while (iss >> word) {
        if (is_prime(word.length())){
            result += " " + word;
        } 
    }
    return result.substr(1); //remove the leading space
}

