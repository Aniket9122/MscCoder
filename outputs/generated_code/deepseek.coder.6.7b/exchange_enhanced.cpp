#include <vector>
#include <string>
using namespace std;

string canExchange(const vector<int>& lst1, const vector<int>& lst2) {
    int oddCountLst1 = 0;
    for (auto num : lst1)
        if ((num % 2) != 0) ++oddCountLst1;
    
    int evenCountLst2 = 0;
    for (auto num : lst2)
        if((num % 2) == 0) ++evenCountLst2;

    return oddCountLst1 <= evenCountLst2 ? "YES" : "NO";
}