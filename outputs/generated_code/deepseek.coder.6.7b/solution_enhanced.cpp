#include <iostream>
#include <vector>
using namespace std;

int solutions(const vector<int>& lst){
    int sum = 0;
    for (size_t i = 0; i < lst.size(); ++i) {
        if ((lst[i] % 2 != 0) && (i % 2 == 0)) { // check if the number is odd and its position is even
            sum += lst[i];
        }
    }
    return sum;
}
