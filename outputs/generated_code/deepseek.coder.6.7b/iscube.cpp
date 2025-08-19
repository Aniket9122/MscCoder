#include<iostream>
#include<cmath>
using namespace std;

bool iscube(int a){
    int cuberoot = round(pow(abs(a), (1.0/3))); // get the cube root, taking care of negatives by using abs() and rounding to nearest integer
    return pow(cuberoot, 3) == abs(a);   // raise that back up to a power of 3 and see if it matches the original number (taking absolute value as needed)
}