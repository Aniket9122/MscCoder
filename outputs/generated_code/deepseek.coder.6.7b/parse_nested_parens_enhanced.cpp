#include<vector>
#include<string>
#include<stack>
using namespace std;

// Main function to parse nested parentheses in groups
vector<int> parse_nested_parens(string paren_string) {
    vector<string> groups;
    size_t start = 0, end = 0;
    
    while (end != string::npos){
        end = paren_string.find(' ', start);
        
        // If find returns npos, then substring does not occur again 
        if(end != string::npos) {
            groups.push_back(paren_string.substr(start, end-start));
            start = end+1;   // Set the new starting point to after the space character
        } else{
            groups.push_back(paren_string.substr(start));  // copy the last group
        }   
    } 
    
    vector<int> maxDepths;
    for (const auto &group : groups){
        stack<char> parenStack;
        int currentDepth = 0, maxDepth = 0;
        
        for(char c: group) {
            if(c == '(') {
                parenStack.push(c);
                ++currentDepth;
                if (currentDepth > maxDepth){
                    maxDepth = currentDepth;
                }
            } else if (!parenStack.empty() && c == ')'){ 
                parenStack.pop();
                --currentDepth;
            }
        }
        
        maxDepths.push_back(maxDepth);
    }
    
    return maxDepths;
}