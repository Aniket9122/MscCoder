#include <iostream>
#include <string>
using namespace std;

string file_name_check(string file_name){
    int count = 0, pos = -1;
    
    //Checking the conditions mentioned in the question.
    for (char c : file_name) { 
        if ('0' <= c && c <= '9') ++count;
        if (c == '.'){
            if(pos != -1) return "No"; //There should not be more than one dot
            pos = count;
        }
    }
    
    if(file_name[0] < 'A' || (file_name[0] > 'Z' && file_name[0] < 'a') || file_name[0] > 'z') return "No"; //The substring before the dot should not be empty and start with a letter
    if(count-pos > 3) return "No";  //There should not be more than three digits in the filename after the dot.
    
    string extension = file_name.substr(file_name.find('.')+1);
    if (extension != "txt" && extension != "exe" && extension != "dll") return "No"; //The substring after the dot should be one of these: {"txt", "exe", "dll"}
    
    return "Yes"; 
}