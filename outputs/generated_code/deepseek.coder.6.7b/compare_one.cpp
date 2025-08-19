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