#include<bits/stdc++.h>
using namespace std;
vector<string> separate_paren_groups(string paren_string) {
    vector<string> result;
    stack<int> s;
    string temp = "";
    
    for (char c : paren_string) {
        if (c == '(') {
            s.push(temp.length());
            temp += c;
        } else if (c == ')') {
            if (!s.empty()) {
                int start = s.top();
                s.pop();
                temp += c;
                result.push_back(temp.substr(start));
                temp = temp.substr(0, start);
            } else {
                temp += c;
            }
        } 
    }
    
    while (!s.empty()) { // Remove unbalanced open parentheses
        int start = s.top();
        s.pop();
        temp = temp.substr(0, start);
    }
    
    reverse(result.begin(), result.end()); 
    for (string &s : result) { // Reverse each group back to its original order
        reverse(s.begin(), s.end());
    }
    
    return result;
}
