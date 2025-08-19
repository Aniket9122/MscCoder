#include <vector>   // Include the necessary header files explicitly instead of including all in one, e.g., bits/stdc++.h 
                    
bool isPrime(int n) {    // The keyword "return" was missing in function definition
    if (n <= 1) return false;
    
    for (int i = 2; i*i <= n; ++i){   // Replace '=<' with '<=', and also remove space around the operator. 
        if (n % i == 0) return false;  
    }
    
    return true; 
} 

int calcSumOfDigits(std::vector<int> lst){ // Adding std:: before vector to avoid ambiguity, and add braces for the function body.
    int max_prime = -1;
    
    for (auto num : lst) {   // Replace ':' with a semicolon at end of the loop declaration
        if(isPrime(num)){
            max_prime=std::max(max_prime, num);  // Add std:: before max to avoid ambiguity.
         }
    }
    
    int sum = 0;   // Initialize sum outside the while loop to prevent unnecessary calculations.
    while (max_prime > 0) {   // Replace '> =' with just '>'. 
      sum += max_prime % 10;
      max_prime /= 10;
     }
    return sum;
}