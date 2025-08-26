#include <iostream>
#include <string>
#include <stack> // include the stack header file
using namespace std;

bool correct_bracketing(string brackets) {
    stack<char> bracketStack; // create a stack of characters

    for (char bracket : brackets) {
        if (bracket == '<') {
            bracketStack.push(bracket);
        } else if (bracket == '>') {
            if (bracketStack.empty()) {
                return false;
            }
            bracketStack.pop();
        }
    }

    return bracketStack.empty();
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


