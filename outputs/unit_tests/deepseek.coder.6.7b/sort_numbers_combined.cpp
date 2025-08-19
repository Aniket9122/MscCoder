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

    if((sort_numbers("") == "")){ tests_passed++; } total_tests++;

    if((sort_numbers("three") == "three")){ tests_passed++; } total_tests++;

    if((sort_numbers("three five nine") == "three five nine")){ tests_passed++; } total_tests++;

     if((sort_numbers("five zero four seven nine eight") == "zero four five seven eight nine")){ tests_passed++; } total_tests++;

      if((sort_numbers("six five four three two one zero") == "zero one two three four five six")){ tests_passed++; } total_tests++;

    if((sort_numbers("") == "")){ tests_passed++; } total_tests++;

    if((sort_numbers("three") == "three")){ tests_passed++; } total_tests++;

    if((sort_numbers("three five nine") == "three five nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("five zero four seven nine eight") == "zero four five seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("six five four three two one zero") == "zero one two three four five six")){ tests_passed++; } total_tests++;

    if((sort_numbers("four eight two") == "two four eight")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine") == "nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("one six two four nine") == "one two four six nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("two seven eight zero five") == "zero two five seven eight")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine zero") == "zero nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("seven three one") == "one three seven")){ tests_passed++; } total_tests++;

    if((sort_numbers("two two three three four five six") == "two two three three four five six")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero five four one seven eight two six") == "zero one two four five six seven eight")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine eight seven six five four three two one zero") == "zero one two three four five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("two zero nine four five six") == "zero two four five six nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine eight seven six five four one zero") == "zero one four five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("two zero nine") == "zero two nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("four eight") == "four eight")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero five four one seven") == "zero one four five seven")){ tests_passed++; } total_tests++;

    if((sort_numbers("six") == "six")){ tests_passed++; } total_tests++;

    if((sort_numbers("two two four five six") == "two two four five six")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero five four one") == "zero one four five")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero five seven") == "zero five seven")){ tests_passed++; } total_tests++;

    if((sort_numbers("four two") == "two four")){ tests_passed++; } total_tests++;

    if((sort_numbers("four") == "four")){ tests_passed++; } total_tests++;

    if((sort_numbers("two six") == "two six")){ tests_passed++; } total_tests++;

    if((sort_numbers("two two five six") == "two two five six")){ tests_passed++; } total_tests++;

    if((sort_numbers("seven") == "seven")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero five four zero five four one seven eight two six") == "zero zero one two four four five five six seven eight")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero five one seven eight two six") == "zero one two five six seven eight")){ tests_passed++; } total_tests++;

    if((sort_numbers("four four eight two") == "two four four eight")){ tests_passed++; } total_tests++;

    if((sort_numbers("seven three") == "three seven")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine eight seven five four three two one zero") == "zero one two three four five seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("two four five six") == "two four five six")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero four one") == "zero one four")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero seven eight two six") == "zero two six seven eight")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero five eight two six") == "zero two five six eight")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero") == "zero")){ tests_passed++; } total_tests++;

    if((sort_numbers("one six") == "one six")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine six") == "six nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("two seven eight five") == "two five seven eight")){ tests_passed++; } total_tests++;

    if((sort_numbers("two") == "two")){ tests_passed++; } total_tests++;

    if((sort_numbers("two three three four five six") == "two three three four five six")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero five four seven") == "zero four five seven")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine eight seven one zero") == "zero one seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("four five six") == "four five six")){ tests_passed++; } total_tests++;

    if((sort_numbers("two nine") == "two nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("two two three") == "two two three")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine eight seven six five two one zero") == "zero one two five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero five six") == "zero five six")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero five") == "zero five")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero five two six") == "zero two five six")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero five four zero four one seven eight two six") == "zero zero one two four four five six seven eight")){ tests_passed++; } total_tests++;

    if((sort_numbers("four eight two two three") == "two two three four eight")){ tests_passed++; } total_tests++;

    if((sort_numbers("five four one seven eight two six") == "one two four five six seven eight")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine seven six five two one zero") == "zero one two five six seven nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine eight seven six zero") == "zero six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("two nine seven six five two one zero") == "zero one two two five six seven nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("two four six") == "two four six")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine one zero") == "zero one nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("four six") == "four six")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero five four") == "zero four five")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero two six") == "zero two six")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero five one") == "zero one five")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine six five two one zero") == "zero one two five six nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("two nine eight seven six five four one zero") == "zero one two four five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero four one seven") == "zero one four seven")){ tests_passed++; } total_tests++;

    if((sort_numbers("two zero nine four zero four one") == "zero zero one two four four nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("one zero five six") == "zero one five six")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine seven six five two zero") == "zero two five six seven nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("two nine eight seven six five four one zero one zero") == "zero zero one one two four five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("two nine seven six five two one zero five two six") == "zero one two two two five five six six seven nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("one") == "one")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine eight seven five four three two one") == "one two three four five seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("two seven") == "two seven")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine eight seven six") == "six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero five one seven six") == "zero one five six seven")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine one zero five four one seven eight two six") == "zero one one two four five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero two") == "zero two")){ tests_passed++; } total_tests++;

    if((sort_numbers("two four zero four one") == "zero one two four four")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero five four zero five four one seven") == "zero zero one four four five five seven")){ tests_passed++; } total_tests++;

    if((sort_numbers("two two four five") == "two two four five")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero one seven eight two six") == "zero one two six seven eight")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine two six") == "two six nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine one zero five four one six") == "zero one one four five six nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("two two seven eight zero five four five six") == "zero two two four five five six seven eight")){ tests_passed++; } total_tests++;

    if((sort_numbers("two four zero four") == "zero two four four")){ tests_passed++; } total_tests++;

    if((sort_numbers("two zero six") == "zero two six")){ tests_passed++; } total_tests++;

    if((sort_numbers("two three") == "two three")){ tests_passed++; } total_tests++;

    if((sort_numbers("two nine seven six five two one zero four five six") == "zero one two two four five five six six seven nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine six five two three three four five six one zero") == "zero one two three three four five five six six nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine eight one zero") == "zero one eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("two four") == "two four")){ tests_passed++; } total_tests++;

    if((sort_numbers("four two nine eight seven six five four one zero") == "zero one two four four five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("two two") == "two two")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine seven six five two one") == "one two five six seven nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("one six two nine") == "one two six nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero five four one seven eight six") == "zero one four five six seven eight")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine seven four six") == "four six seven nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("five six") == "five six")){ tests_passed++; } total_tests++;

    if((sort_numbers("two zero nine four one") == "zero one two four nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero five four one eight two six") == "zero one two four five six eight")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine one zero five four one") == "zero one one four five nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("one two three four five six seven eight nine") == "one two three four five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine eight seven six five four three two one") == "one two three four five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("five seven eight six nine four zero two one three") == "zero one two three four five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("four six nine eight seven one five zero two three") == "zero one two three four five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("seven one zero five two four eight six nine three") == "zero one two three four five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero one two three four five six seven eight nine") == "zero one two three four five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("two four six eight zero one three five seven nine") == "zero one two three four five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine seven five three one eight six four two zero") == "zero one two three four five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("one zero three four two six five seven eight nine") == "zero one two three four five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("seven five zero four nine eight two six one three") == "zero one two three four five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("five") == "five")){ tests_passed++; } total_tests++;

    if((sort_numbers("eight") == "eight")){ tests_passed++; } total_tests++;

    if((sort_numbers("four six nine eight five zero two three") == "zero two three four five six eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("one two three three") == "one two three three")){ tests_passed++; } total_tests++;

    if((sort_numbers("two nine eight seven six five four three two one seven nine") == "one two two three four five six seven seven eight nine nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero one two five six seven eight nine") == "zero one two five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("five four six nine eight seven one five zero two three two one three") == "zero one one two two three three four five five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine eight seven six five four two one") == "one two four five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("one two one four") == "one one two four")){ tests_passed++; } total_tests++;

    if((sort_numbers("one one one one one") == "one one one one one")){ tests_passed++; } total_tests++;

    if((sort_numbers("one two") == "one two")){ tests_passed++; } total_tests++;

    if((sort_numbers("four four two six nine two zero") == "zero two two four four six nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine eight seven six five two three two one") == "one two two three five six seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine eight seven two one") == "one two seven eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("one zero three nine") == "zero one three nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("nine eight") == "eight nine")){ tests_passed++; } total_tests++;

    if((sort_numbers("seven one zero five three") == "zero one three five seven")){ tests_passed++; } total_tests++;

    if((sort_numbers("zero two three") == "zero two three")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


