#include<vector>
#include<algorithm>
using namespace std;

bool allDigitsAreOdd(int n) { 
    while (n != 0){
        if ((n % 10) % 2 == 0) return false;  
        n = n / 10;                           
    }
    return true;                                                
}

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for (const int& i : x){ // use range-based loop to traverse the vector
        if (allDigitsAreOdd(i)) {
            result.push_back(i);
        }
    }
    sort(result.begin(), result.end());   //sort the vector in increasing order
    return result;
}