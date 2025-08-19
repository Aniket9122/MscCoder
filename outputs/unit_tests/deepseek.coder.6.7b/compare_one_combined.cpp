#include <iostream>
#include <string>
#include <variant>
#include <boost/lexical_cast.hpp>
using namespace std;

// Function to convert string with comma or dot as decimal separator to float 
float convertToFloat(const string& s) {
    string tmp = s;
    replace(tmp.begin(), tmp.end(), ',', '.');
    return boost::lexical_cast<float>(tmp);
}

variant<int, float, string> compare_one(string a, string b){
    try{
        // If both strings can be converted to floats 
        if (isdigit(a[0]) && isdigit(b[0])) {
            float fa = boost::lexical_cast<float>(a);
            float fb = boost::lexical_cast<float>(b);
            
            return (fa > fb) ? a : b;
        } 
        else if(isdigit(a[0]) || isdigit(b[0])){ // If only one string can be converted to float
            if(isdigit(a[0])){  
                return boost::lexical_cast<float>(a) > stof(b) ? a : b;
            }else{
                 return boost::lexical<｜begin▁of▁sentence｜>t<float>(b) > stof(a) ? b : a;
            } 
        }  
    }catch (boost::bad_lexical_cast &e){ // If the string cannot be converted to float
        if (a==b) return "None";
       else{
           auto result = stod(a) > stod(b)? a : b; 
            return result;
         }  
    }    
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

    if((boost::any_cast<int>(compare_one(1, 2)) == 2)){ tests_passed++; } total_tests++;

    if((boost::any_cast<double>(compare_one(1, 2.5))== 2.5)){ tests_passed++; } total_tests++;

    if((boost::any_cast<int>(compare_one(2, 3)) == 3)){ tests_passed++; } total_tests++;

    if((boost::any_cast<int>(compare_one(5, 6)) == 6)){ tests_passed++; } total_tests++;

    if((boost::any_cast<string>(compare_one(1, string("2,3")))== "2,3")){ tests_passed++; } total_tests++;

    if((boost::any_cast<string>(compare_one(string("5,1"), string("6"))) == "6")){ tests_passed++; } total_tests++;

    if((boost::any_cast<string>(compare_one(string("1"), string("2"))) == "2")){ tests_passed++; } total_tests++;

    if((boost::any_cast<string>(compare_one(string("1"), 1)) == "None")){ tests_passed++; } total_tests++;


    auto __end = clock::now();
    time_taken_ms = std::chrono::duration_cast<std::chrono::milliseconds>(__end - __start).count();
    std::cout << "[TEST_SUMMARY] time_ms=" << time_taken_ms << " tests_passed=" << tests_passed << " total_tests=" << total_tests << std::endl;
}


