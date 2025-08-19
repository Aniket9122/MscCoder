#include<vector>
#include<algorithm>
using namespace std;

// Function to get sum of digits
unsigned int digitSum(int num){
    unsigned int sum = 0;
    while (num != 0)  {
        sum += abs(num % 10);
        num /= 10;
     }
    return sum;
}

vector<int> order_by_points(const vector<int>& nums){
    // Initialize a new vector to store pairs of (element, digitSum)
    vector<pair<int, unsigned int>> vec;
        
     // Calculate the sum of digits for each element in the input and store it with the element itself
     for (const auto& x : nums) {
        vec.push_back({x, digitSum(x)});
     }
        
    // Sort the pairs by their sum of digits, if sums are same then sort by elements themselves
    sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) { 
        return (a.second != b.second)? a.second < b.second : a.first < b.first;});
    
    // Extract elements from pairs and put them into the result vector
    vector<int> res(vec.size());
    transform(vec.begin(), vec.end(), res.begin(), [](const auto& x) { return x.first; });
        
    return res; 
}