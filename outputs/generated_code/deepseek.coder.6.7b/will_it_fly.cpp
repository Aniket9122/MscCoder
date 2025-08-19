#include<vector>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    int sum = 0; 
    for (int i=0; i<q.size(); i++){
        if(q[i] != q[q.size()-1-i]) return false; // Checking palindrome condition
        sum += q[i];  // Summing the elements of vector
    }
    if (sum > w) return false;  
    
    return true;
}