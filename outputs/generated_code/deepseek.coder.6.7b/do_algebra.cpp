#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int do_algebra(vector<string> operato, vector<int> operand){
    stack<double> s;
    for(int i=0; i<operand.size(); ++i){
        if(operato.size() > i){
            if(operato[i]=="+"){ // addition
                double second_op = s.top();
                s.pop();
                double first_op = s.top();
                s.pop();
                s.push(first_op + second_op);
            }
            else if(operato[i]=="-"){ // subtraction
                double second_op = s.top();
                s.pop();
                double first_op = s.top();
                s.pop();
                s.push(first_op - second_op);
           <｜begin▁of▁sentence｜>span>} 
            else if(operato[i]=="*"){ // multiplication
                double second_op = s.top();
                s.pop();
                double first_op = s.top();
                s.pop();
                s.push(first_op * second_op);
            } 
            else if(operato[i]=="/"){ // division
                double second_op = s.top();
                s.pop();
                double first_op = s.top();
                s.pop();
                s.push(first_op / second_op);
            } 
            else if(operato[i]=="**"){ // exponentiation
                double second_op = s.top();
                s.pop();
                double first_op = s.top();
                s.pop();
                s.push(pow(first_op, second_op));
            } 
        else {
            s.push((double)operand[i]); // operands
          }
        }
    }
    return (int)s.top();
}