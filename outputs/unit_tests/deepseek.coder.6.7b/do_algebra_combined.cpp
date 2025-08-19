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

#include <chrono>
#include <iostream>
#undef NDEBUG
#include<assert.h>
int main(){
    using clock = std::chrono::steady_clock;
    auto __start = clock::now();
    long long time_taken_ms = 0;
    int tests_passed = 0;
    int total_tests = 0;

    if((do_algebra({"**", "*", "+"}, {2, 3, 4, 5}) == 37)){ tests_passed++; } total_tests++;

    if((do_algebra({"+", "*", "-"}, {2, 3, 4, 5}) == 9)){ tests_passed++; } total_tests++;

    if((do_algebra({"//", "*"}, {7, 3, 4}) == 8)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","*","+"}, {2,3,4,5}) == 37)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","*","-"}, {2,3,4,5}) == 9)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","*"}, {7,3,4}) == 8)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","//"}, {5,2,3,4,7}) == 6)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//"}, {9,2,5,3}) == 80)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","-","*","//"}, {3,6,2,4,2}) == 14)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","+","*"}, {10,2,4,3,6}) == 28)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","**"}, {2,3,4,5,2}) == -95)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","-"}, {1,2,3,4}) == 1)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","*","**"}, {5,4,3,2,1}) == 7)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","//","-"}, {10,5,3,2}) == 14)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","+","-"}, {3,2,1,4}) == 6)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//"}, {2,5,3,8}) == 10)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","*","**"}, {5,3,3,2,1}) == 8)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","-","*"}, {10,5,3,2}) == 44)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","-"}, {10,5,3,2}) == 7)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","*","-"}, {10,5,3,2}) == 148)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","*","**"}, {5,3,3,2,2}) == 14)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","*","-"}, {9,10,3,2}) == 268)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","-","*","//"}, {2,6,2,4,2}) == 8)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","*"}, {2,3,4,5,2}) == -35)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//"}, {2,3,8,5}) == 7)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","+","*"}, {9,2,4,3,6}) == 27)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//"}, {2,5,4,8}) == 10)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","-","**"}, {10,5,3,2}) == 41)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","*","**"}, {5,3,2,2,2}) == 10)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","+"}, {10,2,4,3}) == 13)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","//","//"}, {2,5,8,5}) == 0)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","-"}, {10,2,3,2}) == 8)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","//"}, {2,5,5}) == 2)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","**","**"}, {5,3,3,2,2}) == 83)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","-","*","//"}, {2,6,2,3,2}) == 9)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","//","+"}, {2,5,8,5}) == 6)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","*","**"}, {5,4,3,2,2}) == 13)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","//","+"}, {2,4,3,4}) == 4)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","//","//"}, {2,5,4,8}) == 2)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","//","//"}, {2,5,4,8}) == 1)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","+","//"}, {2,5,4,8}) == 32)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","//","//"}, {2,3,8,5}) == 0)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","+","*","*"}, {10,2,4,2,6,2}) == 34)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","-","*","*"}, {10,5,3,2,5}) == 20)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","+","-"}, {3,2,0,4}) == 5)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","*","**"}, {5,5,3,2,2}) == 12)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","+","*","*"}, {10,2,4,2,5,2}) == 30)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","-","+","*","*"}, {10,2,4,2,5,2}) == 24)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","*","-"}, {10,4,3,2}) == 118)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","*","**"}, {8,4,2,2,2}) == 12)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","//","*","**"}, {2,3,4,5,2}) == 2)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","+","//"}, {2,4,3,4}) == 0)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","-","**"}, {5,4,3,2,1}) == 2)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","**","**"}, {5,5,3,2,2}) == 81)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","**"}, {5,3,3,2}) == 11)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","**"}, {8,3,4,5,2}) == -89)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","//","*","**"}, {2,3,3,5,2}) == 27)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","+","*","*"}, {10,2,4,3,5,2}) == 40)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","*","**","*"}, {5,3,2,2,2,2}) == 18)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","+","//"}, {1,4,3,4}) == 0)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","**","+"}, {2,2,3,4,5,2}) == -3066)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","*","-"}, {10,5,10,2}) == 498)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","-"}, {2,3,6,2}) == 0)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","**","**"}, {5,3,3,2,1}) == 11)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","+","//"}, {6,4,3,8}) == 10)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","+","//"}, {8,4,3,4}) == 2)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","//"}, {9,5,4}) == 14762)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","+","-"}, {4,2,0,4}) == 12)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","-","**"}, {10,5,2,6}) == -14)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","**"}, {10,3,3,2}) == 16)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","+","//"}, {8,5,4,8}) == 32768)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","+","-"}, {2,2,2,4}) == 2)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","//","-"}, {10,5,3,3,2}) == 414)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","+","//","*","*"}, {10,2,4,3,5,2,4}) == 10)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","+","-"}, {0,2,1,4}) == -3)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","-"}, {1,5,3,2}) == -2)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-"}, {1,5,3}) == -3)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","-","//"}, {1,5,3,2}) == -5)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","+","*","**"}, {5,3,3,2,2}) == 13)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","+","-"}, {2,8,2,4}) == 254)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","//","+"}, {2,5,8,6}) == 7)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","**"}, {5,3,2,3}) == 10)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","-"}, {10,5,2}) == 48)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","*","**","*"}, {5,3,2,2,2,4}) == 34)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","+","-"}, {3,2,0,5}) == 4)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","*"}, {9,10,3}) == 270)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","+"}, {4,3,4}) == 5)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","*","**"}, {8,4,2,1,2}) == 6)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","-","*","*","-"}, {10,5,3,2,5,3}) == 17)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","//"}, {2,3,8}) == 0)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","//","//"}, {5,4,8,4}) == 19)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","//"}, {3,2,3,4,7}) == 4)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","-","-","*"}, {10,5,3,2,5}) == 37)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","*","-","*"}, {10,10,5,10,2}) == 480)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","+","//","//"}, {8,4,3,4,4}) == 2)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","**","**"}, {5,3,10,2,1}) == 102)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","+","-"}, {3,1,1,4}) == 0)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","+","-","+"}, {2,2,2,4,2}) == 4)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","-"}, {10,4,3,2}) == 41)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//"}, {2,3,8,3}) == 8)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","*"}, {2,3,4,5,10}) == -195)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","//"}, {10,5,2,3,9}) == 15)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","//"}, {5,2,7,10,3}) == 637)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","*"}, {2,3,4,5,6,7}) == 50)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+"}, {10,3,5,2,7,1}) == -636)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","*","-","**","//","+"}, {2,4,5,2,10,3,8}) == -293)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+"}, {7,5,3,9,2}) == -7)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//","-","**"}, {9,3,8,2,10,7}) == -9999969)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","//","-","*","+"}, {3,4,5,6,7,8}) == -18)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {10,5,2,4,3,8}) == 15)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","*","**","+"}, {7,8,3,10,2,4}) == -189)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","*","**","+"}, {7,8,3,8,2,4}) == -117)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+"}, {10,3,6,2,7,2}) == -763)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+"}, {7,5,3,9,9}) == 0)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+"}, {10,2,6,2,7,2}) == -761)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+"}, {10,6,2,7,2,6}) == -91)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","**","+"}, {10,6,2,7,2}) == -125)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","**","+"}, {10,6,2,6,2}) == -61)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//","-","**"}, {9,3,8,2,10,2}) == -69)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","//","-","*","+"}, {3,4,3,6,7,8}) == -7)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","*","**","+"}, {9,8,3,8,2,4}) == -115)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {10,5,1,4,3,8}) == 15)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**"}, {10,3,2,7,2}) == -95)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+"}, {4,5,3,9,9}) == 0)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//","-","**"}, {9,3,8,2,10,6}) == -999969)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","//"}, {10,3,2,7,2}) == -4)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//","-","**"}, {2,3,8,2,10,2}) == -90)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+"}, {7,5,9,3,9}) == 6)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","+","**","+"}, {7,8,3,8,2,4}) == 73)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {10,5,1,4,6,8}) == 15)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","*"}, {2,3,2,5,6,7}) == 50)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {10,5,2,4,3,7}) == 15)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//","-","**","*"}, {9,3,8,2,10,6,9}) == -8999969)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+","+"}, {7,5,4,9,3,9}) == 3)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+"}, {10,6,2,2,6,10}) == -117)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","*"}, {2,3,2,5,6,6}) == 44)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//","-","**"}, {9,3,8,1,10,6}) == -999965)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+"}, {10,2,6,2,5,2}) == -185)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+"}, {2,5,9,3,9}) == 6)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","+","**","-"}, {7,8,3,8,2,4}) == 65)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","**","*","**","+"}, {9,8,3,8,2,4}) == -32755)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","**","-"}, {10,5,1,4,3,8}) == -57)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","*","**","+"}, {7,8,8,10,2,4}) == -89)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","**","//"}, {10,3,2,7,2}) == -61)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {3,5,1,4,6,8}) == 8)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","//","-","**","+"}, {3,4,3,6,7,8}) == -279901)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//","-","**"}, {9,3,8,6,10,7}) == -9999972)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","*","*"}, {2,3,8,5,6,6}) == -28)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","+"}, {7,9,3,9}) == 40353613)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","*"}, {2,3,5,5,6,8}) == 55)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","*","+"}, {5,9,3,9}) == -13)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","**"}, {2,3,4,5,6,7}) == 279944)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","*"}, {2,3,1,5,6,6}) == 44)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","*","**","+"}, {8,8,10,1,2,4}) == 12)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+"}, {10,7,3,9,9}) == 0)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","*"}, {2,3,1,9,6,6}) == 44)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","-","**","//"}, {10,3,2,7,2}) == -34)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","+"}, {7,4,3,9}) == 2407)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+"}, {10,5,6,2,7,2}) == -764)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+","+"}, {7,5,4,9,3,3}) == -3)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","+","//"}, {10,3,2,7,2}) == 4)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","*","**","+"}, {8,7,10,1,2,4}) == 12)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","-","**"}, {3,5,1,4,6,8}) == -1679608)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+"}, {7,4,9,3,9}) == 6)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","+","*","**","+"}, {7,8,3,8,2,4}) == 195)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","-","**"}, {3,5,1,4,6,2}) == -28)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","*","//","+","*"}, {2,3,1,5,6,6,6}) == 44)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+","+"}, {7,5,4,10,3,9}) == 2)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","-","*","**","+"}, {7,8,8,10,2,4}) == -797)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","**"}, {2,9,4,5,6,7}) == 280448)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","-","**"}, {3,5,1,4,6,5}) == -7768)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","+"}, {7,2,9,3}) == 43)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","+"}, {7,9,10,9}) == 40353606)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","//","-","*","+"}, {3,4,2,6,7,8}) == 6)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","*"}, {2,3,3,5,6,5}) == 38)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*"}, {10,2,4,3,8}) == 4)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","*","**","+"}, {7,8,8,9,2,4}) == -70)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","-","*","**","+"}, {10,6,2,2,6,10}) == -114)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","+"}, {7,2,3,3}) == 49)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","+"}, {7,2,3,9}) == 55)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","*","**","+"}, {7,9,8,10,2,4}) == -89)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","*","**","+"}, {7,8,3,7,8,4}) == -11529591)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","-","**"}, {3,1,1,4,6,8}) == -1679612)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","-","**"}, {6,3,1,4,6,8}) == -1679607)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","//"}, {5,2,7,10,1}) == 630)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","*"}, {3,2,7,10,3}) == 354)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","*","*","+"}, {7,8,3,8,2,4}) == -21)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","//"}, {3,2,7,10,3}) == 381)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//","-","**","-"}, {9,3,8,2,10,6,10}) == -999979)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","*"}, {2,3,4,4,6,7}) == 49)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","*","**","+","+"}, {7,8,8,9,2,4,2}) == -68)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","*","**","+"}, {7,8,2,7,8,4}) == -23059193)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+"}, {10,6,6,7,2,6}) == -287)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","+","*","//"}, {10,3,2,7,2}) == 10)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","*","-","**","//","+"}, {2,4,5,2,10,3,10}) == -291)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","*"}, {2,3,4,5,6,1}) == 14)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","+","*"}, {2,3,1,5,6,6}) == 36)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","+","**","+"}, {7,4,8,3,2,4}) == 20)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+"}, {7,5,9,3,7}) == 4)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","**","//"}, {10,3,2,7,2}) == 936)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//","-","**"}, {9,3,7,2,10,7}) == -9999970)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","*"}, {9,3,3,5,6,5}) == 759)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","//","*"}, {5,2,7,10,1,5}) == 590)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+","+"}, {4,10,3,10,9,9}) == 8)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+"}, {10,6,2,6,2,6}) == -65)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//","-","*"}, {9,3,8,2,10,6}) == -29)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//","-","*"}, {10,3,8,2,10,6}) == -26)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+"}, {10,5,2,6,2,6}) == -64)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","+","+"}, {7,2,6,3,3}) == 49)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","*","//","+","*"}, {2,3,1,5,1,6,6}) == 39)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","-"}, {10,6,2,6,2,6}) == -77)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","-","**","//"}, {10,3,2,2,7}) == 30)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*"}, {10,2,4,3,7}) == 5)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","//","-","*","+"}, {4,9,5,6,7,8}) == 52394)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","**","//","*","**","+"}, {9,8,8,10,2,4,2}) == -26843525)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","+"}, {7,2,9,2}) == 42)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//","-","**"}, {9,4,8,2,10,7}) == -9999960)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","*","+"}, {4,9,3,9}) == -14)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","**"}, {3,0,4,6,8}) == -6718461)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","**","-","**","+"}, {10,5,2,6,2,6,2}) == -124)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","**","*"}, {2,3,3,5,6,5}) == 8)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","**","-","*"}, {10,5,1,4,3,8,1}) == -57)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","*"}, {2,3,2,1,6,6}) == 42)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","**","-","**"}, {9,3,8,1,10,6}) == -999965)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","-","*","**","+"}, {7,8,8,10,2,3}) == -798)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {10,5,1,4,6,4}) == 15)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*"}, {10,2,4,3,6}) == 6)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","**","**"}, {10,5,1,4,6,4}) == 15)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+"}, {7,4,8,3,9}) == 6)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","-","**"}, {6,3,6,4,6,8}) == -1679608)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","*","//","+","*"}, {9,8,1,5,1,6,6}) == 43046752)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","*","**","+"}, {7,9,8,5,2,4}) == -14)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+"}, {10,6,2,6,6,6}) == -93305)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","*"}, {9,3,4,5,6,5}) == 759)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","*","//"}, {4,9,3,3,5,6,5}) == 262149)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","*","//","+","*","+"}, {2,3,1,5,1,6,6}) == 14)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","*","+"}, {10,5,6,2,7,2}) == -80)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","-","+","*"}, {9,3,4,5,6,5,6}) == 753)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+"}, {7,5,2,9,2}) == -7)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//","-","**"}, {9,4,9,2,10,7}) == -9999960)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","*","**","+","**"}, {7,8,3,10,2,4}) == 16)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","-","*","**","+"}, {8,8,8,10,2,3}) == -797)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","**","*","-"}, {10,5,1,4,3,8,3}) == -500)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","+","+"}, {7,5,9,3,9}) == 16810)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","**","//"}, {2,3,3,5,6,5}) == 8)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","*","+"}, {4,3,6,7,8}) == 30)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","//","*","**"}, {10,5,3,4,3}) == 74)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","*"}, {2,3,4,4,7,7}) == 56)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//","-","*"}, {9,10,8,2,10,6}) == 34)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","**","//"}, {10,3,2,7,3}) == -39)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","//","*","**","+"}, {7,9,8,10,2,4}) == 504420004)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","**","//"}, {2,2,3,5,6,5}) == 4)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","+","**","-"}, {7,8,3,8,3,4}) == 513)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","**","*","**","*"}, {9,8,3,8,2,4}) == -131063)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","-","**"}, {6,3,0,4,6,8}) == -1679607)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","*","//","+"}, {7,8,3,8,2,4}) == 3)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+"}, {2,5,10,3,9}) == 6)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","*","+"}, {4,3,6,7,5}) == 27)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//","-","*"}, {9,10,10,2,10,6}) == 35)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","*","-","**","//","+","//"}, {9,2,4,5,2,10,3,10}) == 70)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+","+"}, {10,6,9,2,2,6,10}) == -19)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","+","//","-","*","//"}, {9,10,10,2,10,2,9}) == 93)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","+","+"}, {10,5,6,2,7,2}) == -1)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","*"}, {2,3,1,1,5,6}) == 37)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","*","**","+"}, {7,8,8,10,2,0}) == -93)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","**"}, {2,3,4,5,0,7}) == 8)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","+","**","-"}, {7,8,3,9,2,4}) == 82)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","*","*"}, {2,3,8,4,6,6}) == -64)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","**","+"}, {10,6,2,2,6}) == 3)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","+","**","*"}, {7,8,3,8,2,4}) == 261)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","*","**","+"}, {7,8,3,8,7,4}) == -4194293)){ tests_passed++; } total_tests++;

    if((do_algebra({"+"}, {5,10}) == 15)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","*","-"}, {0,0,0,0}) == 0)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+","**"}, {10,3,5,2,7,1,3}) == -636)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+"}, {10,3,7,5,7,1}) == -546871)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+","**"}, {10,3,5,2,4,1,3}) == -76)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","//"}, {1,5,2,3,9}) == 6)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","-","**","//","+","//"}, {2,4,5,2,10,3,8}) == 6)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","*","+"}, {10,3,5,2,7,1}) == -66)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","*","*","-","//","+"}, {2,4,5,2,10,3,8}) == 165)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","*"}, {10,3,5,2,1}) == -7)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+","**"}, {10,4,5,2,4,1,7}) == -77)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+"}, {7,5,4,9,2}) == -7)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+"}, {7,4,4,9,2}) == -7)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","*","*","-","//","//"}, {2,4,5,2,10,3,8}) == 160)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","//"}, {5,1,7,10,2}) == 0)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {10,5,1,4,3,7}) == 15)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+"}, {1,5,4,9,2}) == -7)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","*"}, {8,3,5,8,1}) == -38)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","+"}, {2,7,10,3}) == 564950501)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","*","-","**","//","+"}, {2,4,5,2,10,7,8}) == -98)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","*","//"}, {11,5,2,7,10,3}) == 252)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","*","//","//"}, {11,5,2,6,7,10,3}) == 274)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+","+"}, {10,3,7,5,7,9,1}) == -546862)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","//"}, {1,5,3,3,9}) == 5)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {3,5,1,4,3,7}) == 8)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {10,5,4,3,8,4}) == -4081)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","-"}, {1,5,4,9,2}) == -11)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","*","//"}, {11,5,2,6,7,10}) == 271)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","+","**","+"}, {7,5,4,9,2}) == 262147)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**","-"}, {10,5,4,3,4,3,8}) == -57)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+"}, {10,3,5,7,1,1}) == -31)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","//"}, {2,1,7,10,2}) == -3)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","+","-","+"}, {7,4,4,9,2}) == -2)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","**","*","*"}, {10,3,5,2,1,1}) == -22)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {3,4,1,4,3,7}) == 7)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {10,5,2,3,11,8}) == 15)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {7,5,1,4,3,7}) == 12)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","//","//"}, {2,1,7,10,11}) == 0)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","-","**","//","+","//"}, {2,4,5,2,10,7,8}) == 6)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","*","*"}, {8,6,3,5,8,1}) == -119)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {8,5,1,4,3,7}) == 13)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","//","**","+"}, {7,8,3,10,2,4}) == 11)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","**","//","//"}, {11,5,2,6,7,10,3}) == -9056)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","**","*","*"}, {10,3,1,5,2,1}) == 1)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","//"}, {7,5,3,3,9}) == 11)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","-"}, {1,8,4,9,2}) == -11)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","*","*"}, {8,10,3,5,8,1}) == -120)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","-"}, {7,4,4,9,2}) == -11)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+","**"}, {10,3,5,2,6,1,3}) == -316)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+","**"}, {10,3,5,2,4,1,5}) == -76)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","*","*","-","//","-"}, {2,4,5,2,10,3,8}) == 149)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","**","*","*","**"}, {10,9,3,5,2,1,1}) == -485)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","*","*","-","//","//"}, {2,4,2,10,3,8,4}) == 320)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","-"}, {7,4,7,9,2}) == -11)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","**","//","//","-"}, {11,5,2,6,7,10,3,10}) == -9066)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","//"}, {1,5,2,3,3}) == 4)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {7,5,1,4,2,7}) == 12)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","*","*","//"}, {8,4,6,3,5,8,1}) == -718)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","//","+","**"}, {10,3,5,2,7,1,3}) == 3)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","*","*","**","+","**"}, {10,3,5,2,4,1,3}) == 241)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","**","*","//"}, {10,5,2,3,9,10}) == 8)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","*","*","//"}, {8,4,10,3,5,8,1}) == -1198)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+"}, {7,4,3,9,2}) == -7)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","//","**"}, {10,3,5,2,7,1,3}) == -637)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","+","**","+","//"}, {7,5,4,9,2,9}) == 262145)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","*","*","**","+","*"}, {10,3,5,2,4,1,3}) == 243)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","+"}, {1,5,2,3,9}) == 9)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+","**"}, {10,4,5,2,4,1,8}) == -77)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","*"}, {5,1,7,10,2}) == -15)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","//","-"}, {10,11,2,3,9,3}) == 18)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","-","**","//","//"}, {11,5,2,6,7,3}) == 52)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","*","+"}, {7,8,3,10,4}) == -9)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","//"}, {5,1,7,10,3}) == 2)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","+","-","+"}, {7,5,4,9,2}) == -2)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","**","+","//","-"}, {11,5,2,6,7,10,3,10}) == -279668)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","//","-","*","*","+"}, {10,3,5,2,7,1,7}) == 193)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","*","*","//"}, {8,10,3,5,8,1,1}) == -120)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","**","**"}, {3,5,1,4,3,7}) == 8)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","**","+","//","-"}, {11,5,2,4,7,10,3,10}) == -16116)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","*","-","**","//","+"}, {2,4,5,8,2,10,7}) == 41)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","*","-","**","//","+","+"}, {2,4,5,5,8,2,10,7}) == -195255)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","*","*","**","+","**"}, {10,3,5,2,4,1,3}) == 2401)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {10,4,1,4,3,7}) == 14)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","**","//","-"}, {11,5,2,4,7,3,10}) == -5196)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","*","**","+","**"}, {10,4,5,2,4,1,8}) == 1)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {10,5,2,4,4,8}) == 15)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","*","-","*","+"}, {3,4,5,6,7,8}) == 371)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","//","-"}, {10,11,2,3,3,3}) == 16)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","//"}, {2,4,7,10,2}) == 32763)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","//"}, {7,5,3,3,3}) == 9)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {9,4,1,4,3,7}) == 13)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**"}, {8,3,5,8,1}) == -38)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {7,5,2,4,3,7}) == 12)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","*","//","//"}, {7,5,3,3,9}) == 7)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","*","-","//","*","*"}, {2,4,5,2,10,3,8}) == 40)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+","**"}, {11,3,5,2,4,1,3}) == -76)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+"}, {9,3,5,7,1,1}) == -31)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","+"}, {1,5,2,4,9}) == 7)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","**","*","*","**"}, {10,9,3,10,2,1,1}) == -118097)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","**","*","**"}, {10,5,1,4,3,8}) == -6546)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","**","//","//","-"}, {11,5,2,6,7,10,10,10}) == -2534)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","*","-","**","//","+"}, {2,4,5,8,3,10,7}) == -4)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","//","-","*","*","+"}, {10,3,5,2,7,1,7}) == -1)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","*","*","**","+","**"}, {4,3,5,2,4,1,3}) == 81)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+","+"}, {10,3,7,5,5,9,1}) == -21862)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","//"}, {5,6,7,10,3}) == 1399677)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","-","**"}, {8,5,1,4,3,7}) == -2174)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+"}, {10,3,5,7,6,1}) == -588241)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+"}, {1,5,4,6,2}) == -4)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","-","**","//"}, {5,2,6,7,3}) == -93302)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {10,4,8,4,3,7}) == -4360)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","*","*","-","//","//"}, {2,4,5,2,10,3,9}) == 160)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","//","-","-"}, {10,11,2,2,3,3,3}) == 14)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","*"}, {3,3,4,5,6,7}) == 69)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {4,4,1,4,3,7}) == 8)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","*","*","-","//","-"}, {2,2,5,2,10,3,8}) == 29)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","-"}, {7,5,4,9,2}) == -11)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","*","+"}, {6,8,3,10,4}) == -10)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","-","//"}, {7,4,4,9,2,9}) == -9)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","*","-","**","//","//","-"}, {11,5,2,6,7,10,3,8,10}) == -11768162)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","-","+"}, {1,5,11,6,2}) == -4)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","*","*"}, {10,3,5,2,1}) == 0)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+","**"}, {8,3,5,2,7,1,3}) == -637)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","*"}, {10,1,5,2,1}) == 0)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","//","+","**"}, {10,3,5,1,7,1,3}) == 4)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","*","*"}, {10,3,5,6,1}) == 0)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {7,5,5,4,3,7}) == -2175)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","*","*","//","//","//"}, {8,4,5,2,10,4,3}) == 341)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","**","//","**","-"}, {11,5,2,6,7,10,3,10}) == -14)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","*","**","+","**"}, {10,4,1,2,4,1,8}) == 33)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","**","*","**","+","**"}, {11,4,1,2,4,1,8}) == 33)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","-","*","+","*"}, {3,4,6,6,1,8}) == -16)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","*"}, {1,5,2,3,3}) == -12)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","**","**"}, {1,4,3,7,5,5}) == 5)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","//","**","+"}, {7,9,3,10,2,4}) == 11)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","-"}, {10,5,4,3,8,4}) == 3)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","**","+"}, {1,5,2,4,9}) == -1)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","//","+","**"}, {10,3,5,1,5,1,3}) == 3)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","//"}, {8,1,7,10,2}) == 3)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","-"}, {10,5,4,3,9,4}) == 2)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","*"}, {1,3,4,5,6,7}) == 43)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","//","*","**"}, {10,5,11,4,4,8}) == -131057)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","*","*","**","+","**","+"}, {10,3,5,2,4,1,3,5}) == 246)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","//"}, {5,1,7,10,1}) == -5)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","**","-","*","*","**"}, {10,9,3,5,2,1,1,10}) == -244)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","*","//"}, {11,5,2,6,7,11}) == 272)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","*","*","**","+","**"}, {11,3,5,2,4,1,3}) == 2641)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+"}, {10,3,5,6,6,1}) == -233276)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","*"}, {9,3,5,7,1,1}) == -32)){ tests_passed++; } total_tests++;

    if((do_algebra({"**","-","//","+","*"}, {2,4,4,5,6,7}) == 58)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","//"}, {1,7,10,2}) == 141237624)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+","**"}, {10,5,2,4,1,5,3}) == 119)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","+","-","*"}, {7,5,4,9,2}) == -13)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","*","//","//"}, {6,5,3,3,9}) == 6)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","**","*","-","**"}, {10,9,3,5,2,1,1}) == -486)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","**","+","//","-"}, {11,5,6,6,7,10,3,10}) == -108068)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","-","//"}, {5,1,7,10,7}) == 4)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","-","*","+","-"}, {3,4,6,6,1,8}) == -31)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+","**"}, {5,3,5,2,6,1,3}) == -318)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","*","*","**","+","**"}, {4,3,5,3,4,1,3}) == 406)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","*","-","*","+"}, {3,4,5,6,7,8}) == -51)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","*","//"}, {10,5,3,3,9}) == 14)){ tests_passed++; } total_tests++;

    if((do_algebra({"-","//","+"}, {8,3,10,4}) == 12)){ tests_passed++; } total_tests++;

    if((do_algebra({"*","**","//","*"}, {2,1,7,10,11}) == 0)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","*","**","+"}, {10,3,5,6,6,3}) == -233274)){ tests_passed++; } total_tests++;

    if((do_algebra({"+","-","+","-"}, {1,5,2,4,9}) == -1)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","**","*","*","**"}, {10,9,3,2,1,1,10}) == -8)){ tests_passed++; } total_tests++;

    if((do_algebra({"//","-","**","*","*","*"}, {10,3,5,2,1,1,5}) == -122)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


