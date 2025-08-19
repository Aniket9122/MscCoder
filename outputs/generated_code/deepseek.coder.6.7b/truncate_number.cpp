#include<cmath> // for fmod
double truncate_number(double number){
    return fmod(number, 1.0);
}
