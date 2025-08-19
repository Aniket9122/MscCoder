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