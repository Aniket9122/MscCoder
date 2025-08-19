#include<bits/stdc++.h>
using namespace std;

// Helper function to calculate the 
// number of ones in binary representation 
int countOnes(int num) {
    int count = 0;
    while (num != 0){
        if ((num & 1) == 1){
            count++;
        }
        num = num >> 1;
    }
    return count;
}

vector<int> sort_array(vector<int> arr) {
    // using lambda function for custom comparison
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        if (countOnes(a) != countOnes(b)) 
            return countOnes(a) < countOnes(b);   // sort by number of ones in binary representation
        else                                    // for same counts, sort by decimal value
            return a < b;                         // if two or more numbers have the same counts, take the smallest one.
    });
    
    return arr; 
}