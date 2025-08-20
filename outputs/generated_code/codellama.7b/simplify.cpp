#include <iostream>
#include <string>
using namespace std;

bool simplify(string x, string n) {
    // extract numerators and denominators from strings
    int numX = stoi(x.substr(0, x.find('/')));
    int denomX = stoi(x.substr(x.find('/') + 1));
    int numN = stoi(n.substr(0, n.find('/')));
    int denomN = stoi(n.substr(n.find('/') + 1));

    // check if gcd of numerators and denominators is 1
    if (__gcd(numX, denomX) == 1 && __gcd(numN, denomN) == 1) {
        return true;
    }

    // simplify the fractions by dividing both numerators and denominators by their greatest common divisor
    numX /= __gcd(numX, denomX);
    denomX /= __gcd(numX, denomX);
    numN /= __gcd(numN, denomN);
    denomN /= __gcd(numN, denomN);

    // check if the simplified fractions are equal
    return numX == numN && denomX == denomN;
}

