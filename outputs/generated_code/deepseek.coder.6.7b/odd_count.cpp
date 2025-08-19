#include<iostream>
#include<vector>
#include<string>
using namespace std;

// function to get counts of odd digits from a string
int oddCount(const string& str){
    int count = 0; 
    for (char c : str) { // iterating over each character in the string
        if ((c - '0') % 2 != 0) // checking if it's an odd digit
            ++count;
    }
    return count;
}

// function to apply oddCount on a vector of strings and store results
vector<string> odd_count(const vector<string>& lst){
    vector<string> result; // initializing the resultant vector
    for (int i = 0; i < lst.size(); ++i) {  // iterating over each string in the input list
        int count = oddCount(lst[i]);   // getting count of odd digits from this string
        string output_string = "the number of odd elements "+ to_string(count) +"n the str"+to_string(count)+"ng "+ to_string(count) +" of the "+ to_string(count) +"nput."; // creating desired string
        result.push_back(output_string);  // storing it in results vector
    }
    return result;   // returning results vector
}