#include<vector>
#include<cmath> // for std::abs
using namespace std;

int prod_signs(vector<int> arr){
    if (arr.size() == 0) { 
        return -32768;   // Returning -32768 for empty array
     } else{
         int sum = 0, product = 1;
         for (auto i: arr){
             if(i > 0){
                 sum += i;  
                 product *= 1; 
              }else if(i < 0){
                 sum += std::abs(i);   
                 product *= -1; 
              } else {
                  return 0; // Returning 0 for 0 element in array.
              }
          }
         return product*sum; 
     }  
}