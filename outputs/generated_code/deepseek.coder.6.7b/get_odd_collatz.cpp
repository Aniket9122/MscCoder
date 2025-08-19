#include <stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

// Function to generate Collatz sequence of given number n 
vector<int> collatz(int n) {
    vector<int> result{n};
    while (n != 1) {
        if (n % 2 == 0) 
            n /= 2;
        else 
            n = 3 * n + 1;
        
        result.push_back(n);
    }
    
    return result;
}

// Function to generate odd numbers in the Collatz sequence of given number n
vector<int> get_odd_collatz(int n) {
    vector<int> collatzSeq = collatz(n);
    vector<int> oddCollatzNumbers;
    
    for (unsigned int i = 0; i < collatzSeq.size(); ++i){
        if (collatzSeq[i] % 2 != 0 && find(oddCollatzNumbers.begin(), oddCollatzNumbers.end(), collatzSeq[i]) == oddCollatzNumbers.end()) {
            oddCollatzNumbers.push_back(collatzSeq[i]);
        } 
    }
    
    sort(oddCollatzNumbers.begin(), oddCollatzNumbers.end()); // Sort the result in increasing order.
    return oddCollatzNumbers;
}