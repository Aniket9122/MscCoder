#include <vector>
using namespace std;

// Function that finds largest negative integer and smallest positive integer in a vector
vector<int> largest_smallest_integers(const vector<int>& lst) { 
    int neg = -1e6, pos = 1e6; // Initialize to large/small possible values
    for (auto i : lst){
        if (i < 0 && i > neg)  
            neg = i;      // If negative integer is found and larger than current largest 
        else if(i > 0 && i < pos)
            pos = i;       // If positive integer is found and smaller than current smallest 
    }                     
    return (neg != -1e6 || pos != 1e6)? vector<int>{neg, pos} : vector<int>{0,0};   // if any of the integers exist then return them else return [0,0]
}