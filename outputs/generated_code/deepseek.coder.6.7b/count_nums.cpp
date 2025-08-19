#include<iostream>
#include<vector>
#include<cmath> //abs
using namespace std;

int count_nums(const vector<int>& nums) {
    int count = 0;
    for (auto n : nums){
        if ((n < 0 && n % 10 < abs(static_cast<double>(n)/10)) || (n >= 0)){ // checks if first digit is negative or number itself positive/negative
            int temp = abs(n);// gets absolute value of the number to handle negatives
            int sum = 0;
             while(temp > 0){
                 sum += temp % 10; // adds last digit of number to sum
                 temp /= 10; // removes last digit from number
             }
             if (sum > 0) count++; // checks if sum is positive, increments count
         }   
     }
    return count;
}