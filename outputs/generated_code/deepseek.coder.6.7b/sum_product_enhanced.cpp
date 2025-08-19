#include<iostream>
#include<vector>
using namespace std;

pair<int, long long int> sum_product(const vector<int>& numbers){
    int sum = 0;
    long long int product = 1;
    
    for (auto num : numbers) {  // Use range-based 'for' loop to iterate through the elements of the vector
        sum += num;
        if(num!=0)            // Avoid multiplying by zero as it will make the product 0
          product *= num;
    }
    
    return make_pair(sum, (numbers.empty()?1:product));   // Return default product of 1 for empty vector
}
