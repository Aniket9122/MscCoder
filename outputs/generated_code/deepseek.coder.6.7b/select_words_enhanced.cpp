#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> select_words(const std::string& s, int n) {
    std::vector<std::string> res;
    std::istringstream ss(s);
    std::string word;
    
    while (ss >> word) {
        int consonants = 0;
        for (const auto &c : word) {
            if ('b' <= tolower(c) && tolower(c) <= 'z' && tolower(c) != 'a' && tolower(c) != 'e' 
                && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                ++consonants;
            }
        }
        
        if (consonants == n) {
            res.push_back(word);
        }
    }
    
    return res;
}