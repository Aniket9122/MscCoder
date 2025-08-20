#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;

int precedence(char op){
    if (op == '+'||op == '-')
        return 1;
    if (op == '*'||op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

int applyOp(int a, int b, char op){
    switch(op){
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': if (b != 0) return a / b; else throw "Division by zero";  // Handle division by zero
        case '^': return pow(a, b);  
     }
    return 0; // Return statement for all possible inputs to avoid warnings from compiler.
}

int evaluate(vector<string> operators, vector<int> operands){
    if (operands.size() < 2) {
        throw "Invalid input";  
    }
      
    stack <int> values;
    stack <char> ops;
    
    for(unsigned int i = 0; i<operators.size(); i++){
            while(!ops.empty() && precedence(ops.top()) >= precedence(operators[i][0])){
                int val2 = values.top(); values.pop();
                int val1 = values.top(); values.pop();
                char op = ops.top(); ops.pop();
                
                if (op == '/' && val2 == 0) {   // Avoid division by zero
                    throw "Division by zero";
                } else {
                    values.push(applyOp(val1, val2, op));  
                }
             }
            
            ops.push(operators[i][0]);    
    }
    
    while(!ops.empty()) {
        int val2 = values.top(); values.pop();
        int val1 = values.top(); values.pop();
        char op = ops.top(); ops.pop();
        
        if (op == '/' && val2 == 0) {   // Avoid division by zero
            throw "Division by zero";
        } else {
            values.push(applyOp(val1, val2, op));  
        }
    }
    
    return values.top();    
}
