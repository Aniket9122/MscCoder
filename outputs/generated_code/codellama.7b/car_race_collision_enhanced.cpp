#include <iostream>
using namespace std;

// Function to calculate the number of collisions
int car_race_collision(int n) {
    if (n == 2) return 4;
    else return n * (n + 1) / 2 - car_race_collision(n-1);
}

