#include <vector>
using namespace std;

// Function to eat more carrots
vector<int> eat(int number, int need, int remaining) {
    // If there are not enough remaining carrots, then eat all of them
    if (need > remaining) {
        number += remaining;
        remaining = 0;
    } else {  // Else just eat what is needed and update the remaining count
        number += need;
        remaining -= need;
    }
    
    return vector<int>{number, remaining};
}