#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;

string sort_numbers(string numbers){
    map<string, int> num_map = {{"zero",0},{"one",1}, {"two",2}, 
                                 {"three",3}, {"four",4}, {"five",5}, 
                                 {"six",6}, {"seven",7}, {"eight",8}, 
                                 {"nine",9}};
    istringstream iss(numbers);
    string temp;
    vector<string> tokens;
    while(iss >> temp){
        tokens.push_back(temp);
    }
    sort(tokens.begin(), tokens.end(), [&num_map](const string &a, const string &b) {
        return num_map[a] < num_map[b];
    });
    
    ostringstream oss;
    copy(tokens.begin(), tokens.end() - 1,ostream_iterator<string>(oss, " "));
    oss << tokens.back(); // append the last one without space
    return oss.str();
}