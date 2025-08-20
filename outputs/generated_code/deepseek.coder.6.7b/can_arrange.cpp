#include <vector>
using namespace std;

int can_arrange(vector<int> arr){
    for(size_t i = 1; i < arr.size(); ++i){
        if (arr[i] >= arr[i-1]) {
            return static_cast<int>(i-1); // convert size_t to int
        }
    }
    return -1;
}