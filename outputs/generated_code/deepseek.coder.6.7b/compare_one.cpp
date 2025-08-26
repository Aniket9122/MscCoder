#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

template<typename T> 
T compare_one(T a, T b){
    return (a == b) ? static_cast<T>(NULL) : max(a,b); 
}