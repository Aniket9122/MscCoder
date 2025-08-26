#include<stdio.h>
#include<string>
using namespace std;

int fruit_distribution(string s, int n) {
    int apples, oranges;
    sscanf(s.c_str(), "%*d %*s %d %*s %d", &apples, &oranges); // Extract the number of apples and oranges from the string
    return n - apples - oranges;  // Subtract the sum of apples and oranges from total fruits to find out the number of mangoes
}