#include<vector>
using namespace std;

int solution(const vector<int>& lst){
    int sum = 0;
    if(!lst.empty() && (lst[0] % 2 != 0)) { // Check if the first element is odd
        sum += lst[0];
    }
    
    for(size_t i = 1; i < lst.size(); ++i) {
        if((lst[i] % 2 != 0)) {   // Only consider odd numbers after the first position
            sum+= lst[i];
        }
    }
    
    return sum;
}