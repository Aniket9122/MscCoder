#include<vector>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; ++i){
        if (n % i == 0) return false; 
    }
    return true;
}

int largestPrimeSum(vector<int> lst){
    int max_prime = -1;
    for(auto num : lst){
        if(isPrime(num)){
            max_prime=max(max_prime, num);
        }
    }
    int sum = 0;
    while (max_prime > 0) {
      sum += max_prime % 10;
      max_prime /= 10;
    }
    return sum;
}