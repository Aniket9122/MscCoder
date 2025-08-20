#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

template<typename T> 
T compare_one(const T& a, const T& b) {
    if (a == b) {
        throw runtime_error("Values are equal");
    } 
    return max(a,b);
}