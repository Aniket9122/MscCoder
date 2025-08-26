#include<vector>
#include<algorithm>
using namespace std;

// Function to get all digits of number
int getDigit(int num, int i) {
    while (num && --i >= 0)
        num /= 10;
    return i < 0 ? num % 10 : -1;
}

vector<int> generate_integers(int a, int b) {
    
    vector<int> result;

    if (a > b) swap(a, b);
    for (int number = a; number <= b; ++number){
        int lastDigit = abs(getDigit(number, 0)); //Get the last digit of the current number
        
        /* We only want to keep even digits. If it's an odd digit or zero then continue */
        if (lastDigit == 0 || lastDigit % 2 != 0) 
            continue;
            
        result.push_back(number);
    }
    
    return result;
}