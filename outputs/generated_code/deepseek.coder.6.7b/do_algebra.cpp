#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

int precedence(char op){
    if(op == '+'||op == '-')
        return 1;
    if(op == '*'||op == '/')
        return 2;
    if(op == '^')
        return 3;
    return 0;
}

int applyOp(int a, int b, char op){
    switch(op){
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '^': return pow(a, b); // You need to include cmath for this operation 
    }
}

int evaluate(vector<string> operato, vector<int> operand){
    int i;
  
    stack <int> values;
    stack <char> ops;
    
    for (i = 0; i < operand.size(); i++) {
        if (operato[i] == " ") {
            while (!ops.empty() && precedence(ops.top()) >= precedence((operato[i])[0])){
                int val2 = values.top(); values.pop();
                int val1 = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                
                values.push(applyOp(val1, val2, op));
            }
            
            ops.push((operato[i])[0]);
        } else {
            values.push(operand[i]);
        }
    }
    
    while (!ops.empty()) {
        int val2 = values.top(); values.pop();
        int val1 = values.top(); values.pop();
        char op = ops.top(); ops.pop();
        
        values.push(applyOp(val1, val2, op));
    }
    
    return values.top();
}
