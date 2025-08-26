#include <iostream>
#include <vector>

using namespace std;

// Check if a number is prime or not
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Find the first n prime numbers and store them in a vector
vector<int> count_up_to(int n) {
    vector<int> primeNumbers;
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            primeNumbers.push_back(i);
        }
    }
    return primeNumbers;
}

// Test the count_up_to function
void testCountUpTo() {
    cout << "Testing count_up_to function" << endl;
    // Check for 5 prime numbers less than 5
    vector<int> result = count_up_to(5);
    if (result == vector<int>{2, 3}) {
        cout << "count_up_to(5) passed!" << endl;
    } else {
        cout << "count_up_to(5) failed!" << endl;
    }
    // Check for 6 prime numbers less than 11
    result = count_up_to(11);
    if (result == vector<int>{2, 3, 5, 7}) {
        cout << "count_up_to(11) passed!" << endl;
    } else {
        cout << "count_up_to(11) failed!" << endl;
    }
    // Check for no prime numbers less than 0
    result = count_up_to(0);
    if (result == vector<int>{}) {
        cout << "count_up_to(0) passed!" << endl;
    } else {
        cout << "count_up_to(0) failed!" << endl;
    }
    // Check for 20 prime numbers less than 20
    result = count_up_to(20);
    if (result == vector<int>{2, 3, 5, 7, 11, 13, 17, 19}) {
        cout << "count_up_to(20) passed!" << endl;
    } else {
        cout << "count_up_to(20) failed!" << endl;
    }
    // Check for no prime numbers less than 1
    result = count_up_to(1);
    if (result == vector<int>{}) {
        cout << "count_up_to(1) passed!" << endl;
    } else {
        cout << "count_up_to(1) failed!" << endl;
    }
    // Check for 18 prime numbers less than 18
    result = count_up_to(18);
    if (result == vector<int>{2, 3, 5, 7, 11, 13, 17}) {
        cout << "count_up_to(18) passed!" << endl;
    } else {
        cout << "count_up_to(18) failed!" << endl;
    }
}