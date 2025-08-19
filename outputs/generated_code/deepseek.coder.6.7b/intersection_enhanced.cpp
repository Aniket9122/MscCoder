#include<vector>
using namespace std;

bool IsPrime(int num) {
    if (num < 2) return false;  // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; ++i){  
        if ((num % i) == 0)
            return false;
     }
    return true;
}

string intersection(vector<int> interval1, vector<int> interval2){
    int start_interval1 = min(interval1[0], interval1[1]);  // minimum of starting points of first interval
    int end_interval1 = max(interval1[0], interval1[1]);  // maximum of ending points of first interval
    
    int start_interval2 = min(interval2[0], interval2[1]);  // minimum of starting points of second interval
    int end_interval2 = max(interval2[0], interval2[1]);  // maximum of ending points of second interval
    
    if (end_interval1 < start_interval2 || end_interval2 < start_interval1) 
        return "NO";  
        
    int length = min(end_interval1, end_interval2) - max(start_interval1, start_interval2);

    return IsPrime(length)?  "YES" : "NO";
}