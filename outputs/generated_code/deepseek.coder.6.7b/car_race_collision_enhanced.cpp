#include <iostream>
using namespace std;

int car_race_collision(int n) {
    if (n < 0) { // Checking for negative values of 'n'
        cout << "Invalid input. The number of cars must be a non-negative integer." << endl; 
        return -1;  // Return error code for invalid input
    } else if(n == 0){ // Special handling for n=0 case as there are no cars, hence no collisions
        return 0;
    } else {
        return n * n;   // Number of collisions is equal to square of the number of cars 'n'.
    }
}