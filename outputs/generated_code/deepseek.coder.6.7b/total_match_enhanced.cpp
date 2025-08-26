#include <vector>
#include <string>
#include<numeric>   // for std::accumulate
using namespace std;

// helper function to calculate number of chars in a string
int count_chars(const string& str){ 
   return str.size(); 
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = std::accumulate(lst1.begin(), lst1.end(), 0, [](int i, const string& s){ return i + count_chars(s); });
    int sum2 = std::accumulate(lst2.begin(), lst2.end(), 0, [](int i, const string& s){ return i + count_chars(s); });
    
    if (sum1 <= sum2) {
        return lst1;
    } else {
        return lst2;
    }
}