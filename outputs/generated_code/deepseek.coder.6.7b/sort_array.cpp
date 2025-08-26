#include<vector>
#include<algorithm>
using namespace std;

int countOnes(int n) {
    int count = 0;
    while (n != 0) {
        if ((n & 1) == 1)
            count++;
        n = n >> 1;
    }
    return count;
}

vector<int> sort_array(vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b){
        int countA = countOnes(a);
        int countB = countOnes(b);
        
        if (countA == countB) 
            return a < b;
            
        return countA < countB;});
    return arr;
}