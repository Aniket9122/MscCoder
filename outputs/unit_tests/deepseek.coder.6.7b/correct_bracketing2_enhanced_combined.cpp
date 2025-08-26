#include<iostream>
#include<stack>
using namespace std;

bool correct_bracketing(string brackets)  {
    stack<char> stk;
    for (auto b : brackets){
        if (b == '<'){   // opening bracket
            stk.push('<');
        } else {   // closing bracket
            if (stk.empty()) return false;  // no matching opening bracket
            stk.pop();
        }
    }
    return stk.empty();   // stack should be empty at the end for correct bracketing
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

    if((correct_bracketing("<>"))){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><>>"))){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><<><>><>"))){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><<<><><>><>><<><><<>>>"))){ tests_passed++; } total_tests++;

    if((not (correct_bracketing("<<<><>>>>")))){ tests_passed++; } total_tests++;

    if((not (correct_bracketing("><<>")))){ tests_passed++; } total_tests++;

    if((not (correct_bracketing("<")))){ tests_passed++; } total_tests++;

    if((not (correct_bracketing("<<<<")))){ tests_passed++; } total_tests++;

    if((not (correct_bracketing(">")))){ tests_passed++; } total_tests++;

    if((not (correct_bracketing("<<>")))){ tests_passed++; } total_tests++;

    if((not (correct_bracketing("<><><<><>><>><<>")))){ tests_passed++; } total_tests++;

    if((not (correct_bracketing("<><><<><>><>>><>")))){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>") == true)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><>>") == true)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><<><>><>") == true)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><<<><><>><>><<><><<>>>") == true)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><<><>><>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><<><>><>>><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>") == true)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>>><><><><>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><><><>>>><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><>>>><<<<><>>><<>><>>>><<<<><>>>><<<<><>>>><<<<><>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>><>") == true)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<>><>>><>") == true)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>>><><><>>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<><><><>>>><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("") == true)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>><><><>>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<<>>><><><>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><>>>><<<<><>>><<>><>>>><<<<><<<<<<<<>>><><><>>>>><<>>>><<<<><>>>><<<<><>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<><><><>>>>><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<><><><>>>><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<><<><><><>>>><><>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>><><<<<><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>>><><<><><>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><><><>>>><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><><>>>><<<<><>>><<>><>>>><<<<><>>>><<<<><>>>><<<<><>>>><<><><>>>><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><><><>>>>><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<><<><><><>>>><><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<<<><><>>>><<<<><>>><<>><>>>><<<<><>>>><<<<><>>>><<<<><>>>><<><><>>>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><>>>><<<<><>>><<>><>>>><<<<><<<<<<<<>>><><><>>>>><<>><>><<<<><>>>><<<<><>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<>>><><><><>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<>>><><><><>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><>>>><<<<><>>><<>><>>>><<<<><<<<<<<<>>><><><>>>>>><<>><>><<<<><>>>><<<<><>>>><<<>>><><><>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<<>>><><><>>>>><<><<><<><><><>>>><><<>>") == true)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<>><><<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<>><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<><><><>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<><><><>>>>><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<>>><><><>>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<><<><><><>>>><><>><<><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>><><><>>>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<><<<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<><<><><>>>><><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><><><>>><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<><<>><><><>>>><><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<<>>><>><><>>>>><<><<><<><><><>>>><><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>>><<<><><><>>>>><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<><>><><>>>>><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><><><>>>><<<><><><>>>>><>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<><>>>><<<<<>><><><>>><<>><>>>><<<<><>>>><<<<><>>>><<<<><><<><><><>>>>><>>>><<><><><>>><><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<><<<<><<<<>>><><><>>>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>><<<<<><<<<><<<<>>><><><>>>>>><<<<<<<><><>>>><<<<><>>><<>><>>>><<<<><>>>><<<<><>>>><<<<><>>>><<><><>>>><>>>><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>><>>><<<><><><<>>>>><><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>>><><><><>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>>><><>><><>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<><<<>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>><><><>>>><><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>>>><<<><><><>>>>><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<><><><>>>>>><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>>>><<<><><><>>>>><><<<>>><><><>>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><>>>><<<<><>>><<>><>>>><<<<><<<<<<<<>>><><><>>>>><<>><>><<<<><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>>>><<><>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<><<>><><><>>>>><><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>>><><><>>><<<><<><><><>>>><><>><<><<>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>><<<<<><<<<><<<<>>><><><>>>>>><<<<<<<><><>>>><<<<><>>><<>><>>>><<<<><>>>><<<<><>>>><<<<><>>>><<<>><><<<>><>>>><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<<<>>><><><>>>>><><><><>>>><><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>><<<<<><<<<><<<<><<<>>><>>><<<><><><<>>>>><><<>><><><>>>>>><<<<<<<><><>>>><<<<><>>><<>><>>>><<<<><>>>><<<<><>>>><<<<><>><>><<><><>>>><>>>><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<>>>><<><><><>>>>><><<<>>>><<<><>><><>>>>><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<><><><>>>><><><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<><><><>>>><><<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>><>>><<<><><><<>>>>><<><<>><><><>>>>><><<>>><><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>>><><>><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>>>><><<>><<>>><><>><><>><<><>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><>><<<><><><>>>>>><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<>>><>>><<<><><><<>>>>><<><<>><><><>>>>><><<>>><><<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<><<><><><>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><<><<>><><><>>>>><><<>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>><><><<<>>><><<><><>>>><>><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<><<><>><><>>>><>><>><<><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<>><><><><<><<>><><><>>>>><><<>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<<<<>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>><<<<<<<>>>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><>>>>>><<<<<<<<<<>>>>>>>><><><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>>><>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<<<<<>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>><<<<>><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<>>>>><<<<<<<<<<>>>>>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>><<<<><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<>>>><<<<<>>>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><><><><><><>><><><><><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><><><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>><<<<<<<>>>>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><>><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>>><<<<<<<>>>><<><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<<<<>>><>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<<<<>>>>><>><><><><><><><><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<<<<<<<<<>>>>>>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>>><<<><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<>>><<<>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<>>>><<<<<<>>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>>><<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><>><<<>>>>><<<<<<<<<<>>>>>>>><>>>>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>>>>><><><><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<><>><<<><>><<<<>>>><>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<>>>>><<<<<<<<<<>>>>>>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<>>>>><<<<<<<<<<>>>>>><><><><><><><><>><<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<<<>>>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><><><><><><><><><><><><>><><><><><><>><<<<<>>>>><><><><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<<<>><>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<>>>><<<<<><><><><><><><><><>>>><<<<<<<<<<>>>>>>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<<<<<<<<>>>>>>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<<>>>>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>><<<<<<>>>>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<>>><<<<<<<>>>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><<<<<<<>>>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>><<<<<<<>>>><<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>>><<<<<<<>>>><<<<<<>>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<>>>>>>><<<<>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>>>><<<<<<<>>>><<<<<>>>>>>><<<<>>>>>>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<<<<>>>><<<<<>>>>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><>>>>>><<><<>>>>>><<>><<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<<<<<<<<<<>>>>>>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><><<<<<<<>>>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<>>>><<<<>>>>>>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<><><><><>><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<<<<<>>>>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>>>><<<<<<<>>>><<<<<>>>>>>><<<<>>>>>>>>><>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>><><><><><><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><>>>>>><<<<<<<>>>><<<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<<<<<<<>>>>>>>>><><><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<<<<>>>><<<<<>>>>>>>><<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<<<<<<>>>><<<<<>>>>><><><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>>><<><<<<<<>>>><<<<<<<>>>>><<<<<>>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><><<<<<<>>>><<<<<<<>>>>><<<<<>>>>><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<><<>>>>><<<<<<<>>>>><<><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>><<<<<<<>><>><<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>><<<<>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>>><<>><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><<<<>>>><<<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><>><<<<<<<<<<<>>>>>>>>><>>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>>><>>><>>>>><<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<>>>><<<<<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>>><<<<<<<>>>><<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>><><<<><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<<<<<>>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<>>>><<<<<<<>><>><<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>>>><<<<<<<>>>><<<<<>>>>>>><<<<>>>>>>>>><>>><>>>><<<<>>>>>><<>><<<>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<>>>><<<<>>>>>>><<<<<<<<<<<<>>>><<<<<>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><><<<<>>>>><>>>>><<<<<<<>>>>>><<<>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<>><>><<<>>>>><<<<<<<<<<>>>>>>>><>>>>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<<>>>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>><><<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>><<<<<>><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<<>>>><><><><>><<<<<<<<<<>>>>>>>>><>>>>><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>>>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><>><><><><><>><<<<<>>>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><><>><><><><<<><<>>>>><<<<<<<>>>>><<><><><>>>>><<<<<<<<<<>>>>>>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><><<<<>>>>>>>>><<<>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<<<<>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<>>><>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<><<<<>>>><<<<>>>>>>><<<<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<<<<<<>>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>>><<<>><><<<<>>>>><<<<<<>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<>>>>>>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<><>><><><><><><><><>>>><<<<>>>>>>><<<<><><><><><><><><><><><>><><><><><>>>><>><<>><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<><<<<>>>><<<<>>>>>>><<<<<<<>>>>>><<<<<<<>>>><<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>><><><><<<<<>><>><<<<<<<<>>>><<<<<>>>>><><><><<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<>><>><<<>>>>><<<<<<<<<><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<<>>>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<<<>>>>><><><>>>>>><<><<>>>>>><<>><<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><><>>>><<<>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>><<>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>>><><><><<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<<>>>><><><><>><<<<<<<<<<>>>>>>>>><>>>>><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>>>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<<<<<<>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<><><><<<<<>>>><<<<<<<>><>><<<>>>>><<<<<<<<<><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<<>>>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<>><>><<<>>>>><<<<<<<<<<>>>>>>>><>>>>>>><<<<>>>>>>>><><>><><><><><><><<<<<<>>>><<<<<<<>>>>><<<<<>>>>><>><<><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<>>>>>>><><><><<<<<<<<<<<<<<<<<<<>>>><<<<<>>>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><>><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>><><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<>>><<<<<<<>>>><<<<<>>>><><<<<>>>>><>>>>><<<<<<>>>><>>>>>>><<<<<<><<<<>>>><<<<>>>>>>><<<<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>><<<><>><<<<>>>><<><<<<>>>><<<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<><<<<>>>><<<<>>>>>>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><<<<>>>>>><<<<<<<>>>><<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<>>>><<<<>>>>>>><<<<<<<<<<<<>>><><<<<<>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<><>><<<><>><<>>><<<<<>>>><>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><>><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>><><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>><><><><><><>><><>>>>><>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><><>>><<<<<>><><><><><><>><><>>>>><>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>>><<<>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<<<<<<>>>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>>><<<<<<<>><><><><<<<<>><>><<<<<<<<>>>><<<<<>>>>><><><><<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>><<<><>><<<<>>>><<><<<<>>>><<<<<<<<>>>><<>>><>>>>>><><><><<><><><><>><<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><>>>><>>><><<<<>><><<<<>>>>><<<<<<>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>><<<<><<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>>><><<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><><<<<<<<>>>><<<<<>>>><<<<<<<>>>><<<<<>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><><><><><<<<<>>>>><<><<<<<>>>><<>><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<<<<<<>>>><<<<<<>>>>><<<<<>>>><>>>><<<<<<>>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><>>>>>>><<<<<<<<<<<<>>><>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>><<<><>>>><><<<><<<<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>><><><><<<<<>><>><<<<<<<<>>>><<<<<>>>>><><><><<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>>><<<<<<<>>>><<<<<>>>><<<<>>>>>>><<<<<<<<<<<>>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>><><><><><><>><><>>>>><>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<>>>>>>><<<<>><<<<<<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>><><><><><><><><>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>>>><<<<<<<>>>><<<<<>>>>>>><<<<>>>>>>>>><>><><><><<<<<>>>><<<<>>>><<<<<<<<>>>><<<<<>>>><><><><><><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>>>>>>><<><>><<<><>><<>>><<<<<>>>><>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<><<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<>>><><><><><><><><><<<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<<>>>><><><><>><<<<<<<<<<>>>>>>>>><>>>>><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>>>>>>><<<<<<<<<<<>>>>>>>>><<<<>>>>>>><<><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>><<<<<<>><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<>>><<<<<<<>>>><<<<<>>>>><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><<<<<<<>>>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>>><<<<<<<<<<<>>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>><><><><><><>><><>>>><<<>>>><<<<>>>>>>><<<<<>><<<<><>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<>>>>>>><<<<>><<<<<<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>><><><><><><><><>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>>>>><<<<<>>>>><>><<><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<>>>>>>><><><><<<<<<<<<<<<<<<<<<<>>>><<<<<>>>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<>>><>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><>>>><>>><><<<<>>><><<<<>>>>><<<<<<>>>><><><><><>><><>><>><<<>><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>><<<><>><<<<>>>>>><<>>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>>><<<<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><>>>><><<<><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<<>><><<<<<<<<>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>><><<<><<<<<<>>>><<<<<>>>><<<<>>>>>>><<<<<<<<<<<>>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<<>>>><><><><>><<<<<<<<<<>>>>>>>>><>>>>><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<>>>>>><<<<>>>>>>><<<<>><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><>><><><><><>><<<<<>>>>>><>>>><<>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<><<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<>>>>><<<<<>>>><<<><>><><><><><><><><>>>><<<<>>>>>>><<<<><><><><><><><><><><><>><><><><><>>>><>><<>><<<<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<<<>>>>>><<>><<<<<<<<>>>><<<<<>>>>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><>>>>>>>>>><><><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><>>>><>>>><><<<<>><><<<<>>>>><<<<<<>>>><<<><><><><>><><>><>><<<><>><<<>><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<>>>>>><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>><><><>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<<<><<<>>>><<<<<<<>><>><<<<<>>>>>>><<>>>><<<<<>><<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><><<<<<<<>>>><<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><>>>>><<<<<<<<<<<<<>>><>>><<<<<<<<<<<>>>><<<<<<>>>>><<<<<>>>><>>>><<<<<<>>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><<>>>>><<<<<<<>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>>>>>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><>>>>>><<<<<<<<<<<<>>>>>>>><><><><><><>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<<>>>><><><><>><<<<<<<<<<>>>>>>>>><>>>>><><<<<<>>>><<<<<<<<>>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>>>>>>><<<<<<<<<<<>>>>>>>>><<<<>>>>>>><<><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<><>>>><><<<><<<<<<>>>><<<<<>>>><<<<>>>>>>><<<<<<<<<<<>>>>><><><><<<>>>>><><><>>>>>>><<<<<<<<<<<<>>><>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<><><><>><<<<<>>>>>><>>>><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<>>>><<<<<<<>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><>>>><>>><><<<<>>><><<<<>>>>><<<<<<>>>><><><><><>><><>><>><<<>><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>><<<<><<<<>>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><>><<<<>>>>>><<>>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>><<<>>>><<<<<>>>><><><><>><<<<<<<<<<>>>>>>>>><>>>>><><<<<<<>>>><<<<<<<<>>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>>>>>>><<<<<<<<<<<>>>>>>>>><<<<>>>>>>><<><<<<<<><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><>>>><>>>><><<<<>><><<<<>>>>><<<<<<>>>><<<><><><><>><><>><>><<<><>><<<>><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>><>><><>>><<<<<>><><><><><><>><><>>>>><>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>>><<<>>>><<<<<><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<>>>>>><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>><><><>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><><<>><<>>><<<>>>><<>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<>>>><>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>>>>>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><>>>>>><<<<<<<<<<<<>>>>>>>><><><><><><>>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<>>>>>><<<<<<<<<<>>>>>>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><>>>>>>>><><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<><><><<<<<>>>><<<<<<<>><>><<<>>>>><<<<<<<<<><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<<>>>><><><><><><>>><><><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>><>><<<<<<<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>><>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<<<<>>>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<<<<>>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>>>>><<<<<>>>>><>><<><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<>>>>>>><><><><<<<<<<<<<<<<<<<<<<>>>><<<<<>>>><><><><><><>><>>>><><<><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<<<>>>>><><><>>>>>><<><<>>>>>>><<>><<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<>>><><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>>><><><>>>><>><<<<<<<<<<<>>>>><<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<>>>>>><<<<<<<<<<>>>>>>><>><>>>>><<<><<<<<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><<<>><>><<<>>>>><<<<<<<<<<>>>>>>>><>>>>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<><><>><<<<<>>>>>><>>>><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><>>>>>>>><><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<><><><<<<<>>>><<<<<<<>><>><<<>>>>><<<<<<<<<><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<<><><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>><><<<><<<<<<>>>><<<<<>>>><<<<>>>>>>><<<<<<<<<<<>>>>><><>><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>>><<<<<>>>>><>><<><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<>>>>>>><><><><<<<<<<<<<<<<<<<<<<>>>>><<<<<>>>><><><><><><>><>>>><><<><<<<<>>>><<<<<<<<<<<<>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><>><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><>><<<<<>>>>>><>>><><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><<<<>>>><<<<<>>>><><><><><<<<<>>>>><<<<<<<<>>>><>><<<<<<<<<<<>>>>>>>>><>>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><<>>>>><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>>>><<><<<<<<<<>>>><<<<<>>>><><><><><><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<<>>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>>><<<<<<<>><><><><<<<<>><>><<<<<<<<>>>><<<<<>>>>><><><><<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><><<>><<>>><<<<<>>>><<<<<>>>><><><><>><<<<<<<<<<>>>>>>>>><>><>>><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>>>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<<>>>><<>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<><><><><<<<<<<<<<<>>>><<<<>>>>>>><<<<>><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<<<<<<>>>>><<<<<>>>>><><><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>>><<<<<<<<<<<<>>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<<<<<<<<<<><>>>>>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>><><><><><<<<<>>>><>>>>><<<<<<<<<<<<<>>><>>><<<<<<<<<<<>>>><<<<<<>>>>><<<<<>>>><>>>><<<<<<>>>>><><><><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<><<>><>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>>><<<<<<<>>><>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<><>><><><><><><><><>>>><<<<>>>>>>><<<<><><><><>>>>><<<<<>>>>><>><<><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<>>>>>>><><><><<<<<<<<<<<<<<<<<<<>>>>><<<<<>>>><><><><><><>><>>>><><<><<<<<>>>><<<<<<<<<<<<>>>>>>>>><><><><><><><><>><><><><><>>>><>><<>><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>><<<>>>>><<<<<<<<<<>>>>>>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>><><<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>><><><><<<<<>>>><<<><>><<<<<<<<<<>>>>>>>>><>>>><<<<<>>>><<<<<>>>>><><><><<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>>>>>><<<><>><<<<>>>>>><<<<<<<<<<<<>>>>>>>>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><>>>>>><<<<<<<<<<<<>>>>>>>><><><><><><>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<><>>>><<<<>>>>>><<>><<<<<<<<>>>><<<<<>>>>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>>>><<<<<<<>>>><<<<<>>>>>>><<<<>>>>><>>><<<><>><<<<>>>><<><<<<>>>><<<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>>>>>><>><><><><<<<<>>>><<<<<<<>>>><<<<>>><<<<>>>><><><><><><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><><><><><<<<<>>>><<<<<<<<>>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<><>>>><><<<><<<<<<>>>><<<<<><<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><><<<<<<<>>>><<<<<>>>>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><<<<>>>><<<<<>>>><><><><><<<<<>>>>><<<<<<<<>>>><>><<<<<<<<<<<>>>>>>>>><>>>>><<<<<>>>>><><><><<<<>>><<<>>>><<<<>>>>>>>><><><><<<><><><><<<<<<<<<<<>>>><<<<>>>>>>><<<<>><<<<>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>>><<<>><><<<<>>>>><>>>>><>><<<><>><<<<>>>><<>><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>>><<<<<<<>>>>>>><<<<<<>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>>>><<<<<<<>>>><<<<<>>>>>>><<<<>>>>><>>><<<><>><<<<>>>><<><<<<>>>><<<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>>>>>><>><><><><<<<<>>>><<<<<<<<<<<>>>><<<<<<<>><>><<<<<>>>>>>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<<>>><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<><<<<<>>>><<<<>>>>>>><<<<<<<>>>>>><<<<<<<>>>><<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<><><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<>>>><<<<<>>>><><><><><>>>>><<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<>>>><<<<<><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>>><<<<<<<>>>>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>>>><<<<<<<>>>><<<<<>>>>>>><<<<>>>>><>>><<<><>><<<<>>>><<><<<<>>>><<<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>>>>>><>><><<><><<<<<>>>><<<<<<<<<<<>>>><<<<<<<>><>><<<<<>>>>>>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>>>><<<<<<<>>>><<<<<>>>>>>><<<<>>>>><>>><<<><>><<<>><<<<>>><<<<>>>><><><><><><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<><><><><><><><><>>>>><<>>>>>>><<>>>>>>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<>>>><<<<>>>>>>><<<<><>>>><><<<><<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<<<<<<<<>>>>>>>>><>>>><<<>>>><<<<>>>>>>><<<<>><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>><<<<<><><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>><<><><><><><><<<<>>>><<<<<>>>><><><><><<<<<>>>>><<<<<<<<>>>><>><<<<<<<<<<<>>>>>>>>><>>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<><><><>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<>><>>>>>><<<<<<<>>>><<<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<><>>>><><<<><<<<<<>>>><<<<<>>>><<<<>>>>>>><<<<<<<<<<<>>>>><><>><><<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<<<<<<<>>>>>>>>><><><><><><><><<<<<<>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>><><<><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<>>>><<>>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><<>>>>><>><<>>><<<>>>>><<<<<<<<<<>>>>>>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>><><<<><<<<<<>>>><<<<<>>>><<<<>>>>>>><<<<<<<<<<<>>>>><>>>>>><<<<<<<<<<<<>>>><>>>><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><>><><><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>>>>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<>>>><<<>><<>>>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<>><><<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<><<>>>>><<<<<<<>>>>><<><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<<<<>>><<<>>>><><><><><<<<<>>>><<<<<<<<>>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<><<<<<>>>>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<>>>>><<<<<<>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><>>>>><<<<<<<<<<<<<>>><>>><<<<<<<<<<<>>>><<<<<<>>>><><><><>><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>><><><>><>><<<<<>>>><>>>><<<<<<>>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<>><>>>>>><<<<<<<>>>><<<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<><>>>><><<<>><<<<<<>>>><<<<<>>>><<<<>>>>>>><<<<<<<<<<<>>>>><><>><><<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<<<<<<<>>>>>>>>><><><><><><><><<<<<<>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><><<<<<<>>>><<<<<<<<>>>><<<<<>>>>>>>><<<<>>>>>><<>><>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<>>>><<<<<<<>><>><<<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><><><><><><><><><><><><>><><><><><><>><<<<<>>>>><><><><<<<<<<<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>><>>><<<<<>>>>><<<<>>>>><<<<<<<<<<>>><>>><<<<<<<>>>>><>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<>>>><<<<<<<>>><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>><<<<<>>>>>><<<>>>><<<<<>>>><><><><>><<<<<<<<<<>>>>>>>>><>>>>><><<<<<<>>>><<<<<<<<>>>>><<<<<>>>>><><><><<<<>>><<<<<<<<>>>>>>>>><<<<>>>>>>><<><<<<<<><<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>>><>>><>>>>><<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<>>>>><<<<<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><>>>>>><<<<<<<>>>><<<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><><<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<<<<<<<>>>>>>>>><><><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><>>>><>>><><<<<>><><>>><><<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<<<><<<<>>>>><<<<<<>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<>>>><>><<<<<>><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<>>><<<<<<<>>>><<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><><><><><><>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><<<>><>><<<>>>>><<<<<<<<<<>>>>>>>><>>><><><><<<<<>>>><<<<<<<>><>><<<>>>>><<<<<<<<<><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<<>>>><><><><><><>>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<><><>><<<<<>>>>>><>>>><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>>>><<<<<<<>>><>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>>><<<<<<<>>><><><><<<<<<<<<<<>>>><<<<<>>>>><>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>><><<><>>>>><<<<><>><<<><>><<>>><<<<<>>>><>>>>>>>><<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><>><><>>>>><><<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><>><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><>><<<<<>>>>>>><>>><><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><<<<>>>><<<<<>>>><><><>>>>>><<<<>>>>>><<>><><<<<<>>>>><<<<<<<<>>>><>><<<<<<<<<<<>>>>>>>>><>>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<<>>>>>>") == true)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><<<<<<<<<<>>><>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<><<<<>>>>>>>>><<<>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>><<<<<<<>>>><<><<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<>>>>><<<<<<<<<<>>>>>><><><><><><><><>><<>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<><><>>>><>>><><<<<>><><>>><><<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<<<><<<<>>>>><<<<<<>>>><<<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<><>>>><><<<><<<<<<>>>><<<<<>>>><<<<>>>>>>><<<<<<<<<<<>>>>><><><><<<>>>>><><><>>>>>>><<<<<<<<<<<<>>><>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<>><>><<<>>>>><<<<<<<<<<>>>>>>>><>>>>>>><<<<>>>>>>>><><>><><><><><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<>>>>><><><<<<<<>>>><<<<<<<>>>>><<<<<>>>>>><>><<><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<>>>>>>><><><><<<<<<<<<<<<<<<<<<<>>>><<<<<>>>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<>>><<<<<<<>>>><<<<<>>>><><<<<>>>>><>>>>><<<<<<>>>><>>>>>>>><<<<<<><<<<>>>><<<<>>>>>>><<<<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<><<>>>>><<<<<<<>>>>><<><><>>>>><<<<<><><><><><><><><><><><><><<<<>>>><<<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><>><<<<<<<<<<<>>>>>>>>><>>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<><><><>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<><<<<>>>><<<<>>>>>>><<<<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<>>>>>><<<<<<<<<<>>>>>>><>><>>>>><>>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><>>>>>><<<><<<<<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<<>>>><><><><>><<<<<<<<<<>>>>>>>>><>>>>><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>><<<<<<<<><<<>>>><<<<<<<>><>><<<<<>>>>>>><<>>>><<<<<>><<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><><<<<<<<>>>><<<<<>>>>>>>>>>>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><>><<<>>>>><<<<<<<<<>>>><<<<<<<>>>>><<<<<>>>><<<<<<>>>>>>>><>>>>>>><<<<>>>>>>>><><><><<<<<>>>>>><<<<><>><<<><>><<>>><<<<<>>>><>>>>>>>>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>>><<<<<<<<>>>>>>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><>><><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>><<><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<<<<<<<<<<><>>>>>>>><>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>><><><><><><>><><>>>>><>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<><>><>><><><><><><><<><><><>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>>><<<<<<<>>>><<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>>><<>><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>><<<<>>>><<<<>>>>>>><<<<<<<<<<<<>>>><<<<<>>>><<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>><><><><><><>><><>>>><<><>><><<<<>>>>>>>>><<<>>>><<<<<<>>>><<<<>>>>>>><<<<<>><<<<><>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<>>>>>>><<<<>><<<<<<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>><><><><><><><><>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<><>><<><<<<>>>>>>>>><<<>>>><<<<<<<<<<>>><>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><<<<<<>>>><<<<<<<>>>><<><<<>>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<><<><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<>>><><><><>><>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><>>>>>>>><><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<><><><<<<<>>>><<<<<<<>><>><<<>>>>>><<<<<<<<<><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<<><><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>>>><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<><<><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<><>>>><><<<><<<<<<>>>><<<<<><<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<>><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><><<<<<<<>>>><<<<<>>>>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<><><<<<<>>>><<<<<<<<<<<<>>>><<<<<<>>>>><<<<<>>>><>>>><<<<<<>>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<><><><><><><<>>>>><>><<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><>><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><>>>>><<<<<>>>>><>><<><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<>>>>>>><><><><<<<<<<<<<<<<<<<<<<>>>><<<<<>>>><><><><><><>><>>>><><<><<<<<<<>>><>>>>>><>><<<<<<>>>>>>><>>><><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><>><<><><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>>>>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<>>>>><<<<<>>>>><>><><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<><>>>><><<<><<<<<<>>>><<<<<>>>><<<<>>>>>>><<<<<<<<<<<>>>>><><><><<<>>>>>><><>>>><>>><><<<<>>><><<<<>>>>><<<<<<>>>><><><><><>><><>><>><<<>><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>><<<<><<<<>>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><>><<<<>>>>>><<>>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><<<<<<><><>>>>>>><<<<<<<<<<<<>>><>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<>>>><<<<<<<>><>><<<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><><><><><><><><><><><><>><><><><><><>><<<<<>>>>><><><><<<<<<<<<<<>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>>><<<<<<<>><><><><<<<<>>><>><<<<<<<<>>>><<<<<>>>>><><><><<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><<<<>>>><<<<<>>>><><><>>>>>><<<<>>>>>><<>><><<<<<>>>>><<<<<<<<>>>><>><<<<<<<<<<<>>>>>>>>><>>>>><<<<<>>>>><<<<>><<<<><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>>><<<>><><<<<>>>>><<<<<<<>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<>>>><<<<>>>>>><<>><><<<<>>>>><<<<<<<>>>><<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>><<<<<><><><><><><><><>>>>><<<<<<<<>>>>>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<>>>>><<<<<<<><<<>><><><><><><>><<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<>>>>><<<<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<><><><><><><<>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<<<<>>><<<>>>><><><><><><><<<<<<>>>><<<<<<<>>>>><<<<<>>>>><>><><><><><><<<<<>>>><<<<<<<<>>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<><<<<<>>>>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>>><<<<<<<>>>><<<<<<<<>>>><<<<>>>>>>><<<<>><<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><><<><><><><>><><><><><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<<<<<><<<>>>><<<<<<<>><>><<<<<>>>>>>><<<>>>>><<<<<>>>>><><><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<<<><<<>>>><<<<<<<>><>><<<<<>>>>>>><<>>>><<<<<>><<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><><<<<<<<>>>><<<<<>>>>>>><>><<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<><<><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>>><<<<<<<<<<>>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<>>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<<<><<<>>>><<<<<<<>><>><<<<<>>>>>>><<>>>><<<<<>><<<<<>><><>><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><><<<<<<<>>>><<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<<>>>><><><<<<<>>>>>>>>><>>>>><><<<<<>>><<<<>><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>>>>><><><><<<<<<<<>><<<<<<>><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<>>><<<<<<<>>>><<<<<>>>>><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><<<<<<<>>>><<<<<>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<>>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><>>>>>><>>>><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>>><><>>>><>>>><><<<<>><><<<<>>>>><<<<<<>>>><<<><><><><>><><>><>><<<><>><<<>><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>><>><><>>><<<<<>><><><><><><>><><>>>>><>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>>><<<>>>><<<<<><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<>>>>>><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>><><><>><<<<<<<<<<<<>>>>>>>>><<>>><<<<<<<>>>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>><><<<<><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<><><><><>><><><<><><<<<<>>>><<<<<<<<<<<<>>>><<<<<<>>>>><<<<<>>>><>>>><<<<<<>>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><><><<<<>>>><<<<>>>>>>><<>>><><><><<<<<<>>>><<<<<<<>>>>><<<<<>>>>><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<<<<<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>>><<<<<<<>><><><><<<<<>><>><<<<<<<<>>>>><<<<<>>>>><><><><<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<><>>>>><>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><>><<<<><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><><>><><><><<<><<>>>>>><<<<<<<>>>>><<><><><>>>>><<<<<<<<<<>>>>>>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<>>>>><<<<><>>>>><>>>>>>>><<<<<<<<>>>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<>><>>>>><<<<<<><<<<>>>><<<<>>>>>>><<<<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><>>>>>>>><><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<><><><<<<<>><>><<<<<<<>><>><<<>>>>><<<<<<<<<><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<<><><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>><><<<<>>>><><><><><<<<<>>>><<<<<<<<<>>>><<<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><<<<>>>><<<<<>>>><><><><><<<<<>>>>><<<<<<<<>>>><>><<<<<<<<<<<>>>>>>>>><>>>>><<<<<>>>>><><><><<<<>>>>>>><<><<<>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>>><<>><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><><><>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>>>><<<<<<<>>>><<<<<>>>>>>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>><><><><><><>><><>>>>><>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<><<<<<<<<<<<<>>>><<<<<>>>><><><><><><>>><>>>><<><<<<>>>><<<<<<<><>><>><><><><><><><<><><><>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><>>>><>>>><><<<<>><><<<<>>>>><<<<<<>>>><<<><><><><>><><>><>><<<><>><<<>><>><<<><>><<<<>>>><<><><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>><><><><<<<<>><>><<<<<<<<>>>><<<<<>>>>><><><><<>>>>>><<<>>>><<<<<<<>><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<>>>>>><>><<<<>>>><<><<<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<<<>>>>><><><>>>>>><<><<>>>>>>><<>><<<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>><><><>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><<<<<<>>>><<<<<<<>>>><<><<<>>>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<<<<><>>><><<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<<<<>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<<<<<<>>>><<<<<<>>>>>><<<<<>>>><>>>><<<<<<>>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><><><<<<<>>>>><<><<<<<>>>><<>><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>>>><<<<<<<>>>><<<<<>>>>>>><<<<>>>>><>>><<<><>><<<<>>>><<><<<<>>>><<<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>>>>>><>><><><><<<<<>>>><<<<<<<<<<<>>>><<<<<<<>><>><<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<><><><<<<<>>>><<<<<<<>><>><<<>>>>><<<<<<<<<><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<<>>>><><><><<<<<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<><<<<>>>><<<<>>>>>>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><<<<>>>>>>>>>>><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><>><><><><><<>><<<<<>>>>>><>>>>><<<<<<<<<<>>>>>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>>><><><<<<<>>>><<<<<<<>>>><<>>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<>>>><<<<>>>>>>><<<<><>>>><><<<><<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>>>><<<<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<<<><<<>>>><<<<<<<>><>><<<<<>>>>>>><<>>>><<<<<>><<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><<><<<>>>><<<<<<<>><>><<<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><><><><><><><><><><><><>><><><><><><>><<<<<>>>>><><><><<<<<<<<<<<>>>>>>><><><><>><<<<<>>>>>><>>>><><>><><<<<<<<>>>><<<<<>>>>>>><>><<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><><><<<<<>>>>><<><<<<<<>>>><<>><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>><><<<<><<<<><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>>><><>>>><>>><><<<<>>><><<<<>>>>><<<<<<>>>><><><><><>><><>><>><<<>><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>>>>>><<<<<<<<<<<<>>><>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>><<<><>><<<<>>>>>><<>>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><<<<<>><<><<<<<<<<>>>><<<<<>>>><><><><><><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<><<<<>>>><<<<>>>>>>><<<<>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>><><<<><<<<<<<>>>><<<>><<><>><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<>>>><>><<<<<>><><><><><><>><<<>>>><<<<<>>>><><><><>><<<<<<<<<<<>>>>>>>>><>>>>><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>>>>>>><<<<<<<<<<<>>>>>>>>><<<<>>>>>>><<><<<<<><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<>>><<<<<<<>>>><<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>><<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>>>>><<<<<<>>>><<<<<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>><><<><>>>>><<<<><>><<<><>><<>>><<<<<>>>><>>>>>>>><<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>><><><><><><><><>><<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><<>>>>><<<<<<<>>>>>>><<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>>><<<<<<<<>>>>>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>><>>><<<<<<<<>>>><<><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<><>>>>><<<><<<<<<<<>>>>>>>>><<>>><<<<<<<>>>><<<<<>>>><><<<<>>>>><>>>>><<<<<<>>>><>>>>>>>><<<<<<><<<<>>>><<<<>>>>>>><<<<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<<><<<<>>>><<<<>>>>>>><<<<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<><>>>><><<<><<<<<<>>>><<<<<>>>><<<<>>>>>>><<<<<<<<<<<>>>>><><><><<<>>>>><><><>>><<<<<<<<<<>>><><<<<>>>>><<<<<<<>>>><<<<<>>>>>>>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<>>>><<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>><<<<<>>>><<<<<<<>>>><<<<<>>>>>>><<<<>>>>>>>>><>>>>>>><>>>>><<<<<<<>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><>><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>>>>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<><><><>><<<<<>>>><<<>>>><<<<>>><<>><<<<<>><>>>><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<<>>>><><><><>><<<<<<<<<<>>>>>>>>><>>>>><><<<<<>>>><<<<<<<<>>>>><<<<<>>>>><><><><<<<>><>>>>>><<<<<<<<<<>>>>>>>><><><><><><><><>>>>>>>>><<<<<<<<<<<>>>>>>>>><<<<>>>>>>><<><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><><><><><<<<<>>>>><<><<<<<>>>><<>><><><<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><><><><><><>><><><<<>>>><<<<<>>>><><><><>><<<<<<<<<<>>>>>>>>><>>>>><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>><<<<<<<<><<<>>>><<<<<<<>><>><<<<<>>>>>>><<>>>><<<<<>><<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><><<<<<<<>>>><<<<<>>>>>>>>>>>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<<><><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<<<><<<>>>><<<<<<<>><>><<<<<>>>>>>><<>>>><<<<<>><<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><>><><><><><><<<<>>>><<<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><>><<<<<<<<<<<>>>>>>>>><>>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<><><><<><><><><>><<<<<>>>>>><>>>><><>><><<<<<<<>>>><<<<<>>>>>>><>><<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>>><<<<<<<>><><<>><<<<<<<<>>>><<<<<>>>>><><><><<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><<><><><><>><><><><<<><<>>>>>><<<<<<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<><<<<>>>><<<<>>>>>>><<<<<<<>>>>>><<<<<<<>>>><<<<<>>>>>>><<<<<>>>>><<><><><>>>>><<<><<<<<<<>>>>>>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><><><><><<<<<>>>><<<<<<<<>>>>><<<<<>>>>><><><>><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<<>>>><><><><>><<<<<<<<<<>>>>>>>>><>>>>><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>><<<<<<<<><<<>>>><<<<<<<>><>><<<<<>>>>>>><<>>>><<<<<>><<<<<>><><><><><><>><><>>>>><<<<<><><<><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><><<<<<<<>>>><<<<<>>>>>>>>>>>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>>>><<<<<<<>>>><<<<<>>>>>>><<<<>>>>>>>>><>><><><><<<<<>>>><<<<>>>><<<<<<<<>>>><<<<<>>>><><><><><><>>><<<<<<<>>>><<>>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>><<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<>><>>>>><<<<<>>>>><>><<><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<>>>>>>><><><><<<<<<<<<<<<<<<<<<<>>>>><<<<<>>>><><><><><><>><>>>><><<><<<<<>>>><<<<<<<<<<<<>>>>>>>><><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>>><<>><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><>><<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><><>>><<<<<>><><><><><><>><><>><>>><>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>>><<<>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<>>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><<<<<<<<<<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>>><<<<<<<<>>>>>>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<>>>>><<<<<<<<<<>>>>>><><><><><><><><<>><<>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<<<<<<>>>><<<<<<><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><><<>><<>>><<><>>>><<>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><<<<<<<<>>>><<<<<>>>>>>>><<<<>>>>>><<>><<<<<<<>>>>>>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><><><><>><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><>><<<<<>>>>>>><>>><><><>><><<<<><>>>>><>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><>><><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><>>>><>>><><<<<>>><><<<<>>>>><<<<<<>>>><><><><><>><><>><>><<<>><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>><<<<><<<<>>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><>><<<<>>>>>><<>>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><><><><><><><>>>>><<<<<<<<>>>>>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>><><><><><><>><><>>>>><>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><><><<><><><>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><><<><><><><>><><><><><>><><><><><><>><<><><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>>>>>>><<>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>><>>><<<<<>>>>><<<<>>>>><<<<<<<<<<>>><>>><<<<<<<>>>>><<<>>>><<<<>>><<>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<>>>><<<<<<<>>>><><>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>><<<<<<<>>><><<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<<<><<<>>>><<<<<<<>><>><<<<<>>>>>>><<>>>><<<<<>><<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><<><<<>>>><<<<<<<>><>><<<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><><><><><><><><><><><><>><><><><><><>><<<<<>>>>><><><><<<<<<<<<<<>>>>>>><><><><>><<<<<>>>>>><>>>><><>><><<><<<<<>>>><<<<<>>>>>>><>><<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<>>>>><<<<>>>>>>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>>>>><<<<<>>>>><>><<><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<>>>>>>><><><><<<<<<<<<<<<<<<<<<<>>>><<<<<>>><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><>>>><>>><><<<<>>><><<<<>>>>><<<<<<>>>><><><><><>><><>><>><<<>><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>><<<<><<<<>>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><>><<<<>>>>>><<>>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><<<<<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><>>>>><><><><><><<<<>>>><<<<<>>>><><><><><<<<<>>>>><<<<<<<<>>>><>><<<<<<<<<<<>>>>>>>>><>>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<><><><<>>>><><<<<>><><<<<>>>>><<<<<<>>>><<<><><><><>><><>><>><<<><>><<<>><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<>>>>>><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>><><><>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<<<<<<>>>><<<<<<><><><><><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<<<<<>>>><<<<<>>>>>>>><<<<>>>>>>>>>>><<<<<>>>>><>><<><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<>>>>>>><><><><<<<<<<<<<<<<<<<<<<>>>><<<<<>>>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<><><><<<<<>>>><<<<<<<>><>><<<>>>>><<<<<<<<<><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><><<<<<<<>>>><<<<<<>>>>><><><><<<<<<<<<<<>>>><<<<<>>>><><><><<<<<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<><<<<>>>><<<<>>>>>>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><<<<>>>>>>>>>>><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>>>>>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>><<<><>>>><><<<><<<<<<<><><><>><><><><><>>>>><<<<<<<<<<>>>>>>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><<<<<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<><>><>><<<>>>>><<<<<<<<<><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<<>>>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<>>>><<<<<<<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<><><><><><><><><>>>>><<>>>>>>><<>>>>>>><<<<<>>>>><><>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>>>>>><<<><>><<<<>>>><<><<<<>>>><<<<<><<<<>>>>><<<<<<<<>>>>>>><<<<<>>>><<<>>>><<>>><>>>>>><><>>>>>><<<<<<<<<<<<>>>>>>>><><><><><><>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<<>>>><><><><>><<<<<<<<<<>>>>>>>>><>>>>><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>><<<<<<<<><<<>>>><<<<<<<>><>><<<<<>>>>>>><<>>>><<<<<>><<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><><<<<<<<>>>><<<<<>>>>>>>>>><>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<><><<<<<>>>><<<<<<<>>>><<<<<>>>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><>>><<<<<<<<<<>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>><<<<<>>>><<<<<<<>>>><<<<<>>>>>>><<<<>>>>>>>>>><>>>>>>><>>>>><<<<<<<>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><><><><><><>><><><<<>>>><<<<<>>>><><><><>><<<<<<<<<<>>>>>>>>><>>>>><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>><<<<<<<<><<<>>>><<<<<<<>><>><<<<<>>>>>>><<>>>><<<<<>><<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><><<<<<<<>>>><<<<<>>>>>>>>>>>>>>><<<<<<<<<<<>>>>>>><<<<<>>>>><<<<<<<>>>><<<<<<<<>>>><<<<>>>>>>><<<<>><<<<>>>>>>>><<<<>>>>>>><<<<>><<<<<><><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<><><><><>><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<><><<><><<<<<>>>><<<<<<<<<<<<>>>><<<<<<>>>>><<<<<>>>><>>>><<<<<<>>>>><><><><<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<><>>>><><<<><<<<<<>>>><<<<<>>>><<<<>>>>>>><<<<<<<<<<<>>>>><><><><<<>>>>><><><>>><<<<<<<<<<>>><><<<<>>>>><<<<<<<>>>><<<<<>>>>>>>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>>><<<><<<<>>>><<<<<<<>>>><<<<>>>>>>><<<<<<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><>>>>>><<<<<<<<<<<<<>>><>>><<<<<<<<<<<>>>><<<<<<>>>>><<<<<>>>><>>>><<<<<<>>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<<><<>><>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<<><>><>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><><><><><><>><><><<<>>>><<<<<>>>><><><><>><<<<<<<<<<>>>>>>>>><>>>>><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>><<<<<<<<><<<>>>><<<<<<<>><>><<<<<>>>>>>><<>>>><<<<<>><<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><><><>><<<<<>>>>>><>>>><><>><><<<<<<<>>>><<<<<>>>>>>>>>>>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<<><><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><><<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><>>>>>>><<<<<<<<<<<<>>><>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>>><<<<<<<<<<<>>><>>>><>><<<><<<<<<<<>>>><<<<<>>>>>>>><<<<>>>>>><<>><<<<<<<>>>>>>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<><<>>>>><<<<<<<>>>>><<><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<<<>>>><<><<<>>>>>>>>><<<<<><><><><><><><><><><><>><><><<<>>>><<<<<>>>><><><><>><<<<<<<<<<>>>>>>>>><>>>>><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>><<<<<<<<><<<>>>><<<<<<<>><>><<<<<>>>>>>><<>>>><<<<<>><<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><><<<<<<<>>>><<<<<>>>>>>>>>>>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<<><><><>><<<<<<<<>>>>>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>>>><<><><><><>><<<<<>>>>>>>>>><>><><><><<<<<>>>><<<<<<<<<<<>>>><<<<<<<>><>><<<<<>>>>>>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><><><><><><><><<<<<<<<>>>>>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<<<<<<<<<>>>>>>>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><>>>><>>><><<<<>>><><<<<>>>>><<<<<<>>>><><><><><>><><>><>><<<>><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>><<<><>><><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><<><><><><>><><><><<<><<>>>>>><<<<<<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<><<<<>>>><<<<>>>>>>><<<<<<<>>>>>><<<<<<<>>>><<<<<>>>>>>>><<<<<>>>>><<><><><>>>>><<<><<<<<<<>>>>>>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>><<<<<<><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<>>>><<<<>><>>>>><<<<<<<<<<<<>>>><<<<<>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><<<<<>>>><<<<<>>>>><><><><><><><><<<<<>>>>><<><<<<<>>>><<>><><><<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><>>>>>><<<<<<<<<<<<<>>><>>><<<<<<<<<<<>>>><<<<<<>>>>><<<<<>>>><>>>><<<<><><<<><><><><><>><<<>>>>><<<<<<<<<<>>>>>><><><><><><><><>><<>>>>><<>><><><<><><<<<<>>>><<<<<<<<<<<<>>>><<<<<<>>>>><<<<<>>>><>>>><<<<<<>>><><><><><><<<>>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><<>>>>><>><<<<<>>>>>>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<><<>>>>><<<<<<<>>>>><<><><>>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<>>>><<<<>>>>>>><<<<><>>>><><<<><><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>>><>>>><<<<<<<<<>>>><<<<<<<>>>>><<<<<>>>>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<>><>><<<>>>>><<<<<<<<<><><><><<<<<>>>><<<<<<<>>>><<<<<>><<<<<<<<><<<>>>><<<<<<<>><>><<<<<>>>>>>><<>>>><<<<<>><<<<<>><><><><><><>><><>>>>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><>>>><><>><><<<<<<<>>>><<<<<>>>>>>><>><<<<>>>>>>><><><><><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<<>>>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<>>>>><>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<><>>>><<<<<>>>>>><<>><<<<<<<<>>>><<<<<>>>>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<<<<<<<<<<>>>>>>>>><>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<<<<>>><<<>>>><><><><><><><<<<<<>>>><<<<<<<>>>>><<<<<>>>>><>><><><><><><<<<<>>>><<<<<<<<>>><>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<><<<<<>>>>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><><<<<<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>>><<<<<<<>>>>><<><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><<>>>>><<<<<<<>>>>>>><<<<<<>>>><><<><><><><>><><>><>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>>>>><<<<<>>>>><>><<><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<>>>>>>><><><><<<<<<<<<<<<<<<<<<<>>>>><<<><<<<>>>><<<<<<<>>>><<<<>>>>>>><<<<<<<<<>>>>>>><<<<<>>>><<<<<>>>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>><>>><<<<<<<<<<<>>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>>>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<<<<>>>><<<<<>>>>>>>>><<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<<<<<<<>>>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<>>>><<<<<>>>><><><><><>>>>><<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<>>>><<<<<<><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><>><><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><><<<<>>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<>>>>>>><<<<>><<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<>>>>><<<<<<<<<<>>>>>><<><><><><><><><>><<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>>>><>>>>>><<<<<<<>>>><<<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<<<<<<<>>>>>>>>><><><><><><><><<<>>><<<>>>><<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>>>>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<>>>><<<<<<<>><>><<<<<>>>><<<<>>>>>>>><><>>>>><<<<<<<<<<<>>><>>>><><<<<<>>>><<<<<<<>>>><><><><><><><><><><><><>><><><><><><>><<<<<>>>>><><><><<<<<<<<<<<<>>><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<<>><><<<<<<<<>>><><><><><><<>>>>><>><<>>><<<>>>>><<<<<<<<<<>>>>>>>>><>>>>><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><>><<<>>>>><<<<<<<<<>>>><<<<<<<>>>>><<<<<>>>><<<<<<>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<>>>>>>><>>>>>>><<<<>>>>>>>><><><><<<<<>>>>>><<<<><>><<<><>><<>>><<<<<>>>><>>>>>>>>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<><>>><<<<>>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<><<<<>>>><>>>>><<<<<<<<<<>>><>>>>>>><><><><><><>><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><><><><<<>><>><<<>>>>><<<<<<<<<<>>>>>>>><>>><><><><<<<<>>>><<<<<<<>><>><<<>>>>><<<<<<<<<><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<<>>>><><><><><><>>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<><><><<<<<>>>><<<<<<<>><>><<<>>>>><<<<<<<<<><><><><<<<<>>>><<<<<<<>>>>><<<<<>>>>><><><><><<<<<<<>>>><<<<<<>>>>><><><><<<<<<<<<<<>>>><<<<<>>>><><><><<<<<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<><<<<>>>><<<<>>>>>>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>>>><<<<>>>>>>>>>>><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>><<<<<<<>>>>><<<<<>><>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<>>>>><<<<<<><<<>><><><><><><>><<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<<>>>><><><><>><<><<<<<<<<>>>>>>>>><>>>>><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>>>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<><<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<><<>><>><<<<<<<<>>>><<<<>>>>>>><<<<<><><<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><><>><><>>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<><><><<<<<>>>><<<<<<<>><>><<<>>>>><<<<<<<<<><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<<>>>><><><><<><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<>>>>>>><<<<<<<><><<<<>>>><<<<<>>>><><><><><<<<<>>>><<<<<<<<>>>><>><<<<<<<<<<<>>>>>>>>><>>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>>>>><<<<>>>>>>><<<<>><<<<><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><<<<<<<<<<>>>><>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<<<<<<<<<<><>>>>>>>><>>>>><><><><<<<<>>>><<<<<<<>><<<<<>>>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>>>>><<<<<>>>>><>><<><<<<<>>>><<<<<<<>>>><<<<<>>>>>><<<<<>>>><><><><><><>><>>>><><<><<<<<>>>><<<<<<<<<<<<>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<<<<<<<<<>>><>>>><<<<<>>>><<<<<<<>>>><<<<<>>>>>>><<<<>>>>>>>>><>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><<<<<>>>><<<<<<<>><>><<<>>>>><<<<<<<<<<>>>>>>>><>>>>>>><<<<>>>>>>>><><>><><><><><><><<<<<<<><<>><>><<<<<>>>><<<<<>>>><<<<<<<>>>>><<<<<>>>>><>><<><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<>>>>>>><><><><<<<<<<<<<<<<<<<<<<>>>><<<<<>>>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><<<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><>><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><>><><><><<<<<>>>>><<><<<<<>>>><<>><><><<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<><<<>>>><<<<>>><<<<<>><><><><><><>><><>>>>><>><<<<<><><><<<<<<<<<<>>>>>>>>><<>>><><><><><><>><>><<<><>><<<><>><<<<>>>><<<<>>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<<<>>>><<<<>>>>>>><<<<>><<<<<<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>><><><><><><><><>>>>>>><><><><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<<<<<>>><><><><><><><><><<<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>><<<>>>><<<<<>>>><><><><>><<<<<<<<<<>>>>>>>>><>>>>><><<<<<<>>>><<<<<<<<>>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<>>>>>>>>>>>>><<<<<<<<<<<>>>>>>>>><<<<>>>>>>><<><<<<<<><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<<<<>>>><<<<<>>>>>>>><<<<><<<<>>>>><<<<<<<>>>><<<<<>>>>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>>><>>>>>>>>>>><><><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><><>><>><<<><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><><><>>>><>>><<<>>>>><<<<<<<<<<>>>>>>>>><>>>>>>><>>>><><>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>><<><>><<><<<<>>>>>>>>><<<>>>><<<<<<<<<<>>><>><<<>>>><><><><><<<<<>>>><<<<<<<<>>>><<<<<>>>>><><><><<<<>>>>>>><<<<<>>>>><<<<<<<<<<<>>>>><>>><<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>>><><><><><><>><<<><<>>>>><<<<<<<>>>>><<><><><>>>>>>>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>>><<><<<<>>>><<<<<<<>><><><><<<<<>>>><<<><>><<<<<<<<<<>>>>>>>><>>>>><<<>><><<<<>>>>><<<<<<<>>>><<<<<>><>>>><<<<<>>>><<<<<>>>>><><><><<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><<<<>>>><<>><<<<>>>><<<<<<<><>>>>><<<><<<<<>>>><<>>><>>>>>><><><><><><><><>><<<<<>>>><<<<>>>><<<<>>>>>>><<><><><><<<<<>>>><<<<<><><><><><><><><>>>>><<<<<<<<<<>>>>>>>>><<>><><<<<<<<<>><><><><<<<<<<<<<<>>>><<<<<>>>><<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>>>>><<<<<>>>>><>><<><<<<<>>>><<<<<<<>>>><<<<<>>>>><><><><<<<<>>>>><<<><<<<>>>><<<<<<<>>>><<<<>>>>>>><<<<<<<<<>>>>>>><<<>>>>>>><><><><<<<<<<<<<<<<<<<<<<>>>><<<<<>>>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<><>>>><<><>>>><<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>><<>>>>><<<<<>>>>><<>>>><<<>><>><<<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><><>") == true)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<><>>><>>><>>><<><<<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>><<<><>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<<<<<<<<<>>>>>>>>>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><><><>><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>><<<<<<<>>>><<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>>><>>>>>><<<<<<<>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<>>>>><<<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><<<>>>>><<<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><<<>>>>><<<<<>>>>>><<>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>>><<>>><><>><<<>>>>><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>><<<<<<<>>>><<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>>>>><<<<<<<<<<>>>>>>>>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>><<<<<>><>>>><<<<<>><<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<<<><<<<<<>>>>>>>>>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>><<<<<<>>>><<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><><><>><><><><><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<<>>>>>><><<<<>>>><<<<<<<>>>><<>>><><>><<<>>>>><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<<<>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>><<<<>><><<<<>>>><<<<<<<>>>><<>>><><>><<<>>>>><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<<<<>>>>>><<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<<<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<>>>>>>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>>><<>>><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>>><<<<>>>>>><<>><><>><<<>>>>><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<<>>>><<>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>><<<<<<<><>>><<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>><>>><<<<<>>>>>><<<>><<<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>><<<<<>><>>>><<<<<>><<>>>>>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><<<>>>>><<<<<>><><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>><<<<<>><<<>>>>><<<<><<<<<<>>>>>>>>>>>>><<<<>>>>>><<>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><<>><>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>><><<<<>>>><<<<<<<>>>><<>>><<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<>>>>>>><<<<<>>>>>><>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<>>>>>>><<<<<>><>>><<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>><<>>><>><<<>>>>>>><<<<>>>>>><<>><><>><<<>>>>><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>><>>>>>>><<<<<<<<<<>>>>>>>>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<<<<<<>>>>><<<<>>>><<>>><>>>>>><<<<<<<>>>><<<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<><><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<<<<>>>>><><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><><><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>><>><<<<>>>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<><>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<>>>>>>><>><<<>>>>><<<<>>>>>><<>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<>><><<<<>>>><<<<<<<>>>><<>>><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>>><<<<>>>>>><<>><><>><<<>>>>><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>><<<<>><><<<<>>>><<<<<<<>>>><<>>><><>><<<>>>>><<<<<>>><>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><<<<>>>><<<<<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>><>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<<<>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<>>>><<<<>>>><>>>>>>><<<<<<<<<<>>>>>>>>><<<<<<<<<<<<<<>>>><<>><><<<<>>>><<<<<<<>>>><<>>><<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<>>>>>>><<<<<>>>>>><>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><<><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><<<<>>>><<<<<<<>>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>><<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<>><>>><<<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<<<<<<>>>><<<<<<<>>>><<<<<>>>><>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>><>><<<<<<<>>>><<>>><>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<<>>>>>>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>><>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<<<>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>><<<<<<<><>>><<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><><><>><><><><><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<<<<<<>>>>>>><<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><<<>>>>><<<<<<>>>>>><<>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><><><>><><><><><<><<<<>>>><<<<<<<>>>><<>>><>>>><<<<<<<<<<<>>>>>>><<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<>>>>>>><<<<<>><>>><<<<>>>>>><<><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<<>>>><>>>>>>><<<<<<<<<<>>>>>>>>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>><<<<<<><<<<<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<<<><<<<<<>>>>>>>>>>>><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<><>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<><>><<<<>>>>>><><<<<>>>><<<<<<<>>>><<>>><><>><<<>>>>><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>><>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<><<<<>>>><<><<<<<>>>><<>>><>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<<<>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<>>>><<<<>>>><>>>>>>><<<<<<<<<<>>>>>>>>><<<<<<<<<<<<<<>>>><<>><><<<<>>>><<<<<<<>>>><<>>><<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<<>>>><<<<<<<>>>><<>>><>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>><>>>>>>><<<<<<<<<<>>>>>>>>><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<><<<<>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><<>>>><><<<<>>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<>>>>>>><>><<<>>>>><<<<>>>>>><<>>><<<<<<>>>><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><<<>>>>><><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>>><<<<<<<>>>><>>><<<<<>>>>>><<<>><<<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><<<>>>>><>>>>><<<<<<<<>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>><><<<<>>>><<<<<<<>>>><<>><<<>>>>><<<<<>>>>>><<><>>><<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<>>>>>>><<<<<>>>>>><>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<<>>>><<<<<<<>>>><<>><><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<><<<<<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><<><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><<<>>>>><<<<<>><<>><<<>>>>><<<<<>>>>>><<>>>>>>><<>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>><<<<<<<>>>><<<<>>>>>>><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><<><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><><><>><><><><><<><<>><><<<<>>>><<<<<<<>>><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>><<>>><>><<<>>>>>>><<<<>>>>>><<>><><>><<<>>>>><<<<<>>>>>><<>>>>>>><<<<<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<>>>>>>><<<<<>><>>><<<<>>>>>><<><<<>>>><<>>><>>>><<<<<<<<<<<>>>>>>><<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>>>><<<<<<<><>>><<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>>><<<<<<<<><<<<>>>><<<<<<<><>><<<><<>><<<>>>><<<<<>>>>>>><<<<<<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<><<<<>>><<>><<<>>>>><<<<<>><<>><<<>>>>><<<<<>>>>>><<>>>>>>><<>>>>><<<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<><><<<<>>>>><>>>>><<<<<<<>>>>>>><>><<<>>>>><<<<>>>>>><<>>><<<<<<>>>><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>><<<<>>>>>><<>>>>>><<<<<<<><>>><<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<><>><<<<>>>>>><><<<<>>>><<<<<<<>>>><<>>><><>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><><><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>><>><<<<>>>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>>>>>><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<<<><<<<<<>>>>>>><><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><><<<<>>>>><>>>>><<<<><<<<>>>>>>><<<<<<>>>>>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>><<<>>>><<<<>>>>>>><<<<<<<>>>><<<<>>>>>>><<<<<<<<<<<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>>><>>>>>><<<<<<<>>>>>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><<<<>>>><<<<>>>>>>><<<><<<<>>><><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<><<<<>>>><<<<<<<>>>><<>>>><>>>>>><<<<<<<>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>>><<>><<<>>>>><<<<<>>>>>><<>>>>><<<<<>>><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<><>><<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><><><>><><><><><<><<<<>>>><<<<<<<>>>><<<>><<<>>>>><<<<>>>>>><<>>>>><>>>><<<<<<<<<<<>>>>>>><<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<><>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>><>>><<<<<>>>>>><<<>><<<<<>>>>>><<>>>>><>>>>><<<<><<<<>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>><>><<<<<<<>>>><<>>><>>>>>>><<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><<<<<>>>><<<<<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><><<>><<<>>>>><<<<<<<<<<>>>>>>>>>>>>><<<<>>>>>><<>>><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<><>>>>>><><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<<<<<<>>>>><<<<>>>><<>>><>>>>>><<<<<<<>>>><<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><><<<<>>>><<<<<<<>>>><<>>><<<<>>>><<<<>>>>>>><<<><<<<>>><><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<><<<<>>>><<<<<<<>>>><<>>>><>>>>>><<<<<<<>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>><<<>>>>><<<<>>>>>><<>><<<<<><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<><>>>>>>><<<<<>><>>>>>>>><<>>>>>><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<>>>>>>><>><<<>>>>><<<<>>>>>><<>>><<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<<<<<<>>>><<<<<<<>>>><<<<<>>>><>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<><<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<<>><>><<<<<<<>>>><<>>><>>>>>><<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>><>>>>>>><<<<<<<<<<<>>>>>>>>><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<<>>>><<<<<<<>>>><<>>>><>>>>>><<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>><<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<><><<<<>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<><>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>><<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<<<<>>>><<<<>>>>>>><<<<<<<>>>><<<<>>>>>>><<<<<<<<<<>>><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><<<>>>>><><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>><<<<>>>>>><<<><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<><>>>>>><><<<<<>><>>><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<><<<<<><<<<<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>><<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><<><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<>>>>>>><>><<<>>>>><<<<>>>>>><<>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<<<><>>><<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<<<<<<>>>><<<<<<<>>>><<<<<>>>><>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<><<<<>>>><<<<<<<>>>><<>>><><><<<><<<<<><><<<<>>>>><>>>>><<<<<<<>>>>>>><>><<<>>>>><<<<>>>>>><<>>><<<<<<>>>><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>><<<<>>>>>><<>>>>>><<<<<<<><>>><<<<<>><>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<><<<<<>>>>><<>>><>>>>>><<<<<<<>>>>>>>>><<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<<>>>><<<<<<<>>>><><>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>><<<<<<<<>><<<>>>>><><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<><<<<<><<<<<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>><>><<<>>>>><><<<<>>>><<<<<<<>>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<>>>>><<<<<>><>>><<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><<><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<<<>>>>>>>>>><<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<>>>>>>><<<<<>><>>><<<<>>>>>><<><>><<<<><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<>><>>><<<>>>>>>>>>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<><<<<<>>>>>>>><<<<>><>>>") == true)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<<<<<<<<<>>>>>>>>>>>>>><><><><><><><><><<<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><<<>>>>><>>>>><<<<<<<<>>><>><<<><<>>>><><<<<>>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<><<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><><><>><<><><><><<><<<<>>>><<<<<<<>>>><<>>><>>>>><<<<<<<<<<<>>>>>>><<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>><>><<<<<<<>>>><<>><><>>>>>>><<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<><<<<>>>><<<<<<<>>>><<>>><>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>>><<>>><>>>>>><<<<<<<>>>><>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<><<<<>>>><<><<<<<>>>><<>>><>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<<<>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<><<>>>><<<<<<<>>>><<>>><>>>>>><<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><<>>>><>><<<<<<<>>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>><>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>><<>>><>><<<>>>>>>><<<<>>>>>><<>><><>><<<>>>>><>><<<>>>>><><<<<<>>>><<<<<<<>>>>>><<><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<>>>><<<<>>>><>>>>>>><<<<<<<<<<>>>>>>>>><<<<<<<<<<<<<<>>>><<>><><<<<>>>><<<<<<<>>>><<>>><<<<>>>><<<<>>>>>>><<<><<<<<>>>><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>><<<<<>><>>>><<<<<>><<>>>>>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<><<<<<<<>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<><>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>>><<<><>><<<>>>>><<<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>>><<<<<<<>>><><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>><>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<><<<<>>>><<><<<<<>>>><<>>><>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<<<>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<><<<<<>>>>><<>>><>>>>>><<<<<<<>>>>><><<<<<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>>>>><<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<<<<<<<<<>>>>>>><>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<>>>>>>><<<<<>><>>><<<<>>>>>><<><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>>><<<<>>>>>><<>>>>>>>>><><><><><><><><><<<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<<<<<<>>>>>><<<<>>>><<>>><>>>>>><<<<<<<>>>><<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>><<>><<<>>>>><<<<<>><><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<><<>><>>>>>>><<>>>>><<<>>><<><<<<>>>><<<<<<<<>>>><<>>>>>>><<<<<>><>>><<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>>>>>>>>>><<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<<<<<<>>>>>><<<<>>>><<>>><>>><>>>><<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<><><><><><>><><><><><<><<<<>>>><<<<<<<>>>><<>>><>>>><<<<<<<<<<<>>>>>>><<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>><><<<<>>>><<<<<><<>>>><<>>><<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<>>>>>>><<<<<>>>>>><>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<<>>>><<<>>>><<<<>>>><>>>>>>><<<<<<<<<<>>>>>>>>><<<<<<<<<<<<<<>>>><<>><><<<<>>>><<<<<<<>>>><<>>><<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<<<<>>>>><<<<>>>><<<<<<<><>>><<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><<><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<>>>><<<<>>>>>>><<<><<<<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<><<<<>>>><<<<<<<>>>><<>>><>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>>><<>>><>>>>>><<<<<<<>>>><>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<><<<<>>>><<><<<<<>>>><<>>><>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<<<>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>>><<<<<<<>>>><>>><<<<<>>>>>><<<>><<<<<><>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<><>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><<><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<><<<<>>>>>>><<<<<<>>><><<<<<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><<<>>>>><<<<>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<><<<>>>><<>>><>>>>>><<<<<<<>><>>>>>><<<<<>><>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><>>>>><<<<<<<><>><<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<<<<>>>><<<<<<<><<>><<<>>><<>><<<>>>>><<<<<>><><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<><<>><>>>>>>><<>>>>><<<>>><<><<<<>>>><<<<<<<<>>>><<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>><<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<><<<<<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>><>><<<><<>>>><><<<<>>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><<><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<><<<>>>>><><<<<<>>>><<<<<<<>>>>>><<><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<<>><>><<<<<<<>>>><<>>><>>>>>><<<<>>>>><<<<<<<>>>><<<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>>><<<<<<<>>><><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>><>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<><<<<>>>><<><<<<<>>>><<>>><>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<<<>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<>><><<<<>>>><<<<<<<>>>><<>>><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>>><<<<>>>>>><<>><><>>><<<>>>>><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>><<<<>><><<<<>>>><<<<<<<>>>><<>>><><>><<<>>>>><<<<<>>><>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><<<>>>>><><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<><>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>>><<<><>><<<>>>>><<<<<>>>>>><<>><<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>>><<<<<<<<><<<<>>>><<<<<<<><>><<<><<>><<<>>>><<<<<>>>>>>><<<<<<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<<<>>>>>>>>><<<<<<<>>>><><>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<><>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>>><<<><>><<<>>>>><<<<<>>>>>><<>><<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<><<<>>>>><><<<<<>>>><<<<<<<>>>>><><<><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><>>>><<<<<>>>>>>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>><<>>><>><<<>>>>>>><<<<>>>>>><<>><><>><<<>>>>><>><<<>>>>><><<<<<>>>><<<<<<<>>>>>><<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>><>>>>>>><<<>><<<>>>>><><<<<>>>><<<<<<<>>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<><<<<<<<<>>>>>>>>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>>><<<<>><<<>>>><<<<<<<<>>>><<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<<<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<><>><<<>>>>><<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>>><<<><>><<<>>>>><<<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<>>>>>>><>><<<>>>>><<<<>>>>>><<>>><<<<<<>>>><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>><>><<<><<>>>><><<<<>><>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><<<<>>>><<<<<><>><<<>><>>><<<<<>>>>>><<>><<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>><><<<<<<<>>>><<>>><>>>>>><<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>>>><<>><><>><<<>>>>><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>>><<<<><<<<>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<<>>>><<><<<>>>><<>>><>>>>>><<<<<<<>><>>>>>><<<<<>><>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>>><<<<>>>>>>>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<>><><<<<>>>><<<<><<<>>>>><><<<<<>>>><<<<<<<>>>>><><<><<<<<>>>>>><<>>>>>>><<<<<<>>>><<<<<>>>><>>>>>>><<<<<<<<<<>>>>>>>>><<<<<<<<<<<>>>>>>><<<<<>>>>>><<<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>><<>><<<>>>>><<<<<>>>>>><<>>>>><<<>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>><<<<<<<>>>><<<<>>>>>>><<<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<<>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>><<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>>>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>><<>>><>><<<>>>>>>><<<<>>>>>><<>><><>><<<>>>>><>><<<>>>>><><<<<<>>>><<<<<<<>>>>>><<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<>>>><>><<<>>>>><><<<<>>>><<<<<<<>>>>>><<>>>><<<<<>><>>><<<<>>>>>><<>>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>><<>><<<>>>>><<<<<>>>>>><<>>>>><<<>>><<<<<<<>>><><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<<>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<><<<<>>>><<<<<<<>>>><<>>><><>><<<>>>>><<<<<<<<<<>>>>>>>>>>>>>><><><><><><><><><<<<<>>>>>><<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>><><<>>><>>>>>><<<<<<<>>>>>><>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<><<<>>>><<>>><>>>>>><<<<<<<>><>>>>>><<<<<<>><>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><<<>>>>><>>>>><<<<<<<<>>><>><<<>><<>>>><><<<<>>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>><>><<<<<<<><<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>><<>><><>>>>>>><<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><<<<>>>><<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<<<<<<>>>>><<<<>>>><<>>><>>>>>><<<<<<<>>>><><<>><>>>><<<>>>>><<<<>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>>>>>>><><<<<<>>>><<<<<<<>>>>>><<><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<<<<>>>><<<<>>>>><><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<><<<<<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>><>><<<><<>>>><><<<<>>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><<><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>>><<<<<<<>>>><<<<>>>>>>><<<<<<<<<<>>><>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<><>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>><>>><<<<<>>>>>><<<>><<<<<>>>>>><<>>>>><>>>><><<<<><<<<>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<<>>>><<<<<<<>>>><<>>>><>>>>>>><<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<><>><<<<>>>>>><><<<<>>>>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><<<>>>>><>>>>><<<<<<<<>>>>>>><<<<<<>>>><>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><><<<<<<>>>>>>>><<>>>>>><<<<<<<<<<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<><<<<>>>>>>><<<<<><>><<<><<<>>>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<>>>><<<<>>>><>>>>>>><<<<<<<<<<>>>>>>>>><<<<<<<<<<<<<<>>>><<>><><<<<>>>><<<<<<<>>>><<>>><<<<>>>><<<<>>>>>>><<<><<<<<>>>><<<<>>>>>>><<<<<<<><<<>>>>>><<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<><<<<>>>><<<<<<<>>>><<>>><>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>><>>>>><<<<<<<<<<<<>>>>>>><<>>><>>>>>><<<<<<<>>>><>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<><<<<>>>><<><<<<<>>>><<>>><>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<<<>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><<<>>>>><><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<><>><<<<>>>><<<<<>>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<><<<<<>>>>><<>>>><>>>>>><<<<<<<>>>>>>>>><<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>><><<<<>>>>><>>>>><<<<<<<>>>>>>><>>>>><<<<<<<><>><<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<<>><>><<<<<<<>>>><<>>><>>>>>><<<<<<<><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><<><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<>>>><<<<>>>>>>><<<><<<<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<><<<<>>>><<<<<<<>>>><<>>><>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>>><<>>><>>>>>><<<<<<<>>>><>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<><<<<>>>><<><<<<<>>>><<>>><>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<<<>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<>>>>>>><<<<<<<<<<<<<<<>>>><<<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>><<>>><>><<<>>>>>>><<<<>>>>>><<>><><>><<<>>>>><>><<<>>>>><><<<<<>>>><<<<<<<>>>>>><<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>>><<<<<>>>><<<<<<<><>>><<<<<>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><<<<>>>>>><<>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>><><<<<>>>><<<<<<<>>>><<>><><<<<>>>><<<<<><<>>>><<>>><<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<>>>>>>><<<<<>>>>>><>>>>>><<<<<<<<<<<<>>>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<>>>><<<<>>>><>>>>>>><<<<<<<<<<>>>>>>>>><<<<<<<<<<<<<<>>>><<>><><<<<>>>><<<<<<<>>>>><<<<<><><<<<>>>>><>>>>><<<<<<<>>>>>>><>><<<>>>>><<<<>>>>>><<>>><<<<<<>>>><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>><<<<>>>>>><<>>>>>><<<<<<<><>>><<<<<>><<>>><<<<>>>><<<<>>>>>>><<<><<<<<>>>><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>>>><><<<<>>><><<<<>>>><<<<<<<>>>><<>><><<<<>>>><<<<<><<>>>><<>>><<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<>>>>>>><<<<<>>>>>><>>>>>><<<<<<<<<<<<>>>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<><<>><<<>>>>><<<<<>><><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>>>><<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>>>>>>>>>><<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<><<<<>>>><<<><<<<>>>><<>>><>>>>>><<<<<<<<<<<<><>>>><<<<>>>><<>>><>>>>>><<<<<<<>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<<>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<><<<<>>>><<<<<<<>>>><<>>><><>><<<>><>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>><<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>>>>>>>>>>>>><><><><><><><><><<<<<>>>>>><<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<><<<<<>>>>>>>><<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><><><>><<<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><>>>>><<<<<<<><>><<<<>>>>><><><><<><<<<>>>><<<<<<<>>>><<<>><<<>>>>><<<<>>>>>><<>>>>><>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<><>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>><<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><>>>>>><<<>>>>>><<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<<>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<><<<<>>>><<<<<<<>>>><<>>><><>><<<>><>>><<<>>>>><<<<<>>>>>><<<><<<<<>><<<>>>>><<<<<>>>>>><<>><>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>><<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>>>>>>>>>>>>><><><><><><><><><<<<<>>>>>><<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<>><>><<>>><>>>>>><<<<<<><<<<<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><<><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>>><<<<<<<<><<<<>>>><<<<<<<><>><<<><<>><<<>>>><<<<<>>>>>>><<<<<<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<>>>>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>><<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<>>>>>><<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<><>><<<>>>>><<<<>>>>>><<>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>><<>>><>><<<>>>>>>><<<<>>>>>><<>><><>><<<>>>>><>><<<>>>>><><>><<<>>>>><<<<<>>>>>><<>><<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<<>>>><<<>>>><<<<>>>><>>>>>>><<<<<<<<<<>>>>>>>>><<<<<<<<<<<<<<>>>><<>><><<<<>>>><<<<<<<>>>><<>>><<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<<<<>>><<>><<<>>>>><><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<<>><>>><<<<>>>>>><<<><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<><>>>>>><><<<<<>><>>><>>><<<<>>>><<<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>><<<<<<><>>><<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>><<<<><<<<>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><<<<>>>><<<<<<<><><><<<>>>>><<<<>>>>><<>>>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>>><>>>>>><<<<<>><><<<<>>>><<<<<<<>>>><<>>><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>>><<<<>>>>>><<>><><>><<<>>>>><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>><<<<>><><<<<>>>><<<<<<<>>>><<>>><><>><<<>>>>><<<<<>>><>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<><<<<<<>>>>>><<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<><<<<>>><><<<<>>>><<<<<<<>>>><<>>><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>>>><<<<>>>>>><<>><><>><<<>>>>><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>>><<<<<<<<>>>><<>>>>>>><<<<<>><>>><<<<>>>>>>><<><>><<<<><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<>><>>><<<>>>>>>>>>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>><>><<<<<<<>>>><<>>><>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<>><><<<<>>>><<<<><<<>>>>><><<<<<>>>><<<<<<<>>>>><><<><<<<<>>>>>><<>>>>>>><<<<<<>>>><<<<<>>>><>>>>>>><<<<<<<<<<>>>>>>>>><>><<<><<>><>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>><<<<<<<<<<<>>>>>>><<<<<>>>>>><<<<<<>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<><<<<<>>>>><<>>><>>>>>><<<><<<<>>>>>>>>><<<<>><>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><><<<<>>>>><>>>>><<<<><<<<>>>>>>><<<<<<>>><>>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><<>>>><><<<<>>>><>>>>>><<<<<><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<<<><<<<<<>>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>><<<<<>><>>>>>>>>>><<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>>><<<<<<<<><<<<>>>><<<<<<<><>><<<><<>><<<>>>><<<<<>>>>>>><<<<<<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<<<>>>>>>>>><<<<<<<>>>><><>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<<>>>>>>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<<>>>><<<<<<<><>><<<>>>>><><<<<>>>><<<<<<<><><><<<>>>>><<<<>>>>><<>>>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<>>>><<>>>><>>>>>>><<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<<<<<<>>>><<<<<<<>>>>><<<<<>>>><>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><><<<<>>>>><>>>>><<<<><<<<>>>>>>><<<<<<>>>><>>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<<<<<<>>>><<<<<<<>>>><<<<<>>>><>>>><<<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<<>>><>>>>>><<<<<<<>>>>>><>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><<<>>>>><><>><<<><<>>>><><<<<>>>><<<<><<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>><>><<<<<<<>>>><<>><><>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<><>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>>><<<><>><<<>>>>><<<<<>>>>>><<>>>>>>>><<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<<>>><<<>>>><><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>><<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>>>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">>>><<<<<<><<<<<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<><>>>>>><><<<<<>><>>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>><>>>>>>><<<<<<<<<<>>>>>>>>><<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<><<<<>>>><<<<<<<>>>><<>>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><<<>>>>><>>>>><<<<<<<<>>><>><<<>><<>>>><><<<<>>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>><<<<<>>>><<<<<<<<>><<<>>>>><><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<><<<<<><<<<<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>><>><<<>>>>><><<<<>>>><<<<<<<>>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<>>>>><<<<<>><>>><<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><<><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<<<>>>>>>>>>><<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<><>><<<>>>>><<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<><><<><>><<<<>>>>>><><<<<>>>>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><<<>>>>><>>>>><<<<<<<<>>>>>>><<<<<<>>>><>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>>><<<><>><<<>>>>><<<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>><><<<<>>>><<<<<<<<<<<<<<>>>>>><>>><<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><<<<>><>><<<<>>>>>>><<<><<<<>>><><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<><<<<>>>><<<<<<<>>>><<>>>><>>>>>><<<<<<<>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>><<>>><>><<<>>>>>>><<<<>>>>>><<>><<><<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>><>><<<>>>>><>><<<>>>>><><<<<<>>>><<<<<<<>>>>>><<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>>><<<<<>>>><<<<<<<><>>><<<<<>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<>><><>><><<<<>>>><<<<<<<>>><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>><<<>>><>><<<>>>>>>><<<<>>>>>><<>><><>><<<>>>>><>><<<>>>><><<<<>>>><<<<><<<>>>>><><<<<<>>>><<<<<<<>>>>><><<><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>>><><<<<<>>>><<<<<<<>>>>>><<><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<<<>>>><<<<<<<>>>><<>>><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>>><<<<>>>>>><<>><><>>><<<>>>>><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>><<<<>><><<<<>>>><<<<<<<>>>><<>>><><>><<<>>>>><<<<<>>><>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><><>><<<>>>>><>>>>><<<<<<<<>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<<<<<<>>>><<<<<<<>>>><<<<<>>>><>>>><<<>>><>>>>>><<<>>>><<<<>>>><>>>>>>><<<<<<<<<<>>>>>>>>><<<<<<<>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<<>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><><<<<>>>>><>>>>><<<><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<><<<<<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><<><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<<<>>>>>>><>>>>><<<<<<<><>><<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><<<<>>>>><>>>>><<<<<<<>>>>>>><>><<<>>>>><<<<>>>>>><<>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<<<><>>><<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<<<<<<>>>><<<<<<<>>>><<<<<>>>><>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<><<<<>>>><<<<<<<>>>><<>>><><><<<><<<<<><><<<<>>>>><>>>>><<<<<<<>>>>>>><>><<<>>>>><<<<>>>>>><<>>><<<<<<>>>><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>><<<<>>>>>><<>>>>>><<<<<<<><>>><<<<<>><>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<><<<<<>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<<>>>><>>>>><>><<<<<<<<<<>>>>>>>>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<>>>>>>><>><<<>>>>><<<<>>>>>><<>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<<>>>><<<<<<<>>>><<>>><<<<<<<>>>><>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<><>><<<>>>>><<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<><><<><>><<<<>>>>>><><<<<>>>>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><<<>>>>><>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<<<<<<>><>>><<<<<<<<>>>>>>><<<<<<>>>><>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>>><<<><>><<<>>>>><<<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<><<<<<>>>><<<>>><>>>>>><<<<<<<>>>>>>>><<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>>><<<<<<<<><<<<>>>><<<<<<<><>><<<><<>><<<>>>><<<>>>><<<<<>><>>>>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<>>>>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>><>>>>>>><<<<<<<<<<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<>>>><<<>>><>>>>>><<<<<<<>>>>>><>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>>><<<<<<<>>>><>>>><<<<<>>>>>><<<>><<<<<><>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>>>><<<<>><<<>>>><<<<<<<<>>>><<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>>><<<<>><<<>>>><<<<<<<<<>>>><<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>><>>>>>>><<<>><<<>>>>><><<<<>>>><<<<<<<>>>>><>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<><<<<<<<<>>>>>>>>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><<<>>>>><><>><<<><<>>>><><<<<>>>><<<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>><<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<<<<<<>>>><<>>><>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<><>><>><<<<<<<>>>><<>><><>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<><>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>>><<<><>><<<>>>>><<<<<>>>>>><<>>>>>>>><<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>><<<<<<<>>>><<<<>>>>>>><<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>>>>>><<<<<<<>>>><<<<>>>>>>><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><<<>>>>><><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<><>><<<<>>>><<<<<>>>>>>>><<<<<>><>>><<<<>><>>>><<>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<><<<>>>>><><<<<<>>><>><<<>>>>><><><<<<>>>>><>>>>><<<<><<<<>>>>>>><<<<<<>>>><>>>>>>><<>>>>>>><><<><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>>>>>>><><<<<<>>>><<<<<<<>>>>>><<><<<<<>>>>>><<>>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><><><>><><><><><<><><>><<<><>><>>><<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<<<<<<>>>>>>><<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>><><<<<>>>>><>>>>><<<<<<<>>>>>>><>><<<>>>>><<<<>>>>>><<>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<<<><>>><<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<<<<<<>>>><<<<<<<>>>><<<<<>>>><>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<><<<<>>>><<<<<<<>>>><<>>><><><<<><<<<<><><<<<>>>>><>>>>><<<<<<<>>>>>>><>><<<>>>>><<<<>>>>>><<>>><<<<<<>>>><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>><<<<>>>>>><<>>>>>><<<<<<<><>>><<<<<>><>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<><<<<<>>>>><<<<>><><<<<>>>><<<<<<<>>>><<>>><><>><<<>>>>><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<<>>><<<>>>><><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>><<<>>>>>>><<<<<><<<>>>><<<<>>>>>>>>>>><<<<<<<<<<>>>>>>>>><<<<<<<>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>><<<>><><<<<>>>><<<<<<<>>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>>>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>>><<<<<<<>>>><>>>><<<<<>>>>>><<<><<<<><>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<><<<<>>>><<<<<<<>>>><<>>><><<<>>>><<<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<>>>>>>><<<<<>><>>><<<<>>>>>><<><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>>><<<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>><<<>>>><<<<>>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>><><<<<><><<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>><<<<<>>>>>>>>><>>>>>>><>>>>><<<<<<<><>><<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<<>>>><<<>>>><<<<>>>><>>>>>>><<<<<<<<<<>>>>>>>>><<<<<<<<<<<<<<>>>><<>><><<<<>>>><<<<<<<>>>><<>>><<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<<<<><<>><<<>>>>><<<<<>>>>>><<>>>>><<>><<<>>>>><><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<<>><>>><<<<>>>>>><<<><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<><>>>>>><><<<<<>><>>><>>><<<<>>>><<<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>><<<<<<><>>><<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<><>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><<><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<>>>><<<<>>>>>>><<<><<<<>>>><<<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<>><><<<<>>>><<<<<<<>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<><<<<<>>>>><<>>><>>>>>><<<<<<<>>>>>>>>><<<<>><<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<>>>>>><<<<>><<<>>>><<<<<<<<<<>>>>>>><<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><<<>>>>><><>><<<><<>>>><><<<<><><<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>>><<<<<<<<><<<<>>>><<<<<<<><>><<<><<>><<<>>>><<<<<>>>>>>><<<<<<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<<<>>>>>>>>><<<<<<<>>>><><>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<<>>>>>>>>><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<>>>>><<<<<<<<<<<<>>>>>>>><<<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>><<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>><<<<<>>>><<<<<<<<>><<<>>>>><><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<><<<<<><<<<<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>><><><<<>>>>><><<<<>>>><<<<<<<>>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<>>>>><<<<<>><>>><<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><<><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<<<>>>>>>>>>><<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><<<<<>>>><<<<<<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<<>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<><<<<>>>><<<<<<<>>>><<>>><><>><<<>><>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>><>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>><<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>>>>>>>>>>>>><><><><><><><><><<<<<>>>>>><<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><<<<>>>><<<<<><>><<<>><>>><<<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<><>><<<>>>>><<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<><><<><>><<<<>>>>>><><<<<>>>>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><<<>>>>><>>>>><<<<<<<<>>>>>>><<<<<<>>>><>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>>><<<><>><<<>>>>><<<<<>>>>>><<>><>>>>>><<>><<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>><<>><<<>>>>><><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<><>><<<<>>>><<<<<>>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>><<<>>><<>>><>><<<>>>>>>><<<<>>>>>><<>><><>><<<>>>>><>><<<>>>>><><>><<<>>>>><<<<<>>>>>><<>><<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<<<>>>><<<<<<><>>>><<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><<<>>>>><><>><<<><>><<<>>>>><<<<><<<<<<>>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>><<<<<>><>>>>>>>>>><<<<>>>>>><<>><<>>>><><<<<>>>><<<<><<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<<>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<><<<<>>>><<<<<<<>>>><<>>><><>><<<>><>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>><<<<<>><>>>><<<<<>><<>>><<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>><<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>>>>>>>>>>>>><><><><><><><><><<<<<>>>>>><<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<><><<<<>>>>><>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<><>><<<<>>>>>><><<<<>>>><<<<<<<>>>><<>>><><>><<<>>>>><<<<<>>>>>>><><<<<>>>>><<<<>>>>>><<>>><<<<<<>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<><<<<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>><<>>><>><<<>>>>>>><<<<>>>>>><<>><><>><<<>>>>><>><<<>>>>><><<<<<>>>><<<<<<<>>>>>><<>><<<>>>>><<><<<<>>>><<<<<<<<>>>><<>>>><>><<<>>>>><><<<<>>>><<<<<<<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<<>>>>>>><<<<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>>><<<<<<<<<<<<>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<>><<<>>>>><<<<>>>>>>><<>><<<>>>>><<<<<<>>>>>><<>>>>><<<<>>>><<<<<><<<<>>>><<<<<<<>>>><<>>><><<<>>>><<<<<<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<<<<<>>>>>><<<>><><<<<>>>>><>>>>><<<<<<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>>>>>><<<<<>><>>>>><<<<<<>>>>>>>><<>>>>>><>>>>><<<<>>>>>><<>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>>>><<<><><<<<>>><>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<><><<<>>>>><<<<<>>>>>><<>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<><<<<>>>><<<<<<<>>>><<>>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>><><<<<>>>>><<<<>>>>>><<>>><<<<<<>>>><<<>>>>>>>><<<<<>><>>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><><><><>><><><><><<><<<<>>>><<<<<<<>>>><<>>><>>>><<<<<<<<<<<>>>>>>><<><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><<<>>>>><><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>><<<<>>>>>><><>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><<<>>>>><><>><<<><<>>>><><<<><>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>><<>>><>><<<>>>>>>><<<<>>>>>><<>><<><<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>><>><<<>>>>><>><<<>>>>><><<<<<>>>><<<<<<<>>>>>><<>><<<>>>>><<><<<<>>>><<<<<<<<>>><>><<<>>><<>><<<>>>>><<<<<>><><<<<>>>><<><<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<><<>><>>>>>>><<>>>>><<<>>><<><<<<>>>><<<<<<<<>>>><<>>>>>>><<<<<>><>>><<<<>>>>>><<>><<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>>><<<<<>>>><<<<<<<><>>><<<<<>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<><<<<>>>><<<<<<>><><<<<>>>>><>>>>><<<><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<><<<<<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><<><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<<<>>>>>>><>>>>><<<<<<<><>><<<<>>>><<<<<>>>><<>>>>>>><<<<<>><>>><<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<><<<>>>>><><<<<<>>>><<<<<<<>>>>><><<><<<<<>>>>>><<>>>>>>><<<<<<<>>>>><>><<<>>>>><<<<><<<<<<>>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>><<<<<>><>>>>>>>>>><<<<>>>>>><<>><<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<<<<<>>>><<>><><<<<>>>><<<<<<<>>>><<>>><<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<>>>>>>><<<<<>>>>>><>>>>>><<<<<<<<<<<<>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<<>>>>><><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<><>><<<>>>>><<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<><<<<>>>><<<<<<<<>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>>><<<><>><<<>>>><<<<>><><>><><<<<>>>><<<<<<<>>><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>><<<>>><>><<<>>>>>>><<<<>>>>>><<>><><>><<<>>>>><>><<<>>>><><<<<>>>><<<<><<<>>>>><><<<<<>>>><<<<<<<>>>>><><<><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>>><><<<<<>>>><<<<<<<>>>>>><<><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<<<>>>><<<<<<<>>>><<>>><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>>><<<<>>>>>><<>><><>>><<<>>>>><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>><<<<>><><<<<>>>><<<<<<<>>>><<>>><><>><<<>>>>><<<<<>>><>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>><<>>>>>><<<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<<>>>><<<<<<<>>>><<>>><>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<><>>><<<>>>>><<<<<>>>>>><<<><<<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><><<<<>>>>>>><<<<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>><<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<>>>>>><<<<<<<<<<<<>>>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<<>>>><<<<<<<><>><<<>>>>><><<<<>>>><<<<<<<><><><<<>>>>><<<<>>>>><<>>>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>><<<<<>>>>>>>>><<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><<><<<<>>>><<<<<<<>>>><<>>><>>>>>>><<<<<<<<><<<<>>>><<<<<<<><>><<<><<>><<<>>>><<<<<>>>>>>><<<<<<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><<<<<>>>>>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>>><<<<<<<>>>><>>><<<<<>>>>>><<<>><<><><<<<>>>>><>>>><<<<<>>>><<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<><<<<>>>><<<<<<<>>>><<>>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>>><><<<<>>>>><>>>>><<<<<<<>>>>>>><>><<<>>>>><<<<>>>>>><<>>><<<<<<>>>><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>><>><<<><<>>>><><<<<>><>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<<<<>><>>><>>>>>>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>><<<<>>>>>><<>><<>>>>>><<>>><<<<<<>>>><<<>>>>>>>><<<<<>><>>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><<<>>>>><><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<<>><><<<<>>>>><>>>>><<<<<<<>>>>>>><<<<<<>>>>>>>><<>>>>>><<<<<<<><<<<>>>><<<<<<<><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<><<<<<><<<<<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>><<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>><<<<<<<>>>><<>>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>>>><<>>><<><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>><><>><<<<>>>><<<<<>>>>>>>><<<<<>><>>><<<<>>>>>><<>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<><<<<>>>><<<<<<<>>>><<>><><<<<>>>><<<<<<<>>>><<>><<<>>>>><<<<<>>>>>><<><>>><<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<>>>>>>><<<<<>>>>>><>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing(">><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<><>><<<>>>>><<><<<<>>>><<<<<><<<>>>><<<>>>><<<<>><<<><>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<>><><<<<<>>>><<<<<<<>>>><<>>><>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<>>>>>>><<<<<><>>><<<<>>>>>><<>>>>>><<<><>><<<>>>>><<<<<>>>>>><<>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<><<<<<>>>>><<>>><><<<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<>><>>>>>><<>><>>>>><><<<<<<<>>>>>>><<<<<>><>>>>>>><<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<<>>>><<<<<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>>><>>>>>>><<<<<<<<<<<>>>>>>>>>><<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>>><>>>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<<<>>>>><>>><<<<><><<<>>>>>>><<<<<<>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><><><>><<<<>>>>><<<<>>>>><<>><><><><><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<>>>><<<<>>>><>>>>>>><<<<<<<<<<>>>>>>>>><<<<<<<<<<<<<<>>>><<>><><<<<>>>><<<<<<<>>>>><<<<<><><<<<>>>>><>>>>><<<<<<<>>>>>>><>><<<>>>>><<<<>>>>>><<>>><<<<<<>>>><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>><>><<<><<>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>>><<<<<>><>>>>><<<<>>>>>><<>>>>>><<<<<<<><>>><<<<<>><<>>><<<<>>>><><><<<<><>><<<>>>>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>><>>><<<<<>>>>>><<<>><<<<<>>>>>><<>>>>><>>>><><<<<><<<<>>>>>>><<<<<<>>>><<<>>>>>>><<<><<<<<>>>><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<<>>>>>><><<<<>>>><<<<<<<<>>>><<>>><><>><<<>>>>><<<<<>>>>>><<>>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><><<><><><><><>><><") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>><<<<>><<<>>>><<<<>>>>>>>><<<<<<<>>><<<<<<<<><<<<><<<<<>>>>>>>><<<<>>>>>><<<>><><<<<>>>><<<<<<<>>>><<>>><>>>>>><<<<<<<>>>>>>><<<<<>>>>>><<<<>>>>>>><<<<<<<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<<<>>>>><<<<>><<<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<>>>><<<<>>>>>>><<<<<<<<><<<<>>>><<<<<<<>>>><<>>><>>>>>>><<<<<<<<<<<<>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<>><>><<<>>>>><<<<><<<<<<>>>>>>>>>>>>><<<<>>>>>><<>><<<>>>>><<<<<<>>>>>><<>>>>><<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><<><>>>>>>>>>>><<<<<<<") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<>><<<>>>>><<><<<<>>>><<<<<<<<>>><>><<<<>>>>>><<<>>>><<<<>><<<>>>><<<<>>>>>>><<<<<<<>>><<<<<<<<<<<<>>>><<<<<<<>>>><<<<<>>>><>>>><<<>>><>>>>>><<<>>>><<<<>>>><>>><<<<>><>>><<<<>>>>>><<>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>><<>><<<>>>>><<<<<>>>>>><<>>>>><<<>>><<<<<<<>>><><<>>><>>>>>><<<<<<<>><<>><<<>>>>><<<<>>>>>><<>><<<<>>>><<<<<<<>>>><<<<<<>>>>>>>><<><<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("><>><<<><<>>>><><<<<>>>><>>>>>><<<<<<><<<<<>><>>>") == false)){ tests_passed++; } total_tests++;

    if((correct_bracketing("<><<<<>>>><<<>>>><><<<<>>>><<<<<<<>>>><<>>><><><<<<>>>>><>>>>><<<><<<<>>>>>>><<<<<<>>>>>>>>>><<<<<<<<<<<<><><><><><>><><><><><<><<<<>>>><<<<<<<>>>><<>>><>>>><<<<<<<<<<<>>>>>>><<<<>>>>>><<<<>>>><>>>>>>><<<<<<<<<<>>>>>>>>><<<<<<<<<<<<<<>>>><<>><><<<<>>>><<<<<<<>>>><<>>><<<<>>>><<<<>>>>>>><<<><<<<>>>><<<<>>>>>>><<<<<<<<<<>>>>>><<<<<<<<<<>>>>>") == false)){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


