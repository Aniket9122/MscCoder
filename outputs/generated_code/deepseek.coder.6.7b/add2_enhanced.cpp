#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

void runTests() {
    cout << "add(0, 1)  == " << (add(0, 1) == 1 ? "Pass" : "Fail") << endl;
    cout << "add(1, 0)  == " << (add(1, 0) == 1 ? "Pass" : "Fail") << endl;
    cout << "add(2, 3) == "  << (add(2, 3) == 5 ? "Pass" : "Fail") << endl;
}

