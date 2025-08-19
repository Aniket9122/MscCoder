#include <cmath> // for fmod
#include <iostream> // for cout and printf
#define EPSILON 1e-4
using namespace std;

double truncate_number(double number){
    return fmod(number, 1.0);
}

bool test() {
    if (abs(truncate_number(3.5) - 0.5) > EPSILON && abs(truncate_number(1.33) - 0.33) > EPSILON && abs(truncate_number(123.456) - 0.456) > EPSILON){
        cout << "Some test cases failed\n";
        return false;
    } else {
       printf("All test cases passed\n");
       return true;
    }
}
