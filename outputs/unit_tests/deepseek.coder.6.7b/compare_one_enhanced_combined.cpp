#include <string>
#include <variant>
#include <algorithm>
#include <cctype>

float convertToFloat(const std::string& s) 
{
    if (s.empty()) 
        return 0; // Return zero for empty string to avoid undefined behavior.
    
    try {
        size_t pos = 0;
        float result = std::stof(s, &pos); // use stof to convert string to float

        if (pos != s.length()) 
            return 0; // If conversion failed, return zero.
        
        return result;
    } catch (const std::invalid_argument&) {
        return 0;   // Handle exception when the stof function fails
    }
}

std::variant<int, float, std::string> compare_one(const std::string& a, const std::string& b) 
{
    auto va = convertToFloat(a);
    auto vb = convertToFloat(b);
    
    if (va > vb) {
        return static_cast<int>(va); // Convert float to int
   <｜begin▁of▁sentence｜>} else if (vb > va) {
        return vb; 
    } else if ((a.find("begin of sentence") != std::string::npos) || a == b) {
        return a + "\n" + b;  
    }
    
    // Return default variant state when no condition is met.
    return std::monostate(); 
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


