#include <iostream>
#include <string>

using namespace std;

string int_to_mini_roman(int number) {
    string roman;
    while (number > 0) {
        if (number >= 1000) {
            roman += "m";
            number -= 1000;
        } else if (number >= 900) {
            roman += "cm";
            number -= 900;
        } else if (number >= 500) {
            roman += "d";
            number -= 500;
        } else if (number >= 400) {
            roman += "cd";
            number -= 400;
        } else if (number >= 100) {
            roman += "c";
            number -= 100;
        } else if (number >= 90) {
            roman += "xc";
            number -= 90;
        } else if (number >= 50) {
            roman += "l";
            number -= 50;
        } else if (number >= 40) {
            roman += "xl";
            number -= 40;
        } else if (number >= 10) {
            roman += "x";
            number -= 10;
        } else if (number >= 9) {
            roman += "ix";
            number -= 9;
        } else if (number >= 5) {
            roman += "v";
            number -= 5;
        } else if (number >= 4) {
            roman += "iv";
            number -= 4;
        } else {
            roman += "i";
            number -= 1;
        }
    }
    return roman;
}

