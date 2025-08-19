#include <bitset>
using namespace std;

string solve(int N) {
    int sum = 0;
    
    // calculate the sum of digits in decimal
    while (N > 0)  {
        sum += N % 10;
        N /= 10;
    }
    
    // convert to binary and return as string
    return bitset<32>(sum).to_string();
}