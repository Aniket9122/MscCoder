#include <iostream>
#include <cassert>
using namespace std;

int sum_to_n(int n) {
    return (n * (n + 1)) / 2;
}

void testSumToN() {
   assert(sum_to_n(1) == 1);
   assert(sum_to_n(6) == 21);
   assert(sum_to_n(11) == 66);
   
   cout << "All tests pass" << endl;
}

