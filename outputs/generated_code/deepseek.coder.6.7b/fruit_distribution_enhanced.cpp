#include <sstream>
#include <iostream>
using namespace std;

int fruit_distribution(string s, int n) {
    size_t pos = 0;
    string token;
    int apples = 0, oranges = 0;
    
    // Split the input string by spaces and extract numbers using istringstream
    while ((pos = s.find(" ")) != std::string::npos) {
        token = s.substr(0, pos);
        s.erase(0, pos + 1);
        
        if (token == "apples") 
            apples = stoi(s.substr(0, s.find(" ")));    // Extract the number of apples from string
        else if (token == "oranges") {
            oranges = stoi(s.substr(0, s.find(" ")));   // Extract the number of oranges from string
         }
    }
    
    // Check if there are more fruits than available in basket and return -1 for error handling
    if (n < apples + oranges) {
        cerr << "Error: More fruits than available in basket.";
        return -1;  
     }

     // Subtract the sum of apples and oranges from total fruits to find out the number of mangoes
     int mangos = n - (apples + oranges);  
    
     if(mangos < 0){
       cerr << "Error: Negative number of mangoes. Please check input.";
       return -1;  // Returning -1 indicates an error
     }
    
    return mangos;
}