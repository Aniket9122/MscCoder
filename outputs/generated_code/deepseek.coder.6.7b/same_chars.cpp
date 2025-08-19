#include <algorithm> 
#include <string>
using namespace std;

bool same_chars(const string& s0, const string& s1) {
    string sortedS0 = s0, sortedS1 = s1;

    sort(sortedS0.begin(), sortedS0.end());
    sort(sortedS1.begin(), sortedS1.end());

    return sortedS0 == sortedS1;
}