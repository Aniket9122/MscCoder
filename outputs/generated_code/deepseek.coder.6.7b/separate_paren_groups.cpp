#include<iostream>
#include<vector>
#include<string>
using namespace std;

// Function for removing spaces from input string
string removeSpaces(string str) {
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}

vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string temp = "";
    int balance = 0;
    
    // Removing spaces from the input string
    paren_string = removeSpaces(paren_string);
    
    for (char c : paren_string) {
        if (c == '('){ 
            balance++;
            temp += c;
        } else if (c == ')'){  
            balance--;
            temp += c;
            // when a group of parentheses is ended, add it to the result vector
            if(balance == 0) {   
                result.push_back(temp);
                temp = "";     
            } 
        }
    }
    return result;
}