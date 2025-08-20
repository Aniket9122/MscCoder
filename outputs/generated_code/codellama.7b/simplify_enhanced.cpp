#include <iostream>
#include <string>
#include <numeric> // For std::gcd
#include <cmath> // For std::gcd
using namespace std;

// Function to simplify a fraction
bool simplify(string x, string n) {
    // Extract numerators and denominators from strings
    int numX = stoi(x.substr(0, x.find('/')));
    int denomX = stoi(x.substr(x.find('/') + 1));
    int numN = stoi(n.substr(0, n.find('/')));
    int denomN = stoi(n.substr(n.find('/') + 1));

    // Check if gcd of numerators and denominators is 1
    if (std::gcd(numX, denomX) == 1 && std::gcd(numN, denomN) == 1) {
        return true;
    }

    // Simplify the fractions by dividing both numerators and denominators by their greatest common divisor
    numX /= std::gcd(numX, denomX);
    denomX /= std::gcd(numX, denomX);
    numN /= std::gcd(numN, denomN);
    denomN /= std::gcd(numN, denomN);

    // Check if the simplified fractions are equal
    return numX == numN && denomX == denomN;
}

