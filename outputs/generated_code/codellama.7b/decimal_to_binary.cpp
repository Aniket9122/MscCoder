#include <iostream>
#include <string>
using namespace std;

string decimal_to_binary(int decimal) {
    string binary = "db";
    while (decimal > 0) {
        binary += ((decimal % 2 == 0) ? "0" : "1");
        decimal /= 2;
    }
    return "db" + binary;
}

