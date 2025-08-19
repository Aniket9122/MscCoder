#include <algorithm>
#include <string>
using namespace std;

bool same_chars(const string& s0, const string& s1) {
    // Create sorted copies of the strings 
    auto sortedS0 = s0, sortedS1 = s1;
    
    // Sorting the strings in-place 
    sort(sortedS0.begin(), sortedS0.end());
    sort(sortedS1.begin(), sortedS1.end());

    return sortedS0 == sortedS1;
}