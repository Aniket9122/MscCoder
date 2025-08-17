#include<iostream>
using namespace std;
int car_race_collision(int n){
    return n*n;   //each pair of vehicles collides so total pairs = n^2
}

#undef NDEBUG
#include<assert.h>
int main(){
    assert (car_race_collision(2) == 4);
    assert (car_race_collision(3) == 9);
    assert (car_race_collision(4) == 16);
    assert (car_race_collision(8) == 64);
    assert (car_race_collision(10) == 100);
    assert (car_race_collision(2) == 4);
    assert (car_race_collision(3) == 9);
    assert (car_race_collision(4) == 16);
    assert (car_race_collision(8) == 64);
    assert (car_race_collision(10) == 100);
    assert (car_race_collision(5) == 25);
    assert (car_race_collision(6) == 36);
    assert (car_race_collision(12) == 144);
    assert (car_race_collision(15) == 225);
    assert (car_race_collision(20) == 400);
    assert (car_race_collision(1) == 1);
    assert (car_race_collision(25) == 625);
    assert (car_race_collision(7) == 49);
    assert (car_race_collision(100) == 10000);
    assert (car_race_collision(500) == 250000);
    assert (car_race_collision(24) == 576);
    assert (car_race_collision(101) == 10201);
    assert (car_race_collision(14) == 196);
    assert (car_race_collision(99) == 9801);
    assert (car_race_collision(23) == 529);
    assert (car_race_collision(19) == 361);
    assert (car_race_collision(47) == 2209);
    assert (car_race_collision(48) == 2304);
    assert (car_race_collision(46) == 2116);
    assert (car_race_collision(26) == 676);
    assert (car_race_collision(499) == 249001);
    assert (car_race_collision(27) == 729);
    assert (car_race_collision(98) == 9604);
    assert (car_race_collision(28) == 784);
    assert (car_race_collision(18) == 324);
    assert (car_race_collision(45) == 2025);
    assert (car_race_collision(498) == 248004);
    assert (car_race_collision(13) == 169);
    assert (car_race_collision(102) == 10404);
    assert (car_race_collision(11) == 121);
    assert (car_race_collision(17) == 289);
    assert (car_race_collision(501) == 251001);
    assert (car_race_collision(68) == 4624);
    assert (car_race_collision(21) == 441);
    assert (car_race_collision(30) == 900);
    assert (car_race_collision(10000) == 100000000);
    assert (car_race_collision(1000) == 1000000);
    assert (car_race_collision(1002) == 1004004);
    assert (car_race_collision(97) == 9409);
    assert (car_race_collision(9999) == 99980001);
    assert (car_race_collision(22) == 484);
    assert (car_race_collision(29) == 841);
    assert (car_race_collision(10001) == 100020001);
    assert (car_race_collision(16) == 256);
    assert (car_race_collision(31) == 961);
    assert (car_race_collision(9998) == 99960004);
    assert (car_race_collision(89) == 7921);
    assert (car_race_collision(44) == 1936);
    assert (car_race_collision(9997) == 99940009);
    assert (car_race_collision(1003) == 1006009);
    assert (car_race_collision(83) == 6889);
    assert (car_race_collision(43) == 1849);
    assert (car_race_collision(84) == 7056);
    assert (car_race_collision(59) == 3481);
    assert (car_race_collision(58) == 3364);
    assert (car_race_collision(999) == 998001);
    assert (car_race_collision(998) == 996004);
    assert (car_race_collision(57) == 3249);
    assert (car_race_collision(997) == 994009);
    assert (car_race_collision(996) == 992016);
    assert (car_race_collision(56) == 3136);
    assert (car_race_collision(9) == 81);
    assert (car_race_collision(55) == 3025);
    assert (car_race_collision(92) == 8464);
    assert (car_race_collision(50) == 2500);
    assert (car_race_collision(42) == 1764);
    assert (car_race_collision(54) == 2916);
    assert (car_race_collision(53) == 2809);
    assert (car_race_collision(87) == 7569);
}
