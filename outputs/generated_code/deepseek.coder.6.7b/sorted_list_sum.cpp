#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

// function to check if a string's length is even
bool isEven(const string& str) {
    return (str.length() % 2 == 0);
}

// Custom Comparator for sorting the vector of strings by their lengths and then alphabetically
struct myComp {
  bool operator()(string a, string b) {
      if(a.size() == b.size()) return a < b; //if length is same then compare lexicographically
     return a.size() < b.size();  
    }
};

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> evenLengthWords; 
    // remove strings with odd lengths
    remove_copy_if(lst.begin(), lst.end(), back_inserter(evenLengthWords), not1(ptr_fun(isEven)));
    
    // sort the words by their length and then alphabetically 
    sort(evenLengthWords.begin(), evenLengthWords.end(), myComp());
  
    return evenLengthWords;
}