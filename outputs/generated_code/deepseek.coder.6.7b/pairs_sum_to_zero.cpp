#include <vector>
using namespace std;

bool pairs_sum_to_zero(vector<int>& l){
    int i = 0, j = l.size() - 1;
    
    while (i < j) {
        if (l[i] + l[j] == 0) return true;
        else if (abs(l[i]) > abs(l[j])) i++;
        else j--;
    }
    return false;
}