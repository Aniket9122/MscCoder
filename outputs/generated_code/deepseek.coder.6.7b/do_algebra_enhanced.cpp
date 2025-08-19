#include<iostream>
#include<vector>
#include<stack>
#include<stdexcept> 
using namespace std;

double calculate(string op, double a, double b) {
    if (op == "+") return a + b;
    else if (op == "-") return a - b;
    else if (op == "*") return a * b;
    else if (op == "/" && b != 0.0) return a / b;   // Avoid division by zero
    else if (op == "**") return pow(a, b);
    
    throw invalid_argument("Invalid operator: " + op);
}

int do_algebra(vector<string> operators, vector<int> operands) {
    stack<double> sOperand;   // stack for storing operands
    stack<string> sOperator;   // stack for storing operators
    
    for (size_t i = 0; i < operands.size(); ++i) {
        if(operators.size() > i){
            string op = operators[i];
            
            while (!sOperator.empty() && calculate(op, 0, 0) <= calculate(sOperator.top(), 0, 0)){
                double second_op = sOperand.top(); 
                sOperand.pop();
                
                double first_op = sOperand.top(); 
                sOperand.pop();
                
                string prevOp = sOperator.top();
                sOperator.pop();
                
                sOperand.push(calculate(prevOp, first_op, second_op));  // calculate and push back the result to operand stack
            }
            
            sOperator.push(op);   // Push the current operator into operator stack
         }
        
        sOperand.push((double)operands[i]);      // Push the current operand into operand stack
     }
    
    while (!sOperator.empty()) {    // Evaluate remaining operators
        double second_op = sOperand.top(); 
        sOperand.pop();
        
        double first_op = sOperand.top(); 
        sOperand.pop();
        
        string op = sOperator.top();
        sOperator.pop();
      
        sOperand.push(calculate(op, first_op, second_op));  // calculate and push back the result to operand stack
     }
    
    return (int)sOperand.top();    // Return final result from operand stack
}