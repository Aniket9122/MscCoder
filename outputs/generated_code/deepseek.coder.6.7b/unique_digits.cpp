#include<iostream>
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
    for (int i = 0 ; i < x.size() ; i++ ){
        if (allDigitsAreOdd(x[i])) {
            result.push_back(x[i]);
        }
    }
    sort(result.begin(), result.end());  //sort the vector
    return result;
}