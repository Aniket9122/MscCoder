#include<iostream>
using namespace std;

int car_race_collision(int n){
    // calculate square of number of cars (n^2) 
    return n*n;
}

// unit tests for the function 'car_race_collision'
void test(){
   cout<< "Testing...\n";
   assert(car_race_collision(2) == 4);
   assert(car_race_collision(3) == 9);
   assert(car_race_collision(4) == 16);
   
   cout<< "All test cases pass\n";
}

