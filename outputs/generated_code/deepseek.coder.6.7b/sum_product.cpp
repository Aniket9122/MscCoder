#include<iostream>
#include<vector>
using namespace std;

pair<int, long long int> sum_product(vector<int> numbers){
    int sum = 0;
    long long int product = 1;
    
    for (int i=0; i<numbers.size(); i++) {
        sum += numbers[i];
        product *= numbers[i];
    }

    return make_pair(sum, product);
}
