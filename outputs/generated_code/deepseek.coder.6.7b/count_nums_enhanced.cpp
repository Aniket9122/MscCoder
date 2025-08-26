#include <vector>
#include <cmath>
using namespace std;

int count_nums(const vector<int>& nums) {
    int count = 0; 
    for (auto n : nums){
        if ((n < 0 && abs(static_cast<double>(n)/10) > -1*n%10) || n >= 0){  
            int temp = abs(n); 
            int sum = 0;
             while(temp > 0){
                 sum += temp % 10; 
                 temp /= 10; 
              }
             if (sum > 0) count++; 
          }   
      }
    return count;
}