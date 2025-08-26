#include<vector>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    // Initialize sum to 0
    int sum = 0; 
    
    // Loop through the vector from start to end and compare each element with its corresponding one in reverse order. If any pair is not equal, it means that the vector is not a palindrome so return false
    for(int i=0; i<q.size(); i++){
        if (q[i] != q[q.size()-1-i]) 
            return false;
        
        // Add element to sum
        sum += q[i];  
     }
    // If the vector is a palindrome and its sum of elements is less than or equal to w, return true
    if (sum <= w)
       return true; 
     
    // In case it's not a palindrome or the weight limit exceeds, return false
    return false;  
}