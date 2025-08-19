#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Custom Comparator for sorting the vector of strings by their lengths and then alphabetically
struct myComp {
    bool operator()(const string& a, const string& b)  {
        if (a.size() == b.size()) 
            return a < b; //if length is same then compare lexicographically
        
        return a.size() < b.size();  
    }
};

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> evenLengthWords; 
    
    // copy strings with even lengths while maintaining original order of words in the list
    copy_if(lst.begin(), lst.end(), back_inserter(evenLengthWords), [](const string& str) { return str.length() % 2 == 0;});
    
    // sort the words by their length and then alphabetically
    stable_sort(evenLengthWords.begin(), evenLengthWords.end(), myComp());
  
    return evenLengthWords;
}