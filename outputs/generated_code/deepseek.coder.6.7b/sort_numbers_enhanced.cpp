#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <cctype>
using namespace std;

// Helper function to convert string to lower case
static inline void str_tolower(string &s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
}

// Function to sort numbers
string sort_numbers(string numbers){
    // Create a map for string to integer conversion
    map<string, int> num_map = {{"zero",0},{"one",1}, {"two",2}, 
                                 {"three",3}, {"four",4}, {"five",5}, 
                                 {"six",6}, {"seven",7}, {"eight",8}, 
                                 {"nine",9}};
    
    istringstream iss(numbers);
    string temp;
    vector<string> tokens;

    while (iss >> temp) {
        // Convert the word to lower case for case-insensitive comparison
        str_tolower(temp);
        tokens.push_back(temp);
    }
    
    sort(tokens.begin(), tokens.end(), [&num_map](const string &a, const string &b) {
        return num_map[a] < num_map[b];
    });
    
    ostringstream oss;
    copy(tokens.begin(), tokens.end() - 1, ostream_iterator<string>(oss, " ")); // Space after each token for readability
    oss << tokens.back();    // Append the last one without space to keep it as a number string
    return oss.str();
}