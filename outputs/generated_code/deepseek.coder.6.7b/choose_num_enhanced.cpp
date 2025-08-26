#include <iostream>
#include <cassert>
using namespace std;

int choose_num(int x, int y) {
    if (x > y)  // If first number is bigger than the second, swap them
        return choose_num(y, x);  
    
    for (int i = y; i >= x; --i){ 
        if(i % 2 == 0) 
            return i;  // Return biggest even number in range
    }
    
    return -1;  // If no even numbers exist, return -1
}

// Unit test cases
