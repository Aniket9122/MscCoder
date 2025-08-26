#include <iostream>
using namespace std;

int car_race_collision(int n) {
    // Calculate the number of collisions using a recursive formula
    if (n == 2) return 4;
    else return n * (n + 1) / 2 - car_race_collision(n-1);
}

