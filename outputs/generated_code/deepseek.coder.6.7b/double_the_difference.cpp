#include <vector>
using namespace std;

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (int i=0; i<lst.size(); ++i) { 
        // Check if number is positive and odd
        if ((lst[i] > 0) && ((int)lst[i] % 2 == 1)) {  
            sum += lst[i] * lst[i]; // add square of the element to sum
        }
    }
    return sum;
}