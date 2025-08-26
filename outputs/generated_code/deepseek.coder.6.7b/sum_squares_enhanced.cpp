#include <vector>
using namespace std;

int sum_squares(const vector<int>& lst){
    int sum = 0;
    for (size_t i = 0; i < lst.size(); ++i) {
        if ((i+1) % 3 == 0 && (i+1) % 4 != 0) // multiple of 3 but not 4
            sum += pow(lst[i], 3);  // cube the number
        else if((i+1)%3==0 && (i+1)%4==0)  // multiple of both 3 and 4, so square it.
             sum += pow(lst[i], 2);     // square the number
        else    // index is not a multiple of three or four, do nothing
            continue;
    }
    return sum;
}