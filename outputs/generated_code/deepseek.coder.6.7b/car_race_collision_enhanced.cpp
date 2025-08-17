#include<iostream>
#include <cassert>
using namespace std;

int car_race_collision(int n){
    // calculate square of number of cars (n^2)
    return n*n;
}

// unit tests for the function 'car_race_collision'
void test(){
   cout<< "Testing...\n";
   for(int i=0;i<5;++i){
       assert(car_race_collision(i) == i*i);
   }
   
   cout<< "All test cases pass\n";
}

