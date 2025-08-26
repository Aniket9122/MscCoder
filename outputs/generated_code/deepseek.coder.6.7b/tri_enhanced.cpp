#include <vector>
using namespace std;

vector<int> tri(int n) {
    vector<int> result(n + 1);
    
    if (n >= 0){ 
        result[0] = 3; // tri(1)=3
    }
    if (n >= 1){ 
        result[1] = result[2] + result[0]; // tri(2)=2
    }
    
    for (int i = 3; i <= n; i++) {
        int j = i - 1;
        
        if ((i % 2) == 0){
            while((j > 0 ) && (result[j] != 0)){
                result[j] += i / 2 ; // tri(n)=1 + n/2, if n is even
                j--;
            }
        } else {
           result[i] = result[i - 1] + result[i - 2]  + result[i - 3];//tri(n)= tri(n-1) 2+ tri(n-3), if n is odd.
        }
    }
    
   return result; // returns vector of first n + 1 Tribonacci numbers
}