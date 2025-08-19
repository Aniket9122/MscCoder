#include <iostream>
#include <cassert>
using namespace std;

int choose_num(int x, int y){
    if (x > y) { // If first number is bigger than the second, swap them
        int temp = x;
        x = y;
        y = temp;
    }

    for (int i = y; i >= x; --i){ 
        if(i % 2 == 0) return i; // Return biggest even number in range
    }
    
    return -1;  
}

// Unit test cases
