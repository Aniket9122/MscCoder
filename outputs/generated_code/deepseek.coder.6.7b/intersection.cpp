#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool IsPrime(int num) {
    if (num <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; ++i){  
        if ((num % i) == 0)
            return false;
    }
    return true;
}

string intersection(vector<int> interval1, vector<int> interval2){
    // check for no overlap between the two intervals
    if (interval1[1] < interval2[0] || interval2[1] < interval1[0]) 
        return "NO";  
    
    int start = max(interval1[0], interval2[0]); // maximum of starting points of both intervals
    int end = min(interval1[1], interval2[1]); // minimum of ending points of both intervals
    
    if (start > end) 
        return "NO";  
        
    int length = end - start;

    return IsPrime(length)? "YES" : "NO";
}